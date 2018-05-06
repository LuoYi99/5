/*
题目：
一根高筋拉面，中间切一刀，可以得到2根面条。
如果先对折1次，中间切一刀，可以得到3根面条。
如果先对折两次，中间切一刀，可以得到5根面条。
那么，连续对折10次，中间切一刀，会得到多少面条呢？
*/
/*
思路：
利用数学方法：
对折0次，一刀下去，刀会切到1根拉面，得到2根拉面
对折1次，一刀下去，刀会切到2根拉面，得到3根拉面
对折2次，一刀下去，刀会切到4根拉面，得到5根拉面
对折3次，一刀下去，刀会切到8根拉面，得到9根拉面
。。。
一次类推，可以找到规律
对折n次，一刀下去，刀会切到你2的n次方根拉面，得到2的n次方加1根拉面
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	printf("请输入对折次数:");
	scanf("%d", &x);
	printf("得到%d根拉面\n", (int)pow(2,x)+1);
	while (1);
	return 0;
}