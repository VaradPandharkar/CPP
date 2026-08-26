#include<iostream>
template <typename T>
T max(T x, T y){
    // Function_Template = Describe What a function look likes.
    return (x > y) ? x : y;
}
int main (){
    std::cout << max(1,2) << '\n';
}