#include <iostream>
using namespace std;
int markAverage();
int main()
{
    
    //variable declaration
int total_sub;
int sum=0;
float average;
//variable initialization
total_sub=7;
cout<<"The Number of Total Subjects is: "<<total_sub<<endl;

int array[total_sub];

for(int i=0; i<total_sub; i++)

{
    cout<<"Enter Subject "<<i+1<<" Marks: ";
    cin>>array[i];

    sum+=array[i];
}
cout<<"The sum= "<<sum<<endl;

average=sum/total_sub;

cout<<"The Average of "<<total_sub<<" subjects is= "<<average<<endl;

}