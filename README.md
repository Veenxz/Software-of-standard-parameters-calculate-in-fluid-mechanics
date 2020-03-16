# Software-of-standard-parameters-calculate-in-fluid-mechanics

<p>Version:
<a href="" rel="nofollow"><img src="https://img.shields.io/badge/V%201.0.1-Calculater--stable-blue" alt="version 1" data-canonical-src="https://img.shields.io/badge/V%201.0-Calculater--stable-blue" style="max-width:100%;"></a>&ensp;&ensp;&ensp;&ensp;<img src="https://img.shields.io/badge/V1.0.1%20Building-100%25-green"></p>


<p>Licence:
<a href="" rel="nofollow"><img src="https://img.shields.io/badge/Licence-GPL%203.0-green alt="version 1" data-canonical-src="<img src="https://img.shields.io/badge/Licence-GPL%203.0-green" style="max-width:100%;"></a></p>

## File specification 
Calculater Program was created by Qt.\
Environment:Qt Creator 4.11.0 (Enterprise)、Qt 5.14.1 (MinGW 64-bit)\
The help file was written by Chinese.\
You can see our calculation in "Source Code" Flie.\
You can use our calculator by download "V1.0.1 boxed.zip",click "标准大气参数计算软件.exe" can use our software directly.\
You can also use "calculate.m" calculate in Matlab.\
The equations for our calculate is available in "equation.pdf".

## 软件名称\(Software Title)

  标准大气参数计算软件
  (Standard Atmosphere Calculator)

## 软件功能\(Software Function)

本软件可根据给定高度、附加水蒸气分压，求解标准大气参数。

采用了现行的最新国际标准大气（ISO-2533-1975 Add 2、Add 1）进行计算，并且参考美国标准大气（U.S. Standard Atmosphere 1976）、国际标准大气（ISA）、美国宇航局马歇尔航天飞行中心地球全球参考大气模型（NASA EGRA2010）和国家参考大气（GB 1920-80）进行公式梳理和校正，保证了其计算精度及准确性，方便了流体力学、数值模拟的基础数据计算，可以实现不同高度附加水汽压的标准参考大气参数计算，让流体力学理论验证、数值模拟计算时更加贴近实际空气状况。

它可作为计算流体力学数值模拟、压力测高表校准、航空器性能计算、飞机和火箭设计、弹道查算表和气象图表制作的依据。  

## 计算原理\(Calculation Principle)

标准大气（standard atmosphere），又称“参考大气 (reference atmosphere)”。能够表示垂直方向上气温、气压、湿度等大气参数平均分布的一种模式大气。

在模型中，假定大气是静止的、空气为干洁的理想气体，在给定温度-高度廓线及海平面上的温度、压力和密度初始值后，通过对大气静力方程及气体状态方程进行积分，获得温度、气压和密度等数据。

另外，在标准大气模型中还对各高度上大气的成分、标高、重力加速度、空气质点数密度、质点平均速度、平均碰撞频率、平均自由程、平均分子量、音速、粘滞系数、热传导率等有所规定。


具体使用问题详见Help文件。\
For other questions, see "help.pdf".
