#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int n;
    int c = 0 ;
    string S;
    cin >> n ;
    for (int i=0;i<=n;i++) {
        //cout << i;
        getline(cin,S);
        if ( S.size() > 10) {
            c = S.size()-2;
            cout << S[0];
            cout << c;
            cout << S[S.size()-1] ;
            cout << endl;
        }
        else { cout << S << endl; }
    }
}
