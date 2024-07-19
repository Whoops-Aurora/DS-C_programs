#include <conio.h>
int main()
{
int ch1, ch2;
printf("PRESS A KEY TO CONTINUE \n");
ch1 = getch();
ch2 = 0;
    if (ch1 == 0xE0)
        {
        ch2 = getch();

            switch(ch2)
                {
                    case 72:
                        printf("UP WAS PRESSED\n");
                        break;
                    case 80:
                        printf("DOWN WAS PRESSED\n");
                        break;
                    case 75:
                        printf("LEFT WAS PRESSED\n");
                        break;
                    case 77:
                        printf("RIGHT WAS PRESSED\n");
                        break;

                    default:
                        printf("SOME OTHER SCROLL KEY PRESSED: %d %d\n", ch1, ch2); break;
                };
        }
    else
        printf("key pressed: %d %c\n", ch1, ch2);
    system("pause");
    return 0;
}
