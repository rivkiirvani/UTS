#include <iostream>
#include <stdio.h>
using namespace std;
int
main ()
{
  int b;
  char yt;

awal:

  cout << "Silahkan pilih (1-3) jumlah uang yang akan anda ambil:" << endl;
  cout << "1. 100.000" << endl;
  cout << "2. 250.000" << endl;
  cout << "3. 500.000" << endl;

  cout << "Pilihan: ";
  cin >> b;
  cout << endl;
  switch (b)
    {
    case 1:
      cout << "Silahkan ambil uang 100.000 anda";
      break;
    case 2:
      cout << "Silahkan ambil uang 250.000 anda";
      break;
    case 3:
      cout << "Silahkan ambil uang 500.000 anda";
      break;
    }
  cout << endl;
  cout << "Apakah anda ingin mengulang Program (Y/N): ";
  cin >> yt;
  cout << endl;
  if (yt == 'Y' || yt == 'y')
    {
      goto awal;
    }
  if (yt == 'T' || yt == 't')
    {
      goto akhir;
    }
akhir:
  cout << "Terima kasih telah menggunakan ATM ini";
  return 0;
}


