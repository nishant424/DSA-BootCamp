#include<iostream>
using namespace std;

// int main()
// {
//     int arr[5] = {10,20,7,11,8};
//     int x;
//     cin>>x;
//     int index = -1;

//     for(int i=1; i<=5; i++)
//     {
//         if(arr[i] == x)
//         {
//             index = i;
//             break;
//         }
//     }
//     cout<<index;
// }

// int main()
// {
//     int arr[6] = {1,2,3,4,5,6};
//     int start = 0, end = 5;

//     while(start<end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     };
//     for(int i=0; i<6; i++)
//     cout<<arr[i]<<" ";
// }



//Fibonacci

// int main()
// {
//     int n;
//     cout<<"Enter the number: ";
//     cin>>n;
//     int arr[1000];
//     // first =0;
//     // second = 1;
//     arr[0] = 0;
//     arr[1] = 1;

//     for(int i=2 ; i<=n-1; i++)
//     arr[i] = arr[i-1] + arr[i-2];

//     cout<<arr[n-1];
// }





//Sorting (Selection Sort)

// int main()
// {
//     int arr[6] = {10, 4, 1, 3, 2, 7};

//     for(int i=0; i<5; i++)
//     {
//         int index = i;
//         for(int j=i+1; j<6; j++)
//         {
//             if(arr[j]<arr[index])
//             index = j;
//         }
//         swap(arr[i], arr[index]);
//     }
//     for (int i=0; i<6; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }







//Bubble Sort

int main()
{
 int arr[1000];
 int n;
 cout<<"Enter the size of array: ";
 cin>>n;

cout<<"Enter the element in array";
 for(int i=0; i<n; i++)
 {
     cin>>arr[i];
 }

 for(int i=n-2; i>=0; i--)
 {
    bool swapped = 0;
    for(int j=0;j<=i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            swapped =1;
            swap(arr[j], arr[j+1]);
        }
        if(swapped == 0)
        break;
    }

 }
    for(int i=0; i<n; i++)
   cout<<arr[i]<<" "; 
  
}