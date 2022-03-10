#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>
#include "data.h"

    //ally
    DATA man={"���t", "\n���H�w�p�ѹ꭫�����q�A���U�����H���ݦn�������C�~�A�åB���O�`�p�C\n\n����: <<���s�Q�K�x>>\t�Z��: <<�L>>", 800, 600, 300, 500, 100};
    DATA woman={"���e", "\n�����a���ѤU�B�o�������A�ʮ�j�F��ǡC\n\n����: <<���^���C�x>>\t�Z��: <<�¡C������>>", 800, 300, 500, 400, 100};
    DATA east={"���Įv", " ", 2000, 500, 12000, 2000, 1000};
    DATA dou={"���u�йD�h", " ", 1000, 100, 100, 250, 100};
    DATA north={"�x�C��", " ", 2000, 1000, 0, 2000, 1000};
    DATA middle={"�P�B�q", " ", 2000, 200, 500, 1500, 0};
    DATA beggar={"�����S��", " ", 1000, 100, 0, 200, 50};
    DATA masterdou={"�C�u�H", " ", 2000, 1000, 12000, 2000, 1000};
    DATA ally={"���~�j�L", " ", 2000, 500, 12000, 2000, 1000};
    //NPC
    DATA battle={" ", " ", 0, 0, 0, 0, 0};
    //bad guys
    DATA boss={"���d", " ", 2000, 10000, 20000, 900, 0};
    DATA badguy={"���бЮ{", " ", 1000, 300, 700, 200, 0};
    DATA west={"�ڶ��W", " ", 1500, 600, 300, 1500, 0};
    DATA virgin={"�����T", " ", 1200, 400, 1000, 700, 0};
    //civilians
    DATA civilian={"����", " ", 500, 200, 500, 100, 0};
    DATA weaponseller={"�Z��������", " ", 500, 1000, 10000, 200, 0};
    //items
    DATA red_envolope={"�� �B �� �]", " ", 200, 0, 300, 100, 100};
    DATA paperman={"�� �� �H", " ", 100, 0, 200, 100, 50};
    DATA deadbody={"�� ��", " ", 300, 0, 500, 200, 100};

    DATA kongfu={"�� �D", " " ,200, 0, 300, 200, 50};
    DATA medi={"�P ��", " ", 200, 0, 300, 300, 100};

char a[20][50]={};  //map a
char b[20][50]={};  //map b
int n=0;    //dice
int track=0;    //�����B��


int main()
{
    char c, cin/*��L��J*/;
    int i, j, main_charac/*�����D��*/;

    FILE *ptr;
    srand(time(NULL));
/*
    //game instructions
    printf("�бN��r�վ㦨12�A�ÿ�̤ܳj�Ƶ����A�A�в��������ù��A�H�F��}�n���C������A�p�����D�аѷӻ�����\n\n\n");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("CLS");

    //title
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\title.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("CLS");

    //�﨤
    LOOP1: do
    {
        system("CLS");
        printf("�п�ܨ���(���U): M: ���t\tW: ���e\n\n\n");
        printf("----------------------------------------------------------------------\n\n\n");
        display_characters ();

        cin=getch();
        tolower(cin);
        system("CLS");
        if (cin == 109)
        {
            print_man();
            printf("\n\n\n\n��^(�Ы�N)\t\t�}�l�C��(�Ы�Y)\n\n");
            cin=getch();
            tolower(cin);
            if (cin == 121)
            {
                main_charac = 1;
                break;
            }
            else
                goto LOOP1;
        }
        else if (cin == 119)
        {
            print_woman();
            printf("\n\n\n\n��^(�Ы�N)\t\t�}�l�C��(�Ы�Y)\n\n");
            system("pause");
            system("CLS");
            printf("�ХI�O�H���ꨤ��A�ԲӶ״ڸ�T�ШӫH: 410587031@gmail.com\n\n\n\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            goto LOOP1;

        }
    }while (1);
    system("CLS");
*/
    //intro
    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\intro.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("CLS");

/*
    print_temple();
    printf("\n\n\n");
    Sleep(1000);
    system("CLS");

    //intro 2
    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\intro 2.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("CLS");

    //game start

    LOOP_map: do
    {
        track = map(track, n);  //special use
        printf("@: ���u��\t\t\tX: ���w�a\n\n\n\n\n");
        printf("�B��: %d", track);
        printf("\n\n\n\n\n\n<< �� �U D �Y �� �l >>\n\n\n");
        printf("\n\n\n\n\n%s\t\t�ͩR: %d\t\t�W�n: %d\t\t�]�I: %d\t\t�����O: %d\t\t\t�^�_�O: %d", man.name, man.HP, man.repu, man.wealth, man.attack, man.heal);
        cin=getch();
        tolower(cin);
        system("CLS");
        if (cin == 100)
        {
            n = (rand()%10+1);  //n=1~10
            mission_page (n);
            printf("%s\t\t�ͩR: %d\t\t�W�n: %d\t\t�]�I: %d\t\t�����O: %d\t\t\t�^�_�O: %d\n\n\n\n\n\n\n", man.name, man.HP, man.repu, man.wealth, man.attack, man.heal);
            system("pause");
            system("CLS");
        }

        if (track >= 80)   //boss
        {
            conversation_boss();
            goto END;
        }


    }while (1);

    END:
        print_conti();
        */
}