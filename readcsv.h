#ifndef READCSV_H
#define READCSV_H

#include <string>       //字符串
#include <vector>       //数组，用二维数组来读csv行列表


class ReadCSV           //读取的类
{
public:


    ReadCSV(const std::string &filePath);       //构造函数
    ~ReadCSV();                                 //销毁 

    bool readFile();
    const std::vector<std::vector<std::string>>& getData() const;       //返回一个常量二维数组的引用，是常量函数，函数名字叫getData,

private:

    std::string filePath;
    //文件的地址
    std::vector<std::vector<std::string>> data; 
    //数据表
};

#endif // READCSV_H
