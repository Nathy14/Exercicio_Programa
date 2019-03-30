#include <stdio.h>
#include <string.h>

double Eng[26] = {
    8.167, 1.492, 2.782, 4.253, 12.702, 2.228, 2.015,
    6.094, 6.966, 0.153, 0.772, 4.025, 2.406, 6.749,
    7.507, 1.929, 0.095, 5.987, 6.327, 9.056, 2.758,
    0.978, 2.360, 0.150, 1.974, 0.074
};

double Ger[26] = {
    6.51, 1.89, 3.06, 5.08, 17.40, 1.66, 3.01, 4.76,
    7.55, 0.27, 1.21, 3.44, 2.53, 9.78, 2.51, 0.79,
    0.02, 7, 7.27, 6.15, 4.35, 0.67, 1.89, 0.03, 0.04,
    1.13
};

double PT[26] = {
    14.63, 1.04, 3.88, 4.99, 12.57, 1.02, 1.30, 1.28,
    6.18, 0.40, 0.02, 2.78, 4.74, 5.05, 10.73, 2.52,
    1.2, 6.53, 7.81, 4.32, 4.63, 1.67, 0.01, 0.21,
    0.01, 0.47
};

void calcular(double str[])
{
    double ptp = 0, engp = 0, gerp = 0;

    for (int i = 0;i <= 26; i++) {
        printf("%f\n", str[i]);
    }

    for (int i = 0;i <= 26; i++) {
        ptp = ptp + (PT[i] * str[i]);
        engp = engp + (Eng[i] * str[i]);
        gerp = gerp + (Ger[i] * str[i]);
    }

    if (ptp > engp && ptp > gerp) {
        printf("\n\nPORTUGUÊS\n\n");
    } else if(engp > gerp) {
        printf("\n\nINGLÊS\n\n");
    } else {
        printf("\n\nALEMÃO\n\n");
    }
}

double * percorrer(char str[], double limite)
{
  static double aparicao[26];

  for (int i = 0;i <= 26; i++) {
    aparicao[i] = 0;
  }

  for (int i = 0;i <= limite; i++) {
    switch(str[i]){
    case 'a':
      aparicao[0] = aparicao[0]++;
      break;
    case 'b':
      aparicao[1] = aparicao[1]++;
      break;
    case 'c':
      aparicao[2] = aparicao[2]++;
      break;
    case 'd':
      aparicao[3] = aparicao[3]++;
      break;
    case 'e':
      aparicao[4] = aparicao[4]++;
      break;
    case 'f':
      aparicao[5] = aparicao[5]++;
      break;
    case 'g':
      aparicao[6] = aparicao[6]++;
      break;
    case 'h':
      aparicao[7] = aparicao[7]++;
      break;
    case 'i':
      aparicao[8] = aparicao[8]++;
      break;
    case 'j':
      aparicao[9] = aparicao[9]++;
      break;
    case 'k':
      aparicao[10] = aparicao[10]++;
      break;
    case 'l':
      aparicao[11] = aparicao[11]++;
      break;
    case 'm':
      aparicao[12] = aparicao[12]++;
      break;
    case 'n':
      aparicao[13] = aparicao[13]++;
      break;
    case 'o':
      aparicao[14] = aparicao[14]++;
      break;
    case 'p':
      aparicao[15] = aparicao[15]++;
      break;
    case 'q':
      aparicao[16] = aparicao[16]++;
      break;
    case 'r':
      aparicao[17] = aparicao[17]++;
      break;
    case 's':
      aparicao[18] = aparicao[18]++;
      break;
    case 't':
      aparicao[19] = aparicao[19]++;
      break;
    case 'u':
      aparicao[20] = aparicao[20]++;
      break;
    case 'v':
      aparicao[21] = aparicao[21]++;
      break;
    case 'w':
      aparicao[22] = aparicao[22]++;
      break;
    case 'x':
      aparicao[23] = aparicao[23]++;
      break;
    case 'y':
      aparicao[24] = aparicao[24]++;
      break;
    case 'z':
      aparicao[25] = aparicao[25]++;
      break;
    break;
    }
  }

  return aparicao;
}

int main(void)
{
    char str[200];
    double tamanho;
    double *ip;
    printf("\nIniciando.. \n\n");
    printf("Digite a frase a qual deseja descobrir a qual lingua pertence!\n(PT-ENG-GER ONLY)\n\n >> ");
    scanf("%[^\n]%*c", str);
    tamanho = strlen(str);
    ip = percorrer(str,tamanho);
    calcular(ip);
    printf("%s\n", str);
    return 0;
};
