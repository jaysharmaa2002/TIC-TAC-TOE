#include<iostream>
#include<string>
#include<cmath>
#include<ctime>
#include<iomanip>
#include<cstdlib>
#include<stdexcept>
#include<vector>
#include<sstream>
#include<iterator>
#include<bits/stdc++.h>
using namespace std;


void player1();
void player2();
void check();
void msg();



int choice1;
int choice2;
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
string p1="111";
string p2="222";
int x=stoi(p1);
int y=stoi(p2);
int flag=0;


int main(int argc, char const *argv[])
{
    system("CLS");
    cout<<"\t\tWELCOME TO PIRATIC GAMERS....\n\n";
    cout<<"\tTHE GAME WILL BE PLAYED BETWEEN TWO PLAYERS ONLY.\n\n";
    cout<<"\tTHE GAME WILL GIVE TURN CHANCE TO BOTH THE PLAYERS TO ENTER THE POSITION.\n\n";
    system("pause");
    system("CLS");
    cout<<"\n\n";
    cout<<"\tPLAYER 1 HAVE '111'";
    cout<<"\n\n";
    cout<<"\tPLAYER 2 HAVE '222'";
    cout<<"\n\n\n";
    cout<<"\t\t\t!...........ALL THE BEST TO BOTH THE PLAYERS..........!\n\n";
    system("pause");
    system("CLS");
    cout<<"\n\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"\n\n";
    
    player1();
    check();
    player2();
    check();

    player1();
    check();
    player2();
    check();

    player1();
    check();
    player2();
    check();

    player1();
    check();
    player2();
    check();

    player1();
    check();
    msg();
    return 0;
}

void player1()
{
    cout<<"\n\n";
    cout<<"PLAYER 1-- PLEASE ENTER THE POSITION: ";
    cin>>choice1;
    if(choice1<1 && choice1>9)
    {
        system("CLS");
        cout<<"\nINVALID POSITION...!\n";
    }
    else
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(arr[i][j]==choice1)
                {
                    arr[i][j]=x;
                }
            }
        }
        cout<<"\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<arr[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
}


void player2()
{
    cout<<"\n\n";
    cout<<"PLAYER 2-- PLEASE ENTER THE POSITION: ";
    cin>>choice2;
     if(choice2<1 && choice2>9)
    {
        system("CLS");
        cout<<"\nINVALID POSITION...!\n";
    }
    else
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(arr[i][j]==choice2)
                {
                    arr[i][j]=y;
                }
            }
        }
        cout<<"\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<arr[i][j]<<"\t";
            }
            cout<<endl;
        }
    }
}


void check()
{
    cout<<"\n";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[0][0]==x && arr[0][1]==x && arr[0][2]==x)
            {
                cout<<"PLAYER 1 HAS WON THE MATCH...\n\n";
                flag=1;
                exit(0);
            }
            if(arr[1][0]==x && arr[1][1]==x && arr[1][2]==x)
            {
                cout<<"PLAYER 1 HAS WON THE MATCH...\n\n";
                flag=1;
                exit(0);
            }
            if(arr[2][0]==x && arr[2][1]==x && arr[2][2]==x)
            {
                cout<<"PLAYER 1 HAS WON THE MATCH...\n\n";
                flag=1;
                exit(0);
            }





            if(arr[0][0]==x && arr[1][0]==x && arr[2][0]==x)
            {
                cout<<"PLAYER 1 HAS WON THE MATCH...\n\n";
                flag=1;
                exit(0);
            }
            if(arr[0][1]==x && arr[1][1]==x && arr[2][1]==x)
            {
                cout<<"PLAYER 1 HAS WON THE MATCH...\n\n";
                flag=1;
                exit(0);
            }
            if(arr[0][2]==x && arr[1][2]==x && arr[2][2]==x)
            {
                cout<<"PLAYER 1 HAS WON THE MATCH...\n\n";
                flag=1;
                exit(0);
            }





            if(arr[0][0]==x && arr[1][1]==x && arr[2][2]==x)
            {
                cout<<"PLAYER 1 HAS WON THE MATCH...\n\n";
                flag=1;
                exit(0);
            }
            if(arr[0][2]==x && arr[1][1]==x && arr[2][0]==x)
            {
                cout<<"PLAYER 1 HAS WON THE MATCH...\n\n";
                flag=1;
                exit(0);
            }




            //--------------------------------------------------------------------------------

            if(arr[0][0]==y && arr[0][1]==y && arr[0][2]==y)
            {
                cout<<"PLAYER 2 HAS WON THE MATCH...\n\n";
                flag=1;
                exit(0);
            }
            if(arr[1][0]==y && arr[1][1]==y && arr[1][2]==y)
            {
                cout<<"PLAYER 2 HAS WON THE MATCH...\n\n";
                flag=1;
                exit(0);
            }
            if(arr[2][0]==y && arr[2][1]==y && arr[2][2]==y)
            {
                cout<<"PLAYER 2 HAS WON THE MATCH...\n\n";
                flag=1;
                exit(0);
            }





            if(arr[0][0]==y && arr[1][0]==y && arr[2][0]==y)
            {
                cout<<"PLAYER 2 HAS WON THE MATCH...\n\n";
                flag=1;
                exit(0);
            }
            if(arr[0][1]==y && arr[1][1]==y && arr[2][1]==y)
            {
                cout<<"PLAYER 2 HAS WON THE MATCH...\n\n";
                flag=1;
                exit(0);
            }
            if(arr[0][2]==y && arr[1][2]==y && arr[2][2]==y)
            {
                cout<<"PLAYER 2 HAS WON THE MATCH...\n\n";
                flag=1;
                exit(0);
            }





            if(arr[0][0]==y && arr[1][1]==y && arr[2][2]==y)
            {
                cout<<"PLAYER 2 HAS WON THE MATCH...\n\n";
                flag=1;
                exit(0);
            }
            if(arr[0][2]==y && arr[1][1]==y && arr[2][0]==y)
            {
                cout<<"PLAYER 2 HAS WON THE MATCH...\n\n";
                flag=1;
                exit(0);
            }
        }
    }
    
}



void msg()
{
    if(flag==0)
    {
        cout<<"DONT LOSE HOPE!!!!\n\nENJOY THE DAY....";
        cout<<"\n\nIT WAS AN AMAZING GAME ";
    }
    else
    {
        cout<<"\n****************************\n";
    }
}