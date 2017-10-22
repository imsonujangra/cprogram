#include <stdio.h>
#include <string.h>
 
void main()
{
    struct date
        {
		int day;
        int month;
        int year;
    };
    struct products
    {
        char name[20];
        int qty;
        int sku;
        int price;
        int brandcode;
    };
    struct details
    {
        char name[20];
        int code;
        int qty;
        struct date mfg;
    };
    struct cart
    {
		char name[20];
		int price;
		int qty;
		
	};
    
    
    
    struct details item[50];
    struct products pro[50];
    struct cart cart[50];
    int n, i,c,b,k=0;
	int ch;
    
    strcpy(item[0].name, "TV");
    //strcpy(item[1].name, "Refrigerator");
    //strcpy(item[2].name, "Mobile");
    item[0].code = 00001;
    item[0].qty = 10;
    item[0].mfg.day = 01;
    item[0].mfg.month = 01;
    item[0].mfg.year = 2015;
    
    
    strcpy(item[1].name, "Mobile");
    item[1].code = 00002;
    item[1].qty = 10;
    item[1].mfg.day = 01;
    item[1].mfg.month = 01;
    item[1].mfg.year = 2015;
    
    strcpy(item[2].name, "Refrigerator");
    item[2].code = 00003;
    item[2].qty = 2;
    item[2].mfg.day = 01;
    item[2].mfg.month = 01;
    item[2].mfg.year = 2015;
    
    
    /** products TV **/
    strcpy(pro[0].name, "Samsung");
    pro[0].sku = 1;
    pro[0].brandcode = 00001;
    pro[0].qty = 2;
    pro[0].price = 2000;
    
    strcpy(pro[1].name, "Lg");
    pro[1].sku = 2;
    pro[1].brandcode = 00001;
    pro[1].qty = 2;
    pro[1].price = 3000;
    
    strcpy(pro[2].name, "Onida");
    pro[2].sku = 3;
    pro[2].brandcode = 00001;
    pro[2].qty = 2;
    pro[2].price = 1000;
    
    /** End Brand TV **/
    
    
    strcpy(pro[3].name, "Whirlpool");
    pro[3].sku = 4;
    pro[3].brandcode = 00002;
    pro[3].qty = 2;
    pro[3].price = 3000;
    
    strcpy(pro[4].name, "Kelvinator");
    pro[4].sku = 5;
    pro[4].brandcode = 00002;
    pro[4].qty = 2;
    pro[4].price = 1000;
    
    
    
    strcpy(pro[5].name, "Apple");
    pro[5].sku = 6;
    pro[5].brandcode = 00003;
    pro[5].qty = 2;
    pro[5].price = 3000;
    
    strcpy(pro[6].name, "Mi");
    pro[6].sku = 7;
    pro[6].brandcode = 00003;
    pro[6].qty = 2;
    pro[6].price = 1000;
    
    printf("             *****  INVENTORY ***** \n");
    printf("------------------------------------------------------------------\n");
    printf("S.N.|    NAME           |   CODE   |  QUANTITY | MFG.DATE \n");
    printf("------------------------------------------------------------------\n");
    for (i = 0; i < 3; i++)
        printf("%d     %-15s        %-d          %-5d     %d/%d/%d \n", i + 1, item[i].name, item[i].code, item[i].qty, item[i].mfg.day, item[i].mfg.month,item[i].mfg.year);
    printf("------------------------------------------------------------------\n");
    
    
    printf("please enter your choice:");
    scanf("%d",&c);
    
    printf("             *****  Products ***** \n");
    printf("---------------------------------------------------------------------\n");
    printf("S.N.|    NAME    |   Sku       |   Brand Code   |  QUANTITY      |     PRICE \n");
    printf("----------------------------------------------------------------------\n");
    
    
    
    
    for (i = 0; i < 7; i++)
    {
		
		if (c==1 && pro[i].brandcode==00001)
		{
			
printf("%d     %-15s       %-d        %-d          %-5d         %-5d \n", i + 1, pro[i].name,pro[i].sku, pro[i].brandcode, pro[i].qty, pro[i].price);
    printf("------------------------------------------------------------------\n");
		}
		
		if(c==2 && pro[i].brandcode==00002)
		{
			printf("%d     %-15s       %-d        %-d          %-5d         %-5d \n", i + 1, pro[i].name,pro[i].sku, pro[i].brandcode, pro[i].qty, pro[i].price);
    printf("------------------------------------------------------------------\n");
		
		}
		if(c==3 && pro[i].brandcode==00003)
		{
			printf("%d     %-15s       %-d        %-d          %-5d         %-5d \n", i + 1, pro[i].name,pro[i].sku, pro[i].brandcode, pro[i].qty, pro[i].price);
    printf("------------------------------------------------------------------\n");
		}
		
	}
		
    printf("please enter your sku to buy a product : ");
	scanf("%d",&b);
	

		while(k<7)
		{
			if(pro[k].sku==b)
			{
				printf("product name : %s \n",pro[k].name);
				strcpy(cart[k].name,pro[k].name);
				printf("you have successfully added item to cart %s \n",pro[k].name);
				
				printf("Do you wish to add more numbers (1/0)\n");
				scanf("%d",&ch);
				
				
				if (ch == 1)
				{
					printf("please enter your sku to buy a product : ");
					scanf("%d",&b);
					//k++;
					continue;
				}else{
					
					break;
				}
			}
			k++;
			
		}
		
		
	printf("************ Bill **************** \n");
    printf("---------------------------------------------------------------------\n");
    printf("S.N.|    NAME    |   Qty       |  PRICE \n");
    printf("----------------------------------------------------------------------\n");
    int totalprice,totalqty;
    for (i = 0; i < 7; i++)
    {	
	printf("%d     %-15s       %-d        %-d    \n", i + 1, cart[i].name,cart[i].qty, cart[i].price);
    printf("------------------------------------------------------------------\n");
		totalprice += cart[i].price;
		totalqty += cart[i].qty;
	}
	printf("           %-d        %-d    \n", totalprice, totalqty);
	
      
}
