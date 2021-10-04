from django.db import models
from django.utils import timezone
from django.contrib.auth.models import User




class Skill(models.Model):
    skills = models.CharField(max_length=50,null=True)
    status=models.IntegerField(default=1)
    created_date = models.DateField(auto_now_add=True)
    update_date = models.DateField(auto_now=True)
    def __str__(self):
        return self.skills

class User_Skill(models.Model):
    user = models.ForeignKey(User,on_delete=models.CASCADE)
    skills = models.ForeignKey(Skill,on_delete=models.SET_NULL,null=True)
    status = models.IntegerField(default=1)
    created_date = models.DateField(auto_now_add=True)
    update_date = models.DateField(auto_now=True)


class StudentProfile(models.Model):
    user = models.OneToOneField(User,on_delete=models.CASCADE,unique=True)
    Student_Name = models.CharField(max_length=120)
    College_Name = models.CharField(max_length=120)
    Date_of_birth = models.DateField(max_length=8)
    Address = models.TextField()
    ID_proof = models.IntegerField()
    MobileNumber = models.BigIntegerField()
    email = models.CharField(max_length=120)
    image = models.FileField(upload_to='profile_pic',null=True, blank=True)
    status = models.IntegerField(default=1)
    created_date = models.DateField(auto_now_add=True)
    update = models.DateField(auto_now=True)
    def __str__(self):
        return self.Student_Name

