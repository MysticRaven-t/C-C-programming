#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < 16; i++) {
        int F = i * 20;
        int C = static_cast<int>((5.0/9.0) * (F - 32));
        cout << F << "    " << C << endl;
    }
    return 0;
}
