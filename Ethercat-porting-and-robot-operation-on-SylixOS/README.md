# projx-Ethercat-porting-and-robot-operation-on-SylixOS

### 项目描述

SylixOS 是中国人完全自主设计开发，内核开源的操作系统。在国防、航空航天、电力、轨道交通、 工业自动化 等领域有着广泛的应用。

近年来，工业机器人的应用需求日益增加，工业机器人的技术发展越来越快。其中，Ethercat工业以太网技术以其通讯速度快、通讯抖动量低、以及硬件的成本低等特点，在工业机器人中广泛应用。

SylixOS 操作系统由于其在实时性和稳定性等方面的明显优势，完全可以满足工业以太网数据传输的实时性要求，已在工业机器人领域得到广泛应用。

我们的目标是在SylixOS上实现 Ethercat 主站协议，并能够完成与伺服电机的数据通信，操作六轴机器人，目的是帮助学生了解实时操作系统和实时协议栈在运动控制领域的应用。

- 将 Ethercat 主站移植到 SylixOS 上
- 操控六轴机器人

### 源码

 [libcextern.git](http://git.sylixos.com/cgit/cgit.cgi/libcextern.git/) 

 [libsylixos.git](http://git.sylixos.com/cgit/cgit.cgi/libsylixos.git/) 

 [ethercat](https://www.etherlab.org/en/ethercat/index.php)



### 所属赛道

2021全国大学生操作系统比赛的“OS功能设计”赛道



### 参赛要求

- 以小组为单位参赛，最多三人一个小组，且小组成员是来自同一所高校的本科生（2021年春季学期或之后本科毕业的大一~大四的学生）
- 如学生参加了多个项目，参赛学生选择一个自己参加的项目参与评奖
- 请遵循“2021全国大学生操作系统比赛”的章程和技术方案要求



### 项目导师

李青锋

* github [QingfengLee](https://github.com/QingfengLee)

* email liqingfengzzu@163.com



### 难度

中等



### 特征

- 支持 Ethercat 主站
- 支持1ms 周期的数据传输

- 支持六轴机械臂运动

### 文档

[Ethercat 参考文档](https://www.etherlab.org/en/)

### License

- IGH: GPLv2(https://www.gnu.org/licenses/old-licenses/gpl-2.0.en.html)

## 预期目标

### 注意：下面的内容是建议内容，不要求必须全部完成。选择本项目的同学也可与导师联系，提出自己的新想法，如导师认可，可加入预期目标



### 第一题：将Ethercat 主站移植到 SylixOS 上

* 移植开源Ethercat主站IGH到SylixOS操作系统上

* 实现Ethercat主站启动

* 实现查看Ethercat从站信息

  

### 第二题：操控六轴机器人

* 完成1ms 通讯周期的主站与从站数据传输
* 通过Ethercat主站向从站伺服电机发送数据，并实现伺服电机的匀速转动
* 通过正运动学实现六轴机械臂的运动
