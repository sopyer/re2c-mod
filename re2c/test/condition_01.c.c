/* Generated by re2c */
#line 1 "condition_01.c.re"

#line 5 "<stdout>"
{
	YYCTYPE yych;
	switch(YYCOND) {
	case a: goto yyc_a;
	case b: goto yyc_b;
	}
/* *********************************** */
yyc_a:

	if((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch(yych) {
	case 'a':	goto yy3;
	default:	goto yy2;
	}
yy2:
yy3:
	yych = *++YYCURSOR;
	switch(yych) {
	case 'b':	goto yy4;
	default:	goto yy2;
	}
yy4:
	++YYCURSOR;
#line 3 "condition_01.c.re"
	{ }
#line 32 "<stdout>"
/* *********************************** */
yyc_b:
	if((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch(yych) {
	case 'a':	goto yy9;
	default:	goto yy8;
	}
yy8:
yy9:
	yych = *++YYCURSOR;
	switch(yych) {
	case 'b':	goto yy10;
	default:	goto yy8;
	}
yy10:
	++YYCURSOR;
#line 3 "condition_01.c.re"
	{ }
#line 52 "<stdout>"
}
#line 5 "condition_01.c.re"

