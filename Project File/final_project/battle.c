#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>
#include "data.h"

void battle_badguy()
{
    extern DATA man, badguy, battle;
    int cin;

    battle = badguy;    //�a�H����ƭȦ^�_

    LOOP_battle: do
    {
        system("CLS");
        printf("%s:\n\n�ͩR: %d\t\t�����O: %d\t\t\t�^�_�O: %d", battle.name, battle.HP, battle.attack, battle.heal);
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\n\n\n\n\n%s:\n\n�ͩR: %d\t\t�����O: %d\t\t\t�^�_�O: %d", man.name, man.HP, man.attack, man.heal);
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("------------------------------------------------------------------------------------------------\n\n\n");
        printf("1. �� ��\t\t2. �^ �_\t\t3. �k �] ");
        cin = getch();
        if (cin == '1')
        {
            system("CLS");
            print_man();
            Sleep(1000);
            system("CLS");
            print_badguy();
            Sleep(1000);
            system("CLS");
            man.HP -= battle.attack;
            battle.HP -= man.attack;
        }
        else if (cin == '2')
        {
            system("CLS");
            printf("�B �_ �� �\  �E �� �u ��A�� �� �� �R ��\n\n\n�� �R + %d\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", man.heal);
            system("pause");
            man.HP += man.heal;
            goto LOOP_battle;
        }
        else if (cin == '3')
        {
            system("CLS");
            printf("�} �@ �� �O�A�� �� �\  �@ �� < �� �� �L �� >�A�a �� �� �h ...\n\n\n�W �n - 50\n\n\n\n\n\n\n\n\n\n\n\n");
            /*ptr_HP = &man.HP;
            *ptr_HP -= 50;*/    //�O�d�H���X���D
            man.repu -= 50;
            break;
        }

        if (battle.HP <= 0)
        {
            printf("�� �� �w �L �� �R �� �H...\n\n\n\n\n�W�n: +300\t\t�]�I: +700\n\n\n");
            man.repu += 300;
            man.wealth += 700;
            break;
        }
        else if (man.HP <= 0)
        {
            print_endgame();
            man.HP=200;man.repu=200;man.wealth=200;man.attack=200;man.heal=200;
            break;
        }
    }while (1);
}

void battle_ally()
{
    extern DATA man, ally, battle;
    int cin;

    battle = ally;

    LOOP_battle: do
    {
        system("CLS");
        printf("%s:\n\n�ͩR: %d\t\t�����O: %d\t\t\t�^�_�O: %d", battle.name, battle.HP, battle.attack, battle.heal);
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\n\n\n\n\n%s:\n\n�ͩR: %d\t\t�����O: %d\t\t\t�^�_�O: %d", man.name, man.HP, man.attack, man.heal);
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("------------------------------------------------------------------------------------------------\n\n\n");
        printf("1. �� ��\t\t2. �^ �_\t\t3. �k �] ");
        cin = getch();
        if (cin == '1')
        {
            system("CLS");
            print_man();
            Sleep(1000);
            system("CLS");
            print_ally();
            Sleep(1000);
            system("CLS");
            man.HP -= battle.attack;
            battle.HP -= man.attack;
        }
        else if (cin == '2')
        {
            system("CLS");
            printf("�B �_ �� �\ �E �� �u ��A�� �� �� �R ��\n\n\n�� �R + %d\n\n\n\n\n\n\n\n\n", man.heal);
            system("pause");
            man.HP += man.heal;
            goto LOOP_battle;
        }
        else if (cin == '3')
        {
            system("CLS");
            printf("�} �@ �� �O�A�� �� �\  �@ �� < �� �� �L �� >�A�a �� �� �h ...\n\n\n�W �n - 300\n\n\n\n\n");
            /*ptr_HP = &man.HP;
            *ptr_HP -= 50;*/    //�O�d�H���X���D
            man.repu -= 300;
            break;
        }

        if (battle.HP <= 0)
        {
            printf("�� �� �w �L �� �R �� �H...\n\n\n\n\n�W�n: -500\t\t�]�I: +1000\n\n\n");
            man.repu -= 500;
            man.wealth += 1000;
            break;
        }
        else if (man.HP <= 0)
        {
            print_endgame();
            man.HP=200;man.repu=200;man.wealth=200;man.attack=200;man.heal=200;
            break;
        }
    }while (1);
}

void battle_boss()
{
    extern DATA man, boss;
    int cin;
    char c;
    FILE *ptr;

    LOOP_battle: do
    {
        system("CLS");
        printf("%s:\n\n�ͩR: %d\t\t�����O: %d\t\t\t�^�_�O: %d", boss.name, boss.HP, boss.attack, boss.heal);
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("\n\n\n\n\n%s:\n\n�ͩR: %d\t\t�����O: %d\t\t\t�^�_�O: %d", man.name, man.HP, man.attack, man.heal);
        printf("\n\n\n\n\n\n\n\n\n\n");
        printf("------------------------------------------------------------------------------------------------\n\n\n");
        printf("1. �� ��\t\t2. �^ �_\t\t");
        cin = getch();
        if (cin == '1')
        {
            system("CLS");
            print_man();
            Sleep(1000);
            system("CLS");
            print_boss();
            Sleep(1000);
            man.HP -= boss.attack;
            boss.HP -= man.attack;
        }
        else if (cin == '2')
        {
            system("CLS");
            printf("�B �_ �� �\ �E �� �u ��A�� �� �� �R ��\n\n\n�� �R + %d\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", man.heal);
            system("pause");
            man.HP += man.heal;
            goto LOOP_battle;
        }

        if (boss.HP <= 0)
        {
            printf("�� �� �w �L �� �R �� �H...\n\n\n\n\n�W�n: +%d\t\t�]�I: +%d\n\n\n\n\n\n\n", boss.repu, boss.wealth);
            man.repu += boss.repu;
            man.wealth += boss.wealth;

            system("pause");
            system("CLS");
            ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\��ӹ��.txt", "r");
            while ((c=getc(ptr)) != EOF)
            {
                printf("%c", c);
            }
            fclose(ptr);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("CLS");
            break;
        }
        else if (man.HP <= 0)
        {
            print_endgame();
            man.HP=200;man.repu=200;man.wealth=200;man.attack=200;man.heal=200;
            break;
        }
    }while (1);
}
