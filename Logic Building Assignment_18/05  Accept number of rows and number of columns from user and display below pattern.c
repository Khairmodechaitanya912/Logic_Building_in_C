/*

        Input : iRow = 4 iCol = 4

        Output : 1 2 3 4
                 1 * * 4
                 1 * * 4
                 1 2 3 4

 */


 #include<stdio.h>
 #include<conio.h>

 void Pattern(int iRow , int iCol)
 {

     int i=0 , j=0 ;

     printf("\n");

     for(i=1;i<=iRow;i++)
     {

         for(j=1;j<=iCol;j++)
         {

             if(i==1||i==iRow||j==1||j==iCol)
             {

                 printf(" %d ",j);

             }

             else
             {

                 printf(" * ");

             }

         }

          printf("\n");
     }

     return ;
 }

int main()
{

    int iValue1=0 , iValue2=0 ;

    printf("\n Enter Number of Rows = ");
    scanf("%d",&iValue1);

    printf("\n Enter Number of Columns = ");
    scanf("%d",&iValue2);

    Pattern(iValue1 , iValue2);

    getch();
    return 0;

}

