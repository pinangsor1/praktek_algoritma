#include<iostream.h>
#include<conio.h>
#include<stdio.h>

main(){

  int bilangan, jumlah, i, besar=-9999, kecil=9999;
  float rata;

  jumlah = 0;
  for (i=1; i<=5; i++)
  {
   cout<<"masukkan bilangan ke- "<<i<<" ";
   cin>>bilangan;
   jumlah = jumlah + bilangan;
   if (bilangan > besar)
   	besar = bilangan;
   if (bilangan < kecil)
   	kecil = bilangan;
   }
   rata = (float)jumlah / 5;
   printf("jumlah = %i", jumlah);
   printf("\nrata rata = %6.2f", rata);
   cout<<"\nbilangan terbesar adalah : "<<besar;
   cout<<"\nbilangan terkecil adalah : "<<kecil;


   getch();
  }
