#include <stdio.h>

int main(void) {
  //Entradas: 
  int candidato; /*candidato 1, candidato 2, candidato 3, candidato 4, candidato 5*/ 
  int barry=0, quill=0, hamada=0, morales=0, parker=0, nulo=0;
  int quant_votos_val=0;

  do{ /*início*/
    /*INFORMAÇÕES QUE IRÃO APARECER NA TELA*/
    printf("\n");
    printf(" ------------------------------------------\n");
    printf("|       CANDIDATO       |      NÚMERO      |\n");
    printf(" ------------------------------------------\n");
    printf("|      Barry Allen      |        55        |\n");
    printf(" ------------------------------------------\n");
    printf("|   Peter Jason Quill   |        04        |\n");
    printf(" ------------------------------------------\n");
    printf("|      Hiro Hamada      |        23        |\n");
    printf(" ------------------------------------------\n");
    printf("| Miles Gonzalo Morales |        11        |\n");
    printf(" ------------------------------------------\n");
    printf("| Peter Benjamin Parker |        84        |\n");
    printf(" ------------------------------------------\n");
    printf("\t\tPara votar nulo, digite 1.\n");
    printf("\t  Para encerrar votação digite 0.\n");
    printf("\nInforme seu voto: ");
    scanf("%d", &candidato);
  
    /*SWITCH*/
    switch(candidato){ /*início do escolha*/
      case 55:{ /*1*/
        printf("Voto confirmado para Barry Allen!\n");
        barry++; /*contador*/
        quant_votos_val++;
      } break;
  
      case 04:{ /*2*/
        printf("Voto confirmado para Peter Jason Quill!\n");
        quill++; /*contador*/
        quant_votos_val++;
      } break;
  
      case 23:{ /*3*/
        printf("Voto confirmado para Hiro Hamada!\n");
        hamada++; /*contador*/
        quant_votos_val++;
      } break;
  
      case 11:{ /*4*/
        printf("Voto confirmado para Miles Gonzalo Morales!\n");
        morales++; /*contador*/
        quant_votos_val++;
      } break;
  
      case 84:{ /*5*/
        printf("Voto confirmado para Peter Benjamin Parker!\n");
        parker++; /*contador*/
        quant_votos_val++;
      } break;
  
      case 1:{ /*nulo*/
        printf("Voto nulo confirmado.\n");
      } break;
  
      case 0:{ /*encerra*/
        printf("Votação encerrada!\n");
      } break;
  
      default:{ /*validação*/
        printf("Voto inválido!\n");
      } break;
    } /*fim do escolha*/
  } while(candidato!=0); /*Loop - fim do while*/

  /*Total de votos*/
  int total_votos=0;
  total_votos = barry + quill + hamada + morales + parker;
  
  /*IMPRIMIR NA TELA*/
  //printf("\nTotal de votos: %f\n", &total_votos);

  printf(" ------------------------------------\n");
  printf("|  VOTOS VÁLIDOS   |  TOTAL DE VOTOS |\n");
  printf(" ------------------------------------\n");
  printf("|       %d         |         %d      |\n", quant_votos_val, total_votos);
  printf(" ------------------------------------\n");
  
  /*printf("\t\t\nQuantidade e porcentagem de votos: \n");
  printf(" ---------------------------------------------------------\n");
  printf("|       CANDIDATO       |   QUANTIDADE   |   PORCENTAGEM  |\n");
  printf(" ---------------------------------------------------------\n");
  printf("|      Barry Allen      |       %d        |       %.1f    |\n", barry, (float) (barry*100)/ (float) total_votos);
  printf(" ---------------------------------------------------------\n");
  printf("|   Peter Jason Quill   |       %d        |       %.1f      |\n", quill, (float) (quill*100)/ (float) total_votos);
  printf(" ---------------------------------------------------------\n");
  printf("|      Hiro Hamada      |       %d       |       %.1f       |\n", hamada, (float) (hamada*100)/(float) total_votos);
  printf(" ---------------------------------------------------------\n");
  printf("| Miles Gonzalo Morales |       %d       |       %.1f       |\n", morales, (float) (morales*100)/(float) total_votos);
  printf(" ---------------------------------------------------------\n");
  printf("| Peter Benjamin Parker |       %d       |       %.1f      |\n", parker, (float) (parker*100)/(float) total_votos);
  printf(" --------------------------------------------------------\n");*/
  
  printf("\nQuantidade de votos para o candidado: \n");
  printf("Barry Allen: %d\n", barry);
  printf("Peter Jason Quill: %d\n", quill);
  printf("Hiro Hamada: %d\n", hamada);
  printf("Miles Gonzalo Morales: %d\n", morales);
  printf("Peter Benjamin Parker: %d\n", parker);
  printf("\n----------------------------\n");
  printf("\nPorcentagem de votos do candidato: \n");
  printf("Barry Allen: %.1f\n", (float) (barry*100)/total_votos);
  printf("Peter Jason Quill: %.1f\n", (float) (quill*100)/total_votos); 
  printf("Hiro Hamada: %.1f\n", (float) (hamada*100)/total_votos);
  printf("Miles Gonzalo Morales: %.1f\n", (float) (morales*100)/total_votos);
  printf("Peter Benjamin Parker: %.1f\n", (float) (parker*100)/total_votos);
}