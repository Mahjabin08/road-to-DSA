/*To find out, if  a number is palindrome or not, first we have to reverse the given number using a temporary variable, then we wiil compare the number and reversed number. If they are equal the number is palindrome, otherwise we will print the number is not palindrome. */



#include <iostream>
using namespace std;
int main(){
    int n,rem,reverse=0,temp;
    cout<<"Enter a number: ";
    cin>>n;
    temp=n;
    while(temp!=0){
        rem=temp%10;
        reverse=(reverse*10)+rem;
        temp/=10;
    }
    cout<<reverse;
    if(n==reverse){
        cout<<"The number is palindrome"<<endl;
    }
    else{
        cout<<"The number is not palindrome"<<endl;
    }
    return 0;
}