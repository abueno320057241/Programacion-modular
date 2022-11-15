//producto matriz
#include <stdio.h>
int main ()
{
	
	// primera matriz
    float a11, a12, a21, a22;               
    
	//segunda matriz
	float b11, b12, b21, b22;               
    
    float producto11, producto12, producto21, producto22;
    
    
    printf("Programa producto matriz");
    
    printf("\n\nEscriba la primera matriz por filas: ");
    scanf("%f %f %f %f", &a11, &a12, &a21, &a22);
    
    printf("\n\nEscriba la segunda matriz por filas: ");
    scanf("%f %f %f %f", &b11, &b12, &b21, &b22);
    
    /*Cálculo*/
    
    producto11 = a11*b11 + a12*b21;
    producto12 = a11*b12 + a12*b22;
    producto21 = a21*b11 + a22*b21;
    producto22 = a21*b12 + a22*b22;
    
    /*Impresion de resultados*/

    printf("\n\nLa matriz producto es :\n\n");
    printf("(producto11 = %f producto12 = %f)\n(producto21 = %f producto22 = %f)",
         producto11, producto12, producto21, producto22);

}
