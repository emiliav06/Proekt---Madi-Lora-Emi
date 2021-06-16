#include<iostream>
#include<cmath>
#include <Windows.h>
#include <stdlib.h>

using namespace std;

int main()
{
system ("COLOR F5");

char quiz;
char play;
cout << "Do you want to play a quiz? (a.yes or b.no)" <<endl;
cin >> play;

while ( play =='a' )
{
system ("CLS");

cout<<"Choose which quiz you want to play:"<<endl;
Sleep(300);
cout<<"a. Harry Potter quiz"<<endl;
Sleep(300);
cout<<"b. Titanic quiz"<<endl;
Sleep(300);
cout<<"c. Percy Jackson quiz"<<endl;
cin>>quiz;
system ("CLS");


if (quiz == 'a')
{
cout << "Harry Potter quiz: Which Harry Potter character are you?" << endl <<endl;
Sleep(300);

int choice;
int points1 = 0;

cout<<"Which pet will you bring with you in Hogwarts?"<<endl;
Sleep(300);
cout<<"1) toad or rat"<<endl;
Sleep(300);
cout<<"2) pygmy puff"<<endl;
Sleep(300);
cout<<"3) cat"<<endl;
Sleep(300);
cout<<"4) owl"<<endl;

cin>>choice;
cout<<endl<<endl;
if (choice == 1) {points1 = points1 + 20;}
if (choice == 2) {points1 = points1 + 30;}
if (choice == 3) {points1 = points1 + 40;}
if (choice == 4) {points1 = points1 + 50;}




cout<<"How would your friends describe you?"<<endl;
Sleep(300);
cout<<"1) eccentric"<<endl;
Sleep(300);
cout<<"2) funny and sarcastic"<<endl;
Sleep(300);
cout<<"3) self confident"<<endl;
Sleep(300);
cout<<"4) smart and talanted"<<endl;
Sleep(300);
cout<<"5) leader"<<endl;

cin>>choice;
cout<<endl<<endl;
if (choice == 1) {points1 = points1 + 10;}
if (choice == 2) {points1 = points1 + 20;}
if (choice == 3) {points1 = points1 + 30;}
if (choice == 4) {points1 = points1 + 40;}
if (choice == 5) {points1 = points1 + 50;}



cout<<"Who is your favourite professor?"<<endl;
Sleep(300);
cout<<"1) Minerva McGonagall"<<endl;
Sleep(300);
cout<<"2) Horace Slughorn"<<endl;
Sleep(300);
cout<<"3) Severus Snape"<<endl;
Sleep(300);
cout<<"4) Remus Lupin"<<endl;
Sleep(300);
cout<<"5) Albus Dumbledore"<<endl;

cin>>choice;
cout<<endl<<endl;
if (choice == 1) {points1 = points1 + 10;}
if (choice == 2) {points1 = points1 + 20;}
if (choice == 3) {points1 = points1 + 30;}
if (choice == 4) {points1 = points1 + 40;}
if (choice == 5) {points1 = points1 + 50;}



cout<<"What is your favourite subject?"<<endl;
Sleep(300);
cout<<"1) Charms"<<endl;
Sleep(300);
cout<<"2) Astronomy"<<endl;
Sleep(300);
cout<<"3) Potions"<<endl;
Sleep(300);
cout<<"4) Transfiguration"<<endl;
Sleep(300);
cout<<"5) Defence Against the Dark Arts"<<endl;

cin>>choice;
cout<<endl<<endl;
if (choice == 1) {points1 = points1 + 10;}
if (choice == 2) {points1 = points1 + 20;}
if (choice == 3) {points1 = points1 + 30;}
if (choice == 4) {points1 = points1 + 40;}
if (choice == 5) {points1 = points1 + 50;}



cout<<"Who will you choose? Someone who is:"<<endl;
Sleep(300);
cout<<"1) unique"<<endl;
Sleep(300);
cout<<"2) just like you"<<endl;
Sleep(300);
cout<<"3) smart"<<endl;
Sleep(300);
cout<<"4) funny"<<endl;
Sleep(300);
cout<<"5) brave"<<endl;

cin>>choice;
cout<<endl<<endl;
if (choice == 1) {points1 = points1 + 10;}
if (choice == 2) {points1 = points1 + 20;}
if (choice == 3) {points1 = points1 + 30;}
if (choice == 4) {points1 = points1 + 40;}
if (choice == 5) {points1 = points1 + 50;}



cout<<"What is your favourite Harry Potter food?"<<endl;
Sleep(300);
cout<<"1) Hagrid's Rock Cakes"<<endl;
Sleep(300);
cout<<"2) Bertie Bott's Every Flavor Beans"<<endl;
Sleep(300);
cout<<"3) Chocolate Frogs"<<endl;
Sleep(300);
cout<<"4) Lupin's Chocolate"<<endl;
Sleep(300);
cout<<"5) Harry's Birthday Cake From Hagrid"<<endl;

cin>>choice;
cout<<endl<<endl;
if (choice == 1) {points1 = points1 + 10;}
if (choice == 2) {points1 = points1 + 20;}
if (choice == 3) {points1 = points1 + 30;}
if (choice == 4) {points1 = points1 + 40;}
if (choice == 5) {points1 = points1 + 50;}

//cout<<points1;
if (points1<=90){cout<<"You are Luna Lovegood! You are kind, honest and a free spirit!";}
if (points1>90 && points1<= 120){cout<<"You are Neville Longbottom! You are nice, innocent and kind!"; }
if (points1>120 && points1<=170){cout<<"You are Ron Weasley! You are funny, kind and protective!"; }
if (points1>170 && points1<= 210){cout<<"You are Ginny Weasley! You are pretty, popular, funny and charming!"; }
if (points1>210 && points1<=250){cout<<"You are Hermione Granger! You are brave, bright and intelligent!"; }
if (points1>250 && points1<=300){cout<<"You are Harry Potter! You are brave, a quick thinker and a natural leader!"; }
}



if(quiz == 'b')
{
    cout<<"Titanic quiz: How well do you know Titanic?"<<endl<<endl;
    Sleep(1000);
    cout<<"How long did it take to build Titanic?"<<endl;
    cout<<"Enter a number between 1 and 4"<<endl;
    cout<<"1) four years"<<endl;
    Sleep(300);
    cout<<"2) three years"<<endl;
    Sleep(300);
    cout<<"3) one year"<<endl ;
    Sleep(300);
    cout<<"4) two years"<<endl;
    int points2=0;
    int choice;
    cin>>choice;
    if (choice==2)
    {
        cout<<"Correct!"<<endl<<endl;
        points2=points2+10;
    }
    else cout<<"The correct answer is three years."<<endl<<endl;
    cout<<endl;

    cout<<"Which of the following was not on the ship?"<<endl;
    cout<<"Enter a number between 1 and 4"<<endl;
    cout<<"1) basketball court"<<endl;
    Sleep(300);
    cout<<"2) swimming pool"<<endl;
    Sleep(300);
    cout<<"3) squash court"<<endl ;
    Sleep(300);
    cout<<"4) operating room"<<endl;
    cin>>choice;
    if (choice==1)
    {
        cout<<"Correct!"<<endl<<endl;
        points2=points2+10;
    }
    else cout<<"The correct answer is basketball court"<<endl<<endl;
    cout<<endl;

    cout<<"How many bathtubs were available for third-class passengers?"<<endl;
    cout<<"Enter a number between 1 and 4"<<endl;
    cout<<"1) ten"<<endl;
    Sleep(300);
    cout<<"2) two"<<endl;
    Sleep(300);
    cout<<"3) fifteen"<<endl ;
    Sleep(300);
    cout<<"4) zero"<<endl;
    cin>>choice;
    if (choice==2)
    {
        cout<<"Correct!"<<endl<<endl;
        points2=points2+10;
    }
    else cout<<"The correct answer is two bathtubs"<<endl<<endl;
    cout<<endl;

    cout<<"How many life boats did the Titanic have?"<<endl;
    cout<<"Enter a number between 1 and 4"<<endl;
    cout<<"1) fourteen"<<endl;
    Sleep(300);
    cout<<"2) twenty-four"<<endl;
    Sleep(300);
    cout<<"3) twenty-seven"<<endl ;
    Sleep(300);
    cout<<"4) twenty"<<endl;
    cin>>choice;
    if (choice==4)
    {
        cout<<"Correct!"<<endl<<endl;
        points2=points2+10;
    }
    else cout<<"The correct answer is twenty life boats"<<endl<<endl;
    cout<<endl;

    cout<<"After the Titanic broke in two,how long did take for the bow to reach the bottom of the Atlantic Ocean?"<<endl;
    cout<<"Enter a number between 1 and 4"<<endl;
    cout<<"1) 6 minutes"<<endl;
    Sleep(300);
    cout<<"2) 1 minute"<<endl;
    Sleep(300);
    cout<<"3) 3 minutes"<<endl ;
    Sleep(300);
    cout<<"4) thirty seconds"<<endl;
    cin>>choice;
    if (choice==1)
    {
        cout<<"Correct!"<<endl<<endl;
        points2=points2+10;
    }
    else cout<<"The correct answer is six minutes"<<endl<<endl;
    cout<<endl;

    cout<<"What was the first boat to reach the scene of the Titanic's sinking?"<<endl;
    cout<<"Enter a number between 1 and 4"<<endl;
    cout<<"1) Olympic"<<endl;
    Sleep(300);
    cout<<"2) Frankfurt"<<endl;
    Sleep(300);
    cout<<"3) Carpathia"<<endl ;
    Sleep(300);
    cout<<"4) Californian"<<endl;

    cin>>choice;
    if (choice==3)
    {
        cout<<"Correct!"<<endl<<endl;
        points2=points2+10;
    }
    else cout<<"The correct answer is Carpathia"<<endl<<endl;
    cout<<endl;

    cout<<"When was the wreck of the Titanic discovered?"<<endl;
    cout<<"Enter a number between 1 and 4"<<endl;
    cout<<"1) 1920"<<endl;
    Sleep(300);
    cout<<"2) 1991"<<endl;
    Sleep(300);
    cout<<"3) 1980"<<endl ;
    Sleep(300);
    cout<<"4) 1985"<<endl;

    cin>>choice;
    if (choice==4)
    {
        cout<<"Correct!"<<endl<<endl;
        points2=points2+10;
    }
    else cout<<"The correct answer is 1985"<<endl<<endl;
    cout<<endl;

cout<<"Your points are:"<<" "<<points2<<endl;
    if (points2<=20) {cout<<"You did well but you may learn some more about the Titanic."<<endl;}
    if (20<points2 && points2<=45) {cout<<"Good job!You know a lot about the fascinating story of Titanic!"<<endl;}
    if (45<points2 && points2<=70) {cout<<"Excellent job!You are a real fan of Titanic,continue learning about it's secrets!"<<endl;}

}



if(quiz == 'c')
{

 cout<<"Percy Jackson quiz: Which Percy Jackson and the Olympians character are you?"<<endl;
 cout<<"Please, answer with 1, 2 or 3."<<endl<<endl;
 Sleep(300);

 int choice;
 int percy = 0;
 int annabeth = 0;
 int grover = 0;

 cout<<"First question: What is your favourite colour?"<<endl;
 cout<<"1) Blue "<<endl;
 Sleep(300);
 cout<<"2) Red"<<endl;
 Sleep(300);
 cout<<"3) Green"<<endl;
 Sleep(300);

 cin>>choice;
 cout<<endl<<endl;
 if (choice == 1) {
 percy = percy + 1;
 } else if (choice == 2) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }


 cout<<"Second question: What is your favourite food?"<<endl;
 cout<<"1) Cookies "<<endl;
 Sleep(300);
 cout<<"2) Burgers"<<endl;
 Sleep(300);
 cout<<"3) Enchiladas"<<endl;
 Sleep(300);

 cin>>choice;
 cout<<endl<<endl;
 if (choice == 1) {
 percy = percy + 1;
 } else if (choice == 2) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }


 cout<<"Third question: Which word describes you best?"<<endl;
 cout<<"1) Loyal "<<endl;
 Sleep(300);
 cout<<"2) Smart"<<endl;
 Sleep(300);
 cout<<"3) Friendly"<<endl;
 Sleep(300);

 cin>>choice;
 cout<<endl<<endl;
 if (choice == 1) {
 percy = percy + 1;
 } else if (choice == 2) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }


 cout<<"Forth question: What is your favourite music?"<<endl;
 cout<<"1) Rock "<<endl;
 Sleep(300);
 cout<<"2) Classical"<<endl;
 Sleep(300);
 cout<<"3) Inspirational, instrumental pieces"<<endl;
 Sleep(300);

 cin>>choice;
 cout<<endl<<endl;
 if (choice == 1) {
 percy = percy + 1;
 } else if (choice == 2) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }


 cout<<"Fifth question: What power would you choose?"<<endl;
 cout<<"1) Controling water  "<<endl;
 Sleep(300);
 cout<<"2) Making good life decisions   "<<endl;
 Sleep(300);
 cout<<"3) Being brave and a great protector "<< endl;
 Sleep(300);

 cin>>choice;
 cout<<endl<<endl;
 if (choice == 1) {
 percy = percy + 1;
 } else if (choice == 2) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }


 cout<<"Sixth question: What is your favourite animal?"<<endl;
 cout<<"1) Horse  "<<endl;
 Sleep(300);
 cout<<"2) Owl "<<endl;
 Sleep(300);
 cout<<"3) I love all animals "<<endl;
 Sleep(300);

 cin>>choice;
 cout<<endl<<endl;
 if (choice == 1) {
 percy = percy + 1;
 } else if (choice == 2) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }


 cout<<"Seventh question: Which weapon would you choose?"<<endl;
 cout<<"1) Sword  "<<endl;
 Sleep(300);
 cout<<"2) Dagger "<<endl;
 Sleep(300);
 cout<<"3) Reed pipes "<<endl<<endl;
 Sleep(300);

 cin>>choice;
 cout<<endl<<endl;
 if (choice == 1) {
 percy = percy + 1;
 } else if (choice == 2) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }

 cout<<"Eight question: Which one do you prefer?"<<endl;
 cout<<"1) Seaside  "<<endl;
 Sleep(300);
 cout<<"2) City "<<endl;
 Sleep(300);
 cout<<"3) Mountain "<<endl<<endl;
 Sleep(300);


 cin>>choice;
 if (choice == 1) {
 percy = percy + 1;
 } else if (choice == 2) {
 annabeth = annabeth + 1;
 } else {
 grover = grover + 1;
 }

 if (percy > annabeth && percy > grover ) {
    cout<<"Your character's like Percy's! Thanks for playing!";
 } else if (annabeth > percy && annabeth > grover) {
    cout<<"Your character's like Annabeth's! Thanks for playing!";
 } else {
    cout<<"Your character's like Grover's! Thanks for playing!";}

}

Sleep (1000);
cout << endl << endl << "Do you want to play another quiz? (a.yes b.no)"<< endl;
cin >> play;
}

     return 0;
}

