#include<stdio.h>
int choice(int a)
{
if(a==1)
{printf("你选择了添加学生功能");}
else if (a==2)
{printf("你选择了显示所有学生");}
else if (a==3)
{printf("你选择了查询学生");}
else if (a==4)
{printf("你选择了修改学生成绩");}
else if (a==5)
{printf("你选择了删除学生");}
else if (a==6)
{printf("你选择了成绩统计");}
else if (a==0)
{printf("你选择了退出系统");}
else
{printf("没有此选项");}
}
int main(void)
{
int a;
while(1)
{
printf("========== 学生成绩管理系统 ==========\n");
printf("1. 添加学生\n");
printf("2. 显示所有学生\n");
printf("3. 查询学生\n");
printf("4. 修改学生成绩\n");
printf("5. 删除学生\n");
printf("6. 成绩统计\n");
printf("0. 退出系统\n");
printf("请输入你的选择：");
scanf("%d",&a);
choice(a);
if(a==0)
{break;}
}
return 0;
}