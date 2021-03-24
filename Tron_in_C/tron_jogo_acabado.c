 #include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#include<dos.h>
#include <time.h>
/*if(exit!='s'){
                                gotoxy(p1_x,(p1_y+1));
                                p1_y++;
                                printf("%c",219);
                                lado=getch();
                                sleep(100); */
/*for(x=1;x<t;x++){
                   if(cx[0]==cx[x]&&cy[0]==cy[x]){
                   tecla='i';
                   }
                   }*/

typedef struct{
            int win;
            char nome[50];
            int passe;
                   }utilizador;
utilizador ut[255];
int p1_x=45;
int p1_y=3;
int p2_x=5;
int p2_y=22;
int s_p1_x=45;
int s_p1_y=3;
int s_p2_x=5;
int s_p2_y=22;
char opca;
char o;
int o_=0;
char ob[8];

void gotoxy(int x, int y){
     COORD coord;
     coord.X=x;
     coord.Y=y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
     }
void contas(){
     gotoxy(0,5);
     printf("recomendamos utilizar a janela de comandos em 85 por 25 caso contrario podera haver erros");gotoxy(35,6);printf("de interface grafica");
     gotoxy(35,8);
     printf("Ira utilizar(S/N)");
     opca=getch();
     system("cls");
     }
int menu(){
           int i, x=5, y=2, j;
           
           gotoxy(x,y);printf("%c",201);
           gotoxy(x+42,y);printf("%c",187);
           gotoxy(x+42,y+18);printf("%c",188);
           gotoxy(x,y+18);printf("%c",200);
           for(i=0;i<10;i++){
                             for(j=0;j<=7;j++){
                                               gotoxy(x,(y+1)+i+j);printf("%c",186);
                                               gotoxy(x+42,(y+1)+i+j);printf("%c",186);
                                               }
                             for(j=0;j<32;j++){
                                               gotoxy((x+1)+i+j,y+18);printf("%c",205);
                                               }
                             gotoxy((x+1)+i,y);printf("%c",205);           //BARRAS
                             gotoxy((x+32)+i,y);printf("%c",205);   
                             if(i<5){
                                     gotoxy((x+10)+i,y-2);printf("%c",219);          //T
                                     }
                             if(i<4){
                                     gotoxy(x+12,(y-1)+i);printf("%c",219);
                                     }
                             }
                             for(i=0;i<5;i++){
                                              if(i<4){
                                                      gotoxy((x+16)+i,y-2);printf("%c",219);
                                                      }
                                              if(i<5){
                                                      gotoxy(x+16,(y-2)+i);printf("%c",219);
                                                      }
                                              if(i<2){
                                                      gotoxy(x+19,(y-1)+i);printf("%c",219);      //R
                                                      }
                                              if(i<4){
                                                      gotoxy((x+16)+i,y);printf("%c",219);
                                                      }
                                              gotoxy(x+17,y+1);printf("%c",219); 
                                              gotoxy(x+18,y+1);printf("%c",219);
                                              gotoxy(x+19,y+2);printf("%c",219);
                                              }
                             for(i=0;i<5;i++){
                                              if(i<3){
                                                      gotoxy((x+21)+i,y-2);printf("%c",219);      //O
                                                      gotoxy((x+21)+i,y+2);printf("%c",219);
                                                      }
                                              gotoxy(x+21,(y-2)+i);printf("%c",219);
                                              gotoxy(x+24,(y-2)+i);printf("%c",219);
                                              }
                             for(i=0;i<5;i++){
                                              gotoxy(x+26,(y-2)+i);printf("%c",219);
                                              if(i==0){
                                                      gotoxy(x+27,y-2);printf("%c",219);                          
                                                      gotoxy(x+28,y-1);printf("%c",219);
                                                      gotoxy(x+29,y);printf("%c",219);
                                                      gotoxy(x+30,y+1);printf("%c",219);
                                                      }
                                              
                                              gotoxy(x+30,(y-2)+i);printf("%c",219);
                                              }
           gotoxy(x+45,y+4);printf("Para subir: tecla %cw%c",34,34);
           gotoxy(x+45,y+6);printf("Para descer: tecla %cs%c",34,34);
           gotoxy(x+45,y+8);printf("Para selecionar tecla %cENTER%c",34,34);
           
           gotoxy(x+19,y+4);printf("Jogar");
           gotoxy(x+8,y+7);printf("Jogar modo de velocidade x2");
           gotoxy(x+16,y+10);printf("Como jogar");
           gotoxy(x+17,y+13);printf("Creditos");
           gotoxy(x+19,y+16);printf("Sair");
 
 o_=0;
           me:
           gotoxy(x+17,y+4);printf("  "); gotoxy(x+24,y+4);printf("  ");               
           gotoxy(x+6,y+7);printf("  "); gotoxy(x+35,y+7);printf("  ");               
           gotoxy(x+14,y+10);printf("  "); gotoxy(x+26,y+10);printf("   ");             
           gotoxy(x+15,y+13);printf("  "); gotoxy(x+24,y+13);printf("  ");               
           gotoxy(x+17,y+16);printf("  "); gotoxy(x+23,y+16);printf("  "); 
                         
           if(o_==0){
                      gotoxy(x+17,y+4);printf("->"); gotoxy(x+24,y+4);printf("<-");               
                      }
           if(o_==1){
                     gotoxy(x+6,y+7);printf("->"); gotoxy(x+35,y+7);printf("<-");               
                     }
           if(o_==2){
                     gotoxy(x+14,y+10);printf("->"); gotoxy(x+26,y+10);printf("<-");               
                     }
           if(o_==3){
                     gotoxy(x+15,y+13);printf("->"); gotoxy(x+24,y+13);printf("<-");               
                     }
           if(o_==4){
                     gotoxy(x+17,y+16);printf("->"); gotoxy(x+23,y+16);printf("<-");               
                     }
                     
           escolhe:o=getch();
           if(o=='W')o='w';
           if(o=='S')o='s';
           if(o==13) o='E';
           switch(o){
                     case'w':{
                              o_--;
                              if(o_<0){
                                       o_=4;
                                       }
                              goto me;
                              break;
                              }
                     case's':{
                              o_++;
                              if(o_>4){
                                       o_=0;
                                       }
                              goto me;
                              break;
                              }
                     case'E':{
                              system("cls");
                              return 0;
                              break;
                              }
                     default:{
                              goto escolhe;
                              }
                     }

           getche();
           system("cls");
           return 0;
           }
void janela(){
     int i, j, let_y, let_x;
     char exit='a';
     for(i=0;i<25;i++){  //Y
                       gotoxy(1,1+i);
                       printf("%c",178);
                       gotoxy(50,1+i);
                       printf("%c",178);
                       gotoxy(1,1+i);
                       printf("%c",178);
                       }
     for(j=0;j<50;j++){  //X
                       gotoxy(1+j,25);
                       printf("%c",178);
                       gotoxy(1+j,1);
                       printf("%c",178);
                       }
     
     gotoxy(3,23);printf("Player 2");
     gotoxy(40,3);printf("Player 1");
                       
     let_y=7;
     let_x=20;
     for(i=0;i<10;i++){
                      gotoxy(let_x+i,let_y);printf("%c",219);
                      gotoxy(let_x+i,let_y+5);printf("%c",219);
                      gotoxy(let_x+i,let_y+10);printf("%c",219);
                      gotoxy(let_x+10,let_y+i);printf("%c",219);
                      }
                      gotoxy(30,17);printf("%c",219);
     sleep(1000);
     
     for(i=0;i<10;i++){
                      gotoxy(let_x+i,let_y);printf(" ");
                      gotoxy(let_x+i,let_y+5);printf(" ");
                      gotoxy(let_x+i,let_y+10);printf(" ");
                      gotoxy(let_x+10,let_y+i);printf(" ");
                      }
                      gotoxy(30,17);printf(" ");

     for(i=0;i<10;i++){
                      gotoxy(let_x+i,let_y);printf("%c",219);
                      gotoxy(let_x+i,let_y+5);printf("%c",219);
                      gotoxy(let_x+i,let_y+10);printf("%c",219);
                      if(i<=5){
                                 gotoxy(let_x+10,let_y+i);printf("%c",219);
                                 }
                      else{
                                  gotoxy(let_x,let_y+i);printf("%c",219);
                                  }   
                      }
                      gotoxy(30,17);printf("%c",219);
     
     sleep(1000);
                 
                 
     for(i=0;i<10;i++){
                      gotoxy(let_x+i,let_y);printf(" ");
                      gotoxy(let_x+i,let_y+5);printf(" ");
                      gotoxy(let_x+i,let_y+10);printf(" ");
                      if(i<=5){
                                 gotoxy(let_x+10,let_y+i);printf(" ");
                                 }
                      else{
                                  gotoxy(let_x,let_y+i);printf(" ");
                                  }   
                      }
                      gotoxy(30,17);printf(" ");                 
     
     
     for(i=0;i<11;i++){
                      gotoxy(let_x+5,let_y+i);printf("%c",219);
                      }
     sleep(1000);
     
     for(i=0;i<11;i++){
                      gotoxy(let_x+5,let_y+i);printf(" ");
                      }
     
     let_y=7;
     let_x=10;
     gotoxy(3,23);printf("        ");
     gotoxy(40,3);printf("        ");
     for(i=0;i<25;i++){
                       if(i<=10){
                                gotoxy(let_x+i,let_y);printf("%c",219);
                                gotoxy(let_x+i,let_y+10);printf("%c",219);
                                gotoxy(let_x,let_y+i);printf("%c",219);
                                gotoxy(let_x+15,let_y+i);printf("%c",219);
                                gotoxy(let_x+25,let_y+i);printf("%c",219);
                                if(i<9){
                                        gotoxy(let_x+28,let_y+i);printf("%c",219);
                                        gotoxy(let_x+30,let_y+i);printf("%c",219);  
                                        }
                                gotoxy(let_x+28,let_y+10);printf("%c",219);
                                gotoxy(let_x+30,let_y+10);printf("%c",219);
                                if(i<5){
                                        gotoxy((let_x+5)+i,let_y+5);printf("%c",219);
                                        gotoxy(let_x+10,(let_y+5)+i);printf("%c",219);
                                        }
                                }
                       if(i>=15){
                              gotoxy(let_x+i,let_y);printf("%c",219);
                              gotoxy(let_x+i,let_y+10);printf("%c",219);
                              }
                      }
     sleep(1000);
     
     
     for(i=0;i<25;i++){
                       if(i<=10){
                                gotoxy(let_x+i,let_y);printf(" ");
                                gotoxy(let_x+i,let_y+10);printf(" ");
                                gotoxy(let_x,let_y+i);printf(" ");
                                gotoxy(let_x+15,let_y+i);printf(" ");
                                gotoxy(let_x+25,let_y+i);printf(" ");
                                if(i<9){
                                        gotoxy(let_x+28,let_y+i);printf(" ");
                                        gotoxy(let_x+30,let_y+i);printf(" ");  
                                        }
                                gotoxy(let_x+28,let_y+10);printf(" ");
                                gotoxy(let_x+30,let_y+10);printf(" ");
                                if(i<5){
                                        gotoxy((let_x+5)+i,let_y+5);printf(" ");
                                        gotoxy(let_x+10,(let_y+5)+i);printf(" ");
                                        }
                                }
                       if(i>=15){
                              gotoxy(let_x+i,let_y);printf(" ");
                              gotoxy(let_x+i,let_y+10);printf(" ");
                              }
                              }
     
     
     if(opca!='N'&&opca!='n'){
                              gotoxy(51,2);printf("Para sair clique na telca %ci%c",34,34);
                              }
     else{
          gotoxy(51,2);printf("Sair: telca %ci%c",34,34);
          }
     }
void creditos(){
     int j=0,l=0;
     int k, p;
     char i;
     for(k=0;k<255;k++){
                         if(j<13){
                         gotoxy(30,j);printf("PROGRAMADORES");
                         gotoxy(31,j+1);printf("Tiago Penas");
                         gotoxy(30,j+2);printf("Vitor Batista");
                         
                         gotoxy(33,j+4);printf("DESIGNER");
                         gotoxy(29,j+5);printf("Vitor Batista");
                         
                         gotoxy(27,j+7);printf("Designer secundario");
                         gotoxy(30,j+8);printf("Tiago Penas");
                         
                         gotoxy(27,j+10);printf("AJUDANTES OPORTUNOS");
                         gotoxy(30,j+11);printf("Luis Cerdeira");
                         gotoxy(31,j+12);printf("Pedro Leite");
                         }
                         if(j==13){
                         gotoxy(30,j);printf("PROGRAMADORES");
                         gotoxy(31,j+1);printf("Tiago Penas");
                         gotoxy(30,j+2);printf("Vitor Batista");
                         
                         gotoxy(33,j+4);printf("DESIGNER");
                         gotoxy(29,j+5);printf("Vitor Batista");
                         
                         gotoxy(27,j+7);printf("Designer secundario");
                         gotoxy(30,j+8);printf("Tiago Penas");
                         
                         gotoxy(27,j+10);printf("AJUDANTES OPORTUNOS");
                         gotoxy(30,j+11);printf("Luis Cerdeira");
                         }
                         if(j==14){
                         gotoxy(30,j);printf("PROGRAMADORES");
                         gotoxy(31,j+1);printf("Tiago Penas");
                         gotoxy(30,j+2);printf("Vitor Batista");
                         
                         gotoxy(33,j+4);printf("DESIGNER");
                         gotoxy(29,j+5);printf("Vitor Batista");
                         
                         gotoxy(27,j+7);printf("Designer secundario");
                         gotoxy(30,j+8);printf("Tiago Penas");
                         
                         gotoxy(27,j+10);printf("AJUDANTES OPORTUNOS");
                         }
                         if(j==15){
                         gotoxy(30,j);printf("PROGRAMADORES");
                         gotoxy(31,j+1);printf("Tiago Penas");
                         gotoxy(30,j+2);printf("Vitor Batista");
                         
                         gotoxy(33,j+4);printf("DESIGNER");
                         gotoxy(29,j+5);printf("Vitor Batista");
                         
                         gotoxy(27,j+7);printf("Designer secundario");
                         gotoxy(30,j+8);printf("Tiago Penas");
                         }
                         if(j==16){
                         gotoxy(30,j);printf("PROGRAMADORES");
                         gotoxy(31,j+1);printf("Tiago Penas");
                         gotoxy(30,j+2);printf("Vitor Batista");
                         
                         gotoxy(33,j+4);printf("DESIGNER");
                         gotoxy(29,j+5);printf("Vitor Batista");
                         
                         gotoxy(27,j+7);printf("Designer secundario");
                         }
                         if(j==17){
                         gotoxy(30,j);printf("PROGRAMADORES");
                         gotoxy(31,j+1);printf("Tiago Penas");
                         gotoxy(30,j+2);printf("Vitor Batista");
                         
                         gotoxy(33,j+4);printf("DESIGNER");
                         gotoxy(29,j+5);printf("Vitor Batista");
                         }
                         if(j==18){
                         gotoxy(30,j);printf("PROGRAMADORES");
                         gotoxy(31,j+1);printf("Tiago Penas");
                         gotoxy(30,j+2);printf("Vitor Batista");
                         
                         gotoxy(33,j+4);printf("DESIGNER");
                         }
                         if(j==19){
                         gotoxy(30,j);printf("PROGRAMADORES");
                         gotoxy(31,j+1);printf("Tiago Penas");
                         gotoxy(30,j+2);printf("Vitor Batista");
                         }
                         if(j==20){
                         gotoxy(30,j);printf("PROGRAMADORES");
                         gotoxy(31,j+1);printf("Tiago Penas");
                         }
                         if(j==21){
                         gotoxy(30,j);printf("PROGRAMADORES");
                         }
                         
                         if(j==22) goto fim;;
                         sleep(500);
                         system("cls");
                         j++;
                         }
     fim:return 0;
     }
int main(){
    int i, werex_p1[255],werey_p1[255],werex_p2[255],werey_p2[255], k=0;
    char exit='o', opccao;
    int d=3, t=1, dd, tt, velo;
    int p=0;
    
    contas();
    men:menu();
    if(o_==0 || o_==1){
       if(o_==0) velo=150;
       if(o_==1) velo=75;
    tron:for(i=0;i<256;i++){
                    werex_p1[i]=0;
                    werey_p1[i]=0;
                    werex_p2[i]=0;
                    werey_p2[i]=0;
                    }
    t=1;d=3;
    gotoxy(35,10);
    printf("TRON");
    sleep(1000);
    system("cls");
    
    janela();
    
    gotoxy(p1_x, p1_y);
    printf("%c",219);
    gotoxy(p2_x, p2_y);
    printf("%c",219);
     while(exit!='i'){
      while(exit!='i'&&!(exit=kbhit())){
                                        if(d==0){
                                                 p1_x--;}//esquerda
                                        if(d==1){
                                                 p1_y--;}//cima
                                        if(d==2){
                                                 p1_x++;}//direita
                                        if(d==3){
                                                 p1_y++;}//baixo
                                                 
                                        if(t==0){
                                                 p2_x--;}//esquerda
                                        if(t==1){
                                                 p2_y--;}//cima
                                        if(t==2){
                                                 p2_x++;}//direita
                                        if(t==3){
                                                 p2_y++;}//baixo
                                        
                                        werex_p1[k]=p1_x;
                                        werey_p1[k]=p1_y;
                                        
                                        werex_p2[k]=p2_x;
                                        werey_p2[k]=p2_y;
                                        
                                        for(i=0;i<k;i++){
                                                         if(p2_x==werex_p1[i] && p2_y==werey_p1[i] || p2_x==werex_p2[i] && p2_y==werey_p2[i]){
                                                                           goto xau_2;
                                                                                              }
                                                         if(p1_x==werex_p1[i] && p1_y==werey_p1[i] || p1_x==werex_p2[i] && p1_y==werey_p2[i]){
                                                                           goto xau_1;
                                                                                              }
                                                         }
                                        gotoxy(p1_x,p1_y);
                                        printf("%c",219);
                                        
                                        gotoxy(p2_x,p2_y);
                                        printf("%c",219);
                                        if(k>19){
                                                 if(k==20){
                                                           gotoxy(s_p1_x,s_p1_y);
                                                           printf(" ");
                                                           
                                                           gotoxy(s_p2_x,s_p2_y);
                                                           printf(" ");
                                                           }
                                                gotoxy(werex_p1[k-20],werey_p1[k-20]);
                                                werex_p1[k-20]=0;
                                                werey_p1[k-20]=0;
                                                printf(" ");
                                                
                                                gotoxy(werex_p2[k-20],werey_p2[k-20]);
                                                werex_p2[k-20]=0;
                                                werey_p2[k-20]=0;
                                                printf(" ");
                                                }
                                        Sleep(velo);
                                         if(p1_y==1||p1_y==25||p1_x==0||p1_x==50){
                                                                                  goto xau_1;
                                                                                  }
                                         if(p2_y==1||p2_y==25||p2_x==0||p2_x==50){
                                                                                  goto xau_2;
                                                                                  }
                                         k++;
                                         if(k==250){
                                                    k=0;
                                                    }
                                                    }
 dd=d;
 tt=t;                                     
 if(exit!='i')exit=getch();
 if(exit=='4'&&dd!=2)d=0;
 if(exit=='8'&&dd!=3)d=1;
 if(exit=='6'&&dd!=0)d=2;
 if(exit=='5'&&dd!=1)d=3;
 
 if(exit=='a'&&tt!=2)t=0;
 if(exit=='w'&&tt!=3)t=1;
 if(exit=='d'&&tt!=0)t=2;
 if(exit=='s'&&tt!=1)t=3;
 
 if(p1_y==1||p1_y==25||p1_x==0||p1_x==50){
                                          xau_1:exit='i';
                                          system("cls");
                                          gotoxy(35,10);
                                          printf("Player 2 GANHOU!!!!!!");
                                          }
 if(p2_y==1||p2_y==25||p2_x==0||p2_x==50){
                                          xau_2:exit='i';
                                          system("cls");
                                          gotoxy(35,10);
                                          printf("Player 1 GANHOU!!!!!!");
                                          }
 }

sleep(2000);
outra:system("cls");
gotoxy(35,10);
printf("Deseja jogar novamente(S/N)");
gotoxy(22,12);
printf("Para voltar para o menu de opcoes clique na telca %cM%c",34 ,34);

gotoxy(45,14);printf("Tecla:");scanf("%c",&opccao);
if(opccao=='m' || opccao=='M'){
                               system("cls");
                               exit='a';
                               opccao='a';
                               p1_x=45;
                               p1_y=3;
                               p2_x=5;
                               p2_y=22;
                               k=0;
                               goto men;
                               }
else{
     if(opccao!='n' && opccao!='N'){
               system("cls");
               exit='a';
               opccao='a';
               p1_x=45;
               p1_y=3;
               p2_x=5;
               p2_y=22;
               k=0;
               goto tron;
               }
     else{
          if(opccao=='n' || opccao=='N'){
                                         system("cls");
                                         gotoxy(35,12);printf("Ate a proxima");
                                         sleep(1000);
                                         goto exit;
                                         }
          else{
               gotoxy(35,12);
               printf("Nao reconhecido");
               sleep(500);
               goto outra;
               }
          }
     }
}
if(o_==2){
     system("cls");            
     gotoxy(29,3);printf("COMO JOGAR O TRON?");
     gotoxy(12,5);printf("Tron e um jogo multiplayer limitado a dois jogadores,");
     gotoxy(10,6);printf("consite em fazer com que o adevesario passe no seu rasto");
     gotoxy(7,7);printf("ou nos limites do campo, fazendo com que voce seja o vencedor.");
     gotoxy(31,11);printf("TECLAS DE JOGO");
     gotoxy(48,12);printf("%c",191);
     gotoxy(25,13);printf("Player 1:  Cima: %c8%c   %c",34,34,179);
     gotoxy(35,14);printf("Baixo: %c5%c   %cTeclado numerico",34,34,195);
     gotoxy(32,15);printf("Esquerda: %c4%c   %c",34,34,179);
     gotoxy(33,16);printf("Direito: %c6%c   %c",34,34,217);
     gotoxy(25,18);printf("Player 2:  Cima: %cW%c",34,34);
     gotoxy(35,19);printf("Baixo: %cS%c",34,34);
     gotoxy(32,20);printf("Esquerda: %cA%c",34,34);
     gotoxy(33,21);printf("Direito: %cD%c",34,34);
     getch();
     system("cls"); 
     goto men;
     }
if(o_==3){
     creditos();
     gotoxy(25,10);printf("Presione qualquer tecla para regressar ao menu");
     getche();
     system("cls");
     goto men;
     }   
if(o_==4) goto exit;                         

getch();
exit:return 0;
}
