#include <stdio.h>
#include <stdlib.h>
//���������������ֵ
//�����Ķ���,һ������ֻ�ܶ���һ��
//���ǿ��Ա��ظ�����
//(x,yΪ�β�)
int Max(int x, int y) {
	if (x > y) {
		return x;
	}
	return y;
}
//int main() {
//	int a = 10;
//	int b = 20;
//	//��������,ʵ�ʲ���(ʵ��)
//	int ret = Max(a, b);
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//ʵ��һ��������ɿ����������
//�βκ�ʵ�εĹ�ϵ,�β���ʵ�ε�һ�ݿ���
//�����ڲ��޸��β��޷���ʵ�����Ӱ��
//����ͨ����ָ��ķ�ʽ,ͨ����ӷ��ʲ����޸ĺ�������
//��������ʹ��ָ����Ϊ�������޸ĺ����ⲿ��������,
//�������Ĳ�����Ϊ����Ͳ���
void Swap(int* x, int* y) {
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main() {
	int a = 10;
	int b = 20;
	//Swap(&a, &b);
	int* x = &a;
	int* y = &b;
	int tmp = *x;
	*x = *y;
	*y = tmp;
	printf("%d %d\n", a, b);
	system("pause");
	return 0;
}