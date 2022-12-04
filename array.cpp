#include<bits/stdc++.h>
using namespace std;
//hold
void printArray(int arr[],int size)
{
    cout<<"printing the array"<<endl;
    for (int i =0; i<size; i++){
     cout<<arr[i]<<" ";
    }
    cout<<"printing DONE "<<endl;

}
int main(){

    //declare
    int number[15];
    //accessing an array
    cout<<"Value of 14 index "<<number[14]<<endl;
    
    //initialising an array
    int second[3]={3,4,6};

    //accesing an element 
cout <<"Value of 2 index"<<second[2]<<endl;

int third[15]={2,7};
int n =15;
printArray(third, 15);

//initial all location is 0
int fourth[10]={0};
n =10;
printArray(fourth, 10);

//initialising all location with 1
int fifth[10]={1};
n= 10;
printArray(fifth, 10);
int fifthsize = sizeof(fifth)/sizeof(int);
cout<<"size of fifth is "<<fifthsize <<endl;

char ch[5]={'a','b','c','d','e'};
cout<<ch[3]<<endl;

cout<<"printing the array"<<endl;
for(int i=0;i<5;i++)
{
    cout<<ch[i]<<" ";
}
cout<<"printing the array"<<endl;
double first[5];
float firstfloat[6];
bool firstbool[9];


return 0;
    }