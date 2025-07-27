#include <iostream>

using namespace std;

int X;
double Y;

void f(int a, int b) {
    int x;
    for (int i = 0; i <= b; i++) {
        x = a*a;
        a = a*a;
    }
    cout<< x;
}

int main() {
    X = 10;
    Y = 30.27;
    // operatorii sunt ceea ce ne ajuta sa realizam operatii intre variabile

    // operatorii aritmetici unari (cu un singur operand)
    cout<< -X <<endl;
    cout<< +Y<<endl;
    cout<< - + X<<endl;

    // operatorii aritmetici binari (cu 2 operanzi, nu se refera la codul binar)
    cout<<X - Y<<endl;
    cout<<X + Y<<endl;
    cout<<X * Y<<endl;
    cout<<X / Y<<endl;
    cout<<X % 3<<endl; // operatorul modulo - % - are sens doar daca ambii operanzi sunt intregi
                       // si va returna restul impartirii lui X la 3
    cout<<X % 2<<endl;
    // operatorii relationali
    // fie M si N
    int M = 3;
    int N = 11;
    // operatorii relationali stabilesc valoarea de adevar a unei relatii dintre 2 operanzi
    cout<<(M<N)<<endl;
    cout<<(N<M)<<endl;
    cout<<(N==M)<<endl;

    cout<<(5 > 4 > 3)<<endl; // va returna fals!!
    // relatia se evalueaza in urmatorul mod
    // mai intai (5 > 4) ceea ce returneaza valoarea 1
    // apoi se evalueaza (1 > 3) ceea ce este fals


    int v =5;
    int u = 3;
    f(v,u);
}
