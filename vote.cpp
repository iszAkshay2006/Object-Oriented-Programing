#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if (age >= 18){
        cout<<"Eligeible to vote.";
    }
    else{
        cout<<"Not eligible to vote.";
    }
    return 0;
}