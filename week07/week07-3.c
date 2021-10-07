#include <stdio.h>
#define WON 0
#define DOLLAR 1

union won_or_dollar{
    int won;
    double dollar;
};

struct product{
    char *name;
    _Bool w_d;
    union won_or_dollar price;
};

int main(){
    const struct product product[6]={{"PMP", WON, .price.won=600000}, {"MP3", WON, .price.won=153000}, {"SmartPhone", DOLLAR, .price.dollar=520.40},{"TV", DOLLAR, .price.dollar=430.20}, {"Navigator", WON, .price.won=350000}, {"Laptop", DOLLAR, .price.dollar=1950.00}};
    int money, exchange;
    
    printf("보유금액과 환율을 입력하세요.\n");
    printf("보유금액 : ");
    scanf("%d", &money);
    printf("환율 : ");
    scanf("%d", &exchange);
    printf("구매 가능한 제품은 다음과 같습니다.\n");
    for(int i=0; i<6; i++){
        if(product[i].w_d==WON){
            if(money>=product[i].price.won)
                printf("%-10s%10d원\n",product[i].name, product[i].price.won);
        }else{
            if(money>=product[i].price.dollar*exchange)
                printf("%-10s%10d원\n",product[i].name, (int)(product[i].price.dollar*exchange));
        }
    }
}