#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//int main()
//{
//	char arr[] = "china";
//	printf("%d\n", sizeof(arr)); //�������'\0'����6���ַ�
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

//int main() {
//    int i = 1, j = 3, k = 0, sum = 5;
//    switch (k > -i++) {
//    case 2: sum += 1;
//    case 1: sum += j;
//    case 0: sum += i; break;
//    case -1: sum *= -1;
//    }
//    printf("%d %d\n", sum, k);
//
//    return 0;
//}

int l = 10;
void test()
{
    static int c = 0;
    c++;
    int l = 12;//һ�㺯���ڲ�����Ѱ�Һ����ڲ�����ı��������û����ȥѰ���ⲿ��ȫ�ֱ���
    printf("%d %d\n", c, l);
}

struct MyStruct
{
    char t : 4; //1 bit
    char k : 4; //1 bit
    unsigned short i : 8;//2 bit
    unsigned long m;//4 byte
}str;

int main() {
    int a = 3, ret;
    printf("%d\n", (a += a -= a * a));
    int m = 0256, n = 256;
    printf("%o %#o %#x\n", m, n, n);
    m = 1, n = 1;
    if (!(ret = (m-n)))//!(ret = (m-n) <==> ����
    {
        printf("%d\n", ret);
    }
    test();
    //printf("%d\n", c);���c�����ں����ж��壬�Ҽ�����staticҲ������ͬ�ļ��н���ȫ������
    //printf("%d\n", (a -= a * a));// a = a - a*a = -6
    //printf("%d\n", (a += a)); // a = a + a = -12

    printf("struct = %d %d\n",sizeof(str), sizeof(str.m));//8 bit 4 bit
    printf("value = %4.2f\n", 3.5 * 1 + 2 * 1 + 2);//��4���ո��ٿ�ʼ������ݣ�С��λ���2λ

}


