# proj2x-SylixOS-porting-to-XT-C906-Board
### 项目描述

SylixOS 全面支持 ARM/ PowerPC / MIPS / x86 / SPARC / DSP / RISC-V / C-SKY， 同时支持主流半导体厂商的大量板卡和设备，部分支持列表可参考[翼辉官网](https://www.acoinfo.com/html/edu_con/cpu.html)。

基于玄铁C906 64位RISC-V 1GHz处理器的全志开发板， 视频处理支持H.265/H.264，视频输出/显示支持HDMI和RGB LCD，摄像头支持DVP和MIPI CSI， 可选千兆以太网和GMAC网络模块，支持MicroSD存储卡，支持USB主机和OTG功能，支持运行Debian。

我们的目标是在玄铁C906开发板上完成 SylixOS 最小系统开发适配和基础功能开发，SylixOS最小系统包括系统时钟、系统中断和串口通信功能，基础功能包括网络通信与存储等功能。

### 所属赛道

2021全国大学生操作系统比赛的“OS功能设计”赛道

### 参赛要求

- 以小组为单位参赛，最多三人一个小组，且小组成员是来自同一所高校的本科生（2021年春季学期或之后本科毕业的大一~大四的学生）
- 如学生参加了多个项目，参赛学生选择一个自己参加的项目参与评奖
- 请遵循“2021全国大学生操作系统比赛”的章程和技术方案要求

### 项目导师

葛文斌

* github [databuser](https://github.com/databuser)
* email  gewenbin@acoinfo.com


### 难度

中等


### 特征

- 参考am335的BSP实现，了解SylixOS系统引导启动流程
- 在玄铁C906开发板上完成SylixOS最小系统运行，并能通过串口进行shell交互
- 需要熟练掌握C语言，了解RSIC-V汇编指令

### 文档

[SylixOS 最小系统开发适配指导文档](https://github.com/acoinfo/sylixos_oscomp_2021/tree/master/shell_enhancement)

### 参考代码
* [bspam335x](http://git.sylixos.com/cgit/cgit.cgi/bspam335x.git/)

### License

*  [The MIT License](https://opensource.org/licenses/MIT)

## 预期目标

### 注意：下面的内容是建议内容，不要求必须全部完成。选择本项目的同学也可与导师联系，提出自己的新想法，如导师认可，可加入预期目标

### 第一题：完成SylixOS 最小系统开发

*  完成SylixOS 在玄铁C906开发板上操作系统引导启动和初始化，CPU启动和RSIC-V 32或RSIC-V64
* 完成系统时钟和系统中断功能
* 可以进行串口通信

### 第二题： 完成SylixOS 的基础功能

* 完成SylixOS 最小系统的开发

* 完成以太网网卡的网络通信功能

* 完成SD卡的存储功能
