/*
    Name: Ben Ashir Georges
    Professor: Christopher Mills
    Year: Fall 2023
    Assignment: Programming Assignment 1
*/

// Header files
#include<iostream>
using namespace std;


class Knight{
    private:
    int x,y;

    public:
    Knight(int x, int y);
    void Move(int movex, int movey);
    int GetX();
    int Gety();
};

class Rook{
    private:
    int x,y;   

    public:
    Rook(int x, int y);
    void Move(int movex, int movey); 
    int GetX();
    int Gety();
};

class Bishop{
    private:
    int x,y;

    public:
    Bishop(int x, int y);
    void Move(int movex, int movey);
    int GetX();
    int Gety();
};

class Queen{
    private:
    int x,y;

    public: 
    Queen(int x, int y);
    void Move(int movex, int movey);
    int GetX();
    int Gety();
};

// prints the intro for the code
void intro();

// prints out the gameboard so the viewers can see the position
void gameboard();

// determines if the spot on a board is held by another piece
bool SpotIsTaken(int x, int y);