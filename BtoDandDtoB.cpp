#include<iostream>
using namespace std;
int main()
{
    // int num;
    // cout<<"Enter the number: ";
    // cin>>num;
    // int rem, ans = 0, mul =1;
    // while(num>0)
    // {
    //     rem = num%2; //remainder
    //     num /=2; //quotient
    //     ans += rem*mul; //ans
    //     mul *=10; //update multiply
    // }
    // // cout<<ans;




    //Binary to Decimal
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int rem, ans = 0, mul =1;
    while(num>0)
    {
        rem = num%10; //remainder
        num /=10; //quotient
        ans += rem*mul; //ans
        mul *=2; //update multiply
    }
    cout<<ans;
}