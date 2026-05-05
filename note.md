# 我的笔记

## 运行指导
- 安装mingw64：https://release-assets.githubusercontent.com/github-production-release-asset/446033510/566997f7-4660-4076-946a-55a3a8797bc9?sp=r&sv=2018-11-09&sr=b&spr=https&se=2026-04-27T03%3A37%3A26Z&rscd=attachment%3B+filename%3Dx86_64-14.2.0-release-posix-seh-msvcrt-rt_v12-rev0.7z&rsct=application%2Foctet-stream&skoid=96c2d410-5711-43a1-aedd-ab1947aa7ab0&sktid=398a6654-997b-47e9-b12b-9515b896b4de&skt=2026-04-27T02%3A36%3A56Z&ske=2026-04-27T03%3A37%3A26Z&sks=b&skv=2018-11-09&sig=QmPbsRsi3BIxZg9fZQig0%2F7uvbIIgLTstabLuaPtUIA%3D&jwt=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmVsZWFzZS1hc3NldHMuZ2l0aHVidXNlcmNvbnRlbnQuY29tIiwia2V5Ijoia2V5MSIsImV4cCI6MTc3NzI2MDczOCwibmJmIjoxNzc3MjU4OTM4LCJwYXRoIjoicmVsZWFzZWFzc2V0cHJvZHVjdGlvbi5ibG9iLmNvcmUud2luZG93cy5uZXQifQ.Pmc7bwKIQUN905vyvzbhCwlL_Y7-caVUa6L0odxjnAE&response-content-disposition=attachment%3B%20filename%3Dx86_64-14.2.0-release-posix-seh-msvcrt-rt_v12-rev0.7z&response-content-type=application%2Foctet-stream
- 安装cmake：https://release-assets.githubusercontent.com/github-production-release-asset/537699/b49f269b-3ba0-4089-b08f-7e71b2e5f0f2?sp=r&sv=2018-11-09&sr=b&spr=https&se=2026-04-27T04%3A08%3A14Z&rscd=attachment%3B+filename%3Dcmake-4.3.2-windows-x86_64.msi&rsct=application%2Foctet-stream&skoid=96c2d410-5711-43a1-aedd-ab1947aa7ab0&sktid=398a6654-997b-47e9-b12b-9515b896b4de&skt=2026-04-27T03%3A08%3A14Z&ske=2026-04-27T04%3A08%3A14Z&sks=b&skv=2018-11-09&sig=EZuAbcRoeCw2IrTIlIOGGiGIaIz%2FxYwMXEJTtjPPXYc%3D&jwt=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmVsZWFzZS1hc3NldHMuZ2l0aHVidXNlcmNvbnRlbnQuY29tIiwia2V5Ijoia2V5MSIsImV4cCI6MTc3NzI2MTYyMSwibmJmIjoxNzc3MjU5ODIxLCJwYXRoIjoicmVsZWFzZWFzc2V0cHJvZHVjdGlvbi5ibG9iLmNvcmUud2luZG93cy5uZXQifQ.KSyAdrFLDYaswO7os56YGvjsFYNthQHQODNxToiOuQE&response-content-disposition=attachment%3B%20filename%3Dcmake-4.3.2-windows-x86_64.msi&response-content-type=application%2Foctet-stream
- 添加mingw64和cmake到环境变量
- cmake编译命令：cmake -G "MinGW Makefiles" .. && cmake --build .

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

### 操作问题
- 在windows上安装cmake后，如果编译过程中运行cmake命令，windows也会默认去找msvc，而不会寻找安装的cmake。解决办法是指定生成器例如cmake -G "MinGW Makefiles" ..

## 时间
- 2026年5月1日

## 学习内容
### C++ 类的生命周期
#### 析构逻辑
- 栈对象的析构：当栈对象离开其作用域时，会自动调用其析构函数。栈对象析构的顺序与创建顺序相反。自动析构
- 堆对象的析构：当堆对象被显式删除（使用 delete 运算符）时，会调用其析构函数。手动析构
- 静态对象的析构：在程序结束时，会自动调用所有静态对象的析构函数。静态局部对象也是在程序结束时析构。创建是在调用处创建。
- 创建子类的时候会先创建父类，然后创建子类。析构顺序与创建顺序相反。
### 栈对象和堆对象
- 栈对象：分配在栈上的对象，生命周期由作用域控制，自动管理内存，访问速度快，但大小受限。
- 堆对象：分配在堆上的对象，生命周期由程序员控制，手动管理内存，访问速度慢，但大小无限制。
- 栈对象适合小型、短生命周期的数据结构，堆对象适合大型、长生命周期的数据结构。以下场景建议使用堆对象：
  - 对象太大，栈空间不足
  - 对象生命周期长，超出作用域后需要继续使用
  - 多处共享对象
  - 多态
#### 类创建
- 堆对象如果通过引用传入函数，函数内可以修改堆对象的内容，函数结束后堆对象不会被销毁。不能通过指针传入函数进行创建，因为指针传入函数后，函数内只能修改指针的内容，不能修改指针指向的对象。

#### 指针和引用
- 指针和引用都可以修改指向的对象的内容，但是指针需要解引用才能修改，而引用直接修改。因为指针是一个变量，它存储的是对象的地址，通过指针可以访问到对象的内容。而引用是对象的别名，引用和对象本身是绑定的，引用的内容就是对象的内容。所以引用直接修改的是对象的内容，而指针需要解引用才能修改对象的内容。
##### 指针注意点
- 空指针：指针变量可以被赋值为 nullptr，这表示指针不指向任何对象。使用空指针时需要注意，避免解引用空指针导致运行时错误。例如：
  `int* p = nullptr; *p = 20`该语句会导致运行时错误，因为 p 是一个空指针，不能被解引用。
- 野指针：指针变量指向的内存地址是随机的，或者指向的内存地址已经被释放。使用野指针时需要注意，避免访问到无效的内存地址导致运行时错误。例如：
  `int* p = new int; delete p; *p = 20`该语句会导致运行时错误，因为 p 是一个野指针，指向的内存已经被释放，不能被访问。或者`int* p; *p = 20`该语句也会导致运行时错误，因为 p 是一个野指针，指向的内存地址是随机的，不能被访问。
- 指针可以改变指向对象。
- 指针可以进行指针运算，例如指针加减整数，指针相减等（数组的运算）。
##### 引用注意点
- 引用必须初始化，不能为空引用。
- 引用一旦初始化，就不能改变指向的对象。
- 引用可以作为函数参数，局部引用不能作为函数返回值。
- 引用可以用于实现函数的重载。

##### 常量指针（const pointer）和指向常量的指针（pointer to const）
- 常量指针：指针本身是常量，不能改变指向的对象，但可以修改指向的内容。例如：`const int* p = &a;`
- 指向常量的指针：指针指向的对象是常量，不能通过指针修改对象的内容，但可以修改指向的对象。例如：`int const* p = &a;`
##### 悬空引用和悬空指针
- 悬空引用：引用指向的对象已经被销毁，但是引用本身还存在。例如：`int a = 10; int& b = a; a = 20;` 此时 b 是一个悬空引用，指向的对象 a 已经被销毁，但是 b 本身还存在。
- 悬空指针：指针指向的对象已经不存在了，但是指针本身还存在。例如：`int* p = new int; delete p;` 此时 p 是一个悬空指针，指向的内存已经被释放，但是指针本身还存在。避免悬空指针需要把指针设置为 nullptr。