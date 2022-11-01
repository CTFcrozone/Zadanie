#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int szyfruj(int a1, int a2)
{
  return (a2 ^ a1) + 20;
}

int main(int argc, const char **argv, const char **envp)
{
  size_t v3; // rax                                   Binary analyzing be like lol xD
  size_t v5; // rbx
  int v6[28]; // [rsp+0h] [rbp-120h]
  char s[142]; // [rsp+70h] [rbp-B0h] BYREF
  char v8; // [rsp+FEh] [rbp-22h]
  char v9; // [rsp+FFh] [rbp-21h]
  int v10; // [rsp+100h] [rbp-20h]
  int i; // [rsp+10Ch] [rbp-14h]

FILE * inputFile = fopen( argv[0], "r" );
  v6[0] = 47;
  v6[1] = 65;
  v6[2] = 48;
  v6[3] = 72;
  v6[4] = 74;
  v6[5] = 37;
  v6[6] = 39;
  v6[7] = 26;
  v6[8] = 39;
  v6[9] = 87;
  v6[10] = 21;
  v6[11] = 73;
  v6[12] = 16;
  v6[13] = 45;
  v6[14] = 17;
  v6[15] = 43;
  v6[16] = 12;
  v6[17] = 14;
  v6[18] = 12;
  v6[19] = 55;
  v6[20] = 11;
  v6[21] = 11;
  v6[22] = 10;
  v6[23] = 10;
  v6[24] = 6;
  v10 = 25LL;
  fgets(s, 128, inputFile);
  v3 = 24;
  // printf("Nie tak szybko lol");  To jest do wywalenia po tym jak juz w jakis sposob znajdzie sie kod zrodlowy
  
  /////////////////////////////
  for ( i = 0; i < 25; i++ )  // ]
    {                         // |
      v5 = i;                 // |
      if ( v5 >= 25 - 1 )     // | --> Ta sekcja jest normalnie jako komentarz ale zeby rozwiazac zadanie trzeba to odkomentowac
        break;                // |
      v9 = v6[i];             // |
      v8 = szyfruj(v6[i], i); // |      
      printf("%d ", v8);      // ]
  /////////////////////////////
 
      //if ( v8 != v9 )  to jest nie potrzebne ale czemu nie napisac i zrobic jako komentarz
      //{
        //printf("Sprawdzenie Nieudane");
        //return 1;
      //}
    } 
    return 0;

}
