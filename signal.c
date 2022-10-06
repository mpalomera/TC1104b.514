#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void hola(int signalNumb){
    printf("Recibi la senal %d",signalNumb);

}
int cond;
void terminarWhile(int sigNumber){
    printf("Terminando while");
    cond = 0;
}
int main(){
    signal(12,terminarWhile);
    signal(2,hola);
    cond = 1;
    while(cond == 1){
        printf("trabajando\n");
        sleep(1);
    }
    printf("Aqui nunca llega");
    return 0;
}