#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>
#include "data.h"

void mission_page (int n)
{
    srand(time(NULL));

    int a;

    printf("<< �� �e %d �B >>\n\n\n\n\n\n\n\n\n\n", n);
    switch (n)
    {
        case 2:  case 5: case 7:                 //civilian
        {
            printf("�J �� �� �� �� �n �� �U ...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            system("pause");    system("CLS");
            conversation_civilian();
            system("pause");    system("CLS");  break;
        }
        case 3: case 8:         //ally
        {
            printf("�J �� �j �L �� �U ...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            system("pause");    system("CLS");
            conversation_ally();
                system("CLS");  break;
        }
        case 1:                //weapon seller
        {
            printf("�n �� �� �H �b �� �� �� ...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            system("pause");    system("CLS");
            conversation_store();
            system("pause");    system("CLS");  break;
        }
        case 4: case 6: case 9:  case 10:        //items
        {
            a = (rand()%5+1);
            printf("�a �W �n �� �� �� �� �F �� ...\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            system("pause");    system("CLS");
            conversation_items(a);
            system("pause");    system("CLS");  break;
        }
    }

}

