/*
Write a C program to print inventory stock report using some sample data. The report should show item code, quantity 
and inventory location as formatted output.
*/
#include<stdio.h>
#include<string.h>


int main(){
    int item1_code,item2_code;
    printf("Enter item_code1 item_code2\n");
    scanf("%d %d",&item1_code,&item2_code);
    int item1_quantity,item2_quantity;
    printf("Enter item1_quantity item2_quantity\n");
    scanf("%d %d",&item1_quantity,&item2_quantity);
    char item1_str[300],item2_str[300];
    printf("Enter item1_inventory_location item2_inventory_location\n");
    scanf("%s %s",item1_str,item2_str);
    printf("Inventory Stock Report\n");
    char Item_Code[]="Item Code";
    char Quantity[]="Quantity";
    char Inventory_Location[]="Inventory Location";
    printf("%-10s%10s%20s\n",Item_Code,Quantity,Inventory_Location);
    printf("%-10d%10d%20s\n",item1_code,item1_quantity,item1_str);
    printf("%-10d%10d%20s\n",item2_code,item2_quantity,item2_str);

    return 0;
}