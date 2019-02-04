#include<stdio.h>
#include<string.h>
 typedef struct
{
    int cust_id;
    char name;
    char account_type;
    int bal;
    double mobile_no;
}bank;
typedef struct
bank b1;
void newac(bank *b1);
main()
{
    bank b[100];
    char ch;
    int i,y,j,x,z,l,n;
    printf("enter a create new account");
    scanf("%d",&n);
    printf("\n-----------------------------------------------------------------------------------------------------------------\n\n");
    fflush(stdin);
    printf("according to serial number");
    for(i=0;i<n;i++)
    {
        printf("the new account from of person number-%d\n",i+1);
        newac(&b[i]);
    }
    printf("\nwish your account\n1.deposit or withdraw\n2.balance enquirry\n3.a record delete costumer his/her\n4.exit\n\t\t****ENTER YOUR CHOICE***");
    scanf("%d",&x);
    switch(x)
    {
    case 1:

        printf("\n1.deposit\n2.withdraw \n");
        scanf("%d",&y);
        switch(y)
        {
        case 1:
            printf("enter a account code");
            scanf("%d",&j);
        printf("enter your  a amount deposit: ");
        scanf("%d",&z);
        for(i=j-1;i<=j-1;i++)
        {
            b[i].bal=b[i].bal+z;
            {

            printf("new balance=%d",b[i].bal);
        }
        }

        break;

    case 2:
        printf("enter your acount code\n");
        scanf("%d",&j);
        printf("enter the amount to be withdraw: ");
        scanf("%d",&z);
        for(i=j-1;i<=j-1;i++)
        {
            if(b[i].bal>z)
            {
                b[i].bal=b[i].bal-z;
                printf("new balance=%d",b[i].bal);
            }
            else
            {
                printf("insuffcient balance");
            }
        }
        }


break;
    case 3:
        printf("enter the code of costumer according to the number wise: ");
        scanf("%d",&j);
        for(i=j-1;i<=j-1;i++)
        {
            printf("the net amount balanceis %d",b[i].bal);


        break;
    default :
        printf("invailid choice");
    }

void newac(bank *b)
{
    printf("enter a account id");
    scanf("%d",&b->cust_id);
    printf("enter a account name");
    scanf("%s",&b->name);
    printf("enter account type");
    scanf("%s",&b->account_type);
    printf("enter a account balance");
    scanf("%d",&b->bal);
    printf("enter a account mobile number");
    scanf("%id",&b->mobile_no);
}
    }
}
