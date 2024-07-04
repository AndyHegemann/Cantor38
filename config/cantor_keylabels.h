/*         38 KEY MATRIX / LAYOUT MAPPING

 ╭─────────────────────────┬─────────────────────────╮
 │   0   1   2   3   4     │       5   6   7   8   9 │
 │  10  11  12  13  14     │      15  16  17  18  19 │
 │  20  21  22  23  24  25 │  26  27  28  29  30  31 │
 ╰───────────╮  32  33  34 │  35  36  37 ╭───────────╯
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
#define RT0  5
#define RT1  6
#define RT2  7
#define RT3  8
#define RT4  9

// left-middle row
#define LM0 14
#define LM1 13
#define LM2 12
#define LM3 11
#define LM4 10

// right-middle row
#define RM0 15
#define RM1 16
#define RM2 17
#define RM3 18
#define RM4 19

// left-bottom row
#define LB0 24
#define LB1 23
#define LB2 22
#define LB3 21
#define LB4 20

// right-bottom row
#define RB0 27
#define RB1 28
#define RB2 29
#define RB3 30
#define RB4 31

// left thumb keys
#define LH0 34
#define LH1 33
#define LH2 32
#define LH3 25

// right thumb keys
#define RH0 35
#define RH1 36
#define RH2 37
#define RH3 26
