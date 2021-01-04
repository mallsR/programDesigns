//
//  main.c
//  countWord
//
//  Created by xiaoR on 2021/1/4.
//
/*
 编写函数fun，统计一行字符串中单词的个数，作为函数值返回。字符串在主函数中输入，规定所有单词由小写字母组成，单词之间有若干空格隔开，一行的开始没有没有空格。
 */

#include <stdio.h>

int fun(char *str);

int main(int argc, const char * argv[]) {
    // insert code here...
    char str[80];
    gets(str);
    printf("the number of words is %d.\n",fun(str));
    return 0;
}

int fun(char *str){
    int sumWord=0;
    int i=0;
    if (str[0]!='\0') {
        sumWord=1;
    }
    for(i=1;str[i]!='\0';i++){
        if(str[i]!=' '&&str[i-1]==' '){
            sumWord+=1;
        }
    }
    return sumWord;
}
