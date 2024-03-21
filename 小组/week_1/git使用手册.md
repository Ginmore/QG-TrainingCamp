# git使用手册

### Git的三种状态和工作模式

​	committed已提交：数据已安全保存本地

​	modified已修改：修改未保存

​	staged已暂存：对当前版本做了标记，包含在下次提交的快照中

![img](https://img-blog.csdnimg.cn/20210928202311163.png?x-oss-process=image/watermark,type_ZHJvaWRzYW5zZmFsbGJhY2s,shadow_50,text_Q1NETiBASmFudWFyeUZN,size_20,color_FFFFFF,t_70,g_se,x_16)

### 基本git工作流程

​	1.在工作区中修改某些文件。

​	2.对修改后的文件进行快照，然后添加到暂存区。

​	3.提交更新，将保存在暂存区的文件快照永久转储到Git仓库中。

### 远程仓库配置

（1）github新建仓库

（2）配置SSH

​	**git config --global user.name "注册名"**

​	**git config --global user.email "注册邮箱"**

​	**ssh-keygen -t rsa -C "自己的邮箱"**

​	SSH文件存放在C:/User/用户/.ssh，id_rsa为私钥，id_rsa.pub为公钥

（3）github配置SSH

​	打开id_rsa.pub文件，全选复制

​	github->账户->settings->SSH and GPS keys->New SSH key

​	自定义title，粘贴拷贝的key

（4）测试SSH连接

​	**ssh -T git@github.com**

​	按提示输入yes，提示successfully即SSH连接正常，github钥匙变绿

### 推送文件至远程仓库

（1）建立初始仓库git init，github建立仓库

（2）clone远程至本地（将远程仓库及其README文件clone至本地）

​	**git clone git@github.com:用户名/仓库名.git**

（3）向远程仓库文件夹手动添加doc，src，WebContent三个文件夹及其中的子文件夹和文件等

（4）add

​	**git add 单个文件 **

​	**git add 文件夹1/ 文件夹2/ **……多个文件夹之间空格隔开 

​	**git add . **

（5）**git commit -m “注释”**

（6）**git push -u origin master**：推送至远程仓库

### 创建版本库并提交文件

（1）初始化git本地仓库

​	**git init**命令初始化仓库（先改属性起始位置为指定位置）

（2）**git status**：查看工作区与暂存区文件状态

​	.git同级目录添加git01.txt文件→git status（可查看修改是否暂存）

（3）**git add**：命令添加文件导暂存区

​	git add 文件名（需要包括后缀）

​	可判断修改和新添文件，加入信息至索引库

（4）**git rm --cached \<file>**：将文件从暂存区移除

（5）**git commit**：提交文件到本地版本库

​	后加-m ‘（本次提交的记录说明）’

（6）**git log**：显示日志信息

### 文件的修改和提交

（1）修改git01.txt文件

（2）git status命令查看文件状态是否为“已修改”

（3）git add . 将当前文件目录下的所有工作区文件保存至暂存区

（4）**git commit -m ‘    ’ **  ：提交文件（提交前必须经过暂存区）

（5）**git diff HEAD -- git01.txt**：版本库内容进行比较

​	**---**：变动前的文件

​	**+++**：变动后的文件

​	-1,2：“1”表示第1行，“2”表示连续2行

​	+1,3：变动后，成为第二个文件从第1行开始的连续3行

​	**@@**：变动的位置的开始和结束

### 暂存区文件的提交与撤销

（1）**git reset HEAD <文件路径> **：取消上一步操作

（2）**git restore --staged \<file> **：移除暂存区文件

（3）再次查看版本库状态，文件成为未追踪文件（撤销成功）























