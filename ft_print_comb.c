#include <unistd.h>

void ft_putchar(char c){
    write(1,&c,1);
}
void ft_print_comb(void){
    char first;
    char second;
    char third;

    first ='0';
    while(first <= '7'){

        second = first+1;

        while (second <= '8')
        {
            third = second + 1;

            while(third <= '9'){
                ft_putchar(first);
                ft_putchar(second);
                ft_putchar(third);
                third++;
            }
            second++;
        }
        first++;
    }
}
int main(){
    ft_print_comb();
    return 0;
}