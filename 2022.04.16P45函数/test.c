#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//  ���������а�ֵ���Ͱ���ַ�����ַ�ʽ
//      �ú�����ӡ1-100������
//#include<math.h>
//int get_su(int x)                             //�Զ��庯����int x��������i�����������������1�����򷵻�0�����Է�������Ϊint
//{
//	int k = 0;
//	for (k = 2; k < sqrt(x); k++)
//	{
//		if (x % k == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		get_su(i);                       //����get_su�������ж�i�Ƿ�Ϊ����
//		{
//			if (get_su(i) == 1)              //�Զ���һ���ж������ĺ�������i������ʱ����������1, �����ǵ��ú�ĺ���Ҫ����1�������мǣ�i��
//			{
//				printf("%d ", i);
//				count++;
//			}
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}


             //���������ж�1000-2000������
//int get_run(int i)           //����һ���ж�����ĺ�����i�����������y�� ����1��0������
//{
//    if ((i % 4 == 0&&i % 100 != 0) || (i % 400 == 0))
//    {
//        return 1;
//    }
//    else
//    {
//        return 0;
//    }
//    //return ((i % 4 == 0&&i % 100 != 0) || (i % 400 == 0))   
//    //   ֱ�ӷ�������ж�����ж��������Ǽ�
//}
//
//int main()
//{
//    int y = 0;
//    int count = 0;
//    for (y = 1000; y <= 2000; y++)
//    {
//        get_run(y);                                      //���ú���
//        if (get_run(y) == 1)
//        {
//            printf("%d  ", y);
//            count++;
//        }
//    }
//    printf("\n%d", count);
//    return 0;
//}
     


                        //��������ʵ��������������Ķ��ֲ���
int binary_search(char b[], int x, int s)          //���庯�����������ͣ�����������Ӧ����
{
    int left = 0;                                //���±�
    int right = s-1;                               //���±�Ϊʵ�ε�Ԫ�ظ���
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (b[mid] < x)
        {
            left = mid+1;
        }
        if (b[mid] > x)
        {
            right = mid-1;
        }
        if (b[mid] = x)
        {
            return mid;
        }
    }
    if(left > right)
    {
        return -1;
    }
}
int main()
{
    char a[] = { 1,2,3,4,5,6,7,8,9,10 };         //����
    int i = 7;                                   //Ŀ����
    int sz = sizeof(a) / sizeof(a[0]);           //Ԫ�ظ���
    int fan=binary_search(a, i, sz);                     //���ú���������3������
    //�ҵ��ˣ������±�
    //�Ҳ���������-1����Ϊ�±��0��ʼ��
    if (fan == -1)
    {
        printf("�Ҳ���Ŀ����\n");
    }
    else
    {
        printf("�ҵ��ˣ��±�Ϊ%d\n", fan);
    }
    return 0;
}