# STL笔记
## Unique
### 函数形式
```cpp
unique(iterator it_1, iterator it_2);
 ```
### 函数功能
对容器中[it_1, it_2)范围的元素去重，返回一个迭代器，该迭代器指向的是去重后容器的最后一个元素的下一个元素。
### 源码实现
```cpp
iterator unique(iterator it_1, it_2){
    if(it_1 == it_2) return it_2;
    iterator result = it_1;
    whilit_1 != it_2){
        if(*result != *it_1){
            *(++result) = *it_1
        }
    }
    return ++result;
}
```
## Distance
### 函数形式
```cpp
distance(iterator it_1, iterator it_2);
```
### 函数功能
返回容器中[it_1, it_2)范围内元素的个数