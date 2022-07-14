#include <unistd.h>

void ft_is_negative(int n){
    char po = 'P';
    char ne = 'N';
    if(n> 0 ){
        write(1,&po,1);
    }if(n < 0){
        write(1,&ne,1);
    }
}
void main() {
    ft_is_negative(-1);
}