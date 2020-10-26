#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n,m,x,y,left,right;
    int Wires [n];
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> Wires[i];
    }
    cin >> m;
    for (int j=0;j<m;j++){
        cin >> x,y;
        left = abs(0-Wires[x-1]+1);
        right = Wires[x-1]-left-1;

        if (x-2== -1){ left = 0; }
        else { Wires[x-2] += left; }

        if (x>n) { right=0; }
        else { Wires[x] += right; }
        Wires[x-1] = 0;
        right = 0;
        left = 0;

    }
    for (int w=0;w<n;w++){
        cout << Wires[w] << endl;
    }
}
