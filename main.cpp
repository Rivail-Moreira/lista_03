#include<stdio.h>

double termometro(){
 double GrausFah, GrausCel;
  printf("\n--------------- (TEMPERATURA) -----------------\n");
  printf("Informe a temperatura em Fahrenheit: ");
  scanf("%lf",&GrausFah);
   
  GrausCel = (GrausFah - 32.0) * (5.0/9.0);

  printf("\nA temperatura em Graus Celsius %.4lfC !\n",GrausCel);

}
void CalcInflacao(){
    float n1, infla, res = 0.0;
    printf("\n------------- (CALC INFLACAO) -------------\n");
    printf("\nInforme o preco do produto que deseja calcular sua inflacao: R$ = ");
    scanf("%f",&n1);

    if(n1 < 100.0){
        infla = (n1 * (10.0/100.0));
        res = infla + n1;
        printf("\nO preco ja calculado com a inflacaoo de 10%% : R$ = %.2f\n",res);
    }else if(n1 >= 100.0){
        infla = (n1 * (20.0/100.0));
         res = infla + n1;
        printf("\nO preco ja calculado com a inflacaoo de 20%% : R$ = %.2f\n",res);
    }
}

void tabuada(){
    int n1, i, res;
    printf("\n--------------- (TABUADA) -------------\n");
    printf("\nInforme um numero:");
    scanf("%d",&n1);
    printf("---------- (TABUADA DO %d) --------------\n",n1);
    for(i=0;i <= 10; i++){
        res = n1 * i;
        printf("%d x %d = %d\n",n1, i, res);
  }

}

float metro(){
    float metros, decimetro, centimetro, milimetro;
    float resultado;

    puts("Informe a quantidade de metros para a conversao: ");
    scanf("%f", &metros);

    resultado = metros * 10;
    decimetro = resultado;
    resultado = metros * 100;
    centimetro = resultado;
    resultado = metros * 1000;
    milimetro = resultado;

    printf("Conversao de metros para decimentos: %.2f dm\n", decimetro);   
    printf("Conversao de metros para centimetro: %.2f cm\n", centimetro);   
    printf("Conversao de metros para milimetro: %.2f mm\n", milimetro);
}

int main(){
   int menu;
       

    do{
        printf("\n----------------- (MENU) ----------------------\n");
         printf("\nEscolha qual Algoritmo deseja ser executado:");
         printf("\n\n(0)-Sair\n(1)-METRO\n(2)-TABUADA\n(3)-INFLACAO\n(4)-Termometro");
         printf("\n-----------------------------------------------\n");
         scanf("%d",&menu);
                      
         
        switch (menu){
        case 1:
          metro();
            break;     
        case 2:
           tabuada();
        case 3:
            CalcInflacao();
            break;
        case 4:
            termometro();
            break;
        case 0:
            printf("");
            break;
            default:printf("\nOpcao invalida!\n");
            break;
        }        
          
     }while (menu!=0);
    {
        printf("\nFoi finalizado com sucesso!!!");
    }
      printf("\n\n");
 return 0;
}