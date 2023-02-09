#include<iostream>
//#include<cmath>

using namespace std;
/*
void sayHi(int age, char gender, string name){
    cout<<"Hello "<<name<<". You are "<<age<<" "<<gender<<endl; 
}


double cube(double num1){
    return num1*num1*num1;
}

double getMax(double num1,double num2, double num3){
    if (num1>=num2 && num1>=num3){
        return num1;
    }
    else if (num2>=num3 && num2>=num1){
        return num2;
    }
    else{
        return num3;
    }
}

string DayofWeek(int DayNum){
string DayName;
    switch(DayNum){
    case 0:
        DayName = "Sunday";
        break;
    case 1:
        DayName = "Monday";
        break;
    case 2:
        DayName = "Tuesday";
        break;
    case 3:
        DayName = "Wednesday";
        break;
    case 4:
        DayName = "Thursday";
        break;
    case 5:
        DayName = "Friday";
        break;
    case 6:
        DayName = "Saturday";
        break;
    case 7:
        DayName = "Invalid Day Number";
        break;
    }
    return DayName;
}
*/

class Book{
    //public --> cant be accessed out of class program, use SET libsect to modify GETlibsect function to access.
    private:
    string libsect;

    //public --> can be accessed out of class program
    public:
        string title;
        string author;
        //int srlno = 0; //with each object creation, srlno gets reinitialized to 0
        int pages;

        //Constructor #1
        Book(){
            title= "No title";
            author= "No author";
            //SETlibsect(aLibsect);
            //srlno++;
        }
        
        //Constructor #2
        Book(string aTitle, string aAuthor, string aLibsect){
            title = aTitle;
            author = aAuthor;
            SETlibsect(aLibsect);
            //srlno++;
        }

        //Object function
        bool isbig(){ //If not predeclared, wil automatically assume to be true. How to change this?
            if(pages>500){
                return true;
            }
            else{
                return false;
            }
        }
        
        //Setter
        void SETlibsect(string aLibsect){
            if (aLibsect == "A" || aLibsect == "C" || aLibsect == "B" || aLibsect == "D"){
                libsect = aLibsect;
            }
            else{
                libsect= "Unregistered";
            }
        }

        //Getter
        string GETlibsect(){
            return libsect;
        }
};

//Inheritance; subclass Manuscript inhertiting its properties from superclass Book 
class Manuscript: public Book{
    public:
        void subject(){
            cout<<"Biology"<<endl;
        }
        bool isbig(){
            return true;
            }
};


int main(){
    /*
    // Strings
    string phrase {"Noel Joseph Saji"};
    cout<<phrase.length()<<endl;
    cout<<phrase.find("Saji",0)<<endl;;
    cout<<phrase[0]<<endl;
    phrase[0]='J';
    cout<<phrase<<endl;
    cout<<phrase.substr(5,6)<<endl;

    // Numbers
    cout<<pow(2,3)<<endl; //2^3
    cout<<sqrt(36)<<endl; //square root
    cout<<fmin(3,10)<<endl;
    cout<<fmax(3,10)<<endl;
    cout<<round(4.4234)<<endl; //Round out the number; 4
    cout<<ceil(4.1234)<<endl; //Round to upper limit; 5
    cout<<floor(4.9345)<<endl; //Round to lower limit; 4

    //Array
    int arr[5] {1,2,3,4};
    arr[0]=5;
    arr[5]=10;
    cout<<arr[0]<<endl;
    cout<<arr[5]<<endl;
    
    //User input
    int age;
    string name;
    char gender;
    cout<<"Enter full name: ";
    getline(cin,name);
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Gender?(M/F): ";
    cin>>gender;
    //cout<<"Hello"<<name<<". You are "<<age<<" "<<gender<<endl; 
      
    //Function
    sayHi(age,gender,name); //Don't know how to insert user input lines into void function block, because of problems with declaring unknown parameters.
    
    //Return statement
    cout<<cube(5.55);

    //Boolean
    bool Male {false};
    bool Tall {false};
    
    if (Male && Tall){
        cout<<"You are male and tall."<<endl;
    }
    else if (Male && !Tall){
        cout<<"You are male and not tall."<<endl;
    }
    else if  (!Male && Tall){
        cout<<"You are not male but you are tall."<<endl;
    }
    else{
        cout<<"You are neither male nor tall."<<endl;
    }
    
    //Comparision 
    cout<<getMax(3.12121, -2321, 27/7);

    //Switch statement (Specialized if-else statement)
    int DayNum;
    cout<<"Enter a number from 0-6: ";
    cin>>DayNum;
    cout<<DayofWeek(DayNum);

    //While & Do-while loops
    cout<<"While Loop"<<endl;
    int i = 10;
    while(i>=0){
        cout<<(i--)<<endl;
    }
    
    cout<<"Do-While Loop"<<endl;
    i = 10;
    do
    {
        cout<<(i--)<<endl;
    } while (i>=0);
    cout<<endl;
    i = -1;
    do
    {
        cout<<(i--)<<endl;
    } while (i>=0);
        
    //For loops

    for(int i=0; i<=10; i++){
        cout<<i<<" ";
    }

    cout<<endl;    
    int samplearr[] {1,2,5,10,12,23};
    int arrlen = (sizeof(samplearr)/sizeof(samplearr[0]));
    cout<<arrlen<<endl;
    for (int j=0; j<arrlen; j++){
        cout<<samplearr[j]<<" ";
    }

    //2D Arrays
    int NumberGrid[3][4]{
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    cout<<NumberGrid[0][1]<<endl; //1st row, 2nd column = 2
    cout<<NumberGrid[1][2]<<endl; //2nd row, 3rd column = 7
    cout<<NumberGrid[2][3]<<endl; //3rd row, 4th column = 12

    //Nested for loops

    for(int i = 0; i<3; i++){ // ith row
        for (int j=0;j<4;j++){ //jth element in each row => jth column
            cout<<NumberGrid[i][j]<<" ";
        }
    }
   

    //Pointers - memory addresses within the computer memory (RAM)

    int age = 10;
    string name = "Noel";
    char lastname = 'S';
    bool isMale {true};
    
    //Pointer variable - *p... = &variablename (p is convention --> pointer)
    int *page = &age;
    string *pname = &name;
    char *plastname = &lastname;
    bool *pisMale = &isMale;
    
    cout<<age<<" "<<name<<" "<<lastname<<" "<<isMale<<endl; //Variable contents
    cout<<&age<<" "<<&name<<" "<<&lastname<<" "<<&isMale<<endl; //Pointers/memory addresses
    cout<<*&age<<" "<<*&name<<" "<<*&lastname<<" "<<*&isMale<<endl; //Pointers reverted back to actual variable content 
    cout<<page<<" "<<pname<<" "<<plastname<<" "<<pisMale<<endl; //Memory locations of age, name, lastname, and isMale
    cout<<&page<<" "<<&pname<<" "<<&plastname<<" "<<&pisMale<<endl; //Memory locations of pointer variables themselves

    //Except char datatype lastname; everything else stored acc. to hexadecimal system. No idea about SÞ■a tho. 

    */
    //Basic OOPS Concepts

    Book book1("Harry Potter","J. K. Rowling", "A"); //Second constructor 'Book(aTitle,aAuthor)'
    book1.pages = 500; //Assigning attributes to object with 3 args
    Book book2; //No args, first constructor 'Book()'
    book2.pages = 200; //Assigning attributes to object with no args
    Book book3("Power of Habit", "Charles", "B"); //Second constructor 'Book(aTitle,aAuthor)'
    Book book4("Grit", "A. Duckworth","ABC"); //Second constructor 'Book(aTitle,aAuthor)'
    book4.pages=200;

    Manuscript man1; 
    
    cout<<boolalpha;
    /*
    cout<<book1.title<<endl;
    cout<<book1.pages<<endl;
    //cout<<book1.srlno<<endl;
    //cout<<book2.srlno<<endl;
    cout<<book2.title<<endl;
    cout<<book2.pages<<endl;
    //cout<<book3.srlno<<endl;
    //cout<<book4.srlno<<endl;
    //cout<<book2.srlno<<endl;

    
    cout<<book1.isbig()<<endl;
    cout<<book2.isbig()<<endl;
    cout<<book3.isbig()<<endl;
    cout<<book4.isbig()<<endl;
    

    cout<<book1.GETlibsect()<<endl; //A
    cout<<book2.GETlibsect()<<endl; //Wont get an output for this
    cout<<book3.GETlibsect()<<endl; //B
    cout<<book4.GETlibsect()<<endl; //Unregistered, since arg was "ABC"

    book1.SETlibsect("Dog"); //Tried changong book 1 arg using Set function
    cout<<book1.GETlibsect()<<endl; //Tred outputting using GET function, returned "Unregistered"
    */

   cout<<book1.isbig()<<endl; //False
   cout<<man1.isbig()<<endl; //isbig dunction is modified in subclass Manuscript, True
   man1.subject();  //Additional function only available in Manuscript subclass, Biology


    


    return 0;
}