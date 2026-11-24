Course One: How to write down an title in md documentory
========================================================
1.1:Using "=" and "-" to mark
------------------------

When you want to write down a title in the md essey,using the "=" or "-" to define the maintitle or subtitle
for instance:

This is the title One   
\=========================  
This is the title two  
\-------------------------

1.2:Using \# to mark
-----

Markdown using \# to generate title,this rule was come from HTML which using <\h1>to<\h2> to define title importance respectively.Then you can use the number of "\#" to indicate the class of title from 1 to 6.Class 1 reponse to one \#,Class 2 reponse to two \#

\# 一级标题
\## 二级标题
\### 三级标题
\#### 四级标题
\##### 五级标题
\###### 六级标题

tips:It's neccessary to add \# between symbols and character and it's the standrad grammer demand of Markdown

\# 正确写法
\#错误写法

for example:

\# 主题：人工智能概述  


\## 第一部分：基础概念  
\### 什么是人工智能  
\### 发展历史  
\#### 早期发展（1950-1980）  
\#### 现代发展（1980至今）  

\## 第二部分：应用领域  
\### 自然语言处理  
\### 计算机视觉  
\### 机器学习  
\#### 监督学习  
\#### 无监督学习  
\#### 强化学习  

Avoiding the wrong structure:

\# 主标题  
\### 直接跳到三级标题  
\## 然后才是二级标题  

multiple Markdown processors and editors support automatically generate the code of each title,thus it's usually no need to add code for the title in the source code manually.

1.3.title anchor:
------------------

multiple Markdown processors would automatically generate the anchor for each title to implement in-page navigation.

[跳转到方法论部分](\#方法论)

some suggestions for the length of title:
### keeping the title clearly,generally not excelling 10 Chinese characters or 20 English characters;
### Using descriptive terms in order to avoid titles as "others"or"Miscellaneous"
### Using colon to separate maintitle from subtitle