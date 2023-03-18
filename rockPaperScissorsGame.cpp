#include <bits/stdc++.h>
char ROCK='r';
char PAPER='p';
char SCISSORS='s';
using namespace std;
char ComputerOption(){//compOption
    srand(time(0));
    int num=(rand()%3)+ 1;
    if(num==1){
        return 'r';
    }    
    if(num==2){
        return 'p';
    }    
    if(num==3){
        return 's';
    }
    return num;    
}
char UserOption(){//Useropt
    char ch;
    cout<<"Lets play,Rock,Paper and Scissors Game!"<<"\n";
    cout<<"Choose one of the following options"<<"\n";
    cout<<"-----------------------------------"<<"\n";
    cout<<"r-for rock "<<"\n"<<"p-for paper "<<"\n"<<"s-for scissors "<<"\n";
    cin>>ch;
    while (ch!='r' && ch!='p' && ch!='s' )
    {
        cout<<"Please enter one of the following options. "<<"\n";
        cout<<"r-for rock "<<"\n"<<"p-for paper "<<"\n"<<"s-for scissors "<<"\n";
        cin >> ch;
    }
    return ch;
}
void SelectedOption(char option){//select
    if (option=='r'){cout<<"Rock"<<'\n';}
    if (option=='p'){cout<<"Paper"<<'\n';}
    if (option=='s'){cout<<"Scissors"<<'\n';}
}
void chooseWinner(char userChoice, char compChoice){//winner
    if (userChoice==ROCK && compChoice==PAPER)
    {
        cout<<"Computer Wins! Paper wraps out the Rock. "<<'\n';
    }
    else if (userChoice==PAPER && compChoice==SCISSORS)
    {
        cout<< "Computer Wins! Scissors cuts out the Paper. "<<'\n';
        
    }
    else if (userChoice==SCISSORS && compChoice==ROCK)
    {
        cout<<"Computer Wins! Rock smashes  Scissors."<<'\n';
        
    }
    else if (userChoice==ROCK && compChoice==SCISSORS) 
    {
        cout<<"You Win! Paper wraps out the Rock."<< endl;
        
    }
    else if (userChoice==PAPER && compChoice== ROCK) 
    {
        cout << "You Win! Paper wraps out the Rock. "<<'\n';
        
    }
    else if (userChoice==SCISSORS && compChoice==PAPER)
    {
        cout<<"You Win! Scissors cuts the Paper. "<<'\n';
    }
    else
    {
        cout << "Tie. Play again win the Game and defeat the computer." <<'\n';
    }
}
int main(){//main
    char user_choice; 
    char comp_choice;
    user_choice=UserOption();
    cout<<"Your choice is: "<<'\n';
    SelectedOption(user_choice);
    cout<<"Computer's choice is: "<<'\n';
    comp_choice=ComputerOption();
    SelectedOption(comp_choice);
    chooseWinner(user_choice,comp_choice);
    return 0;
}