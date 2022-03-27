//Main.cpp 

#include<iostream>
using namespace std;
#include"dog.h"

int main()
{
    dog lexi;
    cout<<"Hi Lexi"<<endl<<"How are you?"<<endl;
    lexi.moodOfTheDog(11);
    lexi.reportMood();
    cout<<endl;
    cout<<"Lexi i have missed you a lot."<<endl<<"i wish you where here"<<endl;
    lexi.bark();

    return 0;
}
--------------------------------------------------------------------------------------------
//File dog.h

// In this file we define the class
class dog
{
    //Every variable, function, or every element of the classes, when they do not have 
    // an access modiefier, by default they are:private
    int mood; //It doent have an access modiefier, so by default it is private
    //From this point, everything is public
    public:
    void moodOfTheDog(int mood_1);
    void reportMood();
    void bark();
};
--------------------------------------------------------------------------------------------
// File dog.cpp


// Here we will have the body of the functions, which are declared inside the class
//We have the need, of using the header--#include<iostream> as well as the (using namespace std) and we will type down,the name of the file
// in which our class exists.
#include<iostream>
using namespace std;
#include"dog.h"
void dog::moodOfTheDog(int mood_1)
{
    mood=mood_1;
}
void dog::reportMood()
{
    if(mood>10)
    {
        cout<<"I am fine, i am in a very good mood";
    }
    else
    {
        cout<<"I am in a very bad mood";
    }
}
void dog::bark()
{
    cout<<"woof"<<endl;
    cout<<"woof"<<endl;
    cout<<"I am still here"<<endl<<"You just can't see me";
}