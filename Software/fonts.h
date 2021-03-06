/*
*File: fonts.h
*Project: Glucometer
*Author: Patryk Okruta, Jakub Caputa
*/

/*
	*************************************************
	***Fonts generated with PixelFactory by @Atnel***
	*************************************************
*/

#include "MKL46Z4.h"

#define null ((void *) 0)

typedef struct {
	
	const uint16_t charStart;
	const uint8_t charWidth;
	
}fontInfo;

static const fontInfo Arial9ptInfo[] = {
	
	
	{0, 5},				// a - 97
	{10, 5},			// b - 98
	{20, 4},			// c - 99
	{28, 5},			// d - 100
	{38, 5},			// e - 101
	{48, 4},			// f - 102
	{56, 5},			// g - 103
	{66, 5},			// h - 104
	{76, 1},			// i - 105
	{78, 2},			// j - 106
	{82, 5},			// k - 107
	{92, 1},			// l - 108
	{94, 9},			// m - 109
	{112, 5},			// n - 110
	{122, 5},			// o - 111
	{132, 5},			// p - 112
	{142, 5},			// q - 113
	{152, 3},			// r - 114
	{158, 5},			// s - 115
	{168, 3},			// t - 116
	{174, 5},			// u - 117
	{184, 5},			// v - 118
	{194, 9},			// w - 119
	{212, 5},			// x - 120
	{222, 5},			// y - 121
	{232, 5}			// z - 122
};

static const uint8_t Arial9ptBitmaps[] = 
{
     // @0   [a]   (5 px wide) 
     0x13, 0x00,  //   ...#..##...    //
     0x24, 0x80,  //   ..#..#..#..    //
     0x24, 0x80,  //   ..#..#..#..    //
     0x25, 0x00,  //   ..#..#.#...    //
     0x1F, 0x80,  //   ...######..    //
 
     // @10   [b]   (5 px wide) 
     0xFF, 0x80,  //   #########..    //
     0x11, 0x00,  //   ...#...#...    //
     0x20, 0x80,  //   ..#.....#..    //
     0x20, 0x80,  //   ..#.....#..    //
     0x1F, 0x00,  //   ...#####...    //
 
     // @20   [c]   (4 px wide) 
     0x1F, 0x00,  //   ...#####...    //
     0x20, 0x80,  //   ..#.....#..    //
     0x20, 0x80,  //   ..#.....#..    //
     0x11, 0x00,  //   ...#...#...    //
 
     // @28   [d]   (5 px wide) 
     0x1F, 0x00,  //   ...#####...    //
     0x20, 0x80,  //   ..#.....#..    //
     0x20, 0x80,  //   ..#.....#..    //
     0x10, 0x80,  //   ...#....#..    //
     0xFF, 0x80,  //   #########..    //
 
     // @38   [e]   (5 px wide) 
     0x1F, 0x00,  //   ...#####...    //
     0x24, 0x80,  //   ..#..#..#..    //
     0x24, 0x80,  //   ..#..#..#..    //
     0x24, 0x80,  //   ..#..#..#..    //
     0x1D, 0x00,  //   ...###.#...    //
 
     // @48   [f]   (4 px wide) 
     0x20, 0x00,  //   ..#........    //
     0x7F, 0x80,  //   .########..    //
     0xA0, 0x00,  //   #.#........    //
     0x80, 0x00,  //   #..........    //
 
     // @56   [g]   (5 px wide) 
     0x1F, 0x20,  //   ...#####..#    //
     0x20, 0xA0,  //   ..#.....#.#    //
     0x20, 0xA0,  //   ..#.....#.#    //
     0x11, 0x20,  //   ...#...#..#    //
     0x3F, 0xC0,  //   ..########.    //
 
     // @66   [h]   (5 px wide) 
     0xFF, 0x80,  //   #########..    //
     0x10, 0x00,  //   ...#.......    //
     0x20, 0x00,  //   ..#........    //
     0x20, 0x00,  //   ..#........    //
     0x1F, 0x80,  //   ...######..    //
 
     // @76   [i]   (1 px wide) 
     0xBF, 0x80,  //   #.#######..    //
 
     // @78   [j]   (2 px wide) 
     0x00, 0x20,  //   ..........#    //
     0xBF, 0xC0,  //   #.########.    //
 
     // @82   [k]   (5 px wide) 
     0xFF, 0x80,  //   #########..    //
     0x04, 0x00,  //   .....#.....    //
     0x0C, 0x00,  //   ....##.....    //
     0x13, 0x00,  //   ...#..##...    //
     0x20, 0x80,  //   ..#.....#..    //
 
     // @92   [l]   (1 px wide) 
     0xFF, 0x80,  //   #########..    //
 
     // @94   [m]   (9 px wide) 
     0x3F, 0x80,  //   ..#######..    //
     0x10, 0x00,  //   ...#.......    //
     0x20, 0x00,  //   ..#........    //
     0x20, 0x00,  //   ..#........    //
     0x1F, 0x80,  //   ...######..    //
     0x10, 0x00,  //   ...#.......    //
     0x20, 0x00,  //   ..#........    //
     0x20, 0x00,  //   ..#........    //
     0x1F, 0x80,  //   ...######..    //
 
     // @112   [n]   (5 px wide) 
     0x3F, 0x80,  //   ..#######..    //
     0x10, 0x00,  //   ...#.......    //
     0x20, 0x00,  //   ..#........    //
     0x20, 0x00,  //   ..#........    //
     0x1F, 0x80,  //   ...######..    //
 
     // @122   [o]   (5 px wide) 
     0x1F, 0x00,  //   ...#####...    //
     0x20, 0x80,  //   ..#.....#..    //
     0x20, 0x80,  //   ..#.....#..    //
     0x20, 0x80,  //   ..#.....#..    //
     0x1F, 0x00,  //   ...#####...    //
 
     // @132   [p]   (5 px wide) 
     0x3F, 0xE0,  //   ..#########    //
     0x11, 0x00,  //   ...#...#...    //
     0x20, 0x80,  //   ..#.....#..    //
     0x20, 0x80,  //   ..#.....#..    //
     0x1F, 0x00,  //   ...#####...    //
 
     // @142   [q]   (5 px wide) 
     0x1F, 0x00,  //   ...#####...    //
     0x20, 0x80,  //   ..#.....#..    //
     0x20, 0x80,  //   ..#.....#..    //
     0x11, 0x00,  //   ...#...#...    //
     0x3F, 0xE0,  //   ..#########    //
 
     // @152   [r]   (3 px wide) 
     0x3F, 0x80,  //   ..#######..    //
     0x10, 0x00,  //   ...#.......    //
     0x20, 0x00,  //   ..#........    //
 
     // @158   [s]   (5 px wide) 
     0x19, 0x00,  //   ...##..#...    //
     0x24, 0x80,  //   ..#..#..#..    //
     0x24, 0x80,  //   ..#..#..#..    //
     0x24, 0x80,  //   ..#..#..#..    //
     0x13, 0x00,  //   ...#..##...    //
 
     // @168   [t]   (3 px wide) 
     0x20, 0x00,  //   ..#........    //
     0xFF, 0x80,  //   #########..    //
     0x20, 0x80,  //   ..#.....#..    //
 
     // @174   [u]   (5 px wide) 
     0x3F, 0x00,  //   ..######...    //
     0x00, 0x80,  //   ........#..    //
     0x00, 0x80,  //   ........#..    //
     0x00, 0x80,  //   ........#..    //
     0x3F, 0x80,  //   ..#######..    //
 
     // @184   [v]   (5 px wide) 
     0x30, 0x00,  //   ..##.......    //
     0x0E, 0x00,  //   ....###....    //
     0x01, 0x80,  //   .......##..    //
     0x0E, 0x00,  //   ....###....    //
     0x30, 0x00,  //   ..##.......    //
 
     // @194   [w]   (9 px wide) 
     0x30, 0x00,  //   ..##.......    //
     0x0E, 0x00,  //   ....###....    //
     0x01, 0x80,  //   .......##..    //
     0x0E, 0x00,  //   ....###....    //
     0x30, 0x00,  //   ..##.......    //
     0x0E, 0x00,  //   ....###....    //
     0x01, 0x80,  //   .......##..    //
     0x0E, 0x00,  //   ....###....    //
     0x30, 0x00,  //   ..##.......    //
 
     // @212   [x]   (5 px wide) 
     0x20, 0x80,  //   ..#.....#..    //
     0x1B, 0x00,  //   ...##.##...    //
     0x04, 0x00,  //   .....#.....    //
     0x1B, 0x00,  //   ...##.##...    //
     0x20, 0x80,  //   ..#.....#..    //
 
     // @222   [y]   (5 px wide) 
     0x30, 0x00,  //   ..##.......    //
     0x0E, 0x20,  //   ....###...#    //
     0x01, 0xC0,  //   .......###.    //
     0x0E, 0x00,  //   ....###....    //
     0x30, 0x00,  //   ..##.......    //
 
     // @232   [z]   (5 px wide) 
     0x20, 0x80,  //   ..#.....#..    //
     0x23, 0x80,  //   ..#...###..    //
     0x24, 0x80,  //   ..#..#..#..    //
     0x38, 0x80,  //   ..###...#..    //
     0x20, 0x80,  //   ..#.....#..    //
};

static const fontInfo Arial36ptInfo[] = {
	{0, 24 },		// 0  (48) 
    {120, 24},		// 1  (49) 
    {240, 24 },		// 2  (50) 
    {360, 24 },		// 3  (51) 
    {480, 24 },		// 4  (52) 
    {600, 24 },		// 5  (53) 
    {720, 24 },		// 6  (54) 
    {840, 24 },		// 7  (55) 
    {960, 24 },		// 8  (56) 
    {1080, 24 },	// 9  (57) 
};

static const uint8_t Arial36ptBitmaps[] = 
{
     // @0   [0]   (24 px wide) 
     0x00, 0x1F, 0xFF, 0x00, 0x00,  //   ...........#############...........    //
     0x01, 0xFF, 0xFF, 0xF0, 0x00,  //   .......#####################.......    //
     0x07, 0xFF, 0xFF, 0xFC, 0x00,  //   .....#########################.....    //
     0x1F, 0xFF, 0xFF, 0xFF, 0x00,  //   ...#############################...    //
     0x3F, 0xE0, 0x00, 0xFF, 0x80,  //   ..#########.............#########..    //
     0x3E, 0x00, 0x00, 0x0F, 0xC0,  //   ..#####.....................######.    //
     0x7C, 0x00, 0x00, 0x07, 0xC0,  //   .#####.......................#####.    //
     0x78, 0x00, 0x00, 0x03, 0xC0,  //   .####.........................####.    //
     0xF8, 0x00, 0x00, 0x03, 0xE0,  //   #####.........................#####    //
     0xF0, 0x00, 0x00, 0x01, 0xE0,  //   ####...........................####    //
     0xF0, 0x00, 0x00, 0x01, 0xE0,  //   ####...........................####    //
     0xF0, 0x00, 0x00, 0x01, 0xE0,  //   ####...........................####    //
     0xF0, 0x00, 0x00, 0x01, 0xE0,  //   ####...........................####    //
     0xF0, 0x00, 0x00, 0x01, 0xE0,  //   ####...........................####    //
     0xF8, 0x00, 0x00, 0x03, 0xE0,  //   #####.........................#####    //
     0x78, 0x00, 0x00, 0x03, 0xC0,  //   .####.........................####.    //
     0x7C, 0x00, 0x00, 0x07, 0xC0,  //   .#####.......................#####.    //
     0x3F, 0x00, 0x00, 0x0F, 0x80,  //   ..######....................#####..    //
     0x3F, 0xE0, 0x00, 0xFF, 0x80,  //   ..#########.............#########..    //
     0x1F, 0xFF, 0xFF, 0xFF, 0x00,  //   ...#############################...    //
     0x07, 0xFF, 0xFF, 0xFC, 0x00,  //   .....#########################.....    //
     0x01, 0xFF, 0xFF, 0xF0, 0x00,  //   .......#####################.......    //
     0x00, 0x1F, 0xFF, 0x00, 0x00,  //   ...........#############...........    //
     0x00, 0x00, 0x00, 0x00, 0x00,  //   ...................................    //
 
     // @120   [1]   (24 px wide) 
     0x00, 0x00, 0x00, 0x00, 0x00,  //   ...................................    //
     0x00, 0x00, 0x00, 0x00, 0x00,  //   ...................................    //
     0x00, 0x00, 0x00, 0x00, 0x00,  //   ...................................    //
     0x00, 0x00, 0x00, 0x00, 0x00,  //   ...................................    //
     0x00, 0x00, 0x00, 0x00, 0x00,  //   ...................................    //
     0x00, 0x78, 0x00, 0x00, 0x00,  //   .........####......................    //
     0x00, 0xF0, 0x00, 0x00, 0x00,  //   ........####.......................    //
     0x01, 0xF0, 0x00, 0x00, 0x00,  //   .......#####.......................    //
     0x01, 0xE0, 0x00, 0x00, 0x00,  //   .......####........................    //
     0x03, 0xE0, 0x00, 0x00, 0x00,  //   ......#####........................    //
     0x07, 0xC0, 0x00, 0x00, 0x00,  //   .....#####.........................    //
     0x07, 0xC0, 0x00, 0x00, 0x00,  //   .....#####.........................    //
     0x0F, 0x80, 0x00, 0x00, 0x00,  //   ....#####..........................    //
     0x1F, 0x00, 0x00, 0x00, 0x00,  //   ...#####...........................    //
     0x7F, 0xFF, 0xFF, 0xFF, 0xE0,  //   .##################################    //
     0xFF, 0xFF, 0xFF, 0xFF, 0xE0,  //   ###################################    //
     0xFF, 0xFF, 0xFF, 0xFF, 0xE0,  //   ###################################    //
     0xFF, 0xFF, 0xFF, 0xFF, 0xE0,  //   ###################################    //
     0x00, 0x00, 0x00, 0x00, 0x00,  //   ...................................    //
     0x00, 0x00, 0x00, 0x00, 0x00,  //   ...................................    //
     0x00, 0x00, 0x00, 0x00, 0x00,  //   ...................................    //
     0x00, 0x00, 0x00, 0x00, 0x00,  //   ...................................    //
     0x00, 0x00, 0x00, 0x00, 0x00,  //   ...................................    //
     0x00, 0x00, 0x00, 0x00, 0x00,  //   ...................................    //
 
     // @240   [2]   (24 px wide) 
     0x00, 0x00, 0x00, 0x00, 0xE0,  //   ................................###    //
     0x01, 0xC0, 0x00, 0x03, 0xE0,  //   .......###....................#####    //
     0x07, 0xC0, 0x00, 0x07, 0xE0,  //   .....#####...................######    //
     0x1F, 0xE0, 0x00, 0x0F, 0xE0,  //   ...########.................#######    //
     0x3F, 0xE0, 0x00, 0x1F, 0xE0,  //   ..#########................########    //
     0x3F, 0x00, 0x00, 0x3F, 0xE0,  //   ..######..................#########    //
     0x7C, 0x00, 0x00, 0x7D, 0xE0,  //   .#####...................#####.####    //
     0x78, 0x00, 0x00, 0xF9, 0xE0,  //   .####...................#####..####    //
     0xF8, 0x00, 0x01, 0xF1, 0xE0,  //   #####..................#####...####    //
     0xF0, 0x00, 0x01, 0xE1, 0xE0,  //   ####...................####....####    //
     0xF0, 0x00, 0x03, 0xC1, 0xE0,  //   ####..................####.....####    //
     0xF0, 0x00, 0x07, 0xC1, 0xE0,  //   ####.................#####.....####    //
     0xF0, 0x00, 0x0F, 0x81, 0xE0,  //   ####................#####......####    //
     0xF0, 0x00, 0x1F, 0x01, 0xE0,  //   ####...............#####.......####    //
     0xF0, 0x00, 0x3E, 0x01, 0xE0,  //   ####..............#####........####    //
     0xF8, 0x00, 0x7C, 0x01, 0xE0,  //   #####............#####.........####    //
     0x78, 0x00, 0xF8, 0x01, 0xE0,  //   .####...........#####..........####    //
     0x7C, 0x03, 0xF0, 0x01, 0xE0,  //   .#####........######...........####    //
     0x3F, 0x07, 0xE0, 0x01, 0xE0,  //   ..######.....######............####    //
     0x3F, 0xFF, 0xC0, 0x01, 0xE0,  //   ..################.............####    //
     0x1F, 0xFF, 0x80, 0x01, 0xE0,  //   ...##############..............####    //
     0x0F, 0xFE, 0x00, 0x01, 0xE0,  //   ....###########................####    //
     0x01, 0xF8, 0x00, 0x01, 0xE0,  //   .......######..................####    //
     0x00, 0x00, 0x00, 0x00, 0x00,  //   ...................................    //
 
     // @360   [3]   (24 px wide) 
     0x01, 0x80, 0x00, 0x70, 0x00,  //   .......##................###.......    //
     0x07, 0x80, 0x00, 0x7C, 0x00,  //   .....####................#####.....    //
     0x1F, 0xC0, 0x00, 0xFE, 0x00,  //   ...#######..............#######....    //
     0x3F, 0xC0, 0x00, 0xFF, 0x00,  //   ..########..............########...    //
     0x3F, 0x00, 0x00, 0x3F, 0x80,  //   ..######..................#######..    //
     0x7C, 0x00, 0x00, 0x0F, 0xC0,  //   .#####......................######.    //
     0x78, 0x00, 0x00, 0x07, 0xC0,  //   .####........................#####.    //
     0xF8, 0x00, 0x00, 0x03, 0xC0,  //   #####.........................####.    //
     0xF0, 0x00, 0x00, 0x01, 0xE0,  //   ####...........................####    //
     0xF0, 0x03, 0xC0, 0x01, 0xE0,  //   ####..........####.............####    //
     0xF0, 0x03, 0xC0, 0x01, 0xE0,  //   ####..........####.............####    //
     0xF0, 0x03, 0xC0, 0x01, 0xE0,  //   ####..........####.............####    //
     0xF0, 0x03, 0xC0, 0x01, 0xE0,  //   ####..........####.............####    //
     0xF0, 0x07, 0xC0, 0x01, 0xE0,  //   ####.........#####.............####    //
     0x78, 0x07, 0xC0, 0x01, 0xE0,  //   .####........#####.............####    //
     0x7C, 0x0F, 0xC0, 0x03, 0xC0,  //   .#####......######............####.    //
     0x7E, 0x1E, 0xE0, 0x07, 0xC0,  //   .######....####.###..........#####.    //
     0x3F, 0xFE, 0xF0, 0x0F, 0x80,  //   ..#############.####........#####..    //
     0x1F, 0xFC, 0xF8, 0x1F, 0x80,  //   ...###########..#####......######..    //
     0x0F, 0xF8, 0x7F, 0xFF, 0x00,  //   ....#########....###############...    //
     0x03, 0xE0, 0x3F, 0xFE, 0x00,  //   ......#####.......#############....    //
     0x00, 0x00, 0x1F, 0xFC, 0x00,  //   ...................###########.....    //
     0x00, 0x00, 0x07, 0xE0, 0x00,  //   .....................######........    //
     0x00, 0x00, 0x00, 0x00, 0x00,  //   ...................................    //
 
     // @480   [4]   (24 px wide) 
     0x00, 0x00, 0x03, 0xE0, 0x00,  //   ......................#####........    //
     0x00, 0x00, 0x07, 0xE0, 0x00,  //   .....................######........    //
     0x00, 0x00, 0x0F, 0xE0, 0x00,  //   ....................#######........    //
     0x00, 0x00, 0x3F, 0xE0, 0x00,  //   ..................#########........    //
     0x00, 0x00, 0x7F, 0xE0, 0x00,  //   .................##########........    //
     0x00, 0x00, 0xFD, 0xE0, 0x00,  //   ................######.####........    //
     0x00, 0x03, 0xF9, 0xE0, 0x00,  //   ..............#######..####........    //
     0x00, 0x07, 0xE1, 0xE0, 0x00,  //   .............######....####........    //
     0x00, 0x1F, 0xC1, 0xE0, 0x00,  //   ...........#######.....####........    //
     0x00, 0x3F, 0x81, 0xE0, 0x00,  //   ..........#######......####........    //
     0x00, 0x7E, 0x01, 0xE0, 0x00,  //   .........######........####........    //
     0x01, 0xFC, 0x01, 0xE0, 0x00,  //   .......#######.........####........    //
     0x03, 0xF0, 0x01, 0xE0, 0x00,  //   ......######...........####........    //
     0x07, 0xE0, 0x01, 0xE0, 0x00,  //   .....######............####........    //
     0x1F, 0xC0, 0x01, 0xE0, 0x00,  //   ...#######.............####........    //
     0x3F, 0x00, 0x01, 0xE0, 0x00,  //   ..######...............####........    //
     0x7F, 0xFF, 0xFF, 0xFF, 0xE0,  //   .##################################    //
     0xFF, 0xFF, 0xFF, 0xFF, 0xE0,  //   ###################################    //
     0xFF, 0xFF, 0xFF, 0xFF, 0xE0,  //   ###################################    //
     0xFF, 0xFF, 0xFF, 0xFF, 0xE0,  //   ###################################    //
     0x00, 0x00, 0x01, 0xE0, 0x00,  //   .......................####........    //
     0x00, 0x00, 0x01, 0xE0, 0x00,  //   .......................####........    //
     0x00, 0x00, 0x01, 0xE0, 0x00,  //   .......................####........    //
     0x00, 0x00, 0x01, 0xE0, 0x00,  //   .......................####........    //
 
     // @600   [5]   (24 px wide) 
     0x00, 0x00, 0x00, 0x70, 0x00,  //   .........................###.......    //
     0x00, 0x00, 0xC0, 0x7C, 0x00,  //   ................##.......#####.....    //
     0x00, 0x1F, 0xC0, 0x7E, 0x00,  //   ...........#######.......######....    //
     0x01, 0xFF, 0xE0, 0x7F, 0x00,  //   .......############......#######...    //
     0x3F, 0xFF, 0xE0, 0x1F, 0x80,  //   ..#################........######..    //
     0xFF, 0xFF, 0xC0, 0x07, 0xC0,  //   ##################...........#####.    //
     0xFF, 0xE7, 0x80, 0x03, 0xC0,  //   ###########..####.............####.    //
     0xFE, 0x0F, 0x00, 0x03, 0xE0,  //   #######.....####..............#####    //
     0xF0, 0x0E, 0x00, 0x01, 0xE0,  //   ####........###................####    //
     0xF0, 0x1E, 0x00, 0x01, 0xE0,  //   ####.......####................####    //
     0xF0, 0x1E, 0x00, 0x01, 0xE0,  //   ####.......####................####    //
     0xF0, 0x1E, 0x00, 0x01, 0xE0,  //   ####.......####................####    //
     0xF0, 0x1E, 0x00, 0x01, 0xE0,  //   ####.......####................####    //
     0xF0, 0x1E, 0x00, 0x01, 0xE0,  //   ####.......####................####    //
     0xF0, 0x1E, 0x00, 0x03, 0xE0,  //   ####.......####...............#####    //
     0xF0, 0x1F, 0x00, 0x03, 0xC0,  //   ####.......#####..............####.    //
     0xF0, 0x0F, 0x00, 0x07, 0xC0,  //   ####........####.............#####.    //
     0xF0, 0x0F, 0x80, 0x0F, 0x80,  //   ####........#####...........#####..    //
     0xF0, 0x07, 0xE0, 0x3F, 0x80,  //   ####.........######.......#######..    //
     0xF0, 0x03, 0xFF, 0xFF, 0x00,  //   ####..........##################...    //
     0xF0, 0x01, 0xFF, 0xFC, 0x00,  //   ####...........###############.....    //
     0x00, 0x00, 0xFF, 0xF8, 0x00,  //   ................#############......    //
     0x00, 0x00, 0x1F, 0xC0, 0x00,  //   ...................#######.........    //
     0x00, 0x00, 0x00, 0x00, 0x00,  //   ...................................    //
 
     // @720   [6]   (24 px wide) 
     0x00, 0x0F, 0xFF, 0x00, 0x00,  //   ............############...........    //
     0x00, 0xFF, 0xFF, 0xF0, 0x00,  //   ........####################.......    //
     0x03, 0xFF, 0xFF, 0xFC, 0x00,  //   ......########################.....    //
     0x0F, 0xFF, 0xFF, 0xFE, 0x00,  //   ....###########################....    //
     0x1F, 0xE0, 0xF0, 0x3F, 0x00,  //   ...########.....####......######...    //
     0x3F, 0x81, 0xE0, 0x0F, 0x80,  //   ..#######......####.........#####..    //
     0x3E, 0x03, 0xC0, 0x07, 0xC0,  //   ..#####.......####...........#####.    //
     0x7C, 0x07, 0x80, 0x03, 0xC0,  //   .#####.......####.............####.    //
     0x78, 0x07, 0x80, 0x03, 0xC0,  //   .####........####.............####.    //
     0xF8, 0x07, 0x00, 0x01, 0xE0,  //   #####........###...............####    //
     0xF0, 0x0F, 0x00, 0x01, 0xE0,  //   ####........####...............####    //
     0xF0, 0x0F, 0x00, 0x01, 0xE0,  //   ####........####...............####    //
     0xF0, 0x0F, 0x00, 0x01, 0xE0,  //   ####........####...............####    //
     0xF0, 0x0F, 0x00, 0x01, 0xE0,  //   ####........####...............####    //
     0xF0, 0x0F, 0x00, 0x01, 0xE0,  //   ####........####...............####    //
     0xF8, 0x0F, 0x00, 0x01, 0xE0,  //   #####.......####...............####    //
     0x78, 0x07, 0x80, 0x03, 0xC0,  //   .####........####.............####.    //
     0x7C, 0x07, 0xC0, 0x07, 0xC0,  //   .#####.......#####...........#####.    //
     0x7F, 0x07, 0xE0, 0x0F, 0x80,  //   .#######.....######.........#####..    //
     0x3F, 0x83, 0xF0, 0x3F, 0x80,  //   ..#######.....######......#######..    //
     0x1F, 0x81, 0xFF, 0xFF, 0x00,  //   ...######......#################...    //
     0x0F, 0x80, 0xFF, 0xFE, 0x00,  //   ....#####.......###############....    //
     0x01, 0x80, 0x7F, 0xF8, 0x00,  //   .......##........############......    //
     0x00, 0x00, 0x0F, 0xE0, 0x00,  //   ....................#######........    //
 
     // @840   [7]   (24 px wide) 
     0xF0, 0x00, 0x00, 0x00, 0x00,  //   ####...............................    //
     0xF0, 0x00, 0x00, 0x00, 0x00,  //   ####...............................    //
     0xF0, 0x00, 0x00, 0x00, 0x00,  //   ####...............................    //
     0xF0, 0x00, 0x00, 0x00, 0x00,  //   ####...............................    //
     0xF0, 0x00, 0x00, 0x00, 0x00,  //   ####...............................    //
     0xF0, 0x00, 0x00, 0x03, 0xE0,  //   ####..........................#####    //
     0xF0, 0x00, 0x00, 0x3F, 0xE0,  //   ####......................#########    //
     0xF0, 0x00, 0x01, 0xFF, 0xE0,  //   ####...................############    //
     0xF0, 0x00, 0x0F, 0xFF, 0xE0,  //   ####................###############    //
     0xF0, 0x00, 0x3F, 0xFE, 0x00,  //   ####..............#############....    //
     0xF0, 0x00, 0xFF, 0xC0, 0x00,  //   ####............##########.........    //
     0xF0, 0x03, 0xFE, 0x00, 0x00,  //   ####..........#########............    //
     0xF0, 0x0F, 0xF0, 0x00, 0x00,  //   ####........########...............    //
     0xF0, 0x1F, 0xC0, 0x00, 0x00,  //   ####.......#######.................    //
     0xF0, 0x7F, 0x00, 0x00, 0x00,  //   ####.....#######...................    //
     0xF0, 0xFC, 0x00, 0x00, 0x00,  //   ####....######.....................    //
     0xF1, 0xF0, 0x00, 0x00, 0x00,  //   ####...#####.......................    //
     0xF3, 0xC0, 0x00, 0x00, 0x00,  //   ####..####.........................    //
     0xF7, 0x80, 0x00, 0x00, 0x00,  //   ####.####..........................    //
     0xFE, 0x00, 0x00, 0x00, 0x00,  //   #######............................    //
     0xFC, 0x00, 0x00, 0x00, 0x00,  //   ######.............................    //
     0xF8, 0x00, 0x00, 0x00, 0x00,  //   #####..............................    //
     0xF0, 0x00, 0x00, 0x00, 0x00,  //   ####...............................    //
     0x00, 0x00, 0x00, 0x00, 0x00,  //   ...................................    //
 
     // @960   [8]   (24 px wide) 
     0x00, 0x00, 0x07, 0xF0, 0x00,  //   .....................#######.......    //
     0x03, 0xF0, 0x1F, 0xFC, 0x00,  //   ......######.......###########.....    //
     0x0F, 0xF8, 0x3F, 0xFE, 0x00,  //   ....#########.....#############....    //
     0x1F, 0xFC, 0x7F, 0xFF, 0x00,  //   ...###########...###############...    //
     0x3F, 0xFE, 0xFC, 0x1F, 0x80,  //   ..#############.######.....######..    //
     0x7E, 0x1F, 0xF0, 0x07, 0xC0,  //   .######....#########.........#####.    //
     0x7C, 0x0F, 0xE0, 0x03, 0xC0,  //   .#####......#######...........####.    //
     0x78, 0x07, 0xE0, 0x03, 0xC0,  //   .####........######...........####.    //
     0xF0, 0x03, 0xC0, 0x01, 0xE0,  //   ####..........####.............####    //
     0xF0, 0x03, 0xC0, 0x01, 0xE0,  //   ####..........####.............####    //
     0xF0, 0x03, 0xC0, 0x01, 0xE0,  //   ####..........####.............####    //
     0xF0, 0x03, 0xC0, 0x01, 0xE0,  //   ####..........####.............####    //
     0xF0, 0x03, 0xC0, 0x01, 0xE0,  //   ####..........####.............####    //
     0xF0, 0x03, 0xC0, 0x01, 0xE0,  //   ####..........####.............####    //
     0xF0, 0x03, 0xC0, 0x01, 0xE0,  //   ####..........####.............####    //
     0x78, 0x07, 0xE0, 0x03, 0xC0,  //   .####........######...........####.    //
     0x7C, 0x07, 0xE0, 0x03, 0xC0,  //   .#####.......######...........####.    //
     0x7E, 0x1F, 0xF0, 0x07, 0xC0,  //   .######....#########.........#####.    //
     0x3F, 0xFE, 0xFC, 0x1F, 0x80,  //   ..#############.######.....######..    //
     0x1F, 0xFE, 0x7F, 0xFF, 0x00,  //   ...############..###############...    //
     0x0F, 0xFC, 0x3F, 0xFE, 0x00,  //   ....##########....#############....    //
     0x03, 0xF0, 0x1F, 0xFC, 0x00,  //   ......######.......###########.....    //
     0x00, 0x00, 0x07, 0xF0, 0x00,  //   .....................#######.......    //
     0x00, 0x00, 0x00, 0x00, 0x00,  //   ...................................    //
 
     // @1080   [9]   (24 px wide) 
     0x00, 0xFE, 0x00, 0x00, 0x00,  //   ........#######....................    //
     0x07, 0xFF, 0xC0, 0x30, 0x00,  //   .....#############........##.......    //
     0x0F, 0xFF, 0xE0, 0x3E, 0x00,  //   ....###############.......#####....    //
     0x1F, 0xFF, 0xF0, 0x3F, 0x00,  //   ...#################......######...    //
     0x3F, 0x81, 0xF8, 0x3F, 0x80,  //   ..#######......######.....#######..    //
     0x7E, 0x00, 0x7C, 0x0F, 0xC0,  //   .######..........#####......######.    //
     0x7C, 0x00, 0x3C, 0x07, 0xC0,  //   .#####............####.......#####.    //
     0x78, 0x00, 0x3E, 0x03, 0xE0,  //   .####.............#####.......#####    //
     0xF8, 0x00, 0x1E, 0x01, 0xE0,  //   #####..............####........####    //
     0xF0, 0x00, 0x1E, 0x01, 0xE0,  //   ####...............####........####    //
     0xF0, 0x00, 0x1E, 0x01, 0xE0,  //   ####...............####........####    //
     0xF0, 0x00, 0x1E, 0x01, 0xE0,  //   ####...............####........####    //
     0xF0, 0x00, 0x1E, 0x01, 0xE0,  //   ####...............####........####    //
     0xF0, 0x00, 0x1E, 0x01, 0xE0,  //   ####...............####........####    //
     0x70, 0x00, 0x1C, 0x03, 0xC0,  //   .###...............###........####.    //
     0x78, 0x00, 0x3C, 0x03, 0xC0,  //   .####.............####........####.    //
     0x78, 0x00, 0x78, 0x07, 0x80,  //   .####............####........####..    //
     0x3E, 0x00, 0xF0, 0x1F, 0x80,  //   ..#####.........####.......######..    //
     0x1F, 0x01, 0xE0, 0xFF, 0x00,  //   ...#####.......####.....########...    //
     0x0F, 0xFF, 0xFF, 0xFE, 0x00,  //   ....###########################....    //
     0x07, 0xFF, 0xFF, 0xF8, 0x00,  //   .....########################......    //
     0x01, 0xFF, 0xFF, 0xE0, 0x00,  //   .......####################........    //
     0x00, 0x3F, 0xFE, 0x00, 0x00,  //   ..........#############............    //
     0x00, 0x00, 0x00, 0x00, 0x00,  //   ...................................    //
};

static const uint8_t pageAddresses [] = {0xB0, 0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7};

void setLetterInArray(char, uint8_t, uint8_t);
void sendLetter(char, uint8_t, uint8_t);
void sendString(char *, uint8_t, uint8_t); 
void sendGlucoseResult(uint16_t, uint8_t, uint8_t);