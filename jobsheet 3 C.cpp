#include <stdio.h>
#include <conio.h>

main (){
	int nim1 [3][3]; 
	int nim2 [3][3]; 
	int hasil [2][2];
	int i, j;
	for (i = 0; i < 3; i++){
		for (j = 0; j < 2; j++){
			printf ("Masukkan nilai index %d, %d = ", i, j);
			scanf ("%d", &nim1[i][j]);
		}
	}
	printf ("\n");
	for (i = 0; i < 3; i++){
		for (j = 0; j < 2; j++){
	printf ("Masukkan nilai index %d, %d = ", i, j);
	scanf ("%d", &nim2[i][j]);
		}
	}
	for (i = 0; i < 3; i++){
		for (j = 0; j < 2;j++){
			hasil [i][j]=nim1[i][j]+nim2[i][j];
			printf ("%d ", hasil[i][j]);
		}
		printf ("\n");
	}
	getch();
}

