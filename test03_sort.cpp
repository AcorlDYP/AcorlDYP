//各种排序的代码实现

//排序中稳定性的定义：在排序的过程中如果两个元素的值相同，在排序前后其相对位置是否会发生改变
//如果发生改变则称作稳定，如果没有发生改变则不稳定


//1.quick_sort(快速排序)的C++实现(不稳定)，如果想要稳定，可以构建二维数组vec<ai,i>(即使元素的值相同时，此时对应的下标也是不同的)
//#include<iostream>
//
//using namespace std;
//const int N = 1e6 + 10;//这个就是编程中的科学计数法 10000000(一百万)
//
//int n;
//int arr[N];
////目前我自己的理解是在不考虑静态变量的情况下，不要在函数中返回地址！
//void quick_sort(int arr[], int l, int r) {
//
//	if (l >= r)return;//这是递归的结束标志！
//
//	int i = l - 1;
//	int j = r + 1;
//
//	//此时如果x取右值会导致死循环！
//	int x = arr[l];//递归区域的选择对 'x' 的取值是有要求的！ 
//
//
//	while (i < j)
//	{
//		while (arr[++i] < x);
//		while (x < arr[--j]);
//		// 这里为什么不能加上 '=' 呢？答：会导致非法访问内存
//		//当取' = '时，当递归到只剩下两个元素时，最终一定会有一边的值是等于x的，
//		//此时判断循环继续，i或者j继续移动，从而导致超过边界，非法访问内存，导致程序错误！
//
//		if (i < j) swap(arr[i], arr[j]);//如果不进行判断，则会出现i = j(这不会对结果造成影响，但进行了不必要的交换)
//		//而当出现i > j的情况时，则i和j已经越界，如果没有判断进行交换就会导致错误！
//	}
//	quick_sort(arr, l, j);   //使用了递归和分而治之的思想！
//	quick_sort(arr, j + 1, r);
//
//}
//
//int main() {
//	//输入的n是数组的元素个数！
//	scanf_s("%d", &n);//scanf的效率在C++中是大于cin的,所以这里我们还是使用scanf！
//
//
//	for (int i = 0;i < n;i++)
//		scanf_s("%d", &arr[i]);
//
//
//	quick_sort(arr, 0, n - 1);
//
//	for (int i = 0;i < n;i++)
//		printf("%d\n", arr[i]);
//
//	return 0;
//}


//2.归并排序C++代码的实现
//思路：首先确定中点，将元素分为左右两个区间，分别对两个区间进行递归排序，最后归并，合二为一!

//#include<iostream>;
//
//using namespace std;
// 
//const int N = 100;
//
//int arr[N];
//
//int n;
//
////归并排序
//
//void merge_sort(int arr[],int l,int r) {
//
//	if (l >= r) return;
//
//	int mid = (l + r) >> 1;
//
//	merge_sort(arr, l, mid);merge_sort(arr, mid + 1, r);
//
//	int tmp[N];
//
//	int k = 0;int i = l;int j = mid + 1;
//	while (l <= mid && j <= r ) {
//
//		if (arr[l] <= arr[r])tmp[k++] = arr[i++];
//		else tmp[k++] = arr[j++];
//
//	}
//	while (i <= mid)tmp[k++] = arr[i++];
//	while (j <= r)tmp[k++] = arr[j++];
//	
//	for (i = l, j = 0;i <= r;i++, j++)
//		arr[i] = tmp[j];
//}
//
//int main() {
//
//	scanf("%d", &n);//scanf输入时，一定要取地址！！！
//
//	for (int i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//
//	merge_sort(arr, 0, n - 1);
//
//	for (int i = 0; i < n; i++)
//		printf("%d\n", arr[i]);
//
//	return 0;
//}


//二分查找浮点数的平方根(这是存在误差的)

#include<iostream>
using namespace std;


int main() {

	double x;
	cin >> x;


	double l = 0;
	double r = x;
	
	//for(int i = 0 ;i<100 ;i++)  //这里也可以直接循环迭代100
	while (r - l > 1e-6)//保证结果的精度
	{
		double mid = (r + l) / 2;
		if (mid * mid >= x) r = mid;
		else l = mid;
	}

	printf("%lf", l);


	return 0;
}

//二分查找整数是最难的(必须要谨慎考虑边界问题)

//模板1
int B_search(int l, int r) {

	while (l < r) {

		int mid = l + r >> 1;
		if (check(mid))r = mid;
		l = mid + 1;

	}
	return l;

}

//模板2

int B_search(int l, int r) {

	while (l < r) {
		int mid = l + r + 1 >> 1;
		if (check(mid))l = mid;
		r = mid - 1;
	}
	return l;
}