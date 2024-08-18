#include<iostream>//this first program of if else in c++
using namespace std;
int  main()
{
int a,b;
cout<<"enter your first number\n";
cin>>a;
cout<<"enter your second number \n";
cin>>b;
if (a>b){
    cout<<a<<" is greater number than "<<b;}
    else if (a==b)
    {cout<<a<<" is equal to "<<b;
        /* code */
    }
    
else{
    cout<<a<<" is less than "<<b;
}
    

return 0;
}