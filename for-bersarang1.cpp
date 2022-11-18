#include<iomanip.h>
#include<conio.h>

main()
{
	int i, j;
   for (j=1; j<=10; j++)
   {
   	for (i=j-1+1; i<=10; i++)
      {
        cout<<setw(3)<<i;
      }
      cout<<endl;
   }
   getch();
}
