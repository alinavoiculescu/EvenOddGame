#include <iostream>
#include <ctime>

using namespace std;

int meniu();

int main()
{
    int option;
    cout<<"Welcome to our game! You have to guess if the number provided by us is"<<endl<<"even or odd."<<endl;
    cout<<endl<<"GOOD LUCK!!!"<<endl<<endl;
    cout<<"Press 1 to play. Press anything else to exit."<<endl;

    cin>>option;
    if (option == 1)
     {
        meniu();
     }
    return 0;
}

int meniu()
{
    int option, number, parity, option1;
    option = 1;
    while (option == 1 || option == 2)
    {
        srand(time(0));
        number = rand();
        parity = number % 2;
        cout<<"Are you lucky today?"<<endl;
        cout<<"Choose your option:"<<endl;
        cout<<"     1. EVEN"<<endl;
        cout<<"     2. ODD"<<endl;

        cin>>option1;

        if (parity == 0 && option1 == 1)
            cout<<"YES! You're right! Your number was "<<number<<", which is EVEN.";
        else if (parity == 0 && option1 == 2)
            cout<<"NO! Your number was "<<number<<", which is EVEN. Good luck next time!";
        else if (parity == 1 && option1 == 1)
            cout<<"NO! Your number was "<<number<<", which is ODD. Good luck next time!";
        else if (parity == 1 && option1 == 2)
            cout<<"YES! You're right! Your number was "<<number<<", which is ODD.";


        cout<<endl<<"Press 1 or 2 to keep playing. Press anything else to exit."<<endl<<endl<<endl<<endl;
        cin>>option;
    }

}
