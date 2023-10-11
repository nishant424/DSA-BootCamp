#include<iostream>
using namespace std;
int main()
{
    // int i;

    // for(i=100; i<= 200; i=i+1)
    // {
    //     cout<<i<<"\n";
    // }

    // char ch;
    // for(ch ='a'; ch <= 'z'; ch = ch+1)
    // {
    //     cout<<ch<<"\n";
    // }

    // int i;
    // for(i=10; i>=1; i=i-1)
    // {
    //     cout<<i<<" ";
    // }


    // int i;
    // for(i=1; i<=100; i = i+3)
    // {
    //     cout<<i<<" ";
    // }

    // int i, n;
    // cout<<"Enter the table:";
    // cin>>n;
    // for(i=1; i<=10; i = i+1)
    // {
    //       cout<<n<<"*"<<i<<"="<<n*i<<"\n";
    // }

    // int n, pow, i, num;
    // cout<<"Enter the number:";
    // cin>>n;
    // cout<<"Enter the power: ";
    // cin>>pow;
    // num = n;
    // for(int i =1; i<pow; i = i + 1)
    // {
    //     num = num * n;
    // }
    // cout<<num;

    // int sum = 0;
    // int n;
    // cin>>n;
    // for(int i =1; i<=n; i = i + 1)
    // {
    //     sum = sum + i;
    // }
    // cout<<sum;

    // int n, fact = 1, i;
    // cin>>n;
    // for(i = 1; i<=n; i = i + 1)
    // {
    //     fact = fact * i;
    // }
    // cout<<fact;

    int n, i;
    cout<<"Enter the number:";
    cin>>n;

    if(n<2)
    {
        cout<<"Not a prime number";
        return 0;
    }
    else
    {
        for(i=2; i<n; i=i+1)
        {
            if(n%i==0){
                cout<<"Not a Prime";
                return 0;
            }
        }
        cout<<"Prime";
    }
    return 0;
}