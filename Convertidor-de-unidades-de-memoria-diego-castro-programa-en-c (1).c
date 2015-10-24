#include <stdio.h>//libreria
float b, B, KB, MB, GB, TB;
int main()
{
	printf ("ingresa los megabytes ");
	scanf ("%f",&MB);
	KB=MB*1024;
	B=KB*1024;
	b=B*8;
	GB=MB/1024;
	TB=GB/1024;
	printf ("Los bites son %.3f\n",b);
	printf ("Los bytes son %.3f\n",B);
	printf ("Los kilobytes son %.3f\n",KB);
	printf ("Los gigabytes son %.3f\n",GB);
	printf ("Los terabytes son %f\n",TB);
return 0;
}
