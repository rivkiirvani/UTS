#include <iostream>
#include <stdio.h>
using namespace std;


int
main (void)
{
  int n;
  char yt;

awal:

  printf ("Jumlah baris ? ");
  scanf ("%d", &n);
  cout << "Bintang(";
  cout << n;
  cout << "):" << endl;

  {
    if (n % 2 == 0)
      {
	cout << "Anda memasukkan jumlah genap. Masukkan hanya jumlah ganjil"
	  << endl << endl;
	goto tengah;
      }
    for (int i = 1; i <= n; i++)
      {
	if (i == ((n / 2) + 1))
	  {
	    for (int j = 1; j <= n; j++)
	      {
		printf ("+");
	      }

	  }
	else
	  {
	    for (int j = 1; j <= n / 2; j++)
	      {
		printf (" ");
	      }
	    printf ("+");
	  }
	printf ("\n");
      }
  tengah:
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
    cout << "Terima kasih telah menggunakan program ini";
  }
}

