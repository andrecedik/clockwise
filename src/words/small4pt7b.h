#include <Arduino.h>
#include <gfxfont.h>

const uint8_t small4pt7bBitmaps[] PROGMEM = {
  0x00, 0xE4, 0xF8, 0x53, 0xF5, 0x14, 0xFD, 0x40, 0x21, 0xF8, 0x1C, 0x00,
  0x1F, 0x08, 0x07, 0x01, 0x08, 0x5E, 0x20, 0x71, 0x00, 0x03, 0x88, 0xEF,
  0x80, 0xE0, 0x4A, 0x90, 0x85, 0x60, 0xFF, 0x80, 0x5D, 0x00, 0xC0, 0xE0,
  0x80, 0x04, 0x40, 0x08, 0x42, 0x00, 0x70, 0x08, 0x61, 0x85, 0xC0, 0x75,
  0x50, 0xF0, 0x10, 0x1C, 0x83, 0xF0, 0x72, 0x10, 0x1C, 0x85, 0xC0, 0x86,
  0x18, 0x7F, 0x04, 0x10, 0xFE, 0x08, 0x3E, 0x07, 0xE0, 0x7C, 0x08, 0x3C,
  0x85, 0xC0, 0xF8, 0x40, 0x22, 0x10, 0x72, 0x10, 0x1C, 0x85, 0xC0, 0x70,
  0x08, 0xDF, 0x07, 0xC0, 0x88, 0xF0, 0xD0, 0x28, 0x44, 0x40, 0xF8, 0x01,
  0xF0, 0x88, 0x15, 0x00, 0x72, 0x10, 0x0C, 0x00, 0x80, 0x72, 0x18, 0x6F,
  0xAE, 0xF0, 0x72, 0x38, 0xFF, 0x86, 0x10, 0xFA, 0x18, 0x3E, 0x87, 0xE0,
  0x72, 0x18, 0x20, 0x85, 0xC0, 0xFA, 0x08, 0x61, 0x87, 0xE0, 0xFE, 0x08,
  0x3C, 0x83, 0xF0, 0xFE, 0x08, 0x3C, 0x82, 0x00, 0x7C, 0x08, 0x2F, 0x85,
  0xC0, 0x86, 0x18, 0x7F, 0x86, 0x10, 0xFC, 0x82, 0x08, 0x23, 0xF0, 0x1C,
  0x10, 0x61, 0x85, 0xC0, 0x86, 0x48, 0x38, 0x92, 0x10, 0x82, 0x08, 0x20,
  0x83, 0xF0, 0x8E, 0xE3, 0x58, 0xC4, 0x8E, 0x63, 0x59, 0xC4, 0x70, 0x08,
  0x61, 0x85, 0xC0, 0xFA, 0x18, 0x3E, 0x82, 0x00, 0x72, 0x18, 0x60, 0x91,
  0xD0, 0xFA, 0x18, 0x3E, 0x86, 0x10, 0x7E, 0x00, 0x1C, 0x07, 0xC0, 0xFC,
  0x82, 0x08, 0x20, 0x80, 0x86, 0x18, 0x61, 0x85, 0xC0, 0x86, 0x18, 0x40,
  0x50, 0x80, 0x8C, 0x63, 0x5D, 0xC4, 0x85, 0x40, 0x08, 0x52, 0x10, 0x85,
  0x40, 0x08, 0x20, 0x80, 0xFC, 0x40, 0x08, 0x43, 0xF0, 0xEA, 0xB0, 0x81,
  0x00, 0x08, 0x10, 0x10, 0xD5, 0x70, 0x00, 0xFC, 0x00, 0x72, 0x38, 0xFF,
  0x86, 0x10, 0xFA, 0x18, 0x3E, 0x87, 0xE0, 0x72, 0x18, 0x20, 0x85, 0xC0,
  0xFA, 0x08, 0x61, 0x87, 0xE0, 0xFE, 0x08, 0x3C, 0x83, 0xF0, 0xFE, 0x08,
  0x3C, 0x82, 0x00, 0x7C, 0x08, 0x2F, 0x85, 0xC0, 0x86, 0x18, 0x7F, 0x86,
  0x10, 0xFC, 0x82, 0x08, 0x23, 0xF0, 0x1C, 0x10, 0x61, 0x85, 0xC0, 0x86,
  0x48, 0x38, 0x92, 0x10, 0x82, 0x08, 0x20, 0x83, 0xF0, 0x8E, 0xE3, 0x58,
  0xC4, 0x8E, 0x63, 0x59, 0xC4, 0x70, 0x08, 0x61, 0x85, 0xC0, 0xFA, 0x18,
  0x3E, 0x82, 0x00, 0x72, 0x18, 0x60, 0x91, 0xD0, 0xFA, 0x18, 0x3E, 0x86,
  0x10, 0x7E, 0x00, 0x1C, 0x07, 0xC0, 0xFC, 0x82, 0x08, 0x20, 0x80, 0x86,
  0x18, 0x61, 0x85, 0xC0, 0x86, 0x18, 0x40, 0x50, 0x80, 0x8C, 0x63, 0x5D,
  0xC4, 0x85, 0x40, 0x08, 0x52, 0x10, 0x85, 0x40, 0x08, 0x20, 0x80, 0xFC,
  0x40, 0x08, 0x43, 0xF0, 0x69, 0x64, 0xC0, 0xFC, 0xC9, 0x35, 0x80, 0x00 };

const GFXglyph small4pt7bGlyphs[] PROGMEM = {
  {     0,   1,   1,   3,    0,    0 },   // 0x20 ' '
  {     1,   1,   6,   3,    1,   -5 },   // 0x21 '!'
  {     2,   3,   2,   4,    1,   -6 },   // 0x22 '"'
  {     3,   6,   6,   8,    1,   -5 },   // 0x23 '#'
  {     8,   6,   8,   8,    1,   -6 },   // 0x24 '$'
  {    14,   6,   6,   8,    1,   -5 },   // 0x25 '%'
  {    19,   7,   6,   9,    1,   -5 },   // 0x26 '&'
  {    25,   2,   2,   3,    1,   -6 },   // 0x27 '''
  {    26,   2,   6,   4,    1,   -5 },   // 0x28 '('
  {    28,   2,   6,   4,    1,   -5 },   // 0x29 ')'
  {    30,   3,   3,   5,    1,   -5 },   // 0x2A '*'
  {    32,   3,   3,   5,    1,   -3 },   // 0x2B '+'
  {    34,   1,   2,   2,    1,    0 },   // 0x2C ','
  {    35,   3,   1,   5,    1,   -2 },   // 0x2D '-'
  {    36,   1,   1,   3,    1,    0 },   // 0x2E '.'
  {    37,   6,   6,   8,    1,   -5 },   // 0x2F '/'
  {    42,   6,   6,   8,    1,   -5 },   // 0x30 '0'
  {    47,   2,   6,   4,    1,   -5 },   // 0x31 '1'
  {    49,   6,   6,   8,    1,   -5 },   // 0x32 '2'
  {    54,   6,   6,   8,    1,   -5 },   // 0x33 '3'
  {    59,   6,   6,   8,    1,   -5 },   // 0x34 '4'
  {    64,   6,   6,   8,    1,   -5 },   // 0x35 '5'
  {    69,   6,   6,   8,    1,   -5 },   // 0x36 '6'
  {    74,   5,   6,   7,    1,   -5 },   // 0x37 '7'
  {    78,   6,   6,   8,    1,   -5 },   // 0x38 '8'
  {    83,   6,   6,   8,    1,   -5 },   // 0x39 '9'
  {    88,   1,   5,   3,    1,   -4 },   // 0x3A ':'
  {    89,   2,   6,   2,    0,   -4 },   // 0x3B ';'
  {    91,   3,   6,   5,    1,   -5 },   // 0x3C '<'
  {    94,   5,   4,   7,    1,   -4 },   // 0x3D '='
  {    97,   3,   6,   5,    1,   -5 },   // 0x3E '>'
  {   100,   6,   6,   8,    1,   -5 },   // 0x3F '?'
  {   105,   6,   6,   8,    1,   -5 },   // 0x40 '@'
  {   110,   6,   6,   8,    1,   -5 },   // 0x41 'A'
  {   115,   6,   6,   8,    1,   -5 },   // 0x42 'B'
  {   120,   6,   6,   8,    1,   -5 },   // 0x43 'C'
  {   125,   6,   6,   8,    1,   -5 },   // 0x44 'D'
  {   130,   6,   6,   7,    1,   -5 },   // 0x45 'E'
  {   135,   6,   6,   7,    1,   -5 },   // 0x46 'F'
  {   140,   6,   6,   8,    1,   -5 },   // 0x47 'G'
  {   145,   6,   6,   8,    1,   -5 },   // 0x48 'H'
  {   150,   6,   6,   8,    1,   -5 },   // 0x49 'I'
  {   155,   6,   6,   8,    1,   -5 },   // 0x4A 'J'
  {   160,   6,   6,   8,    1,   -5 },   // 0x4B 'K'
  {   165,   6,   6,   7,    1,   -5 },   // 0x4C 'L'
  {   170,   5,   6,   7,    1,   -5 },   // 0x4D 'M'
  {   174,   5,   6,   7,    1,   -5 },   // 0x4E 'N'
  {   178,   6,   6,   8,    1,   -5 },   // 0x4F 'O'
  {   183,   6,   6,   8,    1,   -5 },   // 0x50 'P'
  {   188,   6,   6,   8,    1,   -5 },   // 0x51 'Q'
  {   193,   6,   6,   8,    1,   -5 },   // 0x52 'R'
  {   198,   6,   6,   8,    1,   -5 },   // 0x53 'S'
  {   203,   6,   6,   8,    1,   -5 },   // 0x54 'T'
  {   208,   6,   6,   8,    1,   -5 },   // 0x55 'U'
  {   213,   6,   6,   8,    1,   -5 },   // 0x56 'V'
  {   218,   5,   6,   7,    1,   -5 },   // 0x57 'W'
  {   222,   6,   6,   8,    1,   -5 },   // 0x58 'X'
  {   227,   6,   6,   8,    1,   -5 },   // 0x59 'Y'
  {   232,   6,   6,   8,    1,   -5 },   // 0x5A 'Z'
  {   237,   2,   6,   4,    1,   -5 },   // 0x5B '['
  {   239,   6,   6,   8,    1,   -5 },   // 0x5C '\'
  {   244,   2,   6,   4,    1,   -5 },   // 0x5D ']'
  {   246,   1,   1,   4,    0,    0 },   // 0x5E '^'
  {   247,   6,   1,   8,    1,    0 },   // 0x5F '_'
  {   248,   1,   1,   4,    0,    0 },   // 0x60 '`'
  {   249,   6,   6,   8,    1,   -5 },   // 0x61 'a'
  {   254,   6,   6,   8,    1,   -5 },   // 0x62 'b'
  {   259,   6,   6,   8,    1,   -5 },   // 0x63 'c'
  {   264,   6,   6,   8,    1,   -5 },   // 0x64 'd'
  {   269,   6,   6,   7,    1,   -5 },   // 0x65 'e'
  {   274,   6,   6,   7,    1,   -5 },   // 0x66 'f'
  {   279,   6,   6,   8,    1,   -5 },   // 0x67 'g'
  {   284,   6,   6,   8,    1,   -5 },   // 0x68 'h'
  {   289,   6,   6,   8,    1,   -5 },   // 0x69 'i'
  {   294,   6,   6,   8,    1,   -5 },   // 0x6A 'j'
  {   299,   6,   6,   8,    1,   -5 },   // 0x6B 'k'
  {   304,   6,   6,   7,    1,   -5 },   // 0x6C 'l'
  {   309,   5,   6,   7,    1,   -5 },   // 0x6D 'm'
  {   313,   5,   6,   7,    1,   -5 },   // 0x6E 'n'
  {   317,   6,   6,   8,    1,   -5 },   // 0x6F 'o'
  {   322,   6,   6,   8,    1,   -5 },   // 0x70 'p'
  {   327,   6,   6,   8,    1,   -5 },   // 0x71 'q'
  {   332,   6,   6,   8,    1,   -5 },   // 0x72 'r'
  {   337,   6,   6,   8,    1,   -5 },   // 0x73 's'
  {   342,   6,   6,   8,    1,   -5 },   // 0x74 't'
  {   347,   6,   6,   8,    1,   -5 },   // 0x75 'u'
  {   352,   6,   6,   8,    1,   -5 },   // 0x76 'v'
  {   357,   5,   6,   7,    1,   -5 },   // 0x77 'w'
  {   361,   6,   6,   8,    1,   -5 },   // 0x78 'x'
  {   366,   6,   6,   8,    1,   -5 },   // 0x79 'y'
  {   371,   6,   6,   8,    1,   -5 },   // 0x7A 'z'
  {   376,   3,   6,   5,    1,   -5 },   // 0x7B '{'
  {   379,   1,   6,   3,    1,   -5 },   // 0x7C '|'
  {   380,   3,   6,   5,    1,   -5 },   // 0x7D '}'
  {   383,   1,   1,   4,    0,    0 } }; // 0x7E '~'

const GFXfont small4pt7b PROGMEM = {
  (uint8_t  *)small4pt7bBitmaps,
  (GFXglyph *)small4pt7bGlyphs,
  0x20, 0x7E, 10 };

// Approx. 1056 bytes
