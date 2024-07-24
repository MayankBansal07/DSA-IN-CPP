#include<iostream>
using namespace std;

char convert(char name)
{
    int temp = int(name);
    char con;
    con = temp - 32;
    return con;
}

int main()
{
    char name;
    cout<<"Enter the alphabet: ";
    cin>>name;
    cout<<convert(name);
}