//���0��100000֮������С�ˮ�ɻ������������

//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ��������� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������


#include<stdio.h>
#include<windows.h>
#include<math.h>
int main(){
	for (int i = 0; i <100000; i++)
	{
		double count = 1;
		int tmp = i;
		double sum = 0;
		while (tmp / 10)
		{
			count++;
			tmp = tmp / 10;
		}
		tmp = i;
		while (tmp)
		{
			double a = tmp % 10;
			sum += pow(a, count);
			tmp = tmp/10;
		}
		if (sum == i)
		{
			printf("%d ", i);
		}

	}	
	system("pause");
	return 0;
}