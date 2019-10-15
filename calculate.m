%%  STANDARD ATMOSPHERE CALCULATIOR BASED ON SI UNITS
%   AUTHOR:BJFU 2019/3/1
clc
clear
close all
%%  Program Define
%   Primary constant and characteristics

    %normal earth's radius
    %Unit:[m]
        r=6356766;
        
    %standard acceleration of free fall
	%Unit:[m/s2]
	    gn=9.80665;
		
	%air molar mass at sea level
	%unit:[kg/kmol]
		M=28.964420;
		
	%avogadro constant
	%unit:[k/mol]
		NA=602.257*10^24;
		
	%Sea Level Pressure
	%unit:[Pa] or [N/m^2]
		Pn=101325.0;
		
	%Universal Gas Constant
	%unit:[J，K^-1，kmol^-1]
		RA=8314.32;
		
	%Specific Gas Constant
	%unit:[J，K-1，kmol-1]
		R=287.05287;
		
	%Sutherland's empirical ceofficients in the equation for dynamic viscosity
	%Unit:[K]
		S=110.4;
		
	%thermodynamic ice-point temperature at mean sea level
	%Unit:[K]
		T0=273.15;
		
	%standard thermodynamic ice-point temperature at mean sea level
	%Unit:[K]
		Tn=288.15;
		
	%Celsius ice-point temperature at mean sea level
	%Unit:[≧]
		t0=0.00;
		
	%standard Celsius ice-point temperature at mean sea level
	%Unit:[≧]
		tn=15.00;
		
	%Sutherland's empirical ceofficients in the equation for dynamic viscosity
	%Unit:[kg，s^-1，m^-1，K^-1/2]
		betas=1.458*10^-6;
		
	%adiabatic index
	%Unit:[dimensionless]
		kappa=1.4;
		
	%standard air density
	%Unit:[kg，m^-3]
		rhon=1.225;
		
	%effective collicion diameter of an air molecule
	%Unit:[m]
		sigma=0.365*10^-9;
		
	%speed of sound
	%Unit:[m/s]
		an=340.394;
		
	%specific weight
	%Unit:[N/m^3]
		gamma=12.013;
		
	%dynamic viscosity
	%Unit:[Pa，s]
		mun=17.894*10^-6;
        
%%  Calculator
    %Input altitude you want
    Z=10999;
    
        H=Z/(1+Z/r);
        g=gn*(r/(r+Z));
    
    if Z>=-2000&&Z<0
        T=301.154-0.0065*(H+2000);
        p=(3.731444-(0.841728*10^-4)*H)^5.255880;
        
    elseif Z==0
        T=288.150;
        p=1013.25;
        
    elseif Z>0&&Z<=11019
        T=288.15-0.0065*H;
        p=(3.731444-(0.841728*10^-4)*H)^5.255880;
        
    elseif Z>11019&&Z<=20063
        T=216.65;
        p=226.320*exp(1.7345737-1.5768852*10^-4*H);
        
    elseif Z>20063&&Z<=32162
        T=216.65*0.001*(H-20000);
        p=(1.2356515/(1+0.5085177*10^-5*H))^34.16321878;
        
    elseif Z>32162&&Z<=47351
        T=228.65+0.0028*(H-32000);
        p=(1.9630052/(1+0.2013664*10^-4*H))^12.20114957;
        
    elseif Z>47351&&Z<=51413
        T=270.65;
        p=110.916*exp(-(gn/(RT))*(H-47000));
        
    elseif Z>51413&&Z<=71802
        T=270.65-0.0028*(H-51000);
        p=66.9473*(1-(2.8/270.65)*(H-51000))^(1000*gn/R)/2.8);
        
    elseif Z>71802&&Z<=86000
        T=214.65-0.002*(H-71000);
        p=3.9564*(1-(2/214.65)*(H-51000))^(1000*gn/R)/2);
        

    else
                
        
    end
    
    
    rho=100*p/(R*T);
    mu=(betas*T^(3/2))/(T+S);
    a=20.046795*T^(1/2);
    
%%  see in the command line window
Z
T
p
rho
a
mu
g

fprintf('when the height is %f \n  p=%f \n',g,Z);

