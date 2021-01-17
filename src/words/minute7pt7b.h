#include <Arduino.h>
#include <gfxfont.h>

const uint8_t minute7pt7bBitmaps[] PROGMEM = {
  0x00, 0x49, 0x24, 0x2A, 0x55, 0xA0, 0x51, 0x4F, 0xD4, 0x5D, 0x45, 0x00,
  0x13, 0xA7, 0x27, 0x0E, 0x73, 0x70, 0x80, 0x60, 0x4A, 0x26, 0x0D, 0x01,
  0x30, 0xA4, 0x52, 0x46, 0x72, 0x49, 0x14, 0x7A, 0x49, 0x99, 0x58, 0x2A,
  0x49, 0x24, 0x44, 0x88, 0x92, 0x49, 0x50, 0x5F, 0x7F, 0x50, 0x22, 0xE2,
  0x60, 0xF0, 0x80, 0x11, 0x11, 0x24, 0x48, 0x69, 0x99, 0x99, 0x96, 0x59,
  0x24, 0x97, 0x69, 0x11, 0x24, 0x8F, 0x69, 0x12, 0x11, 0x96, 0x36, 0xDA,
  0x49, 0x78, 0x8E, 0x11, 0x96, 0x69, 0x8E, 0x99, 0x96, 0xE1, 0x11, 0x22,
  0x22, 0x69, 0x99, 0xF9, 0x96, 0x69, 0x99, 0x71, 0x96, 0x88, 0x40, 0x58,
  0x16, 0xE1, 0xF0, 0xF0, 0xC3, 0x3C, 0x79, 0x91, 0x20, 0x52, 0x3C, 0x42,
  0x99, 0xA5, 0xA5, 0xA5, 0x9A, 0x40, 0x3E, 0x22, 0xA3, 0x18, 0xC6, 0x31,
  0x74, 0x63, 0x18, 0xC6, 0x2E, 0x39, 0x18, 0x20, 0x82, 0x04, 0x4E, 0x72,
  0x28, 0x61, 0x86, 0x18, 0x9C, 0x7C, 0x21, 0x08, 0x42, 0x0F, 0x7C, 0x21,
  0x08, 0x42, 0x10, 0x7A, 0x18, 0x20, 0xBE, 0x18, 0x5E, 0x86, 0x18, 0x6F,
  0x86, 0x18, 0x61, 0xE9, 0x24, 0x97, 0x32, 0x22, 0x2A, 0xA6, 0x86, 0x18,
  0xA4, 0xB2, 0x28, 0x61, 0x88, 0x88, 0x88, 0x87, 0x6D, 0x26, 0x4C, 0x99,
  0x30, 0x60, 0xC1, 0x46, 0x9A, 0x69, 0xA6, 0x59, 0x62, 0x38, 0x8A, 0x0C,
  0x18, 0x30, 0x51, 0x1C, 0x74, 0x63, 0x18, 0x42, 0x10, 0x38, 0x44, 0x82,
  0x82, 0x82, 0x8A, 0x44, 0x3B, 0x79, 0x0A, 0x14, 0x2B, 0xD0, 0xA1, 0x43,
  0x7A, 0x18, 0x1E, 0x06, 0x18, 0x5E, 0xFC, 0x82, 0x08, 0x20, 0x82, 0x08,
  0x86, 0x18, 0x61, 0x86, 0x14, 0x8C, 0x86, 0x18, 0x61, 0xCD, 0x23, 0x08,
  0x83, 0x06, 0x0C, 0x19, 0x32, 0x64, 0xB6, 0x8C, 0x54, 0x4D, 0xC6, 0x31,
  0x86, 0x18, 0x52, 0x30, 0x82, 0x08, 0xF0, 0x44, 0x46, 0x42, 0x0F, 0x72,
  0x49, 0x24, 0x8C, 0x88, 0x44, 0x21, 0x11, 0xC4, 0x92, 0x49, 0x38, 0x25,
  0x90, 0xFC, 0x90, 0x64, 0xA5, 0x26, 0x80, 0x88, 0x8E, 0x99, 0x96, 0x69,
  0x89, 0x60, 0x11, 0x17, 0x99, 0x96, 0x6F, 0x89, 0x60, 0x11, 0x48, 0xC2,
  0x10, 0x84, 0xA2, 0x00, 0x69, 0x97, 0x11, 0x96, 0x88, 0x8E, 0x99, 0x99,
  0xA8, 0x24, 0x92, 0x52, 0x02, 0x22, 0x22, 0x2A, 0x40, 0x88, 0x89, 0xEA,
  0x99, 0x92, 0x49, 0x2A, 0x6D, 0x26, 0x4C, 0x99, 0x20, 0x69, 0x99, 0x90,
  0x69, 0x99, 0x60, 0x69, 0x99, 0xE8, 0x88, 0x69, 0x99, 0x71, 0x11, 0xB2,
  0x48, 0x6E, 0x19, 0x60, 0x44, 0xF4, 0x44, 0x30, 0x99, 0x9B, 0x70, 0x99,
  0x66, 0x20, 0x93, 0x26, 0x4C, 0x96, 0xC0, 0x9F, 0x99, 0x90, 0x99, 0x97,
  0x11, 0x96, 0xE3, 0x24, 0xF0, 0x29, 0x2C, 0x92, 0x44, 0xFF, 0xF0, 0x89,
  0x26, 0x92, 0x50, 0x6C, 0x80 };

const GFXglyph minute7pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,   4,    0,    0 },   // 0x20 ' '
  {     1,   3,   8,   4,    0,   -7 },   // 0x21 '!'
  {     4,   4,   3,   4,    0,   -7 },   // 0x22 '"'
  {     6,   6,   7,   7,    0,   -7 },   // 0x23 '#'
  {    12,   5,  10,   6,    0,   -8 },   // 0x24 '$'
  {    19,   9,   8,  10,    0,   -7 },   // 0x25 '%'
  {    28,   6,   8,   7,    0,   -7 },   // 0x26 '&'
  {    34,   2,   3,   3,    0,   -7 },   // 0x27 '''
  {    35,   3,  10,   4,    0,   -7 },   // 0x28 '('
  {    39,   3,  10,   4,    0,   -7 },   // 0x29 ')'
  {    43,   4,   5,   5,    0,   -8 },   // 0x2A '*'
  {    46,   4,   4,   6,    1,   -5 },   // 0x2B '+'
  {    48,   2,   2,   3,    0,    0 },   // 0x2C ','
  {    49,   4,   1,   4,    0,   -3 },   // 0x2D '-'
  {    50,   1,   1,   2,    0,    0 },   // 0x2E '.'
  {    51,   4,   8,   5,    0,   -7 },   // 0x2F '/'
  {    55,   4,   8,   6,    1,   -7 },   // 0x30 '0'
  {    59,   3,   8,   4,    1,   -7 },   // 0x31 '1'
  {    62,   4,   8,   6,    1,   -7 },   // 0x32 '2'
  {    66,   4,   8,   6,    1,   -7 },   // 0x33 '3'
  {    70,   3,   8,   5,    1,   -7 },   // 0x34 '4'
  {    73,   4,   8,   6,    1,   -7 },   // 0x35 '5'
  {    77,   4,   8,   6,    1,   -7 },   // 0x36 '6'
  {    81,   4,   8,   6,    1,   -7 },   // 0x37 '7'
  {    85,   4,   8,   6,    1,   -7 },   // 0x38 '8'
  {    89,   4,   8,   6,    1,   -7 },   // 0x39 '9'
  {    93,   1,   5,   2,    0,   -4 },   // 0x3A ':'
  {    94,   2,   7,   2,   -1,   -4 },   // 0x3B ';'
  {    96,   4,   4,   5,    0,   -5 },   // 0x3C '<'
  {    98,   4,   3,   5,    0,   -5 },   // 0x3D '='
  {   100,   4,   4,   5,    0,   -5 },   // 0x3E '>'
  {   102,   4,   8,   5,    0,   -7 },   // 0x3F '?'
  {   106,   8,   9,   9,    0,   -7 },   // 0x40 '@'
  {   115,   5,   8,   7,    1,   -7 },   // 0x41 'A'
  {   120,   5,   8,   7,    1,   -7 },   // 0x42 'B'
  {   125,   6,   8,   8,    1,   -7 },   // 0x43 'C'
  {   131,   6,   8,   8,    1,   -7 },   // 0x44 'D'
  {   137,   5,   8,   7,    1,   -7 },   // 0x45 'E'
  {   142,   5,   8,   7,    1,   -7 },   // 0x46 'F'
  {   147,   6,   8,   8,    1,   -7 },   // 0x47 'G'
  {   153,   6,   8,   8,    1,   -7 },   // 0x48 'H'
  {   159,   3,   8,   4,    0,   -7 },   // 0x49 'I'
  {   162,   4,   8,   6,    1,   -7 },   // 0x4A 'J'
  {   166,   6,   8,   8,    1,   -7 },   // 0x4B 'K'
  {   172,   4,   8,   6,    1,   -7 },   // 0x4C 'L'
  {   176,   7,   8,   9,    1,   -7 },   // 0x4D 'M'
  {   183,   6,   8,   8,    1,   -7 },   // 0x4E 'N'
  {   189,   7,   8,   9,    1,   -7 },   // 0x4F 'O'
  {   196,   5,   8,   7,    1,   -7 },   // 0x50 'P'
  {   201,   8,   8,  10,    1,   -7 },   // 0x51 'Q'
  {   209,   7,   8,   9,    1,   -7 },   // 0x52 'R'
  {   216,   6,   8,   8,    1,   -7 },   // 0x53 'S'
  {   222,   6,   8,   8,    1,   -7 },   // 0x54 'T'
  {   228,   6,   8,   8,    1,   -7 },   // 0x55 'U'
  {   234,   6,   8,   8,    1,   -7 },   // 0x56 'V'
  {   240,   7,   8,   9,    1,   -7 },   // 0x57 'W'
  {   247,   5,   8,   7,    1,   -7 },   // 0x58 'X'
  {   252,   6,   8,   8,    1,   -7 },   // 0x59 'Y'
  {   258,   5,   8,   7,    1,   -7 },   // 0x5A 'Z'
  {   263,   3,  10,   4,    0,   -7 },   // 0x5B '['
  {   267,   4,   8,   5,    0,   -7 },   // 0x5C '\'
  {   271,   3,  10,   4,    0,   -7 },   // 0x5D ']'
  {   275,   4,   3,   5,    0,   -7 },   // 0x5E '^'
  {   277,   6,   1,   7,    0,    2 },   // 0x5F '_'
  {   278,   2,   2,   4,    1,   -7 },   // 0x60 '`'
  {   279,   5,   5,   7,    1,   -4 },   // 0x61 'a'
  {   283,   4,   8,   6,    1,   -7 },   // 0x62 'b'
  {   287,   4,   5,   6,    1,   -4 },   // 0x63 'c'
  {   290,   4,   8,   6,    1,   -7 },   // 0x64 'd'
  {   294,   4,   5,   6,    1,   -4 },   // 0x65 'e'
  {   297,   5,  10,   6,    0,   -6 },   // 0x66 'f'
  {   304,   4,   8,   6,    1,   -4 },   // 0x67 'g'
  {   308,   4,   8,   6,    1,   -7 },   // 0x68 'h'
  {   312,   3,   8,   4,    0,   -7 },   // 0x69 'i'
  {   315,   4,  11,   4,   -1,   -7 },   // 0x6A 'j'
  {   321,   4,   8,   6,    1,   -7 },   // 0x6B 'k'
  {   325,   3,   8,   4,    1,   -7 },   // 0x6C 'l'
  {   328,   7,   5,   9,    1,   -4 },   // 0x6D 'm'
  {   333,   4,   5,   6,    1,   -4 },   // 0x6E 'n'
  {   336,   4,   5,   6,    1,   -4 },   // 0x6F 'o'
  {   339,   4,   8,   6,    1,   -4 },   // 0x70 'p'
  {   343,   4,   8,   6,    1,   -4 },   // 0x71 'q'
  {   347,   3,   5,   5,    1,   -4 },   // 0x72 'r'
  {   349,   4,   5,   6,    1,   -4 },   // 0x73 's'
  {   352,   4,   7,   4,    0,   -6 },   // 0x74 't'
  {   356,   4,   5,   6,    1,   -4 },   // 0x75 'u'
  {   359,   4,   5,   6,    1,   -4 },   // 0x76 'v'
  {   362,   7,   5,   9,    1,   -4 },   // 0x77 'w'
  {   367,   4,   5,   6,    1,   -4 },   // 0x78 'x'
  {   370,   4,   8,   6,    1,   -4 },   // 0x79 'y'
  {   374,   4,   5,   6,    1,   -4 },   // 0x7A 'z'
  {   377,   3,  10,   4,    0,   -7 },   // 0x7B '{'
  {   381,   1,  12,   3,    1,   -8 },   // 0x7C '|'
  {   383,   3,  10,   4,    0,   -7 },   // 0x7D '}'
  {   387,   5,   2,   6,    0,   -4 } }; // 0x7E '~'

const GFXfont minute7pt7b PROGMEM = {
  (uint8_t  *)minute7pt7bBitmaps,
  (GFXglyph *)minute7pt7bGlyphs,
  0x20, 0x7E, 14 };

// Approx. 1061 bytes
