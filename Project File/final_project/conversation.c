#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#include <windows.h>
#include "data.h"

int conversation_civilian()
{
    extern DATA man;
    int cin, *ptr_HP, *ptr_repu, *ptr_wealth, *ptr_attack, *ptr_heal;
    char c;
    FILE *ptr;

    print_town();
    system("pause");
    system("CLS");
    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�������.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    LOOP: do
    {
        printf("\n\n\n\n\n\n\n1. ��������\t2. ���U����\t3. �k�]\n\n\n\n\n");
        cin = getch();
        if (cin == '1')
        {
            system("CLS");
            print_man();
            system("pause");
            system("CLS");
            printf("�� �� �H �� �� ���A�� �� �S �� �X �� �� �� �A �� �� �X �� �� �`...\n\n\n\n\n�W�n - 500\t\t�]�I + 100\n\n\n");
            ptr_repu = &man.repu;       //���ܤH���Ѽ�
            *ptr_repu -= 500;
            ptr_wealth = &man.wealth;
            *ptr_wealth += 100;
            break;
        }
        else if (cin == '2')
        {
            battle_badguy();
            break;
        }
        else if (cin == '3')
        {
            system("CLS");
            printf("�} �@ �� �O�A�� �� �\  �@ �� < �� �� �L �� >�A�a �� �� �h ...\n\n\n�W �n - 50\n\n\n\n\n");
            ptr_repu = &man.repu;       //���ܤH���Ѽ�
            *ptr_repu -= 50;
            break; break;
        }
    }while (1);

    //return �ƭ�
}

int conversation_ally()
{
    extern DATA man;
    int cin, *ptr_HP, *ptr_repu, *ptr_wealth, *ptr_attack, *ptr_heal;
    char c;
    FILE *ptr;

    system("CLS");
    print_mountain();
    system("pause");
    system("CLS");
    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�j�L���.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    LOOP: do
    {
        printf("\n\n\n\n\n\n\n1. �����j�L\t2. �������D\t3. �k�]\n\n\n\n\n");
        cin = getch();
        if (cin == '1')
        {
            system("CLS");
            printf("�J �� �j �L �B �n �� �� �Z �\�A�D �� �S �� �� �L �A �� �� �X �� �� �`...\n\n\n\n\n�W�n - 500\n\n\n");
            ptr_repu = &man.repu;       //���ܤH���Ѽ�
            *ptr_repu -= 500;
            system("pause");
            battle_ally();
            break;
        }
        else if (cin == '2')
        {
            system("CLS");
            printf("�j �L �B �n �� �� �Z �\�A�� �\ �j �W\n\n\n\n\n�ͩR + 500\t\t�����O +300\t\t�^�_�O + 100\n\n\n\n\n\n\n\n");
            system("pause");
            ptr_HP = &man.HP;       //���ܤH���Ѽ�
            *ptr_HP += 500;
            ptr_attack = &man.attack;
            *ptr_attack += 300;
            ptr_heal = &man.heal;
            *ptr_heal += 100;
            break;
        }
        else if (cin == '3')
        {
            system("CLS");
            printf("�} �@ �� �O�A�� �� �\  �@ �� < �� �� �L �� >�A�a �� �� �h ...\n\n\n�W �n - 100\n\n\n\n\n");
            system("pause");
            ptr_repu = &man.repu;       //���ܤH���Ѽ�
            *ptr_repu -= 100;
            break;
        }
    }while (1);

}

int conversation_items(int a)
{
    extern DATA man, kongfu, medi, red_envolope, deadbody, paperman;

    switch (a)
    {
    case 1:
        {
            system("CLS");
            printf("�� �� �@ �� �o �{ �� �M �O %s !\n\n\n�����O + %d\n\n\n\n\n\n", kongfu.name, kongfu.attack);
            man.attack += kongfu.attack;
            break;
        }
    case 2:
        {
            system("CLS");
            printf("�� �� �@ �� �o �{ �� �M �O %s !\n\n\n�ͩR - %d\t\t�]�I - %d\t\t�����O - %d\n\n\n\n\n\n", paperman.name, paperman.HP, paperman.wealth, paperman.attack);
            man.HP -= paperman.HP;
            man.wealth -= paperman.wealth;
            man.attack -= paperman.attack;
            break;
        }
    case 3:
        {
            system("CLS");
            printf("�� �� �@ �� �o �{ �� �M �O �� �B �� �] !\n\n\n�ͩR - %d\t\t�]�I - %d\t\t�����O - %d\n\n\n\n\n\n", red_envolope.HP, red_envolope.wealth, red_envolope.attack);
            man.HP -= red_envolope.HP;
            man.wealth -= red_envolope.wealth;
            man.attack -= red_envolope.attack;
            break;
        }
    case 4:
        {
            system("CLS");
            printf("�� �� �@ �� �o �{ �� �M �O %s !\n\n\n�ͩR - %d\t\t�]�I - %d\t\t�����O -%d\n\n\n\n\n\n", deadbody.name, deadbody.HP, deadbody.wealth, deadbody.attack);
            man.HP -= deadbody.HP;
            man.wealth -= deadbody.wealth;
            man.attack -= deadbody.attack;
            break;
        }
    case 5:
        {
            system("CLS");
            printf("�� �� �@ �� �o �{ �� �M �O %s !\n\n\n�ͩR + %d\t\t�^�_�O + %d\n\n\n\n\n\n", medi.name, medi.HP, medi.heal);
            man.HP += medi.HP;
            man.heal += medi.heal;
            break;
        }
    }
}

int conversation_store()
{
    extern DATA man, weaponseller, kongfu, medi;
    int cin, *ptr_HP, *ptr_repu, *ptr_wealth, *ptr_attack, *ptr_heal;
    char c;
    FILE *ptr;

    system("CLS");
    print_store();
    system("pause");
    system("CLS");

    printf("�w �� �� �{ �A �� �� �� �n �� �� �A �� ?\n\n\n\n\n\n\n\n\n\n");
    LOOP: do
    {
        printf("\n\n\n\n\n\n\n1. �������a\t2. �R���D\t3. �R�P��\n\n\n\n\n");
        cin = getch();
        if (cin == '1')
        {
            system("CLS");
            printf("�L �d �� �` �� �� �A �D �L �q �� �� �� !\n\n\n\n\n�W�n - %d\t\t�]�I + %d\n\n\n", weaponseller.repu, weaponseller.wealth);
            man.repu -= weaponseller.repu;
            man.wealth += weaponseller.wealth;
            break;
        }
        else if (cin == '2')
        {
            system("CLS");
            printf("�o �� �Z �L �� �D �A �\ �O �j �W\n\n\n\n\n�����O + %d\t\t�]�I - %d\n\n\n\n\n\n", kongfu.attack, kongfu.wealth);
            man.attack += kongfu.attack;
            man.wealth -= kongfu.wealth;
            break;
        }
        else if (cin == '3')
        {
            system("CLS");
            printf("�o �� �P �� �� �� �A �� �� �� �R �M �^ �_\n\n\n\n\n�ͩR +%d\t\t�^�_�O +%d\t\t�]�I -%d\n\n\n\n\n\n", medi.HP, medi.heal, medi.wealth);
            man.HP += medi.HP;
            man.heal += medi.heal;
            man.wealth -= medi.wealth;
            break;
        }
        system("pause");
    }while (1);
}

int conversation_boss()
{
    extern DATA man;
    int cin, *ptr_HP, *ptr_repu, *ptr_wealth, *ptr_attack, *ptr_heal;
    char c;
    FILE *ptr;

    print_final();
    system("pause");
    system("CLS");
    ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\���d���.txt", "r");
    while ((c=getc(ptr)) != EOF)
    {
        printf("%c", c);
    }
    fclose(ptr);

    LOOP: do
    {
        printf("\n\n\n1. �� �� �� �d\t\t\t2. �[ �J �� ��");
        cin = getch();
        if (cin == '1')
        {
            system("CLS");
            printf("�� �t : �� �� �o �� �A�� �� �� �� �k �H �A �@ �M �� �U �a !\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
            system("pause");
            system("CLS");
            battle_boss();
            break;
        }
        else if (cin == '2')
        {
            system("CLS");
            ptr = fopen("E:\\�ҷ~\\1�W �{���]�p\\Final Project\\Final Project File\\�q�k���.txt", "r");
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

    }while (1);
}
