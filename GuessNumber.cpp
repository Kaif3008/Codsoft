#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    srand(time(0)^clock());
    int n=(rand()%100)+1;
    int g=0;
    do
    {
     cout<<"Enter your guessed number between 1-100"<<endl;
     cin>>g;
     if(g>n)
     cout<<"Guessing is too high"<<endl;
     else if(g<n)
     cout<<"Guessing is too low"<<endl;
     else
     cout<<"You WON THE GAME!!"<<endl;
    } while (g!=n);
    
    return 0;
    
}