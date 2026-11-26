# Markdown Text Form  

There is no special format in Markdown paragraphs so just wirte down in the text and type two or more spaces to implement a carriage return.   

Of course,you can also use a empty line to indicate a brand new paragraph.

## Font

Text emphasis is one of the most important techniques in Writing a Markdown text,so Markdown provided a concise method to achieve bold and italic effects.  
### Those text-font can be used in Markdown:  
#### blod grammar:Using double ** or __ to surround the text:  
  这是**粗体文字**使用星号
  这是__粗体文字__使用下划线
#### italic grammar:Using one * or _ to surround the text:
  这是*斜体文字*使用星号
  这是_斜体文字_是用下划线
#### 混合使用技巧:  
  这段文字包含**粗体**，*斜体*和***粗斜体***的组合效果

### 使用建议:  
1. 推荐使用*而不是_，因为星号在各种Markdown解析器中兼容性更好
2. 不要过度使用强调，重点突出才有效果
3. 在中英文混合时，建议再强调符号前后加空格以提高可读性  

## 分隔线  
你可以在一行中用三个以上的星号，减号，底线来建立一个分隔线，行内不能有其他东西。你也可以在星号或者是减号中间插入空格。下面各种写法都可以建立分隔线：  
  ***  
  * * *  
  *****  
  - - -  
  -----------  
## 删除线  
如果段落上的文字要添加删除线，只需要在文字的两端加上两个波浪号~~即可，示例如下：

RUNOOB.COM  
GOOGLE.COM  
~~BAIDU.COM~~

## 下划线  
下划线可以通过HTML的<\u>标签来实现：
<u>带下划线文本</u> [^RUNOOB]  
以下示例演示了脚注的用法:  
~~東雪蓮~~[^1]
[^1]: 罕见  

## 行内代码标记  
行内代码用于在正文中标记代码片段，命令，变量名等：  
### 基本语法：  
使用一个包围代码:  
使用 `git commit` 命令提交代码  
变量 `userName` 存储用户名  
在终端中输入 `npm install` 安装依赖  
### 包含反引号的代码： 当代码本身包含反引号时，使用两个反引号包围：  
要显示反引号，使用 `` `code` `` 这样的格式  
### 应用场景：  
1. 技术文档中的API名称，函数名
2. 配置文件中的参数名
3. 命令行指令  
4. 键盘快捷键（如Ctrl+C）

*****  

## 文本高亮（拓展语法）
文本高亮不是Markdown的语法，但许多扩展支持：  
### 常见语法：  
这是==高亮文本==  
### HTML替代方案：  
这是<mark>高亮文本</mark>  

*****  

## 段落和换行  
### 段落创建方法  
在Markdown中,段落时文本的基本单位，理解段落规则对于正确格式化文档至关重要。  
#### 段落的基本规则；  
1. 段落由一个或多个连续的文本组成  
2. 段落之间由一个或多个空行分隔  
3. 普通段落不应该用空格或制表符缩进  
#### 普通的段落写法；  
段落一  

段落二  

段落三  

#### 常见错误  
第一段  
第二段(错误：没有空行分隔)  

这是缩进段落（错误: 不应该缩进）  

#### 强制换行技巧  
有时需要在不创新段落的情况下换行，Markdown提供了集中方法：  
##### 方法一：行尾加两个空格  
在行尾加两个或更多的空格，然后按回车；  
##### 方法二： HTML换行标签  
第一行<br>
第二行
##### 方法三： 反斜杠(部分解析器支持)  
第一行
第二行  
##### 实例：  
地址：~~北京市朝阳区~~[^2]
[^2]: ** 哎呦喂，京爷给您👻了 **