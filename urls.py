from django.urls import path
from . import views
from django.conf import settings
from django.conf.urls.static import static


urlpatterns = [  
    path('', views.home,name='home'),
    path('register/',views.register,name='register'),
    path('profileform/',views.StudentProfileCreateView.as_view(),name='studentprofile'),
    path('updateprofile/<int:pk>',views.StudentProfileUpdate.as_view(),name='update-studentprofile'),
    path('deleteprofile/<int:pk>',views.ProfileDeleteView.as_view(),name='delete-studentprofile'),
    path('profileview/',views.StudentProfileView.as_view(),name='profile-view'),
    path('create_skill/',views.User_SkillCreateView.as_view(),name='create_skill'),
    path('add_skill/',views.Add_SkillCreateView.as_view(),name='add_skill'),
]

if settings.DEBUG:
    urlpatterns += static(settings.MEDIA_URL, document_root=settings.MEDIA_ROOT)
