#include <main.h>

/*
* main : Prints the alphabet in lowercase 10 times followed by a new line
*
* Return : Always 0
*/
int main() {
    char alphabet[270] = "abcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\nabcdefghijklmnopqrstuvwxyz\n";
    int i;
    for (i = 0; i < 270; i++)
    {
        putchar(alphabet[i]);
    }
    putchar('\n');
    return(0);
}
