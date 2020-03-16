#include <stdio.h>
#include <math.h>

typedef	struct //定义结构体 
	{
	double deltas;
	double Rex;
 	
	}stu;

stu getStu(double a,double b )  //传入main（）函数计算所得参数 
{
	
	stu result;  //定义对象 
	result.deltas=a;
	result.Rex=b;
	return result;	//返回值 
}


int main()
{
	double Uinfinite, rho, mu, L, Y ; 
	double Rex,Cf,tauwall,Ufric, deltas;
	printf("请分别输入Uinfinite,rho,mu,L,Y+\n用空格隔开\n全部输入完成后按回车键\n都按回车也行\n");
	scanf("%lf",&Uinfinite);  
	scanf("%lf",&rho);
	scanf("%lf",&mu);
	scanf("%lf",&L);
	scanf("%lf",&Y);
 
Rex = rho * Uinfinite * L / mu*1.0;
Cf = 0.026 / pow(Rex ,1.0 / 7);
tauwall = Cf * rho *pow (Uinfinite , 2) / 2.0;
Ufric =pow( (tauwall / rho), 0.5);
deltas = Y *mu / (Ufric * rho);	 
 
	stu test=getStu(deltas,Rex);//用stu类 声明变量 test 
	printf("deltas:%.2f\nRex:%.2f\n",test.deltas,test.Rex);
	return 0;
 } 
