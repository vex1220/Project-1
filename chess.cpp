/*
    Name: Ben Ashir Georges
    Professor: Christopher Mills
    Year: Fall 2023
    Assignment: Programming Assignment 1
    Due Date: 09/22/2023
*/

// header files
#include"Chess.h"

// returns the x value for the knight class
int Knight::GetX()
{
    return x;
}

//returns the y value for the knight class
int Knight::Gety()
{
    return y;
}

// returns the x value for the queen class
int Queen::GetX()
{
    return x;
}

//returns the y value for the queen class
int Queen::Gety()
{
    return y;
}

//returns the x value for the rook class
int Rook::GetX()
{
    return x;
}

//returns the y value for the rook class
int Rook::Gety()
{
    return y;
}

//returns the x value for the bishop class
int Bishop::GetX()
{
    return x;
}

//returns the y value for the bishop class
int Bishop::Gety()
{
    return y;
}


/*  
    Move function for the knight class 
    doesnt return anything
*/
void Knight::Move(int movex, int movey) 
{
        // runs the spot is taken function to make sure that a spot isn't being held by another piece.
        bool spot= SpotIsTaken(movex, movey);
        if(spot== true)
        {
            cout<<"Invalid spot"<<endl;
            cout<<"That spot is being held by another piece."<<endl;
        }
        else if(movex-x > 2 && movex-x <-2)
        {
            cout<<"Invalid move."<<endl;
            cout<<"Knights may move one space up or down followed by two spaces left or right. XX"<<endl;
        }
        else if(movey-y> 1 && movey-y <-1)
        {
            cout<<"Invalid move."<<endl;
            cout<<"Knights may move one space up or down followed by two spaces left or right. YY"<<endl;
        }
        else
        {
             x=movex;
             y=movey;
        }

}

/*
    Move Function for the queen class
    Purpose: It takes in 2 parameters and uses the SpotisTaken function to make sure it works
    then it proceeds to move the queen to its spot
*/
void Queen::Move(int movex, int movey) 
{
    bool spot = SpotIsTaken(movex, movey);
    if(spot== true)
    {
        cout<<"Invalid spot"<<endl;
        cout<<"That spot is being held by another piece."<<endl;
    }
    else
    {
        x=movex;
        y=movey;
    }
    
}

/*
    Move function for the Rook class
    Purpose: It takes in 2 parameters and uses the spotistaken function to make sure it works
    then it proceeds to use its function protocal to move the rook to its accurate place
*/
void Rook::Move(int movex, int movey) 
{
     bool spot = SpotIsTaken(movex, movey);
    if(spot== true)
    {
        cout<<"Invalid spot."<<endl;
        cout<<"That spot is being held by another piece."<<endl;
    }
   
    else if(movex >0 && movey==0)
    {
        x=movex;
    }
    else if(movey>0 && movex==0)
    {
        y=movey;
    }
    else
    {
        cout<<"Invalid move."<<endl;
        cout<<"Rooks may move an arbitrary number of spaces up, down, left, or right. "<<endl;
    }
    
}

/*
    Move function for the bishop class
    It does all the necessary steps to move the bishop
    piece where it needs to go as well as 
    checks to make sure the spot isnt taken.
*/
void Bishop::Move(int movex, int movey) 
{
        bool spot = SpotIsTaken(movex, movey);
    if(spot== true)
    {
        cout<<"Invalid spot"<<endl;
        cout<<"That spot is being held by another piece."<<endl;
    }
    else if(movey-y==-1*(movex-x) || movey-y==movex-x)
    {
        x=movex;
        y=movey;
    }
    else
    {
        cout<<"Invalid move"<<endl;
        cout<<"Bishops may move an arbitrary number of spaces at a diagonal."<<endl;
    }
    
}


// Intro function to print all the rules and stuff
void intro()
{
    cout<<endl;
    cout<<"                    Welcome to my Chess Game!"<<endl;
    cout<<"--------------------------------------------------------------------------"<<endl;
    cout<<"Q Represents the Queen, B Represents the bishop, R Represents the Rook, and K represents the Knight "<<endl<<endl;
    
    cout<<"Rules:"<<endl;
    cout<<"You will be prompted to enter values for how you would like to move your pieces"<<endl;
    cout<<"You will enter those values in (x,y) format"<<endl;
    cout<<"You are not allowed to make moves outside the area if done you will be prompted to input a new value"<<endl;
    cout<<"If you attempt to make a move that a piece cannot do you will lose the ability to make a move with that piece and will be moved to the next piece in turn."<<endl;
    cout<<"The move rules for each type of piece are as follows:"<<endl;
    cout<<"Knights may move one space up or down followed by two spaces left or right."<<endl;
    cout<<"Rooks may move an arbitrary number of spaces up, down, left, or right."<<endl;
    cout<<"Bishops may move an arbitrary number of spaces at a diagonal."<<endl;
    cout<<"Queens may move an arbitrary number of spaces in an arbitrary direction. As long as the move does not result in the Queen occupying the same position as another piece or the Queen leaving the 10x10 square, there are no invalid moves a Queen can make."<<endl<<endl;
    cout<<"Lastly have fun"<<endl<<endl;
    

}

Knight::Knight(int x, int y)
{
    this->x= x;
    this->y=y;
}

Bishop::Bishop(int x, int y)
{
    this->x= x;
    this->y=y;
}

Rook::Rook(int x, int y)
{
    this->x= x;
    this->y=y;
}

Queen::Queen(int x, int y)
{
    this->x= x;
    this->y=y;
}

