#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//  函数调用有按值传和按地址传两种方式
//      用函数打印1-100的素数
//#include<math.h>
//int get_su(int x)                             //自定义函数，int x用来接收i，如果是素数，返回1，否则返回0，所以返回类型为int
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
//		get_su(i);                       //调用get_su函数，判断i是否为素数
//		{
//			if (get_su(i) == 1)              //自定义一个判断素数的函数，当i是素数时，函数返回1, 这里是调用后的函数要返回1，所以切记（i）
//			{
//				printf("%d ", i);
//				count++;
//			}
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}


             //函数方法判断1000-2000的闰年
//int get_run(int i)           //定义一个判断闰年的函数，i用来接收年份y， 返回1或0的整型
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
//    //   直接返回这个判断语句判断它是真是假
//}
//
//int main()
//{
//    int y = 0;
//    int count = 0;
//    for (y = 1000; y <= 2000; y++)
//    {
//        get_run(y);                                      //调用函数
//        if (get_run(y) == 1)
//        {
//            printf("%d  ", y);
//            count++;
//        }
//    }
//    printf("\n%d", count);
//    return 0;
//}
     


                        //函数方法实现整型有序数组的二分查找
int binary_search(char b[], int x, int s)          //定义函数，返回整型，接受三个对应参数
{
    int left = 0;                                //左下标
    int right = s-1;                               //右下标为实参的元素个数
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
    char a[] = { 1,2,3,4,5,6,7,8,9,10 };         //数组
    int i = 7;                                   //目标数
    int sz = sizeof(a) / sizeof(a[0]);           //元素个数
    int fan=binary_search(a, i, sz);                     //调用函数，传递3个参数
    //找到了，返回下标
    //找不到，返回-1（因为下标从0开始）
    if (fan == -1)
    {
        printf("找不到目标数\n");
    }
    else
    {
        printf("找到了，下标为%d\n", fan);
    }
    return 0;
}