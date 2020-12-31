# proj2x-Dual-OS-With-OpenAMP  
### 项目描述

SylixOS 是支持 SMP 调度的大型实时操作系统，支持带MMU的高性能SMP处理器，适用于高性能、复杂业务的应用场景。  
MS-RTOS（Micro Safe RTOS）是一款面向未来物联网需求的新一代小型物联网操作系统，其最大的特点是开创性地在没有 MMU 和资源受限的 MCU（如Cortex-M3）上也能支持多进程与动态装载技术，使得内核有着非常高的安全性。

STM32MP157 微处理器基于灵活的双 Arm® Cortex®-A7 内核（运行频率为 650 MHz）和 Cortex®-M4（运行频率为 209 MHz）架构。

我们的目标是在一个异构多核的处理器上同时运行两个异构操作系统（SylixOS和MS-RTOS），并通过 OpenAMP 实现系统间通信。  
在STM32MP157的Cortex-A7双核上支持 SylixOS操作系统。  
在STM32MP157的Cortex-M4核心上支持 MS-RTOS操作系统。

### 所属赛道

2021全国大学生操作系统比赛的“OS功能设计”赛道

### 参赛要求

- 以小组为单位参赛，最多三人一个小组，且小组成员是来自同一所高校的本科生（2021年春季学期或之后本科毕业的大一~大四的学生）
- 如学生参加了多个项目，参赛学生选择一个自己参加的项目参与评奖
- 请遵循“2021全国大学生操作系统比赛”的章程和技术方案要求

### 项目导师

葛文彬

* github [databuser](https://github.com/databuser)
* email  gewenbin@acoinfo.com

### 难度

中等

### 特征

- 支持异构多核处理器
- 支持异构双内核 OpenAMP 通信
- 支持 SylixOS 
- 支持 MS-RTOS

### 文档

[SylixOS 开发适配指导文档](https://github.com/acoinfo/sylixos_oscomp_2021/tree/master/shell_enhancement)  
[MS-RTOS 开发指导文档](http://docs.edgeros.com/ms-rtos/IOTPI/QUICK_START.html?from=singlemessage)

### 参考代码
* [SylixOS 参考BSP bspam335x](http://git.sylixos.com/cgit/cgit.cgi/bspam335x.git/)
* [MS-RTOS 参考BSP bspstm32f4xx](https://github.com/ms-rtos/bspstm32f4xx)

### License

*  [The MIT License](https://opensource.org/licenses/MIT)

## 预期目标

### 注意：下面的内容是建议内容，不要求必须全部完成。选择本项目的同学也可与导师联系，提出自己的新想法，如导师认可，可加入预期目标

### 第一题：完成 MS-RTOS 基于 STM32MP157 处理器M4核心的最小系统开发

* 完成 MS-RTOS 在 STM32MP157 处理器M4核心上操作系统引导启动和初始化
* 完成系统时钟和系统中断功能
* 可以进行串口通信

### 第二题：完成 SylixOS 基于 STM32MP157 处理器A7 SMP双核最小系统开发

* 完成 SylixOS 在 STM32MP157 处理器A7 SMP双核操作系统引导启动和初始化
* 完成系统时钟和系统中断功能
* 可以进行串口通信

### 第三题： 完成 OpenAMP 双内核通信功能

* 完成 SylixOS OpenAMP 支持
* 完成 MS-RTOS OpenAMP 支持
* 完成 SylixOS 和 MS-RTOS 异构双内核间通信功能

  