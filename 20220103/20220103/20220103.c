#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//int main()
//{
//	char arr[] = "china";
//	printf("%d\n", sizeof(arr)); //这里加上'\0'就是6个字符
//}

//struct s
//{
//    //int x : 3; // 3 bit
//    //int y : 4; // 4 bit
//    //int z : 5; // 5 bit
//    double a; // 8 byte
//};
//
//int main()
//{
//    printf("%d\n", sizeof(struct s)); // 16 byte
//    return 0;
//}

//void PutNum(int arg)
//{
//    int num = arg;    
//    if (num > 0 && num < 10)
//    {
//        printf("%d", num);
//        return;
//    }
//    else
//    {
//        printf("%d", num % 10);
//        num /= 10;
//    }
//    PutNum(num);
//}
//
//int main()
//{
//    int num = 0;
//    scanf_s("%d", &num);
//    if (num <= 9999 && num >= 1000)
//    {
//        PutNum(num);
//    }    
//    return 0;
//}
//

int main() {
    int i = 1, j = 3, k = 0, sum = 5;
    switch (k > -i++) {
    case 2: sum += 1;
    case 1: sum += j;
    case 0: sum += i; break;
    case -1: sum *= -1;
    }
    printf("%d %d\n", sum, k);

    return 0;
}

