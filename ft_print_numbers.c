#include <unistd.h>
void ft_print_numbers(void){
    char ch ='1';
    while (ch <= '9'){
        write(1, &ch, 1);
        ch++;
    }
}
void main(){
    ft_print_numbers();
}