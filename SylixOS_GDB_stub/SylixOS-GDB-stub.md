# proj4-SylixOS-GDB-stub
### 项目描述

SylixOS 是支持 SMP 调度的原创大型硬实时操作系统，拥有丰富的调试手段，已通过GDB实现了应用程序调试，在调试链路上完成了对串口和网口的双重支持。

我们的目标是通过在 SylixOS 上实现一个 GDB stub，可以在没有硬件调试器的情况下，通过串口对 SylixOS 内核进行源代码级调试。调试环境由宿主机 GDB 和目标机调试 stub 共同构成，两者通过串口 连接，使用 GDB 远程串行协议 RSP 协同工作，实现对目标机上的系统内核和上层应用的监控和调试功能。本项目可以帮助学生熟悉系统调试原理，了解调试协议。


### 所属赛道

2021全国大学生操作系统比赛的“OS功能设计”赛道

### 参赛要求

- 以小组为单位参赛，最多三人一个小组，且小组成员是来自同一所高校的本科生（2021年春季学期或之后本科毕业的大一~大四的学生）
- 如学生参加了多个项目，参赛学生选择一个自己参加的项目参与评奖
- 请遵循“2021全国大学生操作系统比赛”的章程和技术方案要求

### 项目导师

焦进星

* github [jiaojinxing](https://github.com/jiaojinxing)
* email  jiaojinxing@acoinfo.com


### 难度

高


### 特征

- 实现 GDB RSP 协议和 GDB stub
- 在 SylixOS 上通过 GDB stub 实现串口调试操作系统内核
- 了解 SylixOS 操作系统 和 x86 体系结构
- 硬件可以使用 SylixOS 的模拟器 RealEvo-Simulator

### 文档

[Implement GDB Remote Debug Protocol Stub From Scratch](https://medium.com/swlh/implement-gdb-remote-debug-protocol-stub-from-scratch-1-a6ab2015bfc5)

### 参考代码

* [gdbstub](https://github.com/mborgerson/gdbstub/)

### License

*  [The MIT License](https://opensource.org/licenses/MIT)

## 预期目标

### 注意：下面的内容是建议内容，不要求必须全部完成。选择本项目的同学也可与导师联系，提出自己的新想法，如导师认可，可加入预期目标

### 第一题：完成SylixOS GDB stub 基本功能开发

* 在 x86 模拟器上，完成 SylixOS gdb stub 开发，能通过串口调试操作系统内核，实现单步、断点、读写内存，能在 RealEvo-IDE 下源代码级调试。

### 第二题： 完成 SylixOS GDB stub 对多核处理器的支持

* 在 x86 模拟器上，完成 SylixOS GDB stub 对多核处理器的支持。
