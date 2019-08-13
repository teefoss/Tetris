//
//  tetramino.h
//  tetris
//
//  Created by Thomas Foster on 8/12/19.
//  Copyright © 2019 Thomas Foster. All rights reserved.
//

#ifndef tetramino_h
#define tetramino_h

// tetramino shape data stored in a 4 * 4 grid
#define DATA_SIZE   4

typedef enum
{
    TET_O,
    TET_I,
    TET_L,
    TET_J,
    TET_S,
    TET_Z,
    TET_T,
    TET_COUNT
} tettype_t;

typedef enum
{
    R_0,
    R_90,
    R_180,
    R_270,
    R_COUNT
} rotation_t;

typedef struct
{
    int         x, y; // tile position
    tettype_t   type;
    rotation_t  rotation;
} tetramino_t;

extern char shapes[TET_COUNT][R_COUNT][DATA_SIZE][DATA_SIZE];

// shapes displayed in the 'next' panel
extern char displayshapes[TET_COUNT][DATA_SIZE][DATA_SIZE];

// data for drawing the tetramino drop guide
// for each rotation of each type, four values that represent the lowest y
// that has a block in each column, or -1 if no blocks in that column
extern char guidedata[TET_COUNT][R_COUNT][4];

void InitDropGuides (void);

#endif /* tetramino_h */
