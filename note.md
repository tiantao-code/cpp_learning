# 我的笔记

## 运行指导
- 安装mingw64：https://release-assets.githubusercontent.com/github-production-release-asset/446033510/566997f7-4660-4076-946a-55a3a8797bc9?sp=r&sv=2018-11-09&sr=b&spr=https&se=2026-04-27T03%3A37%3A26Z&rscd=attachment%3B+filename%3Dx86_64-14.2.0-release-posix-seh-msvcrt-rt_v12-rev0.7z&rsct=application%2Foctet-stream&skoid=96c2d410-5711-43a1-aedd-ab1947aa7ab0&sktid=398a6654-997b-47e9-b12b-9515b896b4de&skt=2026-04-27T02%3A36%3A56Z&ske=2026-04-27T03%3A37%3A26Z&sks=b&skv=2018-11-09&sig=QmPbsRsi3BIxZg9fZQig0%2F7uvbIIgLTstabLuaPtUIA%3D&jwt=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmVsZWFzZS1hc3NldHMuZ2l0aHVidXNlcmNvbnRlbnQuY29tIiwia2V5Ijoia2V5MSIsImV4cCI6MTc3NzI2MDczOCwibmJmIjoxNzc3MjU4OTM4LCJwYXRoIjoicmVsZWFzZWFzc2V0cHJvZHVjdGlvbi5ibG9iLmNvcmUud2luZG93cy5uZXQifQ.Pmc7bwKIQUN905vyvzbhCwlL_Y7-caVUa6L0odxjnAE&response-content-disposition=attachment%3B%20filename%3Dx86_64-14.2.0-release-posix-seh-msvcrt-rt_v12-rev0.7z&response-content-type=application%2Foctet-stream
- 安装cmake：https://release-assets.githubusercontent.com/github-production-release-asset/537699/b49f269b-3ba0-4089-b08f-7e71b2e5f0f2?sp=r&sv=2018-11-09&sr=b&spr=https&se=2026-04-27T04%3A08%3A14Z&rscd=attachment%3B+filename%3Dcmake-4.3.2-windows-x86_64.msi&rsct=application%2Foctet-stream&skoid=96c2d410-5711-43a1-aedd-ab1947aa7ab0&sktid=398a6654-997b-47e9-b12b-9515b896b4de&skt=2026-04-27T03%3A08%3A14Z&ske=2026-04-27T04%3A08%3A14Z&sks=b&skv=2018-11-09&sig=EZuAbcRoeCw2IrTIlIOGGiGIaIz%2FxYwMXEJTtjPPXYc%3D&jwt=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmVsZWFzZS1hc3NldHMuZ2l0aHVidXNlcmNvbnRlbnQuY29tIiwia2V5Ijoia2V5MSIsImV4cCI6MTc3NzI2MTYyMSwibmJmIjoxNzc3MjU5ODIxLCJwYXRoIjoicmVsZWFzZWFzc2V0cHJvZHVjdGlvbi5ibG9iLmNvcmUud2luZG93cy5uZXQifQ.KSyAdrFLDYaswO7os56YGvjsFYNthQHQODNxToiOuQE&response-content-disposition=attachment%3B%20filename%3Dcmake-4.3.2-windows-x86_64.msi&response-content-type=application%2Foctet-stream
- 添加mingw64和cmake到环境变量
- cmake编译命令：cmake -G "MinGW Makefiles" .. && cmake --build ..

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