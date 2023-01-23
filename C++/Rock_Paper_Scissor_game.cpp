#include<iostream>
#include<string>
#include<stdlib.h>
#include<conio.h>
using namespace std;

int main()
{
    srand(time(0));
    int user_choice, random_choice, n;
    int player_win = 0;
    int player_loss = 0;
    int drwan = 0;
    string name, u_choice, p_choice;
    cout<<"===========================================\n\n         Rock  Paper  Scissor game                 \n\n===========================================";
    cout<<endl<<"Enter Your Name : ";
    cin>>name;
    cout<<"How Many round You Wanna play?  ";
    cin>>n;

    for ( int i = 1; i <= n; i++)
    {
        upstair:
        cout<<endl<<endl<<"Enter: 1 for Rock\n       2 for Paper\n       3 for Scissor\n=>";
        cin>>user_choice;
        if (user_choice >= 1 && user_choice <= 3)
        {
// user choice
            if (user_choice == 1)
            {
                u_choice = "Rock";
            }
            else if (user_choice == 2)
            {
                u_choice = "Paper";
            }
            else
            {
                u_choice = "Scissor";
            }

// PC Choice
            random_choice = (rand()%3 +1);
            if (random_choice == 1)
            {
                p_choice = "Rock";
            }
            else if (random_choice == 2)
            {
                p_choice = "Paper";
            }
            else
            {
                p_choice = "Scissor";
            }

// winner selection
            if ( u_choice == p_choice)
            {
                cout<<"Both player selected \""<<u_choice<<"\" \n.so its Tie !";
                drwan ++;
            }
            else if (u_choice == "Rock")
            {
                if( p_choice == "Scissor")
                {
                    cout<<"You choose \""<<u_choice<<"\" \nComputer choose \""<<p_choice<<"\". so, \n";
                    cout<<"Rock smashes scissors! You win!";
                    player_win ++;
                }
                else
                {
                    cout<<"You choose \""<<u_choice<<"\" \nComputer choose \""<<p_choice<<"\". so, \n";
                    cout<<"Paper covers rock! You lose.";
                    player_loss ++;
                }
            }
            else if (u_choice == "Paper")
            {
                if ( p_choice == "Rock")
                {
                    cout<<"You choose \""<<u_choice<<"\" \nComputer choose \""<<p_choice<<"\". so, \n";
                    cout<<"Paper covers rock! You win!";
                    player_win ++;
                }
                else
                {
                    cout<<"You choose \""<<u_choice<<"\" \nComputer choose \""<<p_choice<<"\". so, \n";
                    cout<<"Scissors cuts paper! You lose.";
                    player_loss ++;
                }
            }
            else if ( u_choice == "Scissor")
            {
                if ( p_choice == "Paper")
                {
                    cout<<"You choose \""<<u_choice<<"\" \nComputer choose \""<<p_choice<<"\". so, \n";
                    cout<<"Scissors cuts paper! You win!";
                    player_win ++;
                }
                else
                {
                    cout<<"You choose \""<<u_choice<<"\" \nComputer choose \""<<p_choice<<"\". so, \n";
                    cout<<"Rock smashes scissors! You lose.";
                    player_loss ++;
                }
            }
        }
        else
        {
            cout<<"Wrong Input.";
            goto upstair;
        }
    }
    cout<<endl<<endl<<"You Won \" "<<player_win<<" \" Times";
    cout<<endl<<"You loss \" "<<player_loss<<" \" Times";
    cout<<endl<<"Drawn \" "<<drwan<<"\" Times"<<endl<<endl;

    cout<<"Thanks for playing this Game.\nPress Enter to Exit !";
    getch();
}