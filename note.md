# 我的笔记

## 时间
- 2026年4月26日
  
## 学习内容
### c++基本类型
#### 整数
- short 
- int
- long
- long long
#### 字符
- char
- wchar_t
- char16_t
- char32_t
- char8_t
#### 浮点
- float 
- double 
- long double
#### 逻辑
- bool
#### 空
- void
#### 空指针
- nullptr_t
#### 备注
- varchar是sql中的基础类型，而不是c++中的内容
- std::string是标准库的class type，不是基础类型

## 实践问题
### 类新建问题
- 把实现放在头文件（/ 或直接 #include了.cpp），导致同一符号在一个或多个翻译单元中重复出现，编译器报 “redefinition”
- #program once的作用是防止同一头文件在同一翻译单元（.cpp 编译时的预处理结果）被多次包含，避免重复定义/重声明错误，可以用#ifndef/#define/#endif替换
- inline函数：允许在多个翻译单元中出现相同的函数/变量定义（只要每个定义文本一致），而不会违反 ODR（One Definition Rule）。也就是说，把函数实现放在头文件并在多个 .cpp 中包含时，给出 inline 可以避免链接时的重复定义错误。