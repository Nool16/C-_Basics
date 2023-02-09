//Game to guess the number

#include <iostream>
using namespace std;

int main(){
    int secret = 55;
    int lives=5;
    int input;
    char exit;
    
    cout<<"Welcome to the guessing game!"<<endl;
    while (input!=secret && lives>=1){
        cout<<"\nGuess the secret number: ";
        cin>>input;
        lives--;
        if (lives != 0){
            if (input<secret){
                cout<<"Wrong! Try going higher.\nYou have "<<lives<<" lives left."<<endl;
            }
            if (input>secret){
                cout<<"Wrong! Try going lower.\nYou have "<<lives<<" lives left."<<endl;
            }   
        }
    }
    if (input!=secret){
        cout<<"\nWrong! "<<secret<<" was the right answer.\nYou lose. Better luck next time!";
    }
    else{
        cout<<"\nCorrect! "<<secret<<" was the right answer.\nCongratulations. You win!";
    }
    cout<<"\nEnter any character to exit"<<endl;
    cin>>exit;
    return 0;
}


