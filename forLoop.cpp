#include <iostream>
#include <cstdio>
using namespace std;

void print_num_letter(int num){
    switch(num){
        case 1:
        {
            cout<<"one";
            break;
        }
        case 2:
        {
            cout<<"two";
            break;
        }
        case 3:
        {
            cout<<"three";
            break;
        }
        case 4:
        {
            cout<<"four";
            break;
        }
        case 5:
        {
            cout<<"five";
            break;
        }
        case 6:
        {
            cout<<"six";
            break;
        }
        case 7:
        {
            cout<<"seven";
            break;
        }
        case 8:
        {
            cout<<"eight";
            break;
        }
        case 9:
        {
            cout<<"nine";
            break;
        }
    }
}
void print_even_odd(int num){
    if(num%2==0)
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
}
int main() {
    // Complete the code.
    int num1,num2;
    cin>>num1>>num2;
    for(int i=num1;i<=num2;i++){
        if(i<=9)
        {
            print_num_letter(i);
        }
        else{
            print_even_odd(i);
        }
        cout<<"\n";
    }
    return 0;
}
