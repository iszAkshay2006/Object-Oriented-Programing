#include<iostream>
using namespace std;
int main(){
    char line[100];
    cout<<"Enter a line of text: ";
    cin.getline(line, 100);   
    int count = 0;
    for(int i = 0 ; line[i] != '\0' ;i++){
if(line[i] == 'a' || 
    line[i] == 'e'
    || line[i] == 'i' 
    || line[i] == 'o' 
    || line[i] == 'u' 
    || line[i] == 'A' 
    || line[i] == 'E' 
    || line[i] == 'I' 
    || line[i] == 'O' )
    count++;
}
    cout<<count<<" vowels are in a text.";
    return 0;
}