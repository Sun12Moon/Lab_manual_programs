#include <stdio.h>
int main()
{
   int age,nationality;
   printf("Enter your age: \n");
   scanf("%d", &age);
   printf("Enter nationality (1 for Indian, 0 for Non-Indian): \n");
   scanf(" %d", &nationality);
   if ((age >= 18) && (nationality == 1))
   {
       printf("Eligible for voting \n");
   }
    else
   {
       printf("Not eligible for voting \n");
   }
   return 0;
}

/*Output : 
Enter your age: 
20
Enter nationality (1 for Indian, 0 for Non-Indian): 
1
Eligible for voting 

Enter your age: 
17
Enter nationality (1 for Indian, 0 for Non-Indian): 
1
Not eligible for voting 

Enter your age: 
20
Enter nationality (1 for Indian, 0 for Non-Indian): 
0
Not eligible for voting 

Enter your age: 
16
Enter nationality (1 for Indian, 0 for Non-Indian): 
0
Not eligible for voting 

*/
