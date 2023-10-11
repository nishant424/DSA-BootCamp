#include<iostream>
using namespace std;

char Convert(char Name)
{
    char ans = Name - 'a' + 'A';
    return ans;
}

int main()
{
    char name;
    cin>>name;
    cout<<Convert(name);
}