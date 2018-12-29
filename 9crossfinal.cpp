
#include<iostream>

#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include<windows.h>
#include<conio.h>

using namespace std;

//ankit2

void printo (int [9][3][3],char [3][3][3]);
int main()
{
    int a[9][3][3],z[9];
    char ar[9][3][3],c=36,b;
    int i,j,k,p=1;
    for(i=0;i<9;i++)for(j=0;j<3;j++)for(k=0;k<3;k++)
        a[i][j][k] = 0;
    for(i=0;i<9;i++)for(j=0;j<3;j++)for(k=0;k<3;k++)
        ar[i][j][k] = ' ';
        ar[4][0][0]='>';
        hello:again:
                     system("cls");

        printo(a,ar);

    {

        if(p==1)
        {

             do{printf("\nPLAYER  1 \n\n");
            printf("\nMOVE THE CURSOR OR HIT SPACE : \n");
    c=getch();
           // printf("\n%d\n",c);
            if(c==32)
            {
                for(i=0;i<9;i++)for(j=0;j<3;j++)for(k=0;k<3;k++)
                    {
                        if(ar[i][j][k]==62)
                        {
                            if( a[i][j][k]==1 || a[i][j][k]==2)goto again;
                           a[i][j][k]=1;
                        }
                    }
            }
            else if(c=='>')
            {
                for(i=0;i<9;i++)for(j=0;j<3;j++)for(k=0;k<3;k++)
                    {
                        if(ar[i][j][k]=='>')
                        {
                           ar[i][j][k]=32;if(k!=2)
                           ar[i][j][k+1]='>';else ar[i][j][0]='>';
                           goto yr;
                        }
                    }
            }
            else if(c=='<')
            {
                for(i=0;i<9;i++)for(j=0;j<3;j++)for(k=0;k<3;k++)
                    {
                        if(ar[i][j][k]=='>')
                        {
                           ar[i][j][k]=32;if(j!=2)
                           ar[i][j+1][k]='>';else ar[i][0][k]='>';
                           goto yr;
                        }
                    }yr:;
            }
            system("cls");
            printo(a,ar);
            }while(c!=32);
            {
                if(a[b][0][0]==1 && a[b][0][1]==1 && a[b][0][2]==1)
                z[b]=1;
                                if(a[b][1][0]==1 && a[b][1][1]==1 && a[b][1][2]==1)
                z[b]=1;
                                if(a[b][2][0]==1 && a[b][2][1]==1 && a[b][2][2]==1)
                z[b]=1;
                                if(a[b][0][0]==1 && a[b][1][1]==1 && a[b][2][2]==1)
                z[b]=1;
                                if(a[b][0][2]==1 && a[b][1][1]==1 && a[b][2][0]==1)
                z[b]=1;
                 if(a[b][0][0]==1 && a[b][1][0]==1 && a[b][2][0]==1)
                z[b]=1;
                  if(a[b][0][1]==1 && a[b][1][1]==1 && a[b][2][1]==1)
                z[b]=1;
                  if(a[b][0][2]==1 && a[b][1][2]==1 && a[b][2][2]==1)
                z[b]=1;
                            if((z[0]==1 && z[1]==1 && z[2]==1) || (z[3]==1 && z[4]==1 && z[5]==1)|| (z[6]==1 && z[7]==1 && z[8]==1)|| (z[0]==1 && z[4]==1 && z[8]==1)|| (z[2]==1 && z[4]==1 && z[6]==1)|| (z[0]==1 && z[3]==1 && z[6]==1)|| (z[1]==1 && z[4]==1 && z[6]==1)|| (z[2]==1 && z[5]==1 && z[7]==1)|| (z[3]==1 && z[6]==1 && z[8]==1))
                            {
                                printf(" player 1 won ");goto yr5;
                            }

            }
            for(i=0;i<9;i++)for(j=0;j<3;j++)for(k=0;k<3;k++)
                    {
                        if(ar[i][j][k]=='>')
                        {
                            if(j==0 && k==0)
                                i=0;
                            else if(j==0 && k==1)
                                i=1;
                            else if(j==0 && k==2)
                                i=2;
                            else if(j==1 && k==0)
                                i=3;
                            else if(j==1 && k==1)
                                i=4;
                             else if(j==1 && k==2)
                                i=5;
                         else if(j==2 && k==0)
                                i=6;
                            else if(j==2 && k==1)
                                i=7;
                           else if(j==2 && k==2)
                                i=8;
                             b=i;
                           goto yr3 ;
                        }
                    }yr3 :
                        p++;
                          for(i=0;i<9;i++)for(j=0;j<3;j++)for(k=0;k<3;k++)
        ar[i][j][k] = ' ';
        ar[b][0][0]='>';
        }
         system("cls");

            printo(a,ar);
again2 :
        if(p==2)
        {

             do{  printf("\nPLAYER  2 \n\n");
            printf("\nMOVE THE CURSOR OR HIT SPACE : \n");
    c=getch();
           // printf("\n%d\n",c);
            if(c==32)
            {
                for(i=0;i<9;i++)for(j=0;j<3;j++)for(k=0;k<3;k++)
                    {
                        if(ar[i][j][k]==62)
                        {   if( a[i][j][k]==1 || a[i][j][k]==2)goto again2;
                           a[i][j][k]=2;
                        }
                    }
            }
            else if(c=='>')
            {
                for(i=0;i<9;i++)for(j=0;j<3;j++)for(k=0;k<3;k++)
                    {
                        if(ar[i][j][k]=='>')
                        {
                           ar[i][j][k]=32;if(k!=2)
                           ar[i][j][k+1]='>';else ar[i][j][0]='>';
                           goto yr2;
                        }
                    }
            }
            else if(c=='<')
            {
                for(i=0;i<9;i++)for(j=0;j<3;j++)for(k=0;k<3;k++)
                    {
                        if(ar[i][j][k]=='>')
                        {
                           ar[i][j][k]=32;if(j!=2)
                           ar[i][j+1][k]='>';else ar[i][0][k]='>';
                           goto yr2;
                        }
                    }yr2:;
            }
            system("cls");

            printo(a,ar);
            }while(c!=32);
            {
                if(a[b][0][0]==2 && a[b][0][1]==2 && a[b][0][2]==2)
                z[b]=2;
                                if(a[b][1][0]==2 && a[b][1][1]==2 && a[b][1][2]==2)
                z[b]=2;
                                if(a[b][2][0]==2 && a[b][2][1]==2 && a[b][2][2]==2)
                z[b]=2;
                                if(a[b][0][0]==2 && a[b][1][1]==2 && a[b][2][2]==2)
                z[b]=2;
                                if(a[b][0][2]==2 && a[b][1][1]==2 && a[b][2][0]==2)
                z[b]=2;
                 if(a[b][0][0]==2 && a[b][1][0]==2 && a[b][2][0]==2)
                z[b]=2;
                  if(a[b][0][1]==2 && a[b][1][1]==2 && a[b][2][1]==2)
                z[b]=2;
                  if(a[b][0][2]==2 && a[b][1][2]==2 && a[b][2][2]==2)
                z[b]=2;
                            if((z[0]==2 && z[1]==2 && z[2]==2) || (z[3]==2 && z[4]==2 && z[5]==2)|| (z[6]==2 && z[7]==2 && z[8]==2)|| (z[0]==2 && z[4]==2 && z[8]==2)|| (z[2]==2 && z[4]==2 && z[6]==2)|| (z[0]==2 && z[3]==2 && z[6]==2)|| (z[1]==2 && z[4]==2 && z[6]==2)|| (z[2]==2 && z[5]==2 && z[7]==2)|| (z[3]==2 && z[6]==2 && z[8]==2))
                            {
                                printf(" player 2 won ");goto yr5;
                            }

            }
              for(i=0;i<9;i++)for(j=0;j<3;j++)for(k=0;k<3;k++)
                    {
                        if(ar[i][j][k]=='>')
                        {
                            if(j==0 && k==0)
                                i=0;
                            else if(j==0 && k==1)
                                i=1;
                            else if(j==0 && k==2)
                                i=2;
                            else if(j==1 && k==0)
                                i=3;
                            else if(j==1 && k==1)
                                i=4;
                             else if(j==1 && k==2)
                                i=5;
                         else if(j==2 && k==0)
                                i=6;
                            else if(j==2 && k==1)
                                i=7;
                           else if(j==2 && k==2)
                                i=8;
                             b=i;
                              goto yr4 ;
                                   }
                    }yr4 :
                        p--;
                          for(i=0;i<9;i++)for(j=0;j<3;j++)for(k=0;k<3;k++)
        ar[i][j][k] = ' ';
        ar[b][0][0]='>';
         system("cls");

            printo(a,ar);
        }goto hello;


yr5 :;
    }
return 0;

}
void printo (int a[9][3][3], char ar[9][3][3])
{

      //  system("cls");
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<1;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%c%d ",ar[i][j][k],a[i][j][k]);
            }

        } printf("\t");
    }printf("\n");
      for(i=0;i<3;i++)
    {
        for(j=1;j<2;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%c%d ",ar[i][j][k],a[i][j][k]);
            }

        } printf("\t");
    }printf("\n");
      for(i=0;i<3;i++)
    {
        for(j=2;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%c%d ",ar[i][j][k],a[i][j][k]);
            }

        } printf("\t");
    }

    printf("\n\n\n");
    for(i=3;i<6;i++)
    {
        for(j=0;j<1;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%c%d ",ar[i][j][k],a[i][j][k]);
            }

        } printf("\t");
    }printf("\n");
      for(i=3;i<6;i++)
    {
        for(j=1;j<2;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%c%d ",ar[i][j][k],a[i][j][k]);
            }

        } printf("\t");
    }printf("\n");
      for(i=3;i<6;i++)
    {
        for(j=2;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%c%d ",ar[i][j][k],a[i][j][k]);
            }

        } printf("\t");
    }



    printf("\n\n");
    for(i=6;i<9;i++)
    {
        for(j=0;j<1;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%c%d ",ar[i][j][k],a[i][j][k]);
            }

        } printf("\t");
    }printf("\n");
      for(i=6;i<9;i++)
    {
        for(j=1;j<2;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%c%d ",ar[i][j][k],a[i][j][k]);
            }

        } printf("\t");
    }printf("\n");
      for(i=6;i<9;i++)
    {
        for(j=2;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%c%d ",ar[i][j][k],a[i][j][k]);
            }

        } printf("\t");
    }
}
