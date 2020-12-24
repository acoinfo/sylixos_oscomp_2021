# 				SylixOS shell增强开发指导文档



### 本文档会向您介绍 SylixOS 命令行的实现机制和 Shell 脚本现状 ，以及通过 IDE 进行 SylixOS 内核功能开发步骤。                  



### 1、如何在 SylixOS 上注册一个shell命令

- 建一个内核模块；

- 在内核模块中注册一个shell命令；

- 编译内核模块，上传到 sylixos 设备；

- 加载内核模块，执行命令。

  

### 2、SylixOS Shell 命令帮助信息

​       查看所有命令：直接在输入help 回车后，会打印SylixOS系统上所有命令；

```shell
[root@sylixos:/root]# help
ps                  
lsmod               
modulegcov           [kernel module handle]
modules              [module name]
modulestat           [program file]
rmmod                [kernel module file *.ko]
insmod               [-x] [kernel module file *.ko]
moduleunreg          [kernel module handle]
modulereg            [kernel module file *.ko]
dlconfig             {[share {en | dis}] | [refresh [*]]}
exec                 [program file] [arguments...]
which                [program file]
mmaps               
qosruledel           [netifname] [rule sequence num]
qosruleadd           [netifname] [rule] [args...] [s|d|b] [prio] [dont_drop]
qoss                
npfruledel           [netifname] [input | output] [rule sequence num]
npfruleadd           [netifname] [rule] [input | output] [allow | deny] [args...]
npfs                
nats                
natmap               {[add] | [del]} [WAN port] [LAN port] [LAN IP] [protocol] [ip_cnt]
natalias             {[add] [alias] [LAN start] [LAN end]} | {[del] [alias]}
natwan               [WAN Iface]
natlocal             [LAN Iface]
natipfrag            [proto] [1/0]
nat                  [stop] | {[LAN Iface] [WAN Iface]}
ftpdpath             [new path]
ftpds               
nbname               [local host name]
ping6                ip(v6)/hostname [-l datalen] [-n times] [-w timeout] [-I interface]
ping                 ip/hostname [-l datalen] [-n times] [-i ttl] [-w timeout]
hosttable            [-s host addr] | [-d host] 
netbonding           [...]
netbr                [...]
ipv6                 ...
Press <ENTER> to continue, <Q> to quit:  
```

​       查看某个命令的详细帮助信息，help + 某命令，查看此命令的帮助信息。       

```shell
[root@sylixos:/root]# help ifconfig
show or set net interface parameter.
if there are no arguments, it will show all interface parameter
ifconfig -u (show all interface with 'IFF_UP' state)
ifconfig -r (show all interface with 'IFF_UP' & 'IFF_RUNNING' state)
set interface like following:
ifconfig en1 inet    192.168.0.3
ifconfig en1 netmask 255.255.255.0
ifconfig en1 gateway 192.168.0.1
ifconfig dns 0       192.168.0.2
ifconfig [ifname] [{inet | netmask | gateway}] [address]

```



### 3、SylixOS Shell 脚本

```shell
[root@sylixos:/etc]# cat startup.sh
shstack 120000
modulereg /lib/modules/xsiipc.ko
modulereg /lib/modules/xinput.ko
```



### 4、如何在 SylixOS 执行Shell脚本

```shell
[root@sylixos:/etc]# shfile startup.sh
default shell stack: 120000
module /lib/modules/xsiipc.ko register ok, handle: 0x3664230

```



### 5、SylixOS 内核功能开发步骤

有两种方式开发SylixOS 内核功能，一种是直接修改内核代码，另一种是以内核模块的方式。内核模块方式在如何注册一个Shell命令已介绍，这里介绍一下直接通过修改内核代码的方式。

- 通过git clone 下载  [libcextern.git](http://git.sylixos.com/cgit/cgit.cgi/libcextern.git/) 和 [libsylixos.git](http://git.sylixos.com/cgit/cgit.cgi/libsylixos.git/) 这两个库的代码，前者是 c语言库，后者是sylixos 内核库。
- 在IDE 中创建 base 工程（即SylixOS的内核），默认选项即可，将步骤1中下载的代码覆盖到对应的目录，如不覆盖，使用的内核代码是和IDE 配套发布的内核版本代码。
- 在IDE 中修改 base工程下 libsylixos下对应的内核代码，编译base工程
- 创建一个bsp 工程，建议选择 IDE 中已支持的虚拟机类型的BSP，如X86 或 mini2440
- 编译bsp 工程生成SylixOS Image文件，bsp工程依赖base工程。
- 使用新生成的SylixOS Image文件 替换虚拟机中的对应的 OS Image文件，测试验证内核功能。



