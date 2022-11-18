//while loop
// ada kalanya sebuah kondisi peulangan tidak di kerjakan
// jika terjadi hal semacam itu maka kondisi perulangan akan menjadi error
//contoh soal
//masukkan lah sederetan bilangan dengan diakhiri angka 999, jika telah memenuhi
//maka aksi tidak akan dijalankan lagi dan program tetelah nya akan berhenti.
//contoh program

#include<iostream.h>
#include<conio.h>
#include<stdio.h>

main()
{
	int jumlah=0, banyak=0, bilangan;
   float rata;

   cout<<"masukkan bilangan : "; cin>>bilangan;

   //dengan menggunakan while do
   while(bilangan!=100)
   {
      banyak++;
      jumlah = jumlah + bilangan;
      cout<<"masukkan bilangan : "; cin>>bilangan;
   }
   rata = (float)jumlah / banyak;
   cout<<"jumlah seluruh bilangan adalah = "<<jumlah;
   printf("\nRata-rata bilangan adalah = %5.2f", rata);
   getch(); // gunanya untuk menahan layar sebelum satu karakter di ketikkan
}
