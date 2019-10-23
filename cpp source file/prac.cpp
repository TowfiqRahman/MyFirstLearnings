#include <iostream>
#include <stdio.h>
#include <string.h>
#include <iomanip>
using namespace std;

int main()
{
    char s[100];
    getchar();
    gets(s);
    int a,b,c;
    a=b=c=0;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='.' || s[i]=='?' ||s[i]=='!')
        {
            a++;
            b++;
        }
        if(s[i]== ' ')
        {
            b++;
        }
    }
    cout << setw(10) << left << a << setw(10) << b << setw(10) << strlen(s);
    return 0;
}


