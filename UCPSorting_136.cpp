// Soal tipe B
// 1. bubble sort
// - pass= 1
// -membandingkan elemen dari index 0 dengan index 1
// - menukarnya jika elemen index 1 lebih besar dari index 0
// - lanjut ke menbandingkan index 1 dgn index 2
// - lakukan penukaran jika index 2 lebih besar dari index 1
// - lakukan lagi sehingga variabel n  habis
// - ulangi langkah tersebut hingga pass= n-1

// 2. shell sort
// - pass= 1
// - menentukan jarak antar elemen
// - misal:
// - 2 5 9 3 12 15 10 13 11
//  membuat kelipatan= 3
//  sehingga menghasilkan 
//  list 1 = 2  3 10
//  list 2 = 5 12 13
//  list 3 = 9 15 11
// - nah jika sudah diurutkan berdasarakan list
//  list 1 = 2 3 10
//  list 2 = 5 12 13
//  list 3 = 9 11 15
// - lalu disatukan 2 5 9 3 12 11 10 13 15
// - pass= 2
//  kelipatan 2
//  ikuti seperti pass 1
//  sehingga menghasilkan 2 3 9 5 10 11 15 13
// - lanjut pass 3
//   kelipatan 1
// - lalu membuat 1 list
// - hingga hasil akhir 2 3 5 9 10 11 13 15
// - selesai
// 
// 3. Insertion sort 
//    insertion sort merupakan sorting paling efisien daripada bubble sort dan selection sort. 
// Karena semakin banyak nomor yang sudah beurutan akan bisa mengurangi nomor komparasi/perbandingan, sehingga mempermudah insertion dalam melakukan langkah-langkah
// 
// 
// 

// 4. Selection Sort

#include <iostream>
using namespace std;


int arr[36];
int ifn, n, j, temp;

void input() {
    while (true) {
        cout << " Masukkan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 36)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 36 elemen. ";

        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan Elemen Array" << endl;
    cout << "=====================" << endl;

    for (int ifn = 0; ifn < n; ifn++) {
        cout << " Data ke-" << (ifn + 1) << ": ";
        cin >> arr[ifn];

    }

}

void SelectionSort(int arr[36], int n) {

    for (int j = 0; j < n - 2; j++) {
        int min_Index = j;
        for (int ifn = j + 1; ifn < n; ifn++) {
            if (arr[ifn] < arr[min_Index]) {
                min_Index = ifn;

            }

        }

        swap(arr[min_Index], arr[j]);
    }

}




void display() {
    cout << endl;
    cout << "===================================" << endl;
    cout << "Element Array yang telah tersusun " << endl;
    cout << "===================================" << endl;
    for (int j = 0; j < n; j++) {
        cout << arr[j] << endl;
    }
    cout << "Jumalah pass = " << n - 1 << endl;
    cout << endl;
}


int main()
{
    
    input();
    SelectionSort();
    display();


    return 0;
}