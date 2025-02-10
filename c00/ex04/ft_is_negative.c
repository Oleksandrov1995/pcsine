#include <unistd.h>
void ft_is_negative(int n){
    if (n < 0)
    {
        write(1, "N", 1); 
    }
    else
    {
        write(1, "P", 1); 
    }
}
int main(void)
{
    ft_is_negative(-5);  // Очікується 'N'
    ft_is_negative(0);   // Очікується 'P'
    ft_is_negative(42);  // Очікується 'P'
    return 0;
}