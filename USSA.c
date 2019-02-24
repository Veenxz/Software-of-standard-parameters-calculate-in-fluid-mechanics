#include <stdio.h>
#include <math.h>

typedef	struct //定义结构体 
	{
	double T;
	double p;
	double rho;
	double mu;
	double g;	
	}USSA;

USSA getUssa(double a,double b,double c,double d,double e)  //传入main（）函数计算所得参数 
{
	
	USSA result;  //定义对象 
	result.T=a;
	result.p=b;
	result.rho=c;
	result.mu=d;
	result.g=e;
	return result;	//返回值 
}


int main()
{
	double betas,gn,R,r,S;	
	betas = 1.458 * pow(10,-6);
	S = 110.4;
	R = 287.05287;
	gn = 9.80665;
	r = 6356766;
	
	double H,Z,T,p,rho,a,mu,g;
	
	printf("请输入海拔高度:");
	scanf("%lf",&Z);  //键盘输入海拔高度 
	H=Z/(1+Z/r);   // 
	 
 
		if(Z>=-1000&&Z<=11000)
		{
			T=288.15-0.0065*H;
       	    p=pow((3.731444-0.841728*pow(10,-4)*H),5.255880);
       }
       	
       	else if(Z>11000&&Z<=20000)
       	{
		
       		T=216.65;
            p=226.320*exp(1.7345737-1.5768852*pow(10,-4)*H);
    	}
            
        else if(Z>20000&&Z<=32000)
        {
		 
        	T=216.65*0.001*(H-20000);
        	p=pow((1.2356515/(1+0.5085177*pow(10,-5)*H)),34.16321878);
        }
        	
        else if(Z>32000&&Z<=47000)
        {
        	T=228.65+0.0028*(H-32000);
        	p=pow((1.9630052/(1+0.2013664*pow(10,-4)*H)),12.20114957);
        }
        	
        else if(Z>47000&&Z<=51000)
		{
        	T=270.65;
        	p=110.916*exp(-(gn/(R*T)*(H-47000)));
    	}
        	
        else if(Z>51000&&Z<=71000)
        {
    		T=270.65-0.0028*(H-51000);
        	p=66.9473*(1-(2.8/270.65)*(H-51000));
        }
        	
        else if(Z>71000&&Z<=86000)
		{ 
        	T=214.65-0.002*(H-71000);
        	p=214.65;
        }
        	
        else
        {
			printf("The high is illegal in the calculation\n");
			return 0;  //超出范围则结束程序 
		}
 
	g=gn*(r/(r+Z));    
	rho=100*p/(R*T);    
	mu=(betas*pow(T,1.5))/(T+S);    
	a=20.046795*sqrt(T);
	
	USSA test=getUssa(T,p,rho,mu,g);//用USSA类 声明变量 test 
	printf("%.4f\n%.4f\n%.4f\n%.4e\n%.4f\n",test.T,test.p,test.rho,test.mu,test.g);
	return 0;
 } 
