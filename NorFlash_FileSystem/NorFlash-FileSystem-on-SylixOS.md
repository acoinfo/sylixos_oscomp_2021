# proj3-NorFlash-FileSystem-on-SylixOS

### 项目描述

SylixOS 是支持 SMP 调度的原创大型硬实时操作系统，SylixOS目前支持丰富的文件系统访问接口，支持RAMFS、ROMFS, FatFS,  YAFFS2, TPSFS等多种文件系统。  

本项目要求学生在SylixOS系统上实现一个能够运行在NorFlash上的文件系统，实现文件系统基本功能，更进一步需考虑各方面细节优化。本项目能够帮助学生理解文件系统结构，掌握操作系统存储性能优化方法。

### SylixOS源码 

 [libsylixos.git](http://git.sylixos.com/cgit/cgit.cgi/libsylixos.git/) 

### 所属赛道

2021全国大学生操作系统比赛的“OS功能设计”赛道

### 参赛要求

- 以小组为单位参赛，最多三人一个小组，且小组成员是来自同一所高校的本科生（2021年春季学期或之后本科毕业的大一~大四的学生）
- 如学生参加了多个项目，参赛学生选择一个自己参加的项目参与评奖
- 请遵循“2021全国大学生操作系统比赛”的章程和技术方案要求

### 项目导师

蒋太金

* github [tigejiang](https://github.com/tigejiang)

* email jiangtaijin@acoinfo.com

### 难度

中等

### 特征

- 支持NorFlash的文件系统
- 实现写平衡
- 实现掉电安全

### 参考资料

* [spiffs](https://github.com/pellepl/spiffs)
* [jffs2](http://sourceware.org/jffs2/)
* [磨损平衡算法](https://github.com/nickfox-taterli/nor_flash_wl)

### License

- MIT license (LICENSE-MIT or http://opensource.org/licenses/MIT)


## 预期目标

### 注意：下面的内容是建议内容，不要求必须全部完成。选择本项目的同学也可与导师联系，提出自己的新想法，如导师认可，可加入预期目标

在SylixOS上实现NorFlash文件系统，其功能细节如下：

### 第一题：基本的文件系统访问

- 实现简单的文件读写操作，如open、close、read、write、seek等操作
- 实现简单的目录操作，如opendir、readdir、rename等操作

### 第二题：实现写平衡

- 实现NorFlash写平衡功能
- 实现软、硬链接功能

### 第三题：实现掉电安全    

- 实现文件系统访问掉电安全功能



