#include <iostream>
#include <cmath>

using namespace std;

class bidangDatar {
private:
    int x; // variabel untuk menyimpan Input dari lingkaran maupun bujursangkar

public:
    bidangDatar() { // constructor
        x = 0;
    }

    virtual void input() = 0; // fungsi yang menerima input dan mengirim input melalui fungsi setx untuk disimpan di x
    virtual float Luas(int a) { return 0; } // fungsi untuk menghitung luas
    virtual float Keliling(int a) { return 0; }  // fungsi untuk menghitung keliling

    void setx(int a) { // fungsi untuk memberi/mengirin nilal pada x
        this->x = a;
    }

    int getx() { // fungsi untuk membaca/mengambil nilai dalam x
        return x;
    }
};

class Lingkaran : public bidangDatar {
public:
    void input() {
        cout << "Masukkan jejari: ";
        int r;
        cin >> r;
        setx(r);
    }

    float Luas(int r) {
        return 3.14 * r * r;
    }

    float Keliling(int r) {
        return 2 * 3.14 * r;
    }
};

class Bujursangkar : public bidangDatar {
public:
    void input() {
        cout << "Masukkan sisi: ";
        int s;
        cin >> s;
        setx(s);
    }

    float Luas(int s) {
        return s * s;
    }

    float Keliling(int s) {
        return 4 * s;
    }
};

int main() {
    Lingkaran lkr;
    Bujursangkar bjr;

    // Membuat objek Lingkaran
    cout << "Lingkaran dibuat" << endl;
    lkr.input();
    int r = lkr.getx();
    cout << "Luas Lingkaran: " << lkr.Luas(r) << endl;
    cout << "Keliling Lingkaran: " << lkr.Keliling(r) << endl;

    // Membuat objek Bujursangkar
    cout << endl << "Bujursangkar dibuat" << endl;
    bjr.input();
    int s = bjr.getx();
    cout << "Luas Bujursangkar: " << bjr.Luas(s) << endl;
    cout << "Keliling Bujursangkar: " << bjr.Keliling(s) << endl;


    return 0;
}
