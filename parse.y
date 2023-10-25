%{
#include<stdio.h>
#include"lex.yy.c"
int yylex(void);
int yyerror(const char*);
%}

%token AND ASSIGN COLON COMMA DEF DIV DOT ELSE END EQ EXITLOOP 
%token FLOAT FLOAT_CONST FORMAT FROM FUN GE GLOBAL GT ID IF 
%token INT INT_CONST LEFT_PAREN LEFT_SQ_BKT LE LT MINUS MOD 
%token MULT NE NOT NUL OR PLUS PRINT PRODUCT READ RETURN 
%token RETURNS RIGHT_PAREN RIGHT_SQ_BKT SEMICOLON SKIP STEP STRING 
%token TO WHILE 

%left OR 
%left AND
%left PLUS MINUS
%left MULT DIV MOD
%nonassoc NOT 
%left DOT

%start source

%%
source: prog { printf("Succesfully parsed!"); };

prog: GLOBAL declList stmtListO END  {};

declList: decl declList {}
        | ;

decl: DEF typeList END {}
    | FUN funDef END {};

typeList: typeList SEMICOLON varList COLON type {}
        | varList COLON type {}
        | typeDef {};

varList: var COMMA varList
       | var;

var: ID sizeListO {};

sizeListO: sizeList
         |;

sizeList: sizeList LEFT_SQ_BKT INT_CONST RIGHT_SQ_BKT
        | LEFT_SQ_BKT INT_CONST RIGHT_SQ_BKT;

type: INT
    | FLOAT
    | STRING 
    | NUL 
    | typeDef
    | ID;

typeDef: ID ASSIGN PRODUCT typeList END;

funDef: funID fparamListO RETURNS type funBody;

funID: ID;

fparamListO: fparamList
           |;

fparamList: fparamList SEMICOLON pList COLON type
          | pList COLON type;
  
pList: pList COMMA idP
     | idP;

idP: ID sizeListO;

funBody: declList stmtListO;

stmtListO: stmtList
         |;

stmtList: stmtList SEMICOLON stmt
        | stmt;

stmt: assignmentStmt
    | readStmt
    | printStmt
    | ifStmt
    | whileStmt
    | loopStmt
    | callStmt
    | returnStmt
    | exitLoop
    | skip;

assignmentStmt: dotId ASSIGN exp;

dotId: id
     | id DOT dotId;

readStmt: READ FORMAT exp;

printStmt: PRINT STRING
         | PRINT FORMAT exp;

ifStmt: IF bExp COLON stmtList elsePart END;

elsePart: ELSE stmtList
        |;

whileStmt: WHILE bExp COLON stmtList END;

loopStmt: FROM id ASSIGN exp TO exp stepPart COLON stmtListO END;

stepPart: STEP exp
        |;

callStmt: LEFT_PAREN ID COLON actParamList RIGHT_PAREN;

returnStmt: RETURN expO;

expO: exp
   |;

exitLoop: EXITLOOP;

skip: SKIP;

id: ID indxListO;

indxListO: indxList
         |;

indxList: indxList LEFT_SQ_BKT exp RIGHT_SQ_BKT
        | LEFT_SQ_BKT exp RIGHT_SQ_BKT;

bExp: bExp OR bExp
    | bExp AND bExp
    | NOT bExp
    | LEFT_PAREN bExp RIGHT_PAREN
    | exp relOP exp;

relOP: EQ
     | LE
     | LT
     | GE
     | GT
     | NE;

exp: exp PLUS exp
   | exp MINUS exp
   | exp MULT exp
   | exp DIV exp
   | exp MOD exp
   | MINUS exp %prec DOT 
   | PLUS exp %prec DOT
   | exp DOT exp
   | LEFT_PAREN exp RIGHT_PAREN
   | id
   | LEFT_PAREN ID COLON actParamListO RIGHT_PAREN
   | INT_CONST
   | FLOAT_CONST;


actParamListO: actParamList
             |;

actParamList: actParamList COMMA exp
             | exp;

%%

int main(int argc,char* argv[])
{
  extern FILE *yyin;
  if(argc!=1)
  {
    yyin=fopen(argv[1],"r");
    
    if(yyin==NULL)
    {
      printf("Could not open the file %s\n", argv[1]);
      return -1;
    }
    
    printf("Parsing %s",argv[1]);

    if(yyparse()==0)
    {
      printf("\nEntered program is valid \n");
    }
    else
    {
      printf("\nERROR!");
    }
  }
  return 0;
}

int yyerror(const char* s)
{
  printf("%s \n",s);
  return -1;
}


