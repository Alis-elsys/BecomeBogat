#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>

void arrowhere(int realPosition, int arrowPosition);

void menu(){
    system("cls");

    int position = 1;
    int keyPressed = 0;

    if(keyPressed = 13 && position == 1){
        system("cls");


    }else if(keyPressed = 13 && position == 2){
        system("cls");

    }else if(keyPressed = 13 && position == 3){
        system("cls");
    
    }else if(keyPressed = 13 && position == 4){
        return;
    }
       char title[][] = {"
            $$\                         $$\       $$\                                      $$\     
            $$ |                        \__|      $$ |                                     $$ |    
 $$$$$$$\ $$$$$$\    $$$$$$\  $$$$$$$\  $$\       $$$$$$$\   $$$$$$\   $$$$$$\   $$$$$$\ $$$$$$\   
$$  _____|\_$$  _|   \____$$\ $$  __$$\ $$ |      $$  __$$\ $$  __$$\ $$  __$$\  \____$$\\_$$  _|  
\$$$$$$\    $$ |     $$$$$$$ |$$ |  $$ |$$ |      $$ |  $$ |$$ /  $$ |$$ /  $$ | $$$$$$$ | $$ |    
 \____$$\   $$ |$$\ $$  __$$ |$$ |  $$ |$$ |      $$ |  $$ |$$ |  $$ |$$ |  $$ |$$  __$$ | $$ |$$\ 
$$$$$$$  |  \$$$$  |\$$$$$$$ |$$ |  $$ |$$ |      $$$$$$$  |\$$$$$$  |\$$$$$$$ |\$$$$$$$ | \$$$$  |
\_______/    \____/  \_______|\__|  \__|\__|      \_______/  \______/  \____$$ | \_______|  \____/ 
                                                                      $$\   $$ |                   
                                                                      \$$$$$$  |                   
                                                                       \______/                    
"};
        for(int i = 0; i < sizeof(title)/sizeof(title[0]); i++){
            printf("%s\n", title[i]);
        }
    
        printf("\n\n\n");
        arrowhere(1, position);printf("|| START GAME\n");
        arrowhere(2, position);printf("|| ADD QUESTION\n");
        arrowhere(3, position);printf("|| CHANGE AN EXSISTING QUESTINO\n");
        arrowhere(4, position);printf("|| EXIT\n");

        keyPressed = getch();
        
        if(keyPressed == 00 && position != 4){
            position ++;
        }else if(keyPressed == 72 && position != 1){
            position--;
        }else{
            position == position;
        }

    printf("THE USER SELECT OPTION %d\n",position);
}

void arrowhere(int realPosition, int arrowPosition){
    if(realPosition == arrowPosition){
        printf(" >> ");
    }else{
        printf("    ");
    }
}


int main(){
       menu();
       return 0;
}