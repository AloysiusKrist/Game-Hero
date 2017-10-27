#include <stdio.h>
#include <stdlib.h>

struct data
{
    int pow;
    int att;
    int def;

};

int main()
{
    int mine, yours,pil3;
    struct data player[100];
    player[0].pow=300;player[0].att=50;player[0].def=10;
    player[1].pow=300;player[1].att=45;player[1].def=20;
    player[2].pow=300;player[2].att=30;player[2].def=35;
    player[3].pow=300;player[3].att=35;player[3].def=30;
    player[4].pow=300;player[4].att=10;player[4].def=40;

    printf("\t|Player\t\tNosferatu\tLu Bu\tRika\tRubirium\tCestnut |\n");
    printf("\t|Power\t\t%d\t\t%d\t%d\t%d\t\t%d     |\n", player[0].pow, player[1].pow, player[2].pow, player[3].pow, player[4].pow);
    printf("\t|Attack\t\t%d\t\t%d\t%d\t%d\t\t%d      |\n",player[0].att, player[1].att,player[2].att, player[3].att, player[4].att);
    printf("\t|Defense\t%d\t\t%d\t%d\t%d\t\t%d      |\n",player[0].def, player[1].def,player[2].def, player[3].def, player[4].def);

    printf("\n");
    printf("Time To Pick (1/2/3/4/5)\n");
    printf("Choose your Monster: "); scanf("%d",&mine);
    kedua:
    printf("Your enemy turn to pick: "); scanf("%d",&yours);

    mine=mine-1;
    yours=yours-1;
    if (mine=yours-1)
    {
        printf("Choose Another Hero\n");
        goto kedua;
    }


    while(player[mine].pow > 0 && player[yours].pow > 0)
    {
        system("cls");
        int pil2, pil, kurang, pil3;
        printf("\t|Player\t\tMy Monster\tEnemy's Monster\t|\n");
        printf("\t|Power\t\t%d\t\t%d\t\t|\n", player[mine].pow, player[yours].pow);
        printf("\t|Attack\t\t%d\t\t%d\t\t|\n",player[mine].att, player[yours].att);
        printf("\t|Defense\t%d\t\t%d\t\t|\n",player[mine].def, player[yours].def);
        printf("\nChoose your action: 1)Attack  2)Defend\n");
        printf("Your Turn to Pick: "); scanf("%d",&pil); player[mine].pow=player[mine].pow - 10;
        printf("Enemy is Picking: ");scanf("%d", &pil2); player[yours].pow=player[yours].pow - 10;

        if(pil==1 && pil2==1)
        {
            player[yours].pow = player[yours].pow - player[mine].att;
            player[mine].pow = player[mine].pow - player[yours].att;
        }

        if(pil==1 && pil2==2)
        {
            if(player[mine].att > player[yours].def)
            {
                kurang= player[mine].att - player[yours].def;
                player[yours].pow = player[yours].pow - kurang;
            }
        }

        if(pil==2 && pil2 ==1)
        {
            if(player[mine].def < player[yours].att)
            {
                kurang= player[yours].att - player[mine].def;
                player[mine].pow = player[mine].pow - kurang;
            }
        }
        else
        {
            printf("Nothing Happens");
        }

    }

    system("cls");
    printf("\t|Pemain\t\tSaya\tLawan\t|\n");
    printf("\t|Power\t\t%d\t%d\t|\n", player[mine].pow, player[yours].pow);
    printf("\t|Attack\t\t%d\t%d\t|\n",player[mine].att, player[yours].att);
    printf("\t|Defense\t%d\t%d\t|\n",player[mine].def, player[yours].def);
    if(player[mine].pow <= 0)
        printf("Enemy's Victory!!\n");
    else
        printf("Victory!!\n");
    printf("Permainan Selesai\n\n");

    printf("Shall we have a next match? (1/0) : ");
    scanf("%d",&pil3);
    if (pil3=1)
    {
        return main();
    }
    else if (pil3=0)
    {
        printf("Thanks For The Game");
    }

    return 0;
}

