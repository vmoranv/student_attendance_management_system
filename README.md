# StudentAttendanceManagementSystem
## :bulb: Brief Introduction

SAMS 是一个高效、易用的学生出勤管理系统，旨在简化出勤记录与分析过程。优化日常的出勤管理任务，提升教师工作效率，同时为学校管理层提供精准的数据报表，促进学生出勤率的提升及教学资源的有效分配。使用Qt 5.14.1。

## :white_check_mark: Already Done

1. `Main Window`设计
2. `StudentInfo`类设计
3. `OptionDatabase`类设计
4. 构造函数实现创建`SQLite`表单
5. `StudentInfo`私有变量的获取和设定函数
6. 添加快捷键支持
7. `addstudentinfo.ui`and`editstudentinfo.ui`设计

## :memo:To Do

- [x] 实现`optionDatabase`中的几个操作函数
- [x] 设计`Add` `Edit` `AddStudentInfo`界面并在使用改功能时弹窗
- [ ] 实现`editstudentinfo.ui`
- [ ] 实现统计功能
- [ ] 实现本地`sqlite`数据库访问与`sql`语句查询
- [ ] 默认界面提示
- [ ] UI优化

## :warning: Vital Error

1. `addstudentinfo.ui`执行两次
2. 内存泄露或绑定错误导致程序异常退出
