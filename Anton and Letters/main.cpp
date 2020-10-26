#include <iostream>
#include <string>
#include <string.h>
using namespace std;


int main()
{
    int count = 0;
    string str ;
    getline (cin, str);
    for (int i = 0; i < strlen(str); i++){
        bool appears = false;
        for (int j = 0; j < i; j++){
            if (str[j] == str[i]){
                appears = true;
                break;
            }
         }
         if (!appears){
            count++;
         }
    }
    cout << count ;
}
