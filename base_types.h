/*******************************************************************************
*
* Filename : base_types.h
* Purpose  : Definitions of basic types and constants
*
********************************************************************************
* Versions :
*
*    Version -     Date     -  Reason of Change   
********************************************************************************
*    1.0     -  01/06/2021  -  File Creation 
*
*******************************************************************************/

#ifndef BASE_TYPES_H
#define BASE_TYPES_H

/* Basic Types definitions */

/* For 32bits platform */
typedef unsigned char   uint8;
#define UINT8_MIN       (0U)
#define UINT8_MAX       (255U)

typedef signed char     sint8;
#define SINT8_MIN       (-128)
#define SINT8_MAX       (127)

typedef unsigned short  uint16;
#define UINT16_MIN      (0U)
#define UINT16_MAX      (65535U)

typedef signed short    sint16;
#define SINT16_MIN      (-32768)
#define SINT16_MAX      (32767)

typedef unsigned int    uint32;
#define UINT32_MIN      (0UL)
#define UINT32_MAX      (4294967295UL)

typedef signed int      sint32;
#define SINT32_MIN      (-2147483647L -1)
#define SINT32_MAX      (2147483647L)

typedef float           float32;

typedef unsigned char   bool_type;
#define FALSE           (0)
#define TRUE            (1)

/* Binary Points Definitions */

#define BIN0     1
#define BIN1     2
#define BIN2     4
#define BIN3     8
#define BIN4     16
#define BIN5     32
#define BIN6     64
#define BIN7     128
#define BIN8     256
#define BIN9     512

#define BIN10    1024
#define BIN11    2048
#define BIN12    4096
#define BIN13    8192
#define BIN14    16384
#define BIN15    32768
#define BIN16    65536L
#define BIN17    131072L
#define BIN18    262144L
#define BIN19    524288L

/* Decimal Points Definitions */

#define DEC0     1
#define DEC1     10
#define DEC2     100
#define DEC3     1000
#define DEC4     10000
#define DEC5     100000L
#define DEC6     1000000L

#endif /* BASE_TYPES_H */


