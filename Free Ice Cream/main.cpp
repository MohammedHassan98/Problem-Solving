#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int x,n,P;
    string type;
    cin >> n >> x ;
    long long int total = x;
    int distressedKids = 0;
    for (int i=0;i<n;i++){
    cin >> type;
    cin >> P;
    if (type == "+"){
        total = total + P;
    } else if (type == "-") {
        if (total >=  P){
            total = total - P;
        } else { distressedKids++; }
    }
    }

    cout << total << "  " << distressedKids;
}
