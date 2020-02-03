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
## Uordered_map
### 函数形式
```cpp
unordered_map(class Key_type, class Value_type)
```
### 函数功能
* **关联性** 元素是根据键来引用的，而非索引。
* **无序性** 该容器里面的元素不会根据键值进行特定排序，而是根据哈希值组织到桶中，访问的平均时间复杂度是常量。
* **唯一性** 容器中元素的键值是唯一的。
## Sort
### 函数形式
```cpp
sort(iterator it_1, iterator it_2);
```
### 函数功能
得到不递减的顺序容器
## Upper_bound
### 函数形式
```cpp
upper_bound(iterator it_1, iterator it_2, value_type value)
```
### 函数功能
返回一个指针，该指针指向容器[it_1, it_2)中第一个大于value的元素
## Binary_search
### 函数形式
```cpp
binary_search(iterator it_1, iterator it_2, value_type value)
```
### 函数功能
寻找[it_1, it_2)中是否有value