#include <iostream>
using namespace std;

int main(){
    const int CURRENT_YEAR = 2024;
int birthYear;
int age;

cout <<"enter your birthyear";
cin >> birthYear;

if (birthYear > CURRENT_YEAR) {
    cout<<"error please enter your correct birthyear"<<endl;
} else {
    age = CURRENT_YEAR - birthYear;
    cout<<"your age is "<<age<<endl;
}


return 0;
}