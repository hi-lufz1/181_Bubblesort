#include <iostream>
using namespace std;


int a[20];    // Deklarasi array a dengan ukuran 20
int n;       // Deklarasi variabel n untuk menyimpan banyaknya elemen pada array


void input() { // procedure untuk input
    while (true) { //looping
        cout << "Masukan banyaknya elemen pada array : ";  //output ke layar
        cin >> n;   // input dari pengguna
        if (n <= 20) // Jika n kurang dari atau sama dengan 20
            break;   // Keluar dari loop
        else {       // Jika n lebih dari 20
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";  // Output ke layar
        }
    }
    cout << endl;                                // Output baris kosong
    cout << "======================"  << endl;  // Output ke layar
    cout << "Masukan Elemen Array" << endl;    // Output ke layar
    cout << "======================" << endl;  // Ouput ke layar

    for (int i = 0; i < n; i++) {   // Looping dengan i dimulai dari 0 hingga n-1
        cout << "Data Ke-" << (i + 1) << ": "; // Output ke layar
        cin >> a[i];   // Input dari pengguna
    }
}

void display() { //procedure untuk menampilkan hasil
    cout << endl;     // Ouput baris kosong
    cout << "==================" << endl; // output ke layar
    cout << "Element Array yang telah tersusun" << endl; // output ke layar
    cout << "==================" << endl; // output ke layar

    for (int j = 0; j < n; j++) {
        cout << a[j] << endl;
    }
    cout <<endl;
}
void bubbleSortArray() { // Procedure untuk mengurutkan array dengan metode bubble sort
    for (int i = 1; i < n; i++) {  // looping dengan i dimulai dari 1 hinggan n-1
        for (int j = 0; j < n - i; j++) { // looping dengan j dimulai dari 0 hinggan n-1
            if (a[j] > a[j + 1]) { // simpan nilai a[j] lebih besar dari a[j+1}
                int temp = a[j];
            }
        }
    }
}






int main()
{
    std::cout << "Hello World!\n";
}


