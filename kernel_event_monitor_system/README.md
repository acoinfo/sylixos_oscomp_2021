# proj2-kernel-event-monitor-system-on-SylixOS

### 项目描述

​          操作系统事件监控器（Kernel Event Monitor System）记录和分析操作系统内核事件，包括：任务调度、中断、IO系统、系统资源使用等事件。事件监控器是大型操作系统开发的利器，主要用于定位系统问题，调试应用程序以及优化系统性能。

​         SylixOS 是支持 SMP 调度的原创大型硬实时操作系统，目前SylixOS内部自带一个事件收集器，能够实现大部分内核事件的收集。本项目要求学生优化和改进事件收集器，并在其基础上实现分析功能，目的是帮助学生深入理解操作系统内核原理，掌握更多定位操作系统底层问题以及优化系统性能的手段。



### 源码

 [libcextern.git](http://git.sylixos.com/cgit/cgit.cgi/libcextern.git/) 

 [libsylixos.git](http://git.sylixos.com/cgit/cgit.cgi/libsylixos.git/) 



### 所属赛道

2021全国大学生操作系统比赛的“OS功能设计”赛道



### 参赛要求

- 以小组为单位参赛，最多三人一个小组，且小组成员是来自同一所高校的本科生（2021年春季学期或之后本科毕业的大一~大四的学生）
- 如学生参加了多个项目，参赛学生选择一个自己参加的项目参与评奖
- 请遵循“2021全国大学生操作系统比赛”的章程和技术方案要求



### 项目导师

蒋太金

* github https://github.com/acoinfo/sylixos_oscomp_2021/tree/master/kernel_event_monitor_system

* email jiangtaijin@acoinfo.com



### 难度

中等



### 特征

- 兼容 SylixOS 原有事件监控，可在此基础上进行功能扩增

  

### 文档

[SylixOS 内核事件监控指导文档](https://github.com/acoinfo/sylixos_oscomp_2021/tree/master/kernel_event_monitor_system)

### License

- MIT license (LICENSE-MIT or http://opensource.org/licenses/MIT)



## 预期目标

### 注意：下面的内容是建议内容，不要求必须全部完成。选择本项目的同学也可与导师联系，提出自己的新想法，如导师认可，可加入预期目标

在现有SylixOS 内核事件收集实现的基础上，进一步完成以下目标：

### 第一题：实现内核事件分析  

- 根据SylixOS内核事件监控器源码分析其实现原理、事件格式以及传输协议
- 搭建SylixOS内核事件监控器运行环境
- 在PC端实现内核事件收集、分析、以及图形显示

### 第二题：实现内核事件监控器功能扩展  

- 实现自定义事件收集，如某特定网络协议监控事件，某特定应用事件等
- 实现更加丰富精确的事件过滤功能，条件由实现者根据分析需求确定，过滤器以API或命令行方式提供
- 实现更加丰富的事件分析与显示功能，包括：内存使用分析、线程切换分析、资源占用分析等

### 第三题：从框架和协议层面改造和优化内核事件监控器    

- 实现内核跟踪器的智能启动与停止，如当出现某个事件后自动开启事件收集，当出现异常时自动停止
- 增加对内核事件缓冲区不够时，丢失事件的记录和处理
- 减少内核事件监控器本身对系统事件的影响，当前内核事件监控器会新增大量网络或文件系统事件，影响到系统原有的事件和调度
- 优化内核跟踪器事件保存格式，提高查找和分析效率



