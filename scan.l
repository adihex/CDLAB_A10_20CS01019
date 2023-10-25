%{
//Definition Section
  #include<stdio.h>
  #include "parse.tab.h"
  extern int yyerror();
  int line_count=1;
  int char_count=1;
%}

%%
and         { char_count+=yyleng; return AND;}
def         { char_count+=yyleng; return DEF;} 
else        { char_count+=yyleng; return ELSE;}
end         { char_count+=yyleng; return END;} 
exit        { char_count+=yyleng; return EXITLOOP;} 
float       { char_count+=yyleng; return FLOAT;}
from        { char_count+=yyleng; return FROM;}
fun         { char_count+=yyleng; return FUN;}
global      { char_count+=yyleng; return GLOBAL;}
if          { char_count+=yyleng; return IF;}
int         { char_count+=yyleng; return INT;}
mod         { char_count+=yyleng; return MOD;}
not         { char_count+=yyleng; return NOT;}
null        { char_count+=yyleng; return NUL;}
or          { char_count+=yyleng; return OR;}
print       { char_count+=yyleng; return PRINT;}
product     { char_count+=yyleng; return PRODUCT;}
read        { char_count+=yyleng; return READ;}
return      { char_count+=yyleng; return RETURN;}
skip        { char_count+=yyleng; return SKIP;}
step        { char_count+=yyleng; return STEP;}
to          { char_count+=yyleng; return TO;}
while       { char_count+=yyleng; return WHILE;}
":="        { char_count+=yyleng; return ASSIGN;}
":"         { char_count+=yyleng; return COLON;}
","         { char_count+=yyleng; return COMMA;}
"/"         { char_count+=yyleng; return DIV;} 
"."         { char_count+=yyleng; return DOT;}
"="         { char_count+=yyleng; return EQ;}
"%"[dfs]    { char_count+=yyleng; return FORMAT;}
">="        { char_count+=yyleng; return GE;}
">"         { char_count+=yyleng; return GT;}
"("         { char_count+=yyleng; return LEFT_PAREN;}
"["         { char_count+=yyleng; return LEFT_SQ_BKT;} 
"<="        { char_count+=yyleng; return LE;}
"<"         { char_count+=yyleng; return LT;} 
"-"         { char_count+=yyleng; return MINUS;}
"*"         { char_count+=yyleng; return MULT;}
"<>"        { char_count+=yyleng; return NE;}
"+"         { char_count+=yyleng; return PLUS;}
"->"        { char_count+=yyleng; return RETURNS;}
")"         { char_count+=yyleng; return RIGHT_PAREN;} 
"]"         { char_count+=yyleng; return RIGHT_SQ_BKT;}
";"         { char_count+=yyleng; return SEMICOLON;} 
\"[^"]*\"   { char_count+=yyleng; return STRING;}
[0-9]+      { char_count+=yyleng; return INT_CONST;}
[0-9]+"."([0-9])+      { char_count+=yyleng; return FLOAT_CONST;}
[_a-zA-Z][_a-zA-Z0-9]* { char_count+=yyleng; return ID;}

"//".* { char_count+=yyleng;}
[ \t]+ { char_count+=yyleng;}
"\n"   { line_count++; char_count=1;}
.      { yyerror("Invalid character!");}
%%
int yywrap() {
return 1;
}

