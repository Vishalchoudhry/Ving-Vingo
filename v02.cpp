#include<stdio.h>
#include<string>
#include<iostream>
#include<time.h>
void InitGame()
{
std::cout<<"_______________________________________________________________________________________________";
std::cout<<"__________________________________________________________________";
std::cout<<"\nENTER NUMBERS IN RANGE<1 ,10 > AND MAKE YOUR HIGHSCORE\n";
std::cout<<"__________________________________________________________________";
std::cout<<"\n________________________________________________________________\n";

int Lives{7};
int input{0};
long long int Score{0};
while(Lives!=0)
{
std::cout<<"Enter: ";
std::cin>>input;
srand(time(0));
int machineCode{rand()%10+1};
if(input==machineCode)
{
Lives=Lives+rand()%5+1;
std::cout<<"\t\n Beep ! Beep ! Boom !\n";
Score=Score+rand()%1500+5;
std::cout<<"Your Score: "<<Score;
std::cout<<"\t\nAnd Your Lives: "<<Lives;
std::cout<<"\n";
}else
{
--Lives;
std::cout<<"\n\tit was: "<<machineCode;
std::cout<<"\n\tBut You Entered: "<<input;
std::cout<<"\n\tYou Lost!";
std::cout<<"\t\nYour Lives: "<<Lives;
std::cout<<"\n";

};
};
};
int main()
{
std::string q;
do
{
InitGame();
std::cout<<"\nWould You Like To Play Again ?";
std::cin>>q;
}while(q=="1"||q=="yes"||q=="yeah");
std::cout<<"\n\n\tTHANKS FOR PLAYING VING! VINGO!\n...";
std::cout<<"\n<QUIT>";
int x;
std::cin>>x;
return 0;
};
