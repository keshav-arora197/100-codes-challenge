//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() {
    float costPrice, sellingPrice, profit, loss;
    
    printf("Enter Cost Price: ");
    scanf("%f", &costPrice);
    
    printf("Enter Selling Price: ");
    scanf("%f", &sellingPrice);
    
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", (profit / costPrice) * 100);
    } else if (costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", (loss / costPrice) * 100);
    } else {
        printf("No Profit No Loss.\n");
    }
    
    return 0;
}   