
#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void SubjectsAndChapters();
void ChapterDetails();
void SemesterAndDepartment();
int totalVideosWatched();
int AttemptedAndPassedQuizes();
int main()
{   string email, password,level;
    cout<<"****************************************************************************"<<endl;
    cout<<"*      WELCOME TO ACDEMIX | WHERE STUDENTS AROUND THE GLOBE  AMPLIFY HOPE  *"<<endl;
    cout<<"****************************************************************************"<<endl;
    cout<<"                                                                            "<<endl;
    cout<<"Enter username or email: "<<endl;
    cin>>email;
    cout<<"Enter Password: "<<endl;
    cin>>password;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"Are you at Board or University Level ?"<<endl;
    cin>>level;

    
    // cout<<" ______________________________________ "<<endl;
    // cout<<"|";
    // cin>>password;gotoxy(0,5);
    // cout<<"|";
    // cout<<"______________________________________"<<endl;
    // gotoxy(2,0);
    // cin>>password;

                             //Declaring Grade
    if (level == "Board")
    {
    int grade;
    cout<<"Enter your grade from one of the following: "<<endl;;
    cout<<"Grade 9  "<<endl;
    cout<<"Grade 10 "<<endl;
    cout<<"Grade 11"<<endl;
    cout<<"Grade 12"<<endl;
    cin>> grade;
    cout<<"--------------------------------------------------"<<endl;
                 //wanted to select chapter instead of entering.Do let me know,how can I do it?
    if (grade==9 || 10|| 11||12)
    {
        SubjectsAndChapters();
    }
    string subject;
    int chapter;
    cout<<"--------------------------------------------------"<<endl;
    cout<<"Subject:";
    cin>>subject;
    cout<<"Chapter:";
    cin>>chapter;
    cout<<"--------------------------------------------------"<<endl;
    if (subject == "English" || "Physics" || "Mathematics" || "Chemistry" && chapter==1||2 ||3||4||5 )
    {
      ChapterDetails();
    }
    }
    
   if (level=="University")
   {    string department;
        string semester;
        cout<<"--------------------------------------------------"<<endl;
        cout<<"Enter your Department and Semester: "<<endl;
        cout<<"Department:";
        cin>>department;
        cout<<"Semester No:";
        cin>>semester;
        cout<<"--------------------------------------------------"<<endl;
        if ((department=="ComputerScience" ||"ElectricalEngineering" || "SoftwareEngineering" ||"CivilEngineering") &&  (semester =="1st" ||semester=="2nd"||semester=="3rd"||semester=="4th"||semester=="5th"||semester=="6th"||semester=="7th"||semester=="8th"))
    
        {
             SemesterAndDepartment();
            

        }
     

   }
    int  X=totalVideosWatched();
    int Y =AttemptedAndPassedQuizes();
    int total_rewards=X+Y;
    cout<<"Your Total Rewards uptill now are: "<<total_rewards;
    return 0;
    }


void SubjectsAndChapters()
{
   cout<<"Kindly enter subjects and particular chapters you want to study: "<<endl;
   cout<<"Subjects   \t\t Chapters"<<endl;
   cout<<"-----------\t\t----------"<<endl;
   cout<<"English    \t\t 1,2,3,4,5"<<endl;
   cout<<"Physics    \t\t 1,2,3,4,5"<<endl;
   cout<<"Chemistry  \t\t 1,2,3,4,5"<<endl;
   cout<<"Mathematics\t\t 1,2,3,4,5"<<endl;
}
void ChapterDetails()
{
    cout<<"Proceed for Video Lectures --> "<<endl;
    cout<<"Proceed for Quizzes --> "<<endl;
    cout<<"Proceed for Mentor Guidance -->"<<endl;
    cout<<"Proceed for General Queries Discussion -->"<<endl;
}
void SemesterAndDepartment()
{
    cout<<"Proceed for Reference Books -->"<<endl;
    cout<<"Proceed to Watch Videos -->"<<endl;
    cout<<"Proceed for Quizzes -->"<<endl;
    cout<<"Proceed for Research Articles-->"<<endl;
    cout<<"Proceed for Mentor Guidance -->"<<endl;
    cout<<"Proceed for Workshops -->"<<endl;

}      //how can we show directly that student has watches this amount of videos?
int totalVideosWatched()
{ int videos;
cout<<"Watched videos :";
cin>>videos;
cout<<"The student has watched "<<videos<<" videos and has earned " <<videos*10<<" rewards from it "<<endl;
return (videos*10);
}
int AttemptedAndPassedQuizes()
{    int total_score=0;
     while(true){
     int score_of_quiz;
    
    cout<<"Score earned in quiz:"<<endl;
    cin>>score_of_quiz;  
   if (score_of_quiz>50)
   {
    cout<<"You Pass!"<<endl;
   }
   if (score_of_quiz<50)
   {
    cout<<"You Fail,But don't loose Hope.Try Again!"<<endl;
   }
   total_score=total_score+score_of_quiz;
   string continuity;
  
   cout<<"Do you want to continue giving quiz? Type Yes or No "<<endl;
   cin>>continuity;
   if (continuity == "No")
   {
    break;
   }
     }
   
   
   
   cout<<"Total Quiz Score (including all subjects) :"<<total_score<<endl;;
  return total_score;

}


// void gotoxy(int x, int y) {
//     COORD coord;
//     coord.X = x;
//     coord.Y = y;
//     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
// }
// void  printBox()
//       {
//     cout<<" ______________________________________ "<<endl;
//     cout<<"|                                      |"<<endl;
//     cout<<"|                                      |"<<endl;
//     cout<<"|______________________________________|"<<endl;
//       }
