#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int contA;
int contE;
int contT;
int contN;

int contador_a(char *s){        //função que conta as ocorrencias da letra a
  for(int i=0;i != '\0';i++){
    if(s[i]=='a')
      contA++;
  }
return contA;
}

int contador_e(char *s){        //função que conta as ocorrencias da letra e
  for(int i=0;i != '\0';i++){
    if(s[i]=='e')
      contE++;
  }
return contE;
}

int contador_t(char *s){        //função que conta as ocorrencias da letra t  
  for(int i=0;i != '\0';i++){
    if(s[i]=='t')
      contT++;
}
return contT;
}

int contador_n(char *s){        //função que conta as ocorrencias da letra n
  for(int i=0;i != '\0';i++){
    if(s[i]=='n')
      contN++;
}
return contN;
}


int main() {
  printf("Este programa tenta adivinhar o idioma em que uma frase foi escrita \n");
  printf("de acordo com o numero de ocorrencias de uma letra \n");
  printf("Digite a frase: \n");
  scanf("%s",&s);
  if(contador_a(&s)>contador_e(&s))
    printf("A frase que voce escreveu esta em Portugues");
  else if(contador_e(&s)>contador_a(&s)){
    if(contador_t(&s)>contador_n(&s))
      printf("A frase que voce escreveu esta em Ingles");
    else if(contador_t(&s)<contador_n(&s))
      printf("A frase que voce escreveu esta em Alemao");
  }
  return 0;
}
