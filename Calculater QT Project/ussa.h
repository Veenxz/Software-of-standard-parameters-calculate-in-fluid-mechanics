#ifndef USSA_H
#define USSA_H
#include <stdio.h>
#include <math.h>
#include <QDebug>

typedef	struct //定义结构体
    {
    double T,p,rho,mu, g,a;
    }USSA;

USSA getUssa(double a,double b,double c,double d,double e,double f)  //传入main（）函数计算所得参数
{

    USSA result;  //定义对象
    result.T=a;
    result.p=b;
    result.rho=c;
    result.mu=d;
    result.g = e;
    result.a = f;
    return result;	//返回值
}

USSA ussa_get(double Z)

{
    double betas,gn,R,r,S;

    //定义常量

    betas = 1.458 * pow(10,-6);
    S = 110.4;
    R = 287.05287;
    gn = 9.80665;
    r = 6356766;

    //缺省值
    double H,T,p,rho,a,mu,g,pf;
    H=0.0;
    pf=0.0;

    //重力位势高度计算
    H=Z/(1+Z/r);

    //标准大气参数计算

    //ISO Add 1

        if(Z>=-2000&&Z<=0)
        {
            T=301.15-0.0065*(H+2000);
            p=pow((3.731444-0.841728*pow(10,-4)*H),5.255880);
        }

        else if (Z>0&&Z<11019)
        {
            T=288.15-0.0065*H;
            p=pow((3.731444-0.841728*pow(10,-4)*H),5.255880);
        }

        else if(Z>11019&&Z<=20062)
        {

            T=216.65;
            p=226.320*exp(1.7345737-1.5768852*pow(10,-4)*H);
        }

        else if(Z>20062&&Z<=32162)
        {

            T=216.65*0.001*(H-20000);
            p=pow((1.2356515/(1+0.5085177*pow(10,-5)*H)),34.16321878);
        }

        else if(Z>32162&&Z<=47351)
        {
            T=228.65+0.0028*(H-32000);
            p=pow((1.9630052/(1+0.2013664*pow(10,-4)*H)),12.20114957);
        }

        //USSA 1976
        else if(Z>47351&&Z<=51413)
        {
            T=270.65;
            p=1.10906*exp(-(gn/(R*T)*(0.001*H-47)));
        }

        else if(Z>51413&&Z<=71802)
        {
            T=270.65-0.0028*(H-51000);
            p=0.66938*pow((1-(2.8/270.65)*(0.001*H-51)),(1000*gn/R)/2.8);
        }

        else if(Z>71802&&Z<=86000)
        {
            T=214.65-0.002*(H-71000);
            p=0.01*3.9564*pow((1-(2/214.65)*(0.001*H-71)),(1000*gn/R)/2);
        }

        else if(Z>86000&&Z<=91000)
        {
            T=186.870;
            p=0.01*0.37338*exp(-(gn/(R*T)*(0.001*H-86)));
        }

        //以下计算只供参考
        else if (Z>91000&&Z<=110000)
        {
            T=186.870+2.80*0.001*(H-91000);
            p=0.01*0.18359*pow((1-(1.03/186.870)*(0.001*H-91)),(1000*gn/R)/1.03);
        }

        else if (Z>110000&&Z<=120000)
        {
            T=240.00-15.325*0.001*(H-91000);
            p=0.00001*7.1042*pow((1-(12/240.00)*(0.001*H-110)),(1000*gn/R)/12);
        }

        else if (Z>120000&&Z<=500000)
        {
            T=86.65+2.4*0.001*(H-91000);
            p=0.00001*2.5382*pow((1-(12/86.65)*(0.001*H-120)),(1000*gn/R)/12);
        }

        else if (Z>500000&&Z<=1000000)
        {
            T=999.24+0.00125*0.001*(H-91000);
            p=0.000000001*3.0236*pow((1-(12/999.24)*(0.001*H-500)),(1000*gn/R)/12);
        }

        else
        {
            qDebug() <<"high override!!\n";
            exit(0);
        }

USSA ussa_get(double pf);

    g=gn*(r/(r+Z));
    rho=100*p/(R*T);
    mu=(betas*pow(T,1.5))/(T+S);
    a=20.046795*sqrt(T);
    p=100*p+pf;

    return getUssa(T,p,rho,mu,g,a);//用USSA类 声明变量 test
 }

#endif // USSA_H
