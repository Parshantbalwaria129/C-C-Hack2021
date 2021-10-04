from django import forms
from django.contrib.auth.models import User
from django.contrib.auth.forms import UserCreationForm
from myapp.models import StudentProfile,Skill,User_Skill
from datetime import date
from dateutil.relativedelta import relativedelta
import re


class UserRegisterForm(UserCreationForm):
    email=forms.EmailField()

    class Meta:
        model=User
        fields=['username','email','password1','password2']
        

class StudentProfileForm(forms.ModelForm):

    class Meta:
        model = StudentProfile
        fields = ['user','Student_Name','College_Name','Date_of_birth','Address','ID_proof','MobileNumber','email','image']
        widgets = {'Date_of_birth':forms.DateInput(attrs={'type':'date'}),
                   'Address': forms.TextInput(attrs={'cols':10,'rows':3}),
                   'Student_Name':forms.TextInput(attrs={'required':True,'pattern':'^([a-zA-Z]+\s)*[a-zA-Z]+$'}),
                   'MobileNumber':forms.NumberInput(),
                   'user':forms.HiddenInput(),
  
                   }

    def __init__(self, *args, **kwargs):
        from django.forms.widgets import HiddenInput
        hide_condition = kwargs.pop('hide_condition', None)
        super(StudentProfileForm, self).__init__(*args, **kwargs)
        if hide_condition:
            self.fields['user'].widget = HiddenInput()

    def clean(self):
        cleaned_data=super().clean()
        dob = cleaned_data.get('Date_of_birth',None)
        ID_proof = cleaned_data.get('ID_proof',None)
        MobileNumber = cleaned_data.get('MobileNUmber',None)
        Address=cleaned_data.get('Address',None)
        if dob and dob > date.today()+relativedelta(years=-18):
            self.add_error('Date_of_birth',"you should be at least 18 years old")
        if ID_proof and len(str(ID_proof))!=12:
            self.add_error('ID_proof','ID_proof must be of 12 digit')
        if MobileNumber and (len(str(MobileNumber))!=10 and str(MobileNumber).isdigit()==False):
            self.add_error('MobileNumber','Mobile Number is not of 10 digits')

        if Address and not re.findall('^[/.\/\w\s]*$',Address):
            self.add_error('Address','address must contain alphanumeric only ')


            
class SkillForm(forms.ModelForm):
    class Meta:
        model = Skill
        fields = ['skills']


class User_SkillForm(forms.ModelForm):
    class Meta:
        model = User_Skill
        fields = ['user','skills']
        widgets = {'skills': forms.Select(attrs={'class': 'select2'})}
