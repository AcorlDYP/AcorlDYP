//��������Ĵ���ʵ��

//�������ȶ��ԵĶ��壺������Ĺ������������Ԫ�ص�ֵ��ͬ��������ǰ�������λ���Ƿ�ᷢ���ı�
//��������ı�������ȶ������û�з����ı����ȶ�


//1.quick_sort(��������)��C++ʵ��(���ȶ�)�������Ҫ�ȶ������Թ�����ά����vec<ai,i>(��ʹԪ�ص�ֵ��ͬʱ����ʱ��Ӧ���±�Ҳ�ǲ�ͬ��)
//#include<iostream>
//
//using namespace std;
//const int N = 1e6 + 10;//������Ǳ���еĿ�ѧ������ 10000000(һ����)
//
//int n;
//int arr[N];
////Ŀǰ���Լ���������ڲ����Ǿ�̬����������£���Ҫ�ں����з��ص�ַ��
//void quick_sort(int arr[], int l, int r) {
//
//	if (l >= r)return;//���ǵݹ�Ľ�����־��
//
//	int i = l - 1;
//	int j = r + 1;
//
//	//��ʱ���xȡ��ֵ�ᵼ����ѭ����
//	int x = arr[l];//�ݹ������ѡ��� 'x' ��ȡֵ����Ҫ��ģ� 
//
//
//	while (i < j)
//	{
//		while (arr[++i] < x);
//		while (x < arr[--j]);
//		// ����Ϊʲô���ܼ��� '=' �أ��𣺻ᵼ�·Ƿ������ڴ�
//		//��ȡ' = 'ʱ�����ݹ鵽ֻʣ������Ԫ��ʱ������һ������һ�ߵ�ֵ�ǵ���x�ģ�
//		//��ʱ�ж�ѭ��������i����j�����ƶ����Ӷ����³����߽磬�Ƿ������ڴ棬���³������
//
//		if (i < j) swap(arr[i], arr[j]);//����������жϣ�������i = j(�ⲻ��Խ�����Ӱ�죬�������˲���Ҫ�Ľ���)
//		//��������i > j�����ʱ����i��j�Ѿ�Խ�磬���û���жϽ��н����ͻᵼ�´���
//	}
//	quick_sort(arr, l, j);   //ʹ���˵ݹ�ͷֶ���֮��˼�룡
//	quick_sort(arr, j + 1, r);
//
//}
//
//int main() {
//	//�����n�������Ԫ�ظ�����
//	scanf_s("%d", &n);//scanf��Ч����C++���Ǵ���cin��,�����������ǻ���ʹ��scanf��
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


//2.�鲢����C++�����ʵ��
//˼·������ȷ���е㣬��Ԫ�ط�Ϊ�����������䣬�ֱ������������еݹ��������鲢���϶�Ϊһ!

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
////�鲢����
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
//	scanf("%d", &n);//scanf����ʱ��һ��Ҫȡ��ַ������
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


//���ֲ��Ҹ�������ƽ����(���Ǵ�������)

#include<iostream>
using namespace std;


int main() {

	double x;
	cin >> x;


	double l = 0;
	double r = x;
	
	//for(int i = 0 ;i<100 ;i++)  //����Ҳ����ֱ��ѭ������100
	while (r - l > 1e-6)//��֤����ľ���
	{
		double mid = (r + l) / 2;
		if (mid * mid >= x) r = mid;
		else l = mid;
	}

	printf("%lf", l);


	return 0;
}

//���ֲ������������ѵ�(����Ҫ�������Ǳ߽�����)

//ģ��1
int B_search(int l, int r) {

	while (l < r) {

		int mid = l + r >> 1;
		if (check(mid))r = mid;
		l = mid + 1;

	}
	return l;

}

//ģ��2

int B_search(int l, int r) {

	while (l < r) {
		int mid = l + r + 1 >> 1;
		if (check(mid))l = mid;
		r = mid - 1;
	}
	return l;
}