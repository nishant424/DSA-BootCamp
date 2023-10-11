#include<iostream>
using namespace std;

// //Summation of two numbers
// int Sum(int a, int b)
// {
//     int ans = a + b;
//     return ans;
// }

// //Prime or not
// bool Prime(int n)
// {
//     if(n<2)
//       return 0;
//     for(int i=2; i<n; i++)
//     {
//         if(n%2==0)
//           return 0;
//     }
//     return 1;
// }

// //Factorial Function
// int Factorial(int m)
// {
//     int ans = 1;
//     for(int i=1; i<=m; i++)
//     {
//         ans = ans*i;
//     }
//     return ans;
// }

// //Main Function

// int main()
// {
//     int c, d;
//     cin>>c>>d;
//     cout<<Sum(c,d);
//     cout<<endl;
//     cout<<Prime(c);
//     cout<<endl;
//     cout<<Factorial(c);
//     cout<<endl;
//     cout<<Prime(d);
//     cout<<endl;
//     cout<<Factorial(d);
//     cout<<endl;
//     cout<<Prime(d-c);
//     cout<<endl;
//     cout<<Factorial(d-c);

// }




//PASS BY VALUE
// void swap(int a, int b)
// {
//     int c;
//     c = a;
//     a = b;
//     b = c;
// }

// int main()
// {
//     int a, b;
//     cin>>a>>b;

//     swap(a,b);
//     cout<<a<<" "<<b<<" ";
// }




//PASS BY REFERENCE

void swap(int &a, int &b)
{
    int c;
    c = a;
    a = b;
    b = c;
}

void swap(float &c, float &d)
{
    float r = c;
    c = d;
    d = r;
}

int main()
{
    int a, b;
    cin>>a>>b;

    swap(a,b);
    cout<<a<<" "<<b<<" ";

    float f1 = 4.8, f2 = 3.6;
    swap(f1,f2);
    cout<<f1<<" "<<f2;
}