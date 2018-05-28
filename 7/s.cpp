class T{
friend T & operator++(const T & t);
public:
    int a;
public:
    T(int a){
        this->a = a;    
    }
    //使用成员函数重载运算符号
    T & operator--(){
        this->a -- ;
        return *this;
    }
};
//使用全局重载运算符号
T & operator++(const T & t){
    t.a++;//直接访问属性，需要定义成友元函数
    return t;
}

int main(){
    T t(1);
    t++;
    return 0;
}
