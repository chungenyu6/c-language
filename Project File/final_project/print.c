#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>
#include "data.h"

void display_characters ()
{
    extern DATA man;
    extern DATA woman;

    puts(man.name);
    printf("\n");
    puts(man.intro);
    printf("\n");
    printf("HP:\t%d\n",man.HP);
    printf("�n��:\t%d\n",man.repu);
    printf("�]�I:\t%d\n",man.wealth);
    printf("�����O:\t%d\n",man.attack);
    printf("�^�_�O:\t%d\n",man.heal);
    printf("\n\n\n\n");                         //���H
    puts(woman.name);
    printf("\n");
    puts(woman.intro);
    printf("\n");
    printf("HP:\t%d\n",woman.HP);
    printf("�n��:\t%d\n",woman.repu);
    printf("�]�I:\t%d\n",woman.wealth);
    printf("�����O:\t%d\n",woman.attack);
    printf("�^�_�O:\t%d\n",woman.heal);
    printf("\n\n\n\n");
}
void print_man()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\���s�Q�K�x.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�H��\\man.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    printf("\n\n\n");
}
void print_woman()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\���^���C�x.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�H��\\woman.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    printf("\n\n\n");
}
void print_badguy()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�ʤ۳���.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�H��\\badguy.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    printf("\n\n\n");
}
void print_ally()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�ʦ��[��.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�H��\\ally.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    printf("\n\n\n");
}
void print_boss()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�I�����.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�H��\\boss.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    printf("\n\n\n");
}

void print_temple()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\���u��.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�H��\\temple.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
}
void print_town()
{

    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�|�B�ۤ�������.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�H��\\town.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    printf("\n\n\n");
}
void print_store()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�Z����.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�H��\\store.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    printf("\n\n\n");
}
void print_mountain()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�~�J�_�ۥP��.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�H��\\mountain.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    printf("\n\n\n");
}
void print_final()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�T�Ӥ��.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\���Фj����J�f.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Sleep(1000);
    system("CLS");

    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�H��\\final.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    printf("\n\n\n");
}

void print_endgame()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�z����Y.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("CLS");
}
void print_conti()
{
    char c;
    int i, j;
    FILE *ptr;

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\��������.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    system("pause");
    system("CLS");
}
