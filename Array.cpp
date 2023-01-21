#include<iostream.h>
#include<stdio.h>
#include<conio.h>

main()
{
   int Bilangan[100], i, n, m, j, Jumlah=0;
   int Terbesar, Terkecil, k, X;
   float Rata_Rata;
//Membaca Banyak Bilangan
   printf("\tMasukkan Banyak Bikangan : ");
   scanf("%d",&n);
//Membaca sederetan Bilangan
   for(i=0; i<n; i++)
   {
     printf("Bilangan ke-%d : ",(i+1));
     cin>>Bilangan[i];
   }
//Menghitung Jumlah Sederetan Bilangan
   for(i=0; i<n; i++)
   {
     Jumlah += Bilangan[i];
   }
   Rata_Rata = (float) Jumlah/n; //Menghitung Rata Rata
//Mencetak Sederetan Bilangan
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
   cout<<"\n\nnBanyak Rotasi : "; cin>>m;
   for(j=1; j<=m; j++)
   {
      X=Bilangan[n-1];
      for(i=(n-2); i>=0; i--)
      {
          Bilangan[i+1] = Bilangan[i];
      }
      Bilangan[0]=X;
      //Mencetak setelah rotasi ke kanan
      cout<<"\nBilangan Setelah Rotasi Ke Kanan :\n";
      for(k=0; k<n; k++)
      {
         printf("%4d",Bilangan[k]);
      }
   }
//Melakukan Rotasi Ke kiri
   cout<<"\nnBanyak Rotasi : "; cin>>m;
   for(j=1; j<=m; j++)
   {
      X=Bilangan[0];    //langkah-1
      for(i=1; i<n; i++)
          Bilangan[i-1] = Bilangan[i]; //Langkah-2
      Bilangan[n-1]=X;    //Langkah-3
      //Mencetak setelah rotasi ke kiri
      cout<<"\nBilangan Setelah Rotasi Ke Kiri :\n";
      for(i=0; i<n; i++)
        printf("%4d",Bilangan[i]);
}
    int Genap[100], Ganjil[100], Byk_Ganjil=0, Byk_Genap=0;
//Menentukan Bilangan Ganjil dan Bilangan Genap dari Sederetan Bilangan
  for(i=0; i<n; i++)
  {
    if(Bilangan[i]%2==0)
    {
      Genap[Byk_Genap]=Bilangan[i];
      Byk_Genap++;
    }
    else
    {
      Ganjil[Byk_Ganjil]=Bilangan[i];
      Byk_Ganjil++;
    }
  }
      cout<<"\nBilangan Ganjil :\n";
      for(i=0; i<Byk_Ganjil; i++)
        printf("%4d",Ganjil[i]);

      cout<<"\nBilangan Genap :\n";
      for(i=0; i<Byk_Genap; i++)
        printf("%4d",Genap[i]);
int Jumlah_Ganjil=0, Jumlah_Genap=0;
float Rata_Genap, Rata_Ganjil;
//Menghitung Jumlah dan Rata Bilangan Genap
   for(i=0; i<Byk_Genap; i++)
   {
     Jumlah_Genap += Genap[i];
   }
   Rata_Genap = (float) Jumlah_Genap/Byk_Genap; //Menghitung Rata Rata

//Menghitung Jumlah dan Rata Bilangan Ganjil
   for(i=0; i<Byk_Ganjil; i++)
   {
     Jumlah_Ganjil += Ganjil[i];
   }
   Rata_Ganjil = (float) Jumlah_Ganjil/Byk_Ganjil; //Menghitung Rata Rata
   printf("\nJumlah Bilangan Genap     = %6d",Jumlah_Genap);
   printf("\nRata Rata Bilangan Genap  = %6.2f",Rata_Genap);
   printf("\nJumlah Bilangan Ganjil    = %6d",Jumlah_Ganjil);
   printf("\nRata Rata Bilangan Ganjil = %6.2f",Rata_Ganjil);
int Terkecil_Genap, Terkecil_Ganjil, Terbesar_Genap;
int Terbesar_Ganjil;

//Menentukan Bilangan Terbesar dari Bilangan Genap
   Terbesar_Genap = Genap[0];
   for(i=1; i<Byk_Genap; i++)
   {
      if(Genap[i]>Terbesar_Genap)
         Terbesar_Genap = Genap[i];
   }

//Menentukan Bilangan Terbesar dari Bilangan Ganjil
   Terbesar_Ganjil = Ganjil[0];
   for(i=1; i<Byk_Ganjil; i++)
   {
      if(Ganjil[i]>Terbesar_Ganjil)
         Terbesar_Ganjil = Ganjil[i];
   }

//Menentukan Bilangan Terkecil dari Bilangan Genap
   Terkecil_Genap = Genap[0];
   for(i=1; i<Byk_Genap; i++)
   {
      if(Genap[i]<Terkecil_Genap)
         Terkecil_Genap = Genap[i];
   }

//Menentukan Bilangan Terkecil dari Bilangan Ganjil
   Terkecil_Ganjil = Ganjil[0];
   for(i=1; i<Byk_Ganjil; i++)
   {
      if(Ganjil[i]<Terkecil_Ganjil)
         Terkecil_Ganjil = Ganjil[i];
   }
   cout<<"\nTerbesar Billangan Genap = "<<Terbesar_Genap;
   cout<<"\nTerkecil Billangan Genap = "<<Terkecil_Genap;
   cout<<"\nTerbesar Billangan Ganjil = "<<Terbesar_Ganjil;
   cout<<"\nTerkecil Billangan Ganjil = "<<Terkecil_Ganjil;

//Mengurutkan sederetan Bilangan Secara Menaik


//Menaikkan sederetan Bilangan Secara Menurun



//Mengurutkan Bilangan Genap Secara Menaik


//Menaikkan Bilangan Ganjil Secara Menurun


//Rotasi Kanan Bilangan Genap ke Kanan
   cout<<"\nBanyak Bilangan Genap Rotasi : "; cin>>m;
   for(j=1; j<=m; j++)
   {
      X=Genap[Byk_Genap-1];
      for(i=(Byk_Genap-2); i>=0; i--)
      {
          Genap[i+1] = Genap[i];
      }
      Genap[0]=X;
      //Mencetak setelah rotasi ke kanan
      cout<<"\nBilangan Setelah Rotasi Ke Kanan :\n";
      for(k=0; k<Byk_Genap; k++)
      {
         printf("%4d",Genap[k]);
      }
   }

//Rotasi Kiri Bilangan Ganjil ke Kiri
   cout<<"\nBanyak Rotasi : "; cin>>m;
   for(j=1; j<=m; j++)
   {
      X=Ganjil[0];    //langkah-1
      for(i=1; i<Byk_Ganjil; i++)
          Ganjil[i-1] = Ganjil[i]; //Langkah-2
      Ganjil[Byk_Ganjil-1]=X;    //Langkah-3
      //Mencetak setelah rotasi ke kiri
      cout<<"\nBilangan Setelah Rotasi Ke Kiri :\n";
      for(i=0; i<Byk_Ganjil; i++)
        printf("%4d",Ganjil[i]);
   }
   getch();
}
