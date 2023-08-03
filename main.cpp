#include <iostream>

using namespace std;

void trianguloRet (int i, int j, int k) {
    if (i > 0 && j > 0 && k > 0 && k * k == j * j + i * i ) {
        cout << "Triângulo retângulo";
    } else {
        cout << "Não é triângulo retângulo";
    }
}

int main()
{
    int x, y, z;
    
    cin >> x >> y >> z;
    
    trianguloRet(x, y, z);

    return 0;
}
