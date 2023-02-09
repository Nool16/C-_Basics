# include <iostream>
#include <cstring>
using namespace std;

int main(){
    string colour,plural,name,emotion;
    cout<<"Enter a colour: ";
    cin>>colour;
    cout<<"Enter a plural name: ";
    cin>>plural;
    cout<<"Enter a name: ";
    cin>>name;
    cout<<"Enter an emotion: ";
    cin>>emotion;
    
    cout<<"\n";
    cout<<"Roses are "<<colour<<endl;
    cout<<plural<<"are blue\n";
    cout<<"I "<<emotion<<" "<<name<<endl;

    return 0; 
}