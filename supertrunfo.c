
#include <stdio.h>

int main(){

//Declarando as variáveis

char estado_carta1 [20];
char estado_carta2 [20];
char codigo_carta1 [3];
char codigo_carta2 [3];
char cidade_carta1 [20];
char cidade_carta2 [20];
int populacao_carta1 = 0;
int populacao_carta2 = 0;
float area_carta1 = 0;
float area_carta2 =0;
float PIB_carta1 =0;
float PIB_carta2 =0;
int pontos_turisticos_carta1 =0;
int pontos_turisticos_carta2 =0; 

//Coletando dados do usuário carta 1

printf ("Entre com os dados da carta 1 \n");
printf ("Digite o Estado: ");
scanf ("%c", &estado_carta1);
printf ("Digite o Código:");
scanf ("%s", &codigo_carta1);
printf ("Digite a Cidade:");
scanf (" %s", cidade_carta1);
printf ("Digite a População:");
scanf ("%d", &populacao_carta1);
printf ("Digite a Área:");
scanf ("%f", &area_carta1);
printf ("Digite o PIB:");
scanf ("%f", &PIB_carta1);
printf ("Digite a quantidade de Pontos turísticos:");
scanf ("%d", &pontos_turisticos_carta1);

//Coletando cdados do usuário carta 2

printf ("Entre com os dados da carta 2 \n");
printf ("Digite o Estado: ");
scanf ("%s", &estado_carta2);
printf ("Digite o Código:");
scanf ("%s", &codigo_carta2);
printf ("Digite a Cidade:");
scanf ("%s", &cidade_carta2);
printf ("Digite a População:");
scanf ("%d", &populacao_carta2);
printf ("Digite a Área:");
scanf ("%f", &area_carta2);
printf ("Digite o PIB:");
scanf ("%f", &PIB_carta2);
printf ("Digite a quantidade de Pontos turísticos:");
scanf ("%d", &pontos_turisticos_carta2);

//Exibindo dados da carta 1

printf ("\n");
printf ("DADOS DA CARTA 1\n");
printf ("\n");
printf ("Estado: %s\n", estado_carta1);
printf ("Código: %s\n", codigo_carta1);
printf ("Cidade: %s\n", cidade_carta1);
printf ("População: %d\n", populacao_carta1);
printf ("Área: %f", area_carta1);
printf (" Km² \n");
printf ("PIB: %.2f", PIB_carta1);
printf (" Bilhões de reais \n");
printf ("Pontos turísticos: %d\n", pontos_turisticos_carta1);

//Exibindo dados da carta 2

printf ("\n");
printf ("DADOS DA CARTA 2\n");
printf ("Estado: %s\n", estado_carta2);
printf ("Código: %s\n", codigo_carta2);
printf ("Cidade: %s\n", cidade_carta2);
printf ("População: %d\n", populacao_carta2);
printf ("Área: %f", area_carta2);
printf (" Km² \n");
printf ("PIB: %.2f", PIB_carta2);
printf (" Bilhões de reais \n");
printf ("Pontos turisticos: %d\n", pontos_turisticos_carta2);




return 0;


}