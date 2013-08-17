/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Sun Aug 11 11:02:35 2013
 */
/* Compiler settings for D:\spcx\svr\CxDatSes\CxDatSes.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_ICxDataSession = {0x33F87734,0xE676,0x4E73,{0xB6,0xB8,0x4E,0x8E,0x4F,0x29,0x4D,0x8C}};


const IID IID_ICxAutoValue = {0xB3C0A6A0,0x26D2,0x4ffe,{0x89,0x93,0x5C,0xC1,0x4D,0x57,0x01,0x68}};


const IID IID_ICxAutoHistory = {0xD98019CF,0x99AD,0x4a1e,{0xBE,0xC7,0xF1,0xE2,0xA7,0xCF,0x93,0xFE}};


const IID IID_ICxAutoDataSession = {0x278A04DB,0x60AA,0x48bc,{0x97,0xA0,0xEA,0x5F,0xFD,0xCF,0x15,0xF3}};


const IID IID_ICxCommomFunctions = {0xE6EC9619,0x741A,0x4bab,{0x94,0xB4,0xB2,0xC9,0xAA,0xD9,0xD0,0x00}};


const IID LIBID_CXDATSESLib = {0x61ECCDB3,0xFF84,0x47E4,{0xBD,0x62,0xB7,0xB1,0x59,0x9E,0xC0,0x48}};


const CLSID CLSID_CxDataSession = {0x8E7CEF47,0x487F,0x44B6,{0x87,0x0A,0x97,0x7E,0xEE,0xAD,0xE9,0x56}};


#ifdef __cplusplus
}
#endif

