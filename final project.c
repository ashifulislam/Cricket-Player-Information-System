#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<process.h>
#include<string.h>
#include<conio.h>
struct cricket
{
    char ch,nm[20];
    char tnm[20];
    float averege;
    float strike_rate;
    int balls_faced;
    int numberof_runs_scored,numberof_innings_batted,numberof_not_outs;
    char bowling_nm[20];
    char bowling_tnm[20];
    int wickets;
    float bowling_eco;
    int total_bowled;
    int allowd_runs;
    char nickname[20];
    char bat_style[20];
    char bowl_style[20];
    int year;
    char month[20];
    int age;
    int current_year;
    int bowling_year;
    char bowling_month[20];
    int bowling_age;
    int bowling_current_year;
    int wicket_taken;
    float bowling_averege;
    char bowling_nickname[20];
    char bowling_bowl_style[20];
    int wickets_taken;
    int total_innings;

}player;
void batting_information();
void show_for_batsman_information();
void  bowling_information();
void show_for_a_bowler_information();
void search_for_a_batsman_information_by_his_name();
void search_for_a_batsman_by_his_team_name();
void search_for_a_bowler_information_by_his_name();
void search_for_a_bowler_information_by_his_team_name();
void screen_header();
void introduction();
void menu();
void after_menu();
void player_information();
void player_information_1();
void delete_for_a_batsman();
void delete_for_a_bowler();
void update_for_a_batsman_statistics();
void update_for_a_bowling_statistics();
void A_pass_c();
int number;
int main()
{
system("color 5f ");
introduction();
menu();
player_information();
player_information_1();

after_menu();

  return 0;
}
void player_information()
{
    int a;
    printf("\n\t\t\t\t\xB2\xB2\xB2\xB2 Welcome to user pannel \xB2\xB2\xB2\xB2 \n\n");
    puts("\t\t\t ===================================================================\n");
    puts("  \xB2\xB2\xB2\xB2 1. show for a batsman.\n");
    puts("  \xB2\xB2\xB2\xB2 2. show for a bowler.\n");
    puts("  \xB2\xB2\xB2\xB2 3. Search for a Batsman  information by his name.  \n");
    puts("  \xB2\xB2\xB2\xB2 4. Search for a Batsman  information by his team name.  \n");
    puts("  \xB2\xB2\xB2\xB2 5. Search for a Bowler  information by his name.  \n" );
    puts("  \xB2\xB2\xB2\xB2 6. Search for a Bowler  information by his team name.  \n" );
    puts("  \xB2\xB2\xB2\xB2 7. admin pannel    \n");
    puts("  \xB2\xB2\xB2\xB2 8.Back to main menu.    \n");
    puts("  \xB2\xB2\xB2\xB2 9.exit.    \n");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Enter your choice : ");
    scanf("%d",&a);
    switch(a){
case 1:
    system("cls");
    show_for_batsman_information();
    break;
case 2:
    system("cls");
    show_for_a_bowler_information();
    break;
case 3:
    system("cls");
    search_for_a_batsman_information_by_his_name();
break;
case 4:
    system("cls");
    search_for_a_batsman_by_his_team_name();
break;
case 5:
    system("cls");
    search_for_a_bowler_information_by_his_name();
    break;
case 6:
    system("cls");
    search_for_a_bowler_information_by_his_team_name();
    break;
    case 7:
    system("cls");
    player_information_1();
    break;
case 8:
    system("cls");
    menu();
    break;
case 9:
    system("cls");
    exit(0);
    break;
}
}
void player_information_1()
{
   A_pass_c();
   int a;
    printf("\n\t\t\t\t\xB2\xB2\xB2\xB2 Welcome to admin  pannel \xB2\xB2\xB2\xB2 \n\n");
    puts("\t\t\t ===================================================================\n");
    puts("  \xB2\xB2\xB2\xB2 1. input for Batsman. \n");
    puts("  \xB2\xB2\xB2\xB2 2. input for bowler.  \n");
    puts("  \xB2\xB2\xB2\xB2 3. Delete for a batsman information  \n" );
    puts("  \xB2\xB2\xB2\xB2 4. Delete for a bowler information  \n" );
    puts("  \xB2\xB2\xB2\xB2 5. Update for a batsman statistics  \n" );
    puts("  \xB2\xB2\xB2\xB2 6. Update for a bowler statistics  \n" );
    puts("  \xB2\xB2\xB2\xB2 7. Back to main menu.    \n");
    puts("  \xB2\xB2\xB2\xB2 8. Go to user panel    \n");
    puts("  \xB2\xB2\xB2\xB2 9. exit.    \n");
    printf("\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Enter your choice : ");
    scanf("%d",&a);
    switch(a){
case 1:
    system("cls");
    batting_information();
    break;
case 2:
    system("cls");
    bowling_information();
    break;
case 3:
    system("cls");
    delete_for_a_batsman();
    break;
case 4:
    system("cls");
    delete_for_a_bowler();
    break;
case 5:
    system("cls");
    update_for_a_batsman_statistics();
    break;
case 6:
    system("cls");
     update_for_a_bowling_statistics();
     break;
case 7:
    system("cls");
    menu();
    break;
case 8:
    system("cls");
    player_information();
case 9:
    system("cls");
    exit(0);
    break;
}
}
void screen_header()
{
    printf("\n                                             \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  ");
    printf("\n                                             \xB2\xB2                          \xB2\xB2                                                                                ");
    printf("\n                                             \xB2\xB2       WELCOME TO MY      \xB2\xB2                                                                                ");
    printf("\n                                             \xB2\xB2                          \xB2\xB2                                                                                ");
    printf("\n                                             \xB2\xB2       CRICKET PLAYER     \xB2\xB2                                                                                ");
    printf("\n                                             \xB2\xB2                          \xB2\xB2                                                                                ");
    printf("\n                                             \xB2\xB2       INFORMATON POJECT  \xB2\xB2                                                                                ");
    printf("\n                                             \xB2\xB2                          \xB2\xB2                                                                                ");
    printf("\n                                             \xB2\xB2                          \xB2\xB2                                                                                ");
    printf("\n                                             \xB2\xB2                          \xB2\xB2                                                                                ");
    printf("\n                                             \xB2\xB2                          \xB2\xB2                                                                                ");
    printf("\n                                             \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");

}
void introduction()
{
    printf("                               WELCOME TO YOU...........                                                    \n\n ");
    printf("         Cricket is a bat-and-ball game played between two teams of eleven players each on a cricket field.    \n  ");
    printf("                     who dose not like playing cricket?                                                        \n ");
    printf("         There are many part in a cricket information software.....something like that a player information live score,shedule,news, \n");
    printf("         live score,schedule,news,series,stories,teams,videos,photos,ranking and more..insha allah i will complete a full software in future.\n");
    printf("         At now i have finished a part of cricket information software..Like that a player information using c programming language...\n");
    printf("         So a for now my c project is cricket player information..\n");
    int g;
    printf("do you want to next step? please press 1 \n");
    scanf("%d",&g);
    if(g==1)
    {
        system("cls");
      // screen_header();
    }
    else
    {
        exit(0);
    }
}
void menu()
{
    printf("\n                      =========================================                  \n");
    printf("\n                      ===                                   ===                  \n");
    printf("\n                      ===            press1.Menu            ===                  \n");
    printf("\n                      ===                                   ===                  \n");
    printf("\n                      =========================================                  \n");
    int v;
    printf("Please click 1 for menu and see what do you want  \n");
    scanf("%d",&v);
    if(v==1)
    {
        system("cls");
        after_menu();
    }
    else
    {
        exit(0);
    }

}
void after_menu()
{
    printf("\n                                             \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  ");
    printf("\n                                             \xB2\xB2    press 1.players information \xB2\xB2                                                                                                  ");
    printf("\n                                             \xB2\xB2    press 2.schedule            \xB2\xB2                                                                                                  ");
    printf("\n                                             \xB2\xB2                                \xB2\xB2                                                                                                  ");
    printf("\n                                             \xB2\xB2    press 3.news                \xB2\xB2                                                                                                  ");
    printf("\n                                             \xB2\xB2                                \xB2\xB2                                                                                                  ");
    printf("\n                                             \xB2\xB2    press 4.photos              \xB2\xB2                                                                                                  ");
    printf("\n                                             \xB2\xB2    press 5.ranking             \xB2\xB2                                                                                                  ");
    printf("\n                                             \xB2\xB2                                \xB2\xB2                                                                                                  ");
    printf("\n                                             \xB2\xB2    press 6.series              \xB2\xB2                                                                                                  ");
    printf("\n                                             \xB2\xB2    press 7.videos              \xB2\xB2                                                                                                  ");
    printf("\n                                             \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n");
    int q;
    printf("you can only see player information so please click 1 :\n");
    scanf("%d",&q);
    if(q==1)
    {
        system("cls");
        screen_header();
        player_information();
       // Log_in_and_reg();


    }
    else if(q==2 || q==3 || q==4 || q==5 || q==6 || q==7 || q==8 || q==9)
    {
       printf("oh no you press wrong number please click the write number and show any players information:\n");
    }
    after_menu();
}
void batting_information()
{
    int i;
    int n;
    printf("how many batsman information you want to know:\n");
    scanf("%d",&n);
    FILE *bat;

    for(i=0; i<n; i++)
    {
        printf("ENTER THE BATTING PLAYER NAME %d :\n",i+1);


    char name[30];

    int d;
    scanf("%s",name);
    d = chkPlayer(name);
        if(d==1){
            printf("player exist please try with another one or update details."); break;
        }else{
            strcpy(player.nm,name);
        printf("ENTER THE BATTING TEAM NAME PLAYER NO %d :\n",i+1);
        scanf("%s",player.tnm);
        printf("ENTER THE BORN YEAR PLAYER NO %d :\n",i+1);
        scanf("%d",&player.year);
        printf("ENTER THE BORN MONTH PLAYER NO %d :\n",i+1);
        scanf("%s",&player.month);
        printf("ENTER THE NICK NAME PLAYER NO %d :\n",i+1);
        scanf("%s",player.nickname);
        printf("ENTER THE BAT STYLE PLAYER NO %d :\n",i+1);
        scanf("%s",player.bat_style);
        printf("ENTER THE NUMBER OF TOTAL RUN SCORES OF BATTING PLAYER'S %d :\n",i+1);
        scanf("%d",&player.numberof_runs_scored);
        printf("ENTER THE NUMBER INNINGS BATTED PLAYER %d :\n",i+1);
        scanf("%d",&player.numberof_innings_batted);
        printf("ENTER THE NUMBER OF NOT OUT A PLAYER %d:\n",i+1);
        scanf("%d",&player.numberof_not_outs);
        printf("PLEASE INPUT FOR SOME INFORMATION FOR STRIKE RATE:\n");
        printf("PLEASE ENTER THE TOTAL NUMBER HOW HE  FACED THE BATSMAN NO %d :\n",i+1);
        scanf("%d",&player.balls_faced);
        player.current_year=2017;
        player.age=player.current_year-player.year;

        player.averege= (float)player.numberof_runs_scored/(float)(player.numberof_innings_batted - player.numberof_not_outs);
        player.strike_rate=(float)(player.numberof_runs_scored/(float)player.balls_faced)*100;
            bat=fopen("batting.txt","a");
fwrite(&player,sizeof(player),1,bat);
fclose(bat);
        }
}

        int a;
        printf("do you want to continue..press 1  or for exit press 0\n");
        scanf("%d",&a);
        if(a==1)
        {
           system("cls");

        player_information_1();
        }
        else
        {
             system("cls");
            exit(0);
        }




}

void show_for_batsman_information()
{

    FILE *fp2;
    fp2=fopen("batting.txt","r");
    int x;
    printf("                                    PLAYER PROFILE                                  \n");
    printf("                                   ================                                  \n \n");
    printf("BATSMAN NAME        TEAM NAME       YEAR        MONTH         AGE      NICKNAME         BAT STYLE      \n");
    printf("==============      ==========      =====       =====         ===      ==========       =========     \n");

    while(fread(&player,sizeof(player),1,fp2))
    {
printf("%s\t   %s        %d       %s\t%d\t   %s\t  %s\t  \n     ",player.nm,player.tnm,player.year,player.month,player.age,player.nickname,player.bat_style);
    }fclose(fp2);
    printf("\n                              BATTING STATISTICS                                \n");
    printf("================================================================================== \n");
    printf("INNINGS     TOTAL RUNS    NOT OUT   BALL FACED      AVEREGE        STRIKE RATE\n");
    printf("=======     ==========   ========   ==========      =======        ===========\n");
    FILE *fp3;
    fp3=fopen("batting.txt","r");
    while(fread(&player,sizeof(player),1,fp3))
       {
        float averege= (float)player.numberof_runs_scored/(float)(player.numberof_innings_batted - player.numberof_not_outs);
        float strike_rate=(float)(player.numberof_runs_scored/(float)player.balls_faced)*100;
        printf("%d\t\t%d\t  %d\t    %d\t    %.2f\t\t%.2f\t\n",player.numberof_innings_batted,player.numberof_runs_scored,player.numberof_not_outs,player.balls_faced,averege,strike_rate);
}
     fclose(fp3);

    printf("Enter 1 To back main menu...\n");
    scanf("%d",&x);
    if (x==1)
    {
        system("cls");
        screen_header();
      player_information();
    }
}
void search_for_a_batsman_information_by_his_name()
{
    FILE *fp2;
    fp2=fopen("batting.txt","r");
    char nm[50];
    int ch;
     printf("IF YOU WANT TO KNOW ABOUT A BATSMAN INFORMATION PLEASE ENTER THE NAME HERE :\n");
    scanf("%s",nm);
     printf("                                    PLAYER PROFILE                                  \n");
    printf("                                    ================                                  \n \n");
    printf("BATSMAN NAME        TEAM NAME       YEAR        MONTH        AGE       NICKNAME         BAT STYLE      \n");
    printf("==============      ==========      =====       =====        ===       ==========       =========      \n");
    while(fread(&player,sizeof(player),1,fp2))
    {
    if(strcmp(nm,player.nm)==0)
    {
     printf("%s\t    %s\t   %d      %s\t     %d\t         %s        %s\t\n     ",player.nm,player.tnm,player.year,player.month,player.age,player.nickname,player.bat_style);
    }
    }
    fclose(fp2);

    printf("\n                              BATTING STATISTICS                                \n");
    printf("==================================================================================\n");
    printf("INNINGS     TOTAL RUNS    NOT OUT   BALL FACED      AVEREGE        STRIKE RATE\n");
    printf("=======     ==========   ========   ==========      =======        ===========\n");
    FILE *fp3;
    fp3=fopen("batting.txt","r");
    while(fread(&player,sizeof(player),1,fp3))
       {
           if (strcmp(nm,player.nm)==0)
           {
        float averege= (float)player.numberof_runs_scored/(float)(player.numberof_innings_batted - player.numberof_not_outs);
        float strike_rate=(float)(player.numberof_runs_scored/(float)player.balls_faced)*100;
        printf("%d\t\t%d\t  %d\t    %d\t    %.2f\t\t%.2f\t\n",player.numberof_innings_batted,player.numberof_runs_scored,player.numberof_not_outs,player.balls_faced,averege,strike_rate);
}
       }
     fclose(fp3);
           printf("Enter 1 To back main menu...\n");
           scanf("%d",&ch);
           if (ch==1)
        {
         system("cls");
         screen_header();
         player_information();
        }

}
void search_for_a_batsman_by_his_team_name()
{
    char team[20];
    char ch;
    printf("INPUT FOR WHICH TEAM YOU WANT TO LIST : ");
            scanf("%s",team);
            printf("\n                                          %s                \n",team);
            printf("=======================================================================================\n");
    printf("BATSMAN NAME              YEAR        MONTH        AGE       NICKNAME         BAT STYLE      \n");
    printf("==============            =====       =====        ===       ==========       =========      \n");
         FILE *fp4;
    fp4=fopen("batting.txt","r");
     while(fread(&player,sizeof(player),1,fp4))
     {
        if(strcmp(team,player.tnm)==0)
        {
            printf("%s\t            %d    %s\t     %d\t\t  %s\t   \t%s\t\n     ",player.nm,player.year,player.month,player.age,player.nickname,player.bat_style);

        }
     }
     fclose(fp4);

        printf("\n                              BATTING STATISTICS                                \n");
    printf("==================================================================================\n");
    printf("INNINGS     TOTAL RUNS    NOT OUT   BALL FACED      AVEREGE        STRIKE RATE\n");
    printf("=======     ==========   ========   ==========      =======        ===========\n");
      FILE *fp3;
    fp3=fopen("batting.txt","r");
       while(fread(&player,sizeof(player),1,fp3))
       {
           if (strcmp(team,player.tnm)==0)
           {
        float averege= (float)player.numberof_runs_scored/(float)(player.numberof_innings_batted - player.numberof_not_outs);
        float strike_rate=(float)(player.numberof_runs_scored/(float)player.balls_faced)*100;
        printf("%d\t\t%d\t  %d\t    %d\t    %.2f\t\t%.2f\t\n",player.numberof_innings_batted,player.numberof_runs_scored,player.numberof_not_outs,player.balls_faced,averege,strike_rate);
}
       }
     fclose(fp3);
     printf("Enter 1 To back main menu...\n");
           scanf("%d",&ch);
           if (ch==1)
        {
         system("cls");
         screen_header();
         player_information();
        }
}

void bowling_information()
{
    int i,n;
    printf("ENTER THE HOW MANY BOWLER INFORMATION YOU WANT TO KNOW :\n");
    scanf("%d",&n);
     FILE *bowl;
    for(i=0; i<n; i++)
{
        printf("ENTER THE INFORMATION FOR A BOWLER :\n");
        printf("ENTER THE BOWLING NAME %d :\n",i+1);


    char name[30];
    scanf("%s",name);

    int d;
    d = chkbowler(name);
        if(d==1){
            printf("player exist plese try with another one or update details."); break;
        }else{
            strcpy(player.bowling_nm,name);
        printf("ENTER THE TEAM NAME OF BOWLING %d :\n",i+1);
        scanf("%s",player.bowling_tnm);
        printf("ENTER THE BORN YEAR PLAYER NO %d :\n",i+1);
        scanf("%d",&player.bowling_year);
        printf("ENTER THE BORN MONTH PLAYER NO %d :\n",i+1);
        scanf("%s",&player.bowling_month);
        printf("ENTER THE NICK NAME PLAYER NO %d :\n",i+1);
        scanf("%s",player.bowling_nickname);
        printf("ENTR THE BOWL STYLE PLAYER NO %d :\n",i+1);
        scanf("%s",player.bowling_bowl_style);
        printf("ENTER THE TOTAL INNINGS OVER FOR BOWLING %d :\n",i+1);
        scanf("%d",&player.total_innings);
        printf("ENTER THE BOWLING'S TOTAL BOWLED OVER FOR BOWLING %d :\n",i+1);
        scanf("%d",&player.total_bowled);
        printf("ENTER THE BOWLING'S TOTAL RUNS ALLOWD FOR BOWLING %d :\n",i+1);
        scanf("%d",&player.allowd_runs);
        printf("ENTER THE BOWLING'S TOTAL TAKEN WICKET %d : \n",i+1);
        scanf("%d",&player.wickets_taken);
        player.bowling_current_year=2017;
        player.bowling_age=player.bowling_current_year-player.bowling_year;
        player.bowling_averege=(float)player.allowd_runs/(float)player.wickets_taken;
        player.bowling_eco= (float)player.allowd_runs/(float)player.total_bowled ;
        bowl=fopen("bowling.txt","a");

        fwrite(&player,sizeof(player),1,bowl);
        fclose(bowl);
        }
}



        int b;
        printf("do you want to continue..press 1  or for exit press 0\n");
        scanf("%d",&b);
        if(b==1)
        {
           system("cls");
         screen_header();
        player_information_1();
        }
        else
        {
             system("cls");
            exit(0);
        }

}
void show_for_a_bowler_information()
{
    FILE *fp3;
    fp3=fopen("bowling.txt","r");
    int z;
    printf("                                    PLAYER PROFILE                                  \n");
    printf("                                   ================                                  \n \n");
    printf("BOWLER NAME            TEAM NAME         YEAR          MONTH            AGE       NICKNAME        BOWL STYLE      \n");
    printf("==============        ==========        =======      ===========      =======    ==========       ============     \n");

    while(fread(&player,sizeof(player),1,fp3))
    {
        printf("%s\t         %s\t         %d\t        %s\t         %d\t      %s\t      %s\t\n",player.bowling_nm,player.bowling_tnm,player.bowling_year,player.bowling_month,player.bowling_age,player.bowling_nickname,player.bowling_bowl_style);

    }
    fclose(fp3);
    printf("\n                              BOWLING STATISTICS                                \n");
    printf("===============================================================================================\n");
    printf("TOTAL INNINGS     TOTAL RUNS       TOTAL OVER     TOTAL WICKET          ECONOMY         AVEREGE\n");
    printf("==========       ==========     ============        =======            ===========     =========\n");
    FILE *fp4;
    fp4=fopen("bowling.txt","r");
     while(fread(&player,sizeof(player),1,fp4))
     {
       float averege=(float)player.allowd_runs/(float)player.wickets_taken;
       float economy= (float)player.allowd_runs/(float)player.total_bowled ;
      printf("%d\t\t %d\t\t   %d\t\t\t%d\t\t%.2f\t\t  %.2f\t\n",player.total_innings,player.allowd_runs,player.total_bowled,player.wickets_taken,economy,averege);

     }
      fclose(fp4);

    printf("Enter 1 To back main menu...\n");
    scanf("%d",&z);
    if (z==1)
    {
        system("cls");
        screen_header();
      player_information();
    }
}


void search_for_a_bowler_information_by_his_name()
{
   int m;
    char ch,name[20];
    char team[20];
    printf("YOU WANT TO KNOW ABOUT A BOWLER INFORMATION PLEASE ENTER THE BOWLING NAME :\n");
     scanf("%s",name);
     FILE *fp3;
     fp3=fopen("bowling.txt","r");
    printf("                                    PLAYER PROFILE                                  \n");
    printf("                                   ================                                  \n \n");
    printf("BOWLING NAME        TEAM NAME       YEAR        MONTH        AGE       NICKNAME         BOWL STYLE      \n");
    printf("==============      ==========      =====       =====        ===       ==========       =========      \n");
    while(fread(&player,sizeof(player),1,fp3))
    {
     if(strcmp(name,player.bowling_nm)==0)
     {
        printf("%s\t      %s\t      %d    %s\t     %d\t\t  %s\t   \t%s\t\n     ",player.bowling_nm,player.bowling_tnm,player.bowling_year,player.bowling_month,player.bowling_age,player.bowling_nickname,player.bowling_bowl_style);
     }
    }
    fclose(fp3);

 printf("\n                              BOWLING STATISTICS                                \n");
    printf("==================================================================================\n");
   printf("TOTAL INNINGS     TOTAL RUNS       TOTAL OVER     TOTAL WICKET          ECONOMY         AVEREGE\n");
    printf("==========       ==========      ============      =======            ===========      ========\n");
     FILE *fp4;
    fp4=fopen("bowling.txt","r");
     while(fread(&player,sizeof(player),1,fp4))
     {
         if (strcmp(name,player.bowling_nm)==0)
         {
       float averege=(float)player.allowd_runs/(float)player.wickets_taken;
       float economy= (float)player.allowd_runs/(float)player.total_bowled ;
      printf("%d\t\t %d\t\t   %d\t\t\t%d\t\t%.2f\t\t  %.2f\t\n",player.total_innings,player.allowd_runs,player.total_bowled,player.wickets_taken,economy,averege);

     }
     }
      fclose(fp4);
            printf("Enter 1 To back main menu...\n");
           scanf("%d",&m);
           if (m==1)
        {
         system("cls");
         screen_header();
         player_information();
        }
}
void search_for_a_bowler_information_by_his_team_name()
{
    char team[20];
    char ch,m;
    printf("INPUT FOR WHICH TEAM YOU WANT TO LIST :\n");
        scanf("%s",team);
        printf("\n            %s           \n",team);
        printf("===============================\n");
       printf("BOWLER NAME          YEAR        MONTH        AGE       NICKNAME    BOWL STYLE      \n");
    printf("==============      ==========      =====       =====       =======    ===========       \n");
    FILE *fp5;
    fp5=fopen("bowling.txt","r");
      while(fread(&player,sizeof(player),1,fp5))
      {
            if(strcmp(team,player.bowling_tnm)==0)
            {
                 printf("%s\t           %d    %s\t     %d\t\t  %s\t   \t%s\t\n     ",player.bowling_nm,player.bowling_year,player.bowling_month,player.bowling_age,player.bowling_nickname,player.bowling_bowl_style);


            }
      }
      fclose(fp5);

         printf("\n                              BOWLING STATISTICS                                \n");
    printf("TOTAL INNINGS     TOTAL RUNS       TOTAL OVER     TOTAL WICKET          ECONOMY         AVEREGE\n");
    printf("==========        ==========     ============      =======            ===========        =======\n");
     FILE *fp4;
    fp4=fopen("bowling.txt","r");
          while(fread(&player,sizeof(player),1,fp4))
     {
         if (strcmp(team,player.bowling_tnm)==0)
         {
       float averege=(float)player.allowd_runs/(float)player.wickets_taken;
       float economy= (float)player.allowd_runs/(float)player.total_bowled ;
      printf("%d\t\t %d\t\t   %d\t\t\t%d\t\t%.2f\t\t  %.2f\t\n",player.total_innings,player.allowd_runs,player.total_bowled,player.wickets_taken,economy,averege);

     }
     }
      fclose(fp4);

            printf("Enter 1 To back main menu...\n");
           scanf("%d",&m);
           if (m==1)
        {
         system("cls");
         screen_header();
         player_information();
        }
}
void delete_for_a_batsman()
{

    FILE *fp1,*fp2;
    struct cricket player,player1;
    int found=0, count=0;
    char nm[30];
    fp1=fopen("batting.txt","r");
    fp2=fopen("Temp.txt","w");
    fflush(stdin);
    printf("ENTER THE NAME YOU WANT TO DELETE:");
    gets(nm);
    while(1)
    {
        fread(&player1, sizeof(player1), 1, fp1);
        if(feof(fp1))
        {
            break;
        }
        if(strcmp(nm,player1.nm)==0)
        {
            found=1;
        }
        else
        {
            fwrite(&player1, sizeof(player1), 1, fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
    if(found==0)
    {
        printf("Sorry not Found\n\n");
    }
    else
    {
        fp1=fopen("batting.txt","w");
        fp2=fopen("Temp.txt","r");
        while(1)
        {
            fread(&player1,sizeof(player1), 1, fp2);
            if(feof(fp2))
            {
                break;
            }
            fwrite(&player1, sizeof(player1), 1, fp1);
        }
    }
    fclose(fp1);
    fclose(fp2);
     int a;
        printf("do you want to continue..press 1  or for exit press 0\n");
        scanf("%d",&a);
        if(a==1)
        {
           system("cls");
            screen_header();

        player_information_1();
        }
        else
        {
             system("cls");
            exit(0);
        }
    return 0;
}
void delete_for_a_bowler()
{
     FILE *fp1,*fp2;
    struct cricket player,player1;
    int found=0, count=0;
    char nm[30];
    fp1=fopen("bowling.txt","r");
    fp2=fopen("Temp.txt","w");
    fflush(stdin);
    printf("ENTER THE NAME YOU WANT TO DELETE:");
    gets(nm);
    while(1)
    {
        fread(&player1, sizeof(player1), 1, fp1);
        if(feof(fp1))
        {
            break;
        }
        if(strcmp(nm,player1.bowling_nm)==0)
        {
            found=1;
        }
        else
        {
            fwrite(&player1, sizeof(player1), 1, fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
    if(found==0)
    {
        printf("Sorry not Found\n\n");
    }
    else
    {
        fp1=fopen("bowling.txt","w");
        fp2=fopen("Temp.txt","r");
        while(1)
        {
            fread(&player1,sizeof(player1), 1, fp2);
            if(feof(fp2))
            {
                break;
            }
            fwrite(&player1, sizeof(player1), 1, fp1);
        }
    }
    fclose(fp1);
    fclose(fp2);
     int a;
        printf("do you want to continue..press 1  or for exit press 0\n");
        scanf("%d",&a);
        if(a==1)
        {
           system("cls");
            screen_header();

        player_information_1();
        }
        else
        {
             system("cls");
            exit(0);
        }
    return 0;
}

 int chkPlayer(char name[30])
{
 FILE *fp;
 if(!(fp= fopen("batting.txt", "r"))){
    return 0;
 }else{
     while (!feof(fp))
 {
  fread(&player, sizeof(player), 1, fp);

  if (strcmp(name,player.nm)==0)
  {
   fclose(fp);
   return 1;
  }
 }
 }

 fclose(fp);
 return 0;
 }

  int chkbowler(char name[30])
{
 FILE *fp;
 if(!(fp= fopen("bowling.txt", "r"))){
    return 0;
 }else{
     while (!feof(fp))
 {
  fread(&player, sizeof(player), 1, fp);

  if (strcmp(name,player.bowling_nm)==0)
  {
   fclose(fp);
   return 1;
  }
 }
 }

 fclose(fp);
 return 0;
 }
 void update_for_a_batsman_statistics()
{
 int avl;
 FILE *fpt;
 FILE *fpo;
 int s, r, ch;
 char name[30],pname[30];
 printf("Enter Name to update:");
 scanf("%s", name);
 avl = chkPlayer(name);
 if (avl == 0)
 {
  printf("Name %s is not Available in the file", name);
 }
 else
 {
  fpo = fopen("batting.txt", "r");
  fpt = fopen("TempFile.txt", "w");
  while (fread(&player, sizeof(player), 1, fpo))
  {
   strcpy(pname,player.nm);
   if (strcmp(pname,name)==1)
    fwrite(&player, sizeof(player), 1, fpt);
   else
   {
int run,not_out,ball_faced;
printf(" number of runs      number of innings    numberof not outs    balls faced:\n ");
printf("   %d\t\t\t%d\t\t %d\t\t %d\n\n",player.numberof_runs_scored,player.numberof_innings_batted,player.numberof_not_outs,player.balls_faced);
printf("ENTER RUN SCORED IN LAST MATCH:\n");
scanf("%d", &run);
player.numberof_runs_scored +=run;
player.numberof_innings_batted +=1;
printf("ENTER 0 FOR OUT 1 FOR NOT OUT:\n");
scanf("%d", &not_out);
player.numberof_not_outs +=not_out;

printf("ENTER BALLS FACED IN LAST MATCH:\n");
scanf("%d", &ball_faced);
player.balls_faced +=ball_faced;
    fwrite(&player, sizeof(player), 1, fpt);
    break;
   }
  }
  fclose(fpo);
  fclose(fpt);
  fpo = fopen("batting.txt", "w");
  fpt = fopen("TempFile.txt", "r");
  while (fread(&player, sizeof(player), 1, fpt))
  {
   fwrite(&player, sizeof(player), 1, fpo);
  }
  fclose(fpo);
  fclose(fpt);
  printf("%d %d %d %d",player.numberof_runs_scored,player.numberof_innings_batted,player.numberof_not_outs,player.balls_faced);
  printf("RECORD UPDATED\n");
  int a;
        printf("do you want to continue..press 1  or for exit press 0\n");
        scanf("%d",&a);
        if(a==1)
        {
           system("cls");
            screen_header();

        player_information_1();
        }
        else
        {
             system("cls");
            exit(0);
        }
    return 0;
  //printf("%d\n",avl);
 }
}
void update_for_a_bowling_statistics()
{
 int avl;
 FILE *fpt;
 FILE *fpo;
 int s, r, ch;
 char name[30],pname[30];
 printf("Enter Bowler Name to Update:");
 scanf("%s", name);
 avl = chkbowler(name);
 if (avl == 0)
 {
  printf("Name %s is not Available in the file", name);
 }
 else
 {
  fpo = fopen("bowling.txt", "r");
  fpt = fopen("TempFile.txt", "w");
  while (fread(&player, sizeof(player), 1, fpo))
  {
   strcpy(pname,player.bowling_nm);
   if (strcmp(pname,name)==1)
    fwrite(&player, sizeof(player), 1, fpt);
   else
   {
int run,over,wicket_taken,innings;
printf(" number of runs      Total over    wicket taken:\n ");
printf("   %d\t\t\t%d\t\t %d\t\t\n\n",player.allowd_runs,player.total_bowled,player.wickets_taken);
printf("ENTER THE INNINGS IN LAST MATCH:\n");
scanf("%d",&innings);
player.total_innings+=1;
printf("ENTER ALLOWD RUNS IN LAST MATCH:\n");
scanf("%d", &run);
player.allowd_runs +=run;
printf("ENTER ALLOWD OVER IN LAST MATCH:\n");
scanf("%d",&over);
player.total_bowled+=over;
printf("ENTER HOW MANY WICKET TAKEN IN LAST MATCH:\n");
scanf("%d", &wicket_taken);
player.wickets_taken += wicket_taken;


    fwrite(&player, sizeof(player), 1, fpt);
    break;
   }
  }
  fclose(fpo);
  fclose(fpt);
  fpo = fopen("bowling.txt", "w");
  fpt = fopen("TempFile.txt", "r");
  while (fread(&player, sizeof(player), 1, fpt))
  {
   fwrite(&player, sizeof(player), 1, fpo);
  }
  fclose(fpo);
  fclose(fpt);
  printf("   %d\t\t\t%d\t\t %d\t\t\n\n",player.allowd_runs,player.total_bowled,player.wickets_taken);
  printf("RECORD UPDATED\n");
  int a;
        printf("do you want to continue..press 1  or for exit press 0\n");
        scanf("%d",&a);
        if(a==1)
        {
           system("cls");
            screen_header();

        player_information_1();
        }
        else
        {
             system("cls");
            exit(0);
        }
    return 0;
  //printf("%d\n",avl);
 }
}
void A_pass_c()
{
    char pasword[10],usrname[10], ch;
    char chek[10]={'a','d','m','i','n','1','2','3'};

    int i,valid=0;
    fflush(stdin);
    printf("\n\t\t  Enter Admin Password : ");

    for(i=0;i<8;i++)
    {
     ch = getch();
     pasword[i] = ch;
     ch = '*' ;
     printf("%c",ch);
   }
   pasword[i] = 'ch';
   for(i=0;i<8;i++)
   {
     if(pasword[i]==chek[i])
     {
      valid=valid+1;
      system("cls");
     }
   }
    if(valid==8)
    {
     //A_home();
    }
    else
    {
      printf("\n\t\t  !!!Wrong Password Try Again!!!\n");
      A_pass_c();
    }
}



