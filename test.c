//求出0～100000之间的所有“水仙花数”并输出。

//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
//test my edit file and pull request

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
