#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 


int main() {
    int orderAmount = 0, basicSavings = 0;
    char payment;
    char membership;
    int nSavings = 0, nPayM = 0, nPayBB = 0, nHcard = 0, discount = 0, totalSavings = 0;
    printf("=== 네이버페이 결제 계산 프로그램 ===\n주문액을 입력하세요:");
    scanf("%d", &orderAmount);

    printf("=== 결제 수단 목록 ===\na)NPay머니 네이버통장 충전결제 b)NPay머니 일반 충전결제 c)계좌 간편결제\nd)네이버 현대카드 간편결제 e)청구할인 삼성카드결제 f)일반 카드결제\n결제 수단을 입력하세요: ");

    while (1) {
        scanf(" %c", &payment);
        if (payment == 'a' || payment == 'b' || payment == 'c' || payment == 'd' || payment == 'e' || payment == 'f') {
            break;
        }
        printf("잘못 입력하셨습니다. 다시 입력바랍니다.\n결제 수단을 입력하세요:");
    }
    printf("네이버 멤버십에 가입되어 있나요 (y/n)?");
    scanf(" %c", &membership);

    if (membership == 'y' || membership == 'Y') {
        if (orderAmount < 200000) {
            nSavings = orderAmount * 0.04;
        }
        else {
            nSavings = (orderAmount - 200000) * 0.01 + 200000 * 0.04;
            if (nSavings > 20000) {
                nSavings = 20000;
            }
        }
    }

    basicSavings = orderAmount * 0.01;

    switch (payment) {
    case 'a':
        nPayM = orderAmount * 0.015;
        nPayBB = orderAmount * 0.005;
        break;
    case 'b':
        nPayM = orderAmount * 0.015;
        break;
    case 'd':
        if (orderAmount * 0.05 > 10000) {
            nHcard = 10000;
        }
        else nHcard = orderAmount * 0.05;
        break;
    case 'e':
        if (orderAmount >= 50000) {
            if (orderAmount * 0.05 > 5000) {
                discount = 5000;
            }
        }
        else discount = orderAmount * 0.05;
        break;
    }

    totalSavings = nPayM + nPayBB + nHcard + nSavings + basicSavings;

    printf("=== 결제 밑 적립 내용 ===\n주문금액 %d원\n", orderAmount);
    if (discount > 0) printf("청구할인 %d원\n", discount);
    printf("기본적립 %d원\n", basicSavings);
    if (nPayM > 0) printf("네이버페이 머니 결제적립 %d원\n", nPayM);
    if (nPayBB > 0) printf("네이버페이 통장 결제적립 %d원\n", nPayBB);
    if (nHcard > 0) printf("네이버 현대카드 결제적립 %d원\n", nHcard);
    if (nSavings > 0) printf("네이버 멤버십 추가적립 %d원\n", nSavings);
    printf("총 적립액은 %d원입니다.", totalSavings);

    return 0;
}