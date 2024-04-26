#include <iostream>
using namespace std;

float proses(int n){
    float jumlah = 0;
    float total = 0;
    float rumus = -1;
    for (int i = 1; i <= n; i++){
        rumus = (rumus * (-1));
        total = rumus / i;
        jumlah += total;
        //jumlah = jumlah + total;
        if (i == 1)
            cout << "(" << total << ")";
        if (i > 1) // if ke-2
            cout << "+(" << total << ")";
    }
    cout << "\n\nhasil penjumlahan deret = " << jumlah << endl;
    return total;
}

int main(){
	int input;
    cout << "Program sederhana menghitung jumlah dari rumus 1 -(1 / 2) + (1 / 3) - (1 / 4) + ... + (1 / n) \n\n";
    cout << "tentukan nilai n : ";
    cin >> input;
    proses(input);
    return 0;
}
