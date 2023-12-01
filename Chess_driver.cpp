/*
    Name: Ben Ashir Georges
    Professor: Christopher Mills
    Year: Fall 2023
    Assignment: Programming Assignment 1
    Due Date: 09/22/2023
*/

//Header files
#include "Chess.h"


    // The objects are declared outside the main so other functions can access them
    Bishop B(3,0);
    Rook R(4,0);
    Queen Q(5,0);
    Knight K(6,0);


int main(){

    // this varaible will be used to decide if a function will exit the loop
    int i=0;

    //is being used to see if a the num entered is valid
    bool valid_num= false;

    // will store x and  y values input by the user
    int x,y;
   
   // prints the intro I have written out
    intro();

    //prints the initial gameboard.
    gameboard();


    do{
        valid_num=false;

        //prompts user where they would like to put the knight
        cout<<"Where would you like to move the Knight?"<<endl;
        // goes through the loop
        while(valid_num==false)
        {
            cin>>x;
            cin>>y;
            if(x>9||x<-9)
            {
                cout<<"Invalid value please try again";
            }
            else if(y>9 || y<-9)
            {
                cout<<"Invalid value please try again";
            }
            else
            {
                K.Move(x,y);
                valid_num= true;
                gameboard();
            }
        }
            valid_num=false;
            cout<<"Where would you like to move the Rook?"<<endl;
            while(valid_num==false)
           {
            cin>>x;
            cin>>y;
            if(x>9||x<-9)
            {
                cout<<"Invalid value please try again";
            }
            else if(y>9 || y<-9)
            {
                cout<<"Invalid value please try again";
            }
            else
            {
                R.Move(x,y);
                valid_num= true;
                gameboard();
            }
           }
           valid_num=false;

            cout<<"Where would you like to move the Bishop?"<<endl;
            while(valid_num==false)
        {
            cin>>x;
            cin>>y;
            if(x>9||x<-9)
            {
                cout<<"Invalid value please try again";
            }
            else if(y>9 || y<-9)
            {
                cout<<"Invalid value please try again";
            }
            else
            {
                B.Move(x,y);
                valid_num= true;
                gameboard();
            }
        }
            valid_num=false;
            cout<<"Where would you like to move the Queen?"<<endl;
            while(valid_num==false)
        {
            cin>>x;
            cin>>y;
            if(x>9||x<-9)
            {
                cout<<"Invalid value please try again";
            }
            else if(y>9 || y<-9)
            {
                cout<<"Invalid value please try again";
            }
            else
            {
                Q.Move(x,y);
                valid_num= true;
                gameboard();
            }
        }
        cout<<"If you would like to stop playing type -1, if not type any random integer to keep going"<<endl;
        cin>>i;

    }while(i!=-1);

    cout<<"          Thanks for playing!!"<<endl;
    return 0;
}

/*
    Gameboard Function
    Purpose: It's supposed to print the 10x10 board that the player will see and 
    manuever the chess pieces around. It accomplishes this by using 
    nested iteration. 
*/
void gameboard()
{
    for(int i=0;i<10;i++)
    {
        for(int p=0;p<10;p++)
        {
            if(R.GetX()==p && 9-R.Gety()== i)
            {
                cout<<"R ";
            }
            else if(B.GetX()==p && 9-B.Gety()== i)
            {
                cout<<"B "; 
            }
            else if(Q.GetX()== p && 9-Q.Gety()== i)
            {
                cout<<"Q ";
            }
            else if(K.GetX()== p && 9-K.Gety()==i)
            {
                cout<<"K ";
            }
            else
            {
                cout<<"X ";
            }
    
        }
        cout<<endl;
    }
    cout<<endl;   
}

/*
    SpotIsTaken Function
    Purpose: Its purpose is to check if a spot is being taken by an existing piece
    it returns true if it is and returns false if it isnt
*/
bool SpotIsTaken(int x, int y)
{
  
    if(x== R.GetX() && y== R.Gety())
    {
        return true;
    }
    else if(x== B.GetX() && y== B.Gety())
    {
        return true;
    }
    else if(x== Q.GetX() && y== Q.Gety())
    {
        return true;
    }
    else if(x== K.GetX() && y==K.Gety())
    {
        return true;
    }
    else
    {
        return false;
    }
}