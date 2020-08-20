/* este programa hace la operacion que se le indique  de numeros complejos
Autor:Sebastian Babativa Veloza
Version 1.0


*/





#include<stdio.h>



void pedir_numeros(float *numr1, float *numc1, float *numr2, float *numc2);
void escoger_operacion(int *op);
void realizar_op(int op, float numr1, float numc1, float numr2, float numc2, float resuc,float resur);


int main(void)

{

float numr1=0 , numc1=0, numr2=0 ,numc2=0;
int op=0;
float  resuc=0,resur=0;
printf( "\n  Buen dia este programa funciona para realizar operaciones \n  matematicas con numeros compjeos \n mas especificamente  suma,resta,multiplicacion y division \n ");

pedir_numeros(&numr1,&numc1,&numr2,&numc2);
escoger_operacion(&op);
realizar_op(op,numr1,numc1,numr2,numc2,resuc,resur);



}
void pedir_numeros(float *numr1, float *numc1, float *numr2, float *numc2)

{
printf(" \n Inserta la parte compleja del primer numero sin necesidad de la i \n   ");

scanf("%f",&(*numc1));

printf("\n Inserta la parte real del primer numero complejo \n");

scanf("%f",&(*numr1));

printf("\n \n este es su primer numero complejo: %f",*numc1);
printf("i");
printf("+ %f",*numr1);

printf(" \n \n Inserta la parte compleja del segundo numero sin necesidad de la i \n ");
scanf("%f",&(*numc2));

printf(" \n Inserta la parte real del segundo numero complejo \n");
scanf("%f",&(*numr2));

printf("\n este es su segundo numero complejo: %f ",*numc2);
printf("i +%f",*numr2);
}

void escoger_operacion(int *op)
{


printf(" \n \n Que operacion Deseas realizar \n \n  1. Escribe 1 para la suma \n 2.Escribe 2 para la resta \n 3. Escribe 3 para la multiplicacion \n 4. Escribe 4 para la division \n \n");
scanf("%d",&(*op));
}


void realizar_op(int op ,float numr1, float numc1, float numr2, float numc2,float resuc, float resur)

{

if(op==1)

{

resuc=numc1+numc2;
resur=numr1+numr2;

printf("\n la suma es: %f ",resuc);
printf("i + %f",resur);

}
else

{
if(op==2)
{
resuc=numc1-numc2;
resur=numr1-numr2;

printf("\n la resta es:%f",resuc);
printf(" i + %f",resur);
}
else
{
if(op==3)
{

resur=-(numc1*numc2)+(numr1*numr2);
resuc=(numc1*numr2)+(numr1*numc2);

printf("\n la multiplicacion es:%f",resuc);
printf("i + %f",resur);


}

else

{

if(op==4)
{

resur=((numr1*numr2)+(numc1*numc2))/((numr2*numr2)+(numc2*numc2));

resuc=((numc1*numr2)-(numr1*numc2))/((numr2*numr2)+(numc2*numc2));


printf("la division es:%f",resuc);
printf("i+ %f",resur);
printf("\n \n");

}
else
{
printf("La opcion no es valida");

}


}


}

}

}







