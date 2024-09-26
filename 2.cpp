#include <iostream>
using namespace std;
int main()
{
    char ch;
    string str,str1;
    cout << "enter string=";
    getline(cin, str);
    cout << "enter character to remove" << endl;
    cin >> ch;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]!=ch){
            str1+=str[i];
        }
            
    }
    cout<<str1<<endl;
    return 0;
}