#include<string.h>
#include<stdio.h>
struct _bank

{
    int cusid;
    char name[25];
    char actype[25];
    int bal;
    int mob;
};
typedef struct _bank bank;
void newac(bank *b);
main()
{
    int i,n,x,y,z,j;
    char ch;
    bank b[100];
    printf("\t\t\t---Enter the number of customer to create new account--- ");
    printf("\n\t\t\t\t\t\t");
    scanf("%d",&n);
    printf("\n--------------------------------------------------------------------------------------------------------------------\n\n");
    fflush(stdin);
    printf("\t\t\t---According to serial number---\n\n");
    for(i=0;i<n;i++)
    {
            printf("\t\tThe New account form of person number-%d  \n",i+1);
            newac(&b[i]);
    }
    printf("\t\t\t\tWould you wish\n\t1.Deposit or withdraw\n\t2.Balance enquiry\n\t3.Close the Account\n\t4.Exit\n\t\t\t***ENTER YOUR CHOICE***");
    printf("\n\t\t\t\t");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
        printf("\n5.Deposit\n6.Withdraw\n\t\t\t***Enter your choice***\n");
        printf("\t\t\t\t");
        scanf("%d",&y);
        switch(y)
        {
    case 5:
        printf("Enter the code of costumer according to the number wise: ");
        scanf("%d",&j);
        printf("Enter the amount to be deposited: ");
        scanf("%d",&z);
        for(i=j-1;i<=j-1;i++)
            {
                b[i].bal=b[i].bal+z;
                printf("New account balance is %d",b[i].bal);
break;
            }
    case 6:
        printf("Enter the code of costumer according to the number wise: ");
        scanf("%d",&j);
        printf("Enter the amount to be withdrawn: ");
        scanf("%d",&z);
         for(i=j-1;i<=j-1;i++)
            {
                b[i].bal=b[i].bal-z;
                printf("\nNew account balance is %d",b[i].bal);
            }

        break;
        }
    case 2:
        printf("Enter the code of costumer according to the number wise: ");
        scanf("%d",&j);
        for(i=j-1;i<=j-1;i++)
        {
            printf("The net amount balance is %d",b[i].bal);
        }
        break;
    case 3:
        printf("Enter the code of costumer according to the number wise: ");
        scanf("%d",&j);
        for(i=j-1;i<=j-1;i++)
        {
            char temp[5]="xxxx";
            strcpy(b[i].name,temp);
            printf("Name=");
            puts(b[i].name);
            printf("Balance=");
            b[i].bal=0;
            printf("%d",b[i].bal);
            break;
        }
    case 4:

        return 0;
    }


}
void newac(bank *b)
{
    int n;
    printf("Enter the name: ");
    gets(b->name);
    printf("Enter the customer id number: ");
    scanf("%d",&b->cusid);
    fflush(stdin);
    printf("Enter the account type:");
    gets(b->actype);
    printf("Enter the balance: ");
    scanf("%d",&b->bal);
    printf("Enter the mobile number: ");
    scanf("%d",&b->mob);
    printf("\n\n\n");
    fflush(stdin);
}
