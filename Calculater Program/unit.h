#ifndef UNIT_H
#define UNIT_H
/**
 *用于声明单位及用来计算单位转换的库
 */
namespace unit {
/**
     * @brief
     * 单位的表示方式
     *  相除的中间用下划线隔开
     *  相乘的中间用$隔开
     */
    enum High{
        m,feet
    };
    enum Temperature{
        C,F,K
    };
    enum Pressure {
        Pa
    };
    enum Density {
        kg_m$m$m
    };
    enum Speed {
        m_s
    };

    ///一堆单位转换的函数
    /// 重载
//    /**
//     * @brief change
//     * @param value
//     * @param from
//     * @param to
//     * @return
//     *
//     */
//    double change(const double &value,const High&from,const High&to){

//    }

//    /**
//     * @brief change
//     * @param value
//     * @param from
//     * @param to
//     * @return
//     */
//    double change(const double &value,const Temperature&from,const Temperature&to){

//    }

//    /**
//     * @brief change
//     * @param value
//     * @param from
//     * @param to
//     * @return
//     */
//    double change(const double &value,const Pressure&from,const Pressure&to) {

//    }

//    /**
//     * @brief change
//     * @param value
//     * @param from
//     * @param to
//     * @return
//     */

//    double change(const double &value,const Density&from,const Density&to) {

//    }

//    /**
//     * @brief change
//     * @param value
//     * @param from
//     * @param to
//     * @return
//     */
//    double change(const double &value,const Speed&from,const Speed &to) {

//    }
}
#endif // UNIT_H
