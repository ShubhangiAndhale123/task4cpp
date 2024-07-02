#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    //two player roll dice two times--->
    string player1,player2;
    int random,random2,sum1 = 0,sum2 = 0;
    cout<<"enter the first player name :  \t";
    cin>>player1;
    cout<<player1 <<"  roll the dice 6 times :  \t";
    for(int i=0;i<6;i++)
    {
       cout<< i+1 <<" times ";
       random  = 1 + rand() %6;
       cout<<random<<endl;
       system("pause");
       sum1 = sum1 + random;
    }
    cout<<"total sum of player 1 : \t"<<sum1<<endl;

    cout<<"\n enter the second player name : \t";
    cin>>player2;
    cout<<player2<<"roll the dice 6 times \n";
     for(int i=0;i<6;i++)
    {
       cout<< i+1 <<" times  \t";
       random2  = 1 + rand()%6;
       cout<<random2<<endl;
       system("pause");
       sum2 = sum2 + random2;
    }
    cout<<"the sum of second player : \t"<<sum2<<endl;
}