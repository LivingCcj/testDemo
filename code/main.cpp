#include<stdio.h>
#include<iostream>
#include "main.h"
using namespace std;



int max(int a,int b){
    return a>b?a:b;
}

int main()
{
    cout<<"input q to quit!"<<endl;
    char input;
    while (input=getchar() && input !='q')
    {
        cout<<input<<endl;
    }
    cout<<"exit successful!"<<endl;
    

}