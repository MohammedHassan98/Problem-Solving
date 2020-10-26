#include <iostream>

using namespace std;

int main()
{
    int n,b,d,x;
    int Counter =0;
    int Juicer = 0;

    cin >> n>>b>>d;
    for (int i=0;i<n;i++){
        cin >> x;
        if (x >b){;}
        else {
            Juicer += x;
            if (Juicer > d){
            Counter ++ ;
            Juicer = 0;
            }
        }
        }

    cout << Counter << endl;
}
