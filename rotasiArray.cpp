#include<iostream.h>
#include<stdio.h>
#include<conio.h>

main()
{
   int Bilangan[100], i, n, m, j, Jumlah=0;
   int Terbesar, Terkecil, k, X;
   float Rata_Rata;
   printf("\tMasukkan Banyak Bilangan : ");
   scanf("%d",&n);
   for(i=0; i<n; i++)
   {
     printf("Bilangan ke-%d : ",(i+1));
     cin>>Bilangan[i];
   }
   for(i=0; i<n; i++)
   {
     Jumlah += Bilangan[i];
   }
   Rata_Rata = (float) Jumlah/n;
   for(i=0; i<n; i++)
   {
     printf("%4d",Bilangan[i]);
   }
   printf("\nJumlah Bilangan    = %6d",Jumlah);
   printf("\nRata Rata Bilangan = %6.2f",Rata_Rata);
   cout<<"\nJumlah Bilangan    = "<<Jumlah;
   cout<<"\nRata Rata Bilangan = "<<Rata_Rata;
//Menentukan Bilangan Terbesar
   Terbesar = Bilangan[0];
   for(i=1; i<n; i++)
   {
      if(Bilangan[i]>Terbesar)
         Terbesar = Bilangan[i];
   }
//Menentukan Bilangan Terkecil
   Terkecil = Bilangan[0];
   for(i=1; i<n; i++)
   {
      if(Bilangan[i]<Terkecil)
         Terkecil = Bilangan[i];
   }
   cout<<"\nBillangan Terbesar  = "<<Terbesar;
   cout<<"\nBillangan Terkecil  = "<<Terkecil;
//Melakukan Rotasi Ke kanan
   cout<<"nBanyak Rotasi : "; cin>>m;
   for(j=1; j<=m; j++)
   {
      X=Bilangan[n-1];
      for(i=(n-2); i>=0; i--)
      {
          Bilangan[i+1] = Bilangan[i];
      }
      Bilangan[0]=X;
      cout<<"\nBilangan Setelah Rotasi Ke Kanan :\n";
      for(k=0; k<n; k++)
      {
         printf("%4d",Bilangan[k]);
      }
   }
//Melakukan Rotasi Ke kiri
   cout<<"nBanyak Rotasi : "; cin>>m;
   for(j=1; j<=m; j++)
   {
      X=Bilangan[0];    //langkah-1
      for(i=1; i<n; i++)
          Bilangan[i-1] = Bilangan[i]; //Langkah-2
       Bilangan[n-1]=X;    //Langkah-3
//Mencetak setelah rotasi
      cout<<"\nBilangan Setelah Rotasi Ke Kiri :\n";
      for(i=0; i<n; i++)
        printf("%4d",Bilangan[i]);
}
   getch();
}
