from django.shortcuts import render,reverse
from .forms import (UserRegisterForm,
                    StudentProfileForm,
                    SkillForm,
                    User_SkillForm)
from django.views.generic import (CreateView,
                    UpdateView,
                    ListView,
                    DeleteView)
from .models import (StudentProfile,
                     User,
                     User_Skill,
                     Skill)
from django.contrib.auth.mixins import LoginRequiredMixin
from django.contrib import messages
from django.forms import modelformset_factory
from django.urls import reverse_lazy

def home(request):
    
    return render(request,'myapp/home.html')

def register(request):
    if request.method=='POST':
        form = UserRegisterForm(request.POST)
        if form.is_valid():
            form.save()
            username=form.cleaned_data.get('username')
            messages.success(request,f'Account Created for {username}!')
            return redirect('login')
    else:
        form=UserRegisterForm()
    return render(request,'myapp/register_form.html',{'form':form})


class StudentProfileCreateView(CreateView):
    template_name = 'myapp/studentprofile_form.html'
    model = StudentProfile
    form_class = StudentProfileForm
    def get_initial(self):
        return {'user': self.request.user}

    def get_success_url(self):
        return reverse_lazy('profile-view')


class StudentProfileUpdate(UpdateView):
    model = StudentProfile
    form_class = StudentProfileForm
    template_name = 'myapp/studentprofile_form.html'


    def get_success_url(self):
        return reverse_lazy('profile-view')


class StudentProfileView(ListView):
    model = StudentProfile
    template_name = 'myapp/profile-view.html'
    context_object_name = 'articles'
    ordering = ['Student_Name']
    paginate_by = 2

    def get_context_data(self, *, object_list=None, **kwargs):
        context = super(StudentProfileView, self).get_context_data(**kwargs)
        context['user_skill'] = User_Skill.objects.filter(status=1)
        return context


class ProfileDeleteView(LoginRequiredMixin, DeleteView):
    model = StudentProfile
    template_name = 'myapp/profiledelete_view.html'
    form_class = StudentProfileForm
    success_message = 'Profile is deleted'
    def get(self, request, *args, **kwargs):
        return self.post(request)
    def get_success_url(self):
        return reverse_lazy('profile-view')

class User_SkillCreateView(CreateView):
    model = User_Skill
    form_class = User_SkillForm
    template_name = 'myapp/create_skill.html'

    def get_initial(self):
        return {'user': self.request.user}
    
    def get_success_url(self):
        return reverse('profile-view', )

class Add_SkillCreateView(CreateView):
    model = Skill
    form_class = SkillForm
    template_name = 'myapp/add_skills.html'

    def get_success_url(self):
        return reverse('home', )
