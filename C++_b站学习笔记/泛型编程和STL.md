# 模板

建立通用的模具，提高复用性（PPT模板）

**模板的特点**：不可以直接使用，只是一个框架。模板的通用不是万能的。

面向对象编程思想//////**泛型编程**——利用模板技术。

两种模板机制：**函数模板**，**类模板**

+++

## 1 函数模板

void func(int a) {}     将void（返回值类型）和int（形参类型）抽象话，**用虚拟的类型**来表示。

+++

`template<typename T>`

`函数声明或定义`

**template**：声明创建模板

**typename**：

**T**：通用的数据类型，可替换

+++

**模板使用方式**

1.自动类型推导==== mySwap(a, b);   

2.显示指定类型====== mySwap<int>(a, b);

+++

普通函数调用，**可以**发生隐式类型转换。

函数模板用，**用自动类型推导**，**不可以**发生隐式类型转换。

函数模板用，**用显示指定类型**，**可以**发生隐式类型转换。

+++

**普通函数和函数模板的调用规则**：

1.普通模板优先。

2.利用**空模板参数列表**来强制调用函数模板。

3.函数模板可以重载。

4.如果函数模板可以产生更好的匹配，函数模板优先调用。

+++

# STL

**Standard** **Template** **Library** 标准模板库

STL从广义上分为：**容器**（container） **算法**（algorithm） **迭代器**（iterator）。

**容器**和**算法**之间通过**迭代器**进行无缝衔接。

STL几乎所有的代码都采用了**模板类**或者**模板函数**。

+++

## 1 STL**六大组件**

**容器**：数据结构。

**算法**：算法。

**迭代器**：连接容器和算法。

**仿函数**：行为类似函数，可作为算法的某种策略。

**适配器（配接器）**：修饰容器、仿函数、迭代器接口。

**空间配置器**：负责空间的配置和管理。

+++

## 2 容器 算法 迭代器

**容器**

**序列式容器**：数组、链表、栈、队列……

**关联式容器**：二叉树



**Algorithm**：质变算法（替换、删除）/非质变算法（遍历、寻找）



**迭代器**：算法要通过迭代器才能访问容器中的元素。

​				每个容器都有专属的迭代器。

​				类似于指针。

**随机访问迭代器**，功能强大，常用。

+++

# STL常用容器

## 1 string

string——c++风格的字符串，本质是一个类，封装了char*。

内部封装了很多成员方法。

### 1.1构造函数

`string();`   创建一个空字符串

`string(const char* s);`    利用已知字符串给string初始化

`string(const string &str);`   拷贝函数  利用一个string对象给另一个string对象初始化

`string(int n, char c);`       n个字符c组成的字符串

### 1.2 赋值操作

**=**

`string& operator=(const char *s);`        

`string& operator=(const string &str);`

`string& operator=(char c);`

**str.assign();**

`string& assign(const char *s);`

`string& assign(const char *s, int n); `   把字符串s的前n个字符赋值给string

`string& assign(const string &str);`

`string& assign(int n ,char c);`

### 1.3 字符串拼接

**+**

`string& operator+=(const char *s);`

`string& operator+=(const char c);`

`string& operator+=(const string &str);`

**str.append();**

`string& append(const char *c);`

`string& append(const char *c, int n);`

`string& append(const string &str);`

`string& append(const string &str, int pos, int n);`

### 1.4 查找和替换

**int find();**		从pos位置开始，查找字符/字符串在string里**第一次**出现的位置，并返回

`int find(const string &str, int pos = 0)const;`

`int find(const char *s, int pos = 0)const;`

`int find(const char *s, int pos = 0, int n)const;`

**int rfind();**      从pos位置开始，查找字符/字符串在string里**最后一次**出现的位置，并返回

`int rfind(const string &str, int pos = npos)const;`

`int rfind(const char *s, int pos = npos)const;`

**string& replace();**		

`string& replace(int pos, int n, const string &str);`  从pos开始的n个字符替换为str

`string& replace(int pos, in n, const char *s);`		    从pos开始的n个字符替换为s

### 1.5 比较

**int compare();**  

`int compare(const string &str)const;`

### 1.6 字符存取

**[]**      **at**

## 2 vector

～数组，单端数组。

 **动态扩展**：找一块更大的内存空间，拷贝原数据，释放原空间。

支持随机访问。

### 1.1 构造、赋值

**构造**

`vector<T> v;`

`vector(v.begin(), v.end());`

`vector(n, elem);`

`vector(const vector &vec);`

**赋值**

### 1.2 容量、大小

`empty();`											判空

`capacity();`									  容量

`size();`											  返回元素个数

`resize(int num);`							重新定义vector长度为num，默认值填充/删除尾部

`resize(int num, elem);`				用elem填充

### 1.3 插入、删除、数据存取

**插入**

`push_back(elem);`							尾部插入元素elem

`insert(const_iterator pos, elem);`    		迭代器指向位置pos处插入元素elem

`insert(const_iterator pos, int count, elem);`       迭代器指向位置pos处插入count个元素elem

**删除**

`pop_back();`									  尾部删除元素

`erase(const_iterator pos);`       删除迭代器指向位置pos的元素

`erase(const_iterator start, const_iterator end);`  删除迭代器指向位置从start到end之间的元素

`clear();`											删除容器中所有元素

**数据存取**

`at(int idx);`									返回索引 idx 所指向的数据

`operator[];`

`front();`											返回第一个数据元素

`back();`											  返回最后一个元素

### 1.4 互换、预留

`swap(vec);`

`reserve(int len);`

## 3 deque

双端数组

在头部的插入删除比vector快，vector访问元素更快。

**中控器**——维护每段**缓冲区**的**地址**——缓冲区中存放**真实数据**

迭代器支持随机访问。

### 3.1 构造、赋值、大小

**构造**

`deque<T>;`

`deque<beg, end>;`

`deque(n, elem);`

`deque(const deque &deq);`

**赋值**

`deque& operator=(const deque &deq);`

`assign(beg, end);`

`assign(n, elem);`

**大小**

`empty();`

`size();`

`resize(num);`

`resize(num, elem);`

### 3.2 插入、删除

**两端操作**

`push_front(elem);`				`push_back(elem);`

`pop_front();`						  `pop_back();` 

**指定位置操作**

`insert(pos, elem);` (pos为迭代器)

`insert(pos, int num, elem);`					`insert(pos, beg, end);`

`erase(beg, end);`										  `erase(pos);`

`clear();`

## 4 list

双向链表

双向迭代器

### 4.1 构造、赋值、大小

**构造**

`list<T> let;`				`list(beg, end);`

`list(n, elem);`			`list(const list &lst);`

**赋值**

`assign(beg, end);`					`assign(n, elem);`

`list& operator=(const list &lst);`			`swap(lst);`

**大小**

`size();`			`empty();`

`resize(len);`		`resize(len, elem);`

### 4.2 插入、删除、反转、排序

**插入、删除**

`push_front(elem);`				`push_back(elem);`

`pop_front();`						  `pop_back();`

`insert(pos, elem);`			pos--迭代器

`erase(pos);`

`remove(elem);`					删除与elem匹配的元素

`front();`		`back();`	  返回第一个元素/最后一个元素

**反转、排序**

所有不支持随机访问迭代器的容器，不可以用标准算法。

`reverse();`				

`sort();`   默认为升序。 若要降序，需另创建一个bool型对比函数。

`sort(Compare);`

## 5 set、multiset

所有元素在插入时**自动被排序**。

set、multiset属于**关联式容器**，底层结构是**二叉树**。

set**不允许**有**重复**的元素。multiset允许。  包含set头文件即可。

set容器内元素的访问只能用迭代器

## 6 map、multimap

map中所有元素都是**pair**

pair<key, value>, key起到**索引**作用，value是元素的**真实数据**，**map中按照key值自动排序**

**关联式容器**，底层结构是**二叉树**，自动排序。

`insert(elem);`		插入，并自动排序和去重

`find(elem);`			查找，返回对应的迭代器

`erase();`				  删除，需要填入一个迭代器，可与find组合使用：`s.erase(s.find(elem));`

# 函数对象

重载**函数调用操作符**的类，其对象称为**函数对象**。

函数对象使用重载的（）时，行为类似函数调用，也叫**仿函数**。

函数对象（仿函数）的本质是一个**类**，而不是一个函数。

## 1 函数对象的使用

函数对象在使用时，可以像普通函数那样调用，可以有**参数**和**返回值**。

函数对象超出普通函数的概念，函数对象可以有自己的状态。

函数对象可以作为参数传递。

## 2 谓词

返回**bool**类型的仿函数——**谓词**。

`vector<int>::iterator pos = find_if(v.begin(), v.end(), GreaterFive());`

`sort(v.begin(), v.end(), myCompare());`

## 3 内建函数对象

头文件`#include<functional>`

## 4 常用算法

`#include<algorithm>`

### 4.1 遍历

`for_each(iterator begin, iterator end, func);`

`transform(iterator begin1, iterator end1, iterator begin2, func);`

### 4.2 查找

`find(iterator begin, iterator end, value);`		返回迭代器

`find_if(iterator begin, iterator end, _Pred);`

`adjacent_find(iterator begin, iterator end);`	查找祥林重复元素，返回相邻元素的第一个位置的迭代器

`bool binary_search(iterator begin, iterator end, value);`		二分查找，只能用于有序序列。

`count(iterator begin, iterator end, value);`		统计元素出现的次数

`count_if(iterator begin, iterator end, _Pred);`		根据谓词条件统计出现的次数

### 4.3 排序

`sort(iterator begin, iterator end, _Pred);`

`random_shuffle(iterator begin, iterator end);`		洗牌

`merge(iterator begin1, iterator end1, iterator begin2, iterator end2, iterator desk);`		两个有序序列合并成一个有序序列

`reverse(iterator begin, iterator end);`

### 4.4 拷贝、替换

`copy(iterator begin, iterator end, iterator dest);`

`replace(iterator begin, iterator end, oldvalue, newvalue);`

`replace_if(iterator begin, iterator end, _Pred, newvalue);`

`swap(container c1, container c2);`

### 4.5 算术生成

**头文件**： `#include<numeric>`

`accumulate(iterator begin, iterator end, value);`		计算容器元素累计总和，value为起始累加值。

`fill(iterator begin, iterator end, value);`	向容器中填充数据

### 4.6 集合

`set_intersection(iterator begin1, iterator end1, iterator begin2, iterator end2, iterator dest);`				求两个集合的交集

`set_union(iterator begin1, iterator end1, iterator begin2, iterator end2, iterator dest);`		并集

`set_difference(iterator begin1, iterator end1, iterator begin2, iterator end2, iterator dest);`		差集
