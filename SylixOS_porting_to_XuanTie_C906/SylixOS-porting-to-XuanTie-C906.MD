# proj2x-SylixOS-porting-to-XuanTie-C906
### 项目描述

SylixOS 全面支持 ARM/ PowerPC / MIPS / x86 / SPARC / DSP / RISC-V / C-SKY， 同时支持主流半导体厂商的大量板卡和设备，部分支持列表可参考[翼辉官网](https://www.acoinfo.com/html/edu_con/cpu.html)。

基于玄铁 C906 64位RISC-V（RV64GCV）1GHz处理器的全志开发板，视频处理支持H.265/H.264，视频输出/显示支持HDMI/RGB LCD，摄像头支持DVP和MIPI CSI， 可选千兆以太网和GMAC网络模块，支持MicroSD存储卡，支持USB主机和OTG功能。

我们的目标是在玄铁 C906 开发板上完成 SylixOS 最小系统开发适配和基础功能开发。  
SylixOS最小系统包括系统时钟、系统中断和串口通信功能，基础功能包括网络通信与存储等功能。

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

- 支持玄铁 C906处理器
- 支持 RV64GCV 
- 支持 SylixOS 系统
- 

### 文档

[SylixOS 最小系统开发适配指导文档](https://github.com/acoinfo/sylixos_oscomp_2021/tree/master/shell_enhancement)

### 参考代码
* [SylixOS 参考BSP bspam335x](http://git.sylixos.com/cgit/cgit.cgi/bspam335x.git/)

### License

*  [The MIT License](https://opensource.org/licenses/MIT)

## 预期目标

### 注意：下面的内容是建议内容，不要求必须全部完成。选择本项目的同学也可与导师联系，提出自己的新想法，如导师认可，可加入预期目标

### 第一题：完成 SylixOS 最小系统开发

* 完成玄铁 C906 处理器MMU、Cache以及启动初始化
* 完成系统时钟和系统中断功能
* 完成串口通信支持

### 第二题： 完成 SylixOS 的基础功能

* 完成以太网驱动程序，支持TCP/IP网络通信功能
* 完成 SD 卡的存储功能，支持文件系统
   