/*         38 KEY MATRIX / LAYOUT MAPPING

 ╭─────────────────────────┬─────────────────────────╮
 │   0   1   2   3   4     │      23  22  21  20  19 │
 │   5   6   7   8   9     │      28  27  26  25  24 │
 │  10  11  12  13  14  15 │  34  33  32  31  30  29 │
 ╰───────────╮  16  17  18 │  37  36  35 ╭───────────╯
             ╰─────────────┴─────────────╯         

 ╭─────────────────────────┬─────────────────────────╮
 │ LT4 LT3 LT2 LT1 LT0     │     RT0 RT1 RT2 RT3 RT4 │
 │ LM4 LM3 LM2 LM1 LM0     │     RM0 RM1 RM2 RM3 RM4 │
 │ LB4 LB3 LB2 LB1 LB0 LH3 │ RH3 RB0 RB1 RB2 RB3 RB4 │
 ╰───────────╮ LH2 LH1 LH0 │ RH0 RH1 RH2 ╭───────────╯
             ╰─────────────┴─────────────╯         

*/

#pragma once


// left-top row
#define LT0  4
#define LT1  3
#define LT2  2
#define LT3  1
#define LT4  0

// right-top row
#define RT0 23
#define RT1 22
#define RT2 21
#define RT3 20
#define RT4 19

// left-middle row
#define LM0  9
#define LM1  8
#define LM2  7
#define LM3  6
#define LM4  5

// right-middle row
#define RM0 28
#define RM1 27
#define RM2 26
#define RM3 25
#define RM4 24

// left-bottom row
#define LB0 14
#define LB1 13
#define LB2 12
#define LB3 11
#define LB4 10

// right-bottom row
#define RB0 33
#define RB1 32
#define RB2 31
#define RB3 30
#define RB4 29

// left thumb keys
#define LH0 18
#define LH1 17
#define LH2 16
#define LH3 15

// right thumb keys
#define RH0 37  
#define RH1 36
#define RH2 35
#define RH3 34
