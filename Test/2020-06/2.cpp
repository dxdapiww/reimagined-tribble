#include<iostream>
using namespace std;

int main()
{
    int i = 0;
    char a[10];
    cin.getline(a, 10);
    while(a[i]!='\0')
    {
        if(i!=0)
            cout << " ";
    switch((int)a[i])
    {
        case 45:
            cout << "fu";
            break;
        case 48:
            cout << "ling";
            break;
        case 49: cout << "yi";
            break;
        case 50:
            cout << "er";
            break;
        case 51:
            cout << "san";
            break;
        case 52:
            cout << "si";
            break;
        case 53:
            cout << "wu";
            break;
        case 54:
            cout << "liu";
            break;
        case 55:
            cout << "qi";
            break;
        case 56:
            cout << "ba";
            break;
        case 57:
            cout << "jiu";
            break;
    }
    i++;
    }
    return 0;
}