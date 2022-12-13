//replace char array in c++
//get four age from user , displays them
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int age[4];
    for (int i= 0; i<4; i++)
    {
        cout<<"Enter an age"<<endl;
        cin>>age[i];
    }
    for( int i=0; i<4; i++)
    cout<<"you entered "<<age[i]<<endl;
    return 0;
}
