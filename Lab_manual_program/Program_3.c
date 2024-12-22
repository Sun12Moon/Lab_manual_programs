#include<stdio.h>
int main()
{
    float phy , ele , plb , per  ;
   printf("Enter marks for phy \n");
   scanf("%f" , &phy);
   printf("Enter marks for ele \n");
   scanf("%f" , &ele);
   printf("Enter marks for plb \n");
   scanf("%f" , &plb);
   per=(phy + ele + plb )*100/300;
   printf("Percentage = %.2f \n" , per);
   if(per>= 90)
   {
       printf("A \n");
   }
   else if(per>= 80)
   {
       printf("B \n");
   }
   else if(per>=70)
   {
       printf("C \n");
   }
   else if(per>=60)
   {
       printf("D \n");
   }
   else if(per>=40)
   {
       printf("E \n");
   }
   else if(per<=40)
   {
       printf("F \n");
   }
   else
   {
       printf("Failed \n");
   }
   return 0;
}

/*Output :
Enter marks for phy
95
Enter marks for ele
92
Enter marks for plb
98
Percentage = 95.00
A

Enter marks for phy
85
Enter marks for ele
80
Enter marks for plb
75
Percentage = 80.00
B

Enter marks for phy
72
Enter marks for ele
70
Enter marks for plb
68
Percentage = 70.00
C

Enter marks for phy
60
Enter marks for ele
58
Enter marks for plb
62
Percentage = 60.00
D

Enter marks for phy
30
Enter marks for ele
28
Enter marks for plb
35
Percentage = 31.00
F

Enter marks for phy
40
Enter marks for ele
30
Enter marks for plb
35
Percentage = 35.00
F
*/
