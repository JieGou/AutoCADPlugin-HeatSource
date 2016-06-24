//////////////////////////////////////////////////////////////////////////////
//
//  Copyright 2015 Autodesk, Inc.  All rights reserved.
//
//  Use of this software is subject to the terms of the Autodesk license 
//  agreement provided at the time of installation or download, or which 
//  otherwise accompanies this software in either electronic or hard copy form.   
//
//////////////////////////////////////////////////////////////////////////////



/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Thu Feb 05 18:30:21 2015
 */
/* Compiler settings for idlsource\acad.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

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

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_AutoCAD,0x891DBC3B,0xCF8B,0x4F7E,0xBF,0x55,0xD9,0x59,0x9E,0x4B,0x62,0x2C);


MIDL_DEFINE_GUID(IID, IID_IAcadObject,0x54365C7D,0xF3B8,0x4978,0xB5,0xBC,0xC2,0x1A,0x09,0x04,0x77,0xC1);


MIDL_DEFINE_GUID(IID, IID_IAcadDictionary,0x7400FE91,0xDC00,0x4682,0x9F,0xD6,0x32,0x67,0x0D,0x63,0xBC,0x30);


MIDL_DEFINE_GUID(IID, IID_IAcadEntity,0xAA51BB15,0x7866,0x46B5,0xBE,0x64,0x6D,0xB9,0x8F,0xDC,0xB3,0xA4);


MIDL_DEFINE_GUID(IID, IID_IAcadBlock,0x8E271BFF,0x7C79,0x4BB0,0x9D,0x22,0x5B,0x4D,0x5F,0x9B,0xD6,0x08);


MIDL_DEFINE_GUID(IID, IID_IAcadDatabase,0x8D7FDE5B,0x8582,0x4778,0xBA,0xC9,0x9C,0x15,0x08,0x7A,0xFA,0x8E);


MIDL_DEFINE_GUID(IID, IID_IAcadSectionTypeSettings,0xB4F2C0C1,0xE72E,0x4F5E,0x99,0xE9,0xE0,0x13,0x38,0x67,0x8F,0x4C);


MIDL_DEFINE_GUID(IID, IID_IAcadSectionTypeSettings2,0x760135BE,0xFA55,0x447F,0x80,0x51,0xAE,0xBC,0x1C,0x69,0x15,0xCF);


MIDL_DEFINE_GUID(IID, IID_IAcadHyperlink,0xC7E70CD7,0x43EC,0x424C,0xAE,0x9F,0xD8,0x5B,0x18,0xE1,0x68,0x61);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadHyperlink,0x99B752A9,0x7BBA,0x4E72,0x9D,0x1E,0x98,0x4E,0xC8,0xC0,0x0D,0x01);


MIDL_DEFINE_GUID(IID, IID_IAcadDynamicBlockReferenceProperty,0x464680E8,0x73C1,0x4D0C,0xA2,0x0C,0x73,0x29,0x33,0x1B,0x20,0xCB);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDynamicBlockReferenceProperty,0xCD63B846,0x475A,0x47B0,0xA9,0x6C,0xC9,0xFD,0x2B,0x5D,0x5A,0x86);


MIDL_DEFINE_GUID(IID, IID_IAcadAcCmColor,0x408FF7E6,0x4923,0x425C,0xB5,0x94,0x1E,0xC8,0xD5,0x10,0x0C,0x1B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadAcCmColor,0x45431B7A,0xBE41,0x4395,0xB7,0x30,0x27,0x77,0x2D,0x84,0xE9,0xFF);


MIDL_DEFINE_GUID(IID, IID_IAcadObjectEvents,0x8B6F71CB,0xA2F0,0x4E0B,0xAE,0x44,0x80,0xE0,0x39,0xB3,0xF0,0xF6);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadObject,0xE031C9AC,0x9DA8,0x4F4A,0xB1,0xDC,0xA9,0x1A,0x28,0x78,0xBF,0xDC);


MIDL_DEFINE_GUID(IID, IID_IAcadXRecord,0xC7A37E35,0x4E25,0x428C,0x90,0x43,0x7D,0xE5,0x1E,0xCB,0xE7,0x5A);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadXRecord,0x0D1486F5,0xE8D5,0x4D9F,0x99,0x61,0xAA,0x18,0xB3,0x6A,0x53,0x84);


MIDL_DEFINE_GUID(IID, IID_IAcadSortentsTable,0x7CF031FB,0x2FD2,0x4410,0x90,0xA6,0x8B,0xC3,0x99,0x67,0xFC,0xF9);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSortentsTable,0x5EB6721F,0x506E,0x4817,0xB3,0xBF,0xA4,0x90,0x2D,0xDB,0x21,0xAE);


MIDL_DEFINE_GUID(IID, IID_IAcadDimStyle,0x33DB5D3F,0xDEA9,0x4EE3,0x8B,0xE2,0x41,0x53,0x7E,0xE4,0x54,0x98);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimStyle,0x3E896FA0,0xD2EF,0x4800,0xB7,0x71,0x08,0x95,0x6A,0x38,0x6A,0xCF);


MIDL_DEFINE_GUID(IID, IID_IAcadLayer,0xE9A53E7B,0x4831,0x4B82,0x8E,0xD2,0x0E,0x67,0x7F,0x4A,0xB6,0x36);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLayer,0x3581812A,0x8232,0x4254,0x83,0x24,0xB4,0xF9,0xFA,0x19,0xAA,0xB3);


MIDL_DEFINE_GUID(IID, IID_IAcadLineType,0xBC8E577B,0xD434,0x458F,0x8F,0x1E,0x1D,0xA3,0xC4,0xD7,0xC3,0x2E);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLineType,0x0147D323,0xDE12,0x49EA,0xAF,0x59,0x6E,0xC6,0x02,0x9C,0x4D,0x1F);


MIDL_DEFINE_GUID(IID, IID_IAcadMaterial,0x9BE908B3,0x3499,0x4A5A,0xAA,0xCD,0xCA,0xC5,0xDF,0xA9,0x00,0x50);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMaterial,0x066BA626,0xF785,0x4874,0xAD,0xCB,0xA4,0xF4,0x2C,0xCB,0xE2,0x29);


MIDL_DEFINE_GUID(IID, IID_IAcadRegisteredApplication,0x88A6F1FD,0x7B59,0x4F71,0x89,0xDC,0x6B,0x3E,0x26,0x41,0x86,0x70);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadRegisteredApplication,0x5C4D00E2,0xE341,0x4F18,0x8A,0x51,0x87,0xE1,0x6F,0x02,0x48,0x73);


MIDL_DEFINE_GUID(IID, IID_IAcadTextStyle,0xCBABABE8,0x1BC8,0x4061,0x90,0xC9,0x41,0x4D,0x7E,0x31,0xDD,0x0D);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadTextStyle,0xAB697162,0x0540,0x4B94,0xBC,0x30,0x53,0x04,0xE5,0xF6,0x53,0x1E);


MIDL_DEFINE_GUID(IID, IID_IAcadUCS,0x0555ABFB,0x842B,0x4D20,0x93,0x69,0x5F,0x3A,0x9F,0x6C,0xB3,0x35);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadUCS,0x600E5319,0x9BBA,0x4B4F,0x90,0xD5,0x7C,0x2B,0x82,0xA1,0x8C,0xAD);


MIDL_DEFINE_GUID(IID, IID_IAcadView,0xF38CE5A4,0x6402,0x43EC,0x96,0x9E,0x1D,0xB3,0x98,0x96,0x0F,0xC1);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadView,0x19D61EF7,0xE711,0x48D3,0x92,0x14,0x35,0xEE,0x9C,0x69,0x92,0x40);


MIDL_DEFINE_GUID(IID, IID_IAcadViewport,0x10FF6697,0x94E5,0x49A5,0x94,0xE2,0x34,0xA4,0xE1,0x6B,0xD4,0x77);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadViewport,0x6FE3B2A4,0xAA63,0x4515,0xB1,0x32,0x0C,0xF6,0x94,0x8A,0x84,0x95);


MIDL_DEFINE_GUID(IID, IID_IAcadGroup,0x54780906,0x8705,0x4A6E,0x9B,0xEF,0xA0,0x6B,0x93,0xD8,0xC6,0x89);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadGroup,0xBD08A7B0,0x4084,0x4144,0x9B,0x9C,0xE8,0x8E,0x53,0xD9,0xA1,0xC7);


MIDL_DEFINE_GUID(IID, IID_IAcadPlotConfiguration,0x944466D7,0xEC64,0x4BC9,0x8E,0x24,0x3F,0x12,0x6F,0x21,0x7D,0x17);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPlotConfiguration,0x4C4FC28C,0x2984,0x4CEC,0xA0,0xCB,0xBC,0x0F,0xF3,0x0F,0x37,0xFF);


MIDL_DEFINE_GUID(IID, IID_IAcadLayout,0x6DABC277,0x4194,0x440D,0x9B,0x3D,0xE4,0xFA,0xB0,0x52,0xE1,0x5E);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLayout,0x3C86A83D,0xA14D,0x4C01,0x9C,0x78,0x9A,0x5A,0xDD,0x21,0x06,0x38);


MIDL_DEFINE_GUID(IID, IID_IAcadIdPair,0x2AB5F72D,0x9DA6,0x46E8,0xA3,0xAE,0x9A,0xA0,0x2D,0x21,0xF6,0xF3);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadIdPair,0x5CBAC317,0x6744,0x4C07,0x97,0xC5,0x49,0x12,0x02,0xD1,0x95,0x9C);


MIDL_DEFINE_GUID(IID, IID_IAcadTableStyle,0xFBFA1216,0xA5DB,0x44D6,0xB9,0xA0,0xF0,0x1C,0x94,0xA0,0x36,0x6C);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadTableStyle,0x73157A89,0xABE5,0x40A5,0x88,0xE6,0xC0,0xC9,0x4B,0xC7,0x18,0xC7);


MIDL_DEFINE_GUID(IID, IID_IAcadSectionSettings,0x94992ADD,0xA7B4,0x4B73,0xB2,0x1D,0x2A,0x85,0x3C,0x6F,0xC8,0xDD);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSectionSettings,0x46895C89,0x9976,0x44D0,0x9E,0xE2,0x0A,0x28,0x7B,0x04,0x29,0x74);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSectionTypeSettings,0x7084FE2D,0xDDE9,0x40B8,0xA8,0xE7,0x5B,0x39,0x4F,0xDD,0xE6,0xD0);


MIDL_DEFINE_GUID(IID, IID_IAcadMLeaderStyle,0x2929DC58,0x4C49,0x41BD,0xB8,0x68,0x19,0xF8,0x06,0x4A,0x6E,0xEF);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMLeaderStyle,0xE2C1822C,0x791C,0x48BB,0xAF,0xD0,0x00,0x89,0x0D,0xE8,0x60,0xC1);


MIDL_DEFINE_GUID(IID, IID_IAcadHyperlinks,0x4A697EB4,0xF879,0x4D6E,0xB9,0x4D,0x90,0x25,0x62,0xC3,0xF8,0x39);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadHyperlinks,0xD47353F4,0x2B25,0x4374,0x9F,0x19,0x94,0x73,0x96,0x83,0x3E,0xB7);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDictionary,0x8F61C491,0xAA22,0x4AB8,0x8B,0x2D,0xE2,0x4B,0x0A,0xA4,0x30,0x3D);


MIDL_DEFINE_GUID(IID, IID_IAcadLayers,0x66A4B517,0x9854,0x45AB,0x99,0x0D,0xEB,0x32,0xE1,0x63,0x1F,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLayers,0x8FF9E9CA,0x01F5,0x404C,0xB6,0xB6,0x6D,0x1A,0xD2,0xB8,0x90,0x68);


MIDL_DEFINE_GUID(IID, IID_IAcadDimStyles,0x1C662529,0x8CA1,0x4C26,0xB0,0x6E,0xFE,0x2D,0xC2,0xF1,0x71,0xE7);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimStyles,0xAA24F9EC,0xC62B,0x4402,0x91,0x40,0xCD,0x41,0xD5,0x84,0xFF,0x8C);


MIDL_DEFINE_GUID(IID, IID_IAcadDictionaries,0x50B825D2,0x0AE6,0x435B,0x8B,0x70,0xD6,0x20,0xF4,0x74,0xE9,0xFC);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDictionaries,0xC005A45C,0xBE76,0x4545,0x88,0xA3,0x82,0x4A,0xE3,0x39,0xAE,0x0F);


MIDL_DEFINE_GUID(IID, IID_IAcadLineTypes,0x22B7432C,0x975B,0x4CF8,0x84,0xEE,0xE0,0xE9,0x77,0xC5,0x64,0x10);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLineTypes,0xB9A8A472,0x84CA,0x451B,0x9B,0xC2,0x19,0x6E,0xA7,0xF5,0x97,0x6B);


MIDL_DEFINE_GUID(IID, IID_IAcadMaterials,0xF013938E,0xFB42,0x4A27,0x81,0x4A,0x93,0xFC,0xCA,0x11,0x2B,0xBC);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMaterials,0x73ED7D31,0xC3F0,0x42F0,0x89,0xBB,0x1F,0xB3,0x65,0x75,0xAC,0x01);


MIDL_DEFINE_GUID(IID, IID_IAcadTextStyles,0x3DCD140F,0x953E,0x4EFF,0xBE,0x20,0x43,0x26,0x8A,0x2E,0x83,0x63);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadTextStyles,0x86FE5CB4,0xF8C2,0x4EEA,0x8A,0x68,0xF6,0x59,0x77,0x6D,0xAB,0x34);


MIDL_DEFINE_GUID(IID, IID_IAcadUCSs,0xC70CC38B,0x1C01,0x4645,0xA1,0x83,0xBC,0x93,0xE1,0x6C,0xB6,0xD2);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadUCSs,0x31373C76,0xDBEC,0x4845,0x9F,0x3C,0xB5,0x05,0xBF,0xBE,0xE6,0xCF);


MIDL_DEFINE_GUID(IID, IID_IAcadRegisteredApplications,0x928F357E,0x60A3,0x4874,0x92,0x67,0x78,0x90,0x3B,0x01,0x8B,0x02);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadRegisteredApplications,0x605060C2,0xE478,0x4598,0xB8,0x1E,0x74,0x27,0xB3,0xFC,0xD8,0x82);


MIDL_DEFINE_GUID(IID, IID_IAcadViews,0xE32CFDD8,0x09D5,0x4F8E,0x97,0x70,0x1B,0x21,0x55,0xF6,0x15,0x64);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadViews,0x296C1C76,0x4212,0x40A2,0x9E,0x9C,0x96,0x7F,0x98,0x1A,0x35,0xF5);


MIDL_DEFINE_GUID(IID, IID_IAcadViewports,0x2B8814CE,0x4E72,0x429C,0xBA,0x51,0x68,0x7B,0xCF,0x49,0x32,0x30);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadViewports,0x84211AEC,0x9103,0x487C,0x83,0x31,0xCD,0xFC,0x37,0xB4,0x56,0x4B);


MIDL_DEFINE_GUID(IID, IID_IAcadGroups,0x0D17C0D0,0x49D1,0x4063,0x87,0x46,0x53,0x0B,0x50,0xFF,0xA4,0xBE);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadGroups,0x9BC2494F,0x4B3C,0x4436,0x88,0x33,0x1A,0x12,0x89,0x4F,0x8B,0x08);


MIDL_DEFINE_GUID(IID, IID_IAcadBlocks,0xAFBABB06,0x9BC4,0x4590,0x91,0xF8,0xD6,0x72,0x45,0xA6,0xE1,0x50);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadBlocks,0xA2F54202,0x7064,0x4C66,0x99,0x91,0x21,0xC0,0xA9,0x72,0x57,0xEA);


MIDL_DEFINE_GUID(IID, IID_IAcadLayouts,0x7B15ED0B,0x4C6E,0x47AA,0x98,0x13,0xCA,0x9A,0x53,0x97,0xB2,0xDA);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLayouts,0xD3D1C947,0xF2ED,0x499C,0xAF,0xBB,0x7D,0xBE,0x95,0x0A,0x59,0x63);


MIDL_DEFINE_GUID(IID, IID_IAcadPlotConfigurations,0xB6FF4144,0x1E39,0x492C,0xB1,0xC0,0x89,0xAD,0x0A,0x95,0x80,0x6F);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPlotConfigurations,0xF38759B2,0x1A83,0x4D74,0x87,0xFD,0xFE,0x36,0x3D,0x8A,0x7B,0x91);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadEntity,0x571498B7,0x54A9,0x409E,0x9B,0x06,0x9D,0xD7,0xDB,0xC7,0xE0,0xBD);


MIDL_DEFINE_GUID(IID, IID_IAcadShadowDisplay,0xB1D2F608,0x1454,0x4320,0x89,0xFB,0x90,0x16,0x3E,0x52,0xE7,0x0A);


MIDL_DEFINE_GUID(IID, IID_IAcadRasterImage,0xFFD51C4B,0x14AD,0x4745,0x80,0xB1,0x49,0x9A,0xD8,0xCC,0x7C,0x81);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadRasterImage,0x92F84802,0x891F,0x46CB,0x92,0x1F,0xD6,0xD8,0xFD,0x9F,0xE0,0x0A);


MIDL_DEFINE_GUID(IID, IID_IAcad3DFace,0x9CE39E7F,0x3637,0x4D89,0x96,0x5C,0xBB,0xFB,0x76,0x4E,0x03,0x3E);


MIDL_DEFINE_GUID(CLSID, CLSID_Acad3DFace,0xBF2568DD,0x2638,0x4596,0xA1,0x20,0xF6,0x4B,0x30,0x65,0x9B,0xBA);


MIDL_DEFINE_GUID(IID, IID_IAcad3DPolyline,0xB1B20F1F,0xD7FC,0x483F,0x92,0x97,0x64,0x69,0xC4,0x67,0xAC,0xAA);


MIDL_DEFINE_GUID(CLSID, CLSID_Acad3DPolyline,0x05AFCEDA,0x84A0,0x4190,0x8E,0x42,0x0B,0x0A,0x18,0xF3,0x46,0x54);


MIDL_DEFINE_GUID(IID, IID_IAcadRegion,0x7883BBD1,0x774E,0x4720,0xB6,0xBA,0x81,0x80,0x88,0x24,0x72,0x34);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadRegion,0x9844C4FC,0xA4C9,0x41EA,0x83,0x18,0xA1,0x55,0x5A,0x30,0x83,0x19);


MIDL_DEFINE_GUID(IID, IID_IAcad3DSolid,0x1F0D9CE9,0x0889,0x40F2,0xAE,0x5E,0xD2,0xBC,0x35,0xB5,0x45,0xA3);


MIDL_DEFINE_GUID(CLSID, CLSID_Acad3DSolid,0xC7023C52,0x4730,0x45A0,0x85,0x84,0xDE,0x5B,0x6C,0xA8,0xBA,0xBB);


MIDL_DEFINE_GUID(IID, IID_IAcadArc,0xAED0CBDE,0x7017,0x4BC4,0xBD,0xFF,0xD0,0x82,0x28,0xCE,0x8B,0xAF);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadArc,0x350624A7,0x2316,0x41D7,0xA0,0x9A,0xA2,0xEF,0xCC,0xCF,0x51,0xAA);


MIDL_DEFINE_GUID(IID, IID_IAcadAttribute,0x6161E8EA,0x9853,0x4AB4,0xA8,0x36,0x75,0xD7,0xAB,0xC7,0x6D,0xE6);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadAttribute,0x9CCE028E,0xAA85,0x46EA,0x8F,0xAA,0x64,0x65,0x80,0xBD,0xF1,0xCF);


MIDL_DEFINE_GUID(IID, IID_IAcadAttributeReference,0x0F3FA688,0xC94F,0x4343,0xAA,0xDD,0x04,0x07,0x0F,0x5F,0xC2,0xAE);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadAttributeReference,0x28E888D7,0x506A,0x4E22,0xBA,0x7F,0x7C,0x9C,0x73,0x1C,0x3E,0x49);


MIDL_DEFINE_GUID(IID, IID_IAcadBlockReference,0x83EB8B88,0x5016,0x4C9D,0x9A,0x35,0xE2,0xAA,0xB9,0x27,0x81,0xC9);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadBlockReference,0xD00F417A,0x0635,0x4134,0xBE,0xDF,0x0C,0x6A,0x80,0x6C,0xF9,0xE2);


MIDL_DEFINE_GUID(IID, IID_IAcadCircle,0xE60B60FF,0xB333,0x44CE,0x93,0xAC,0x95,0xD4,0xD7,0x82,0xF2,0x8C);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadCircle,0x6BC25F56,0x8959,0x4252,0x87,0xB8,0x10,0x50,0x9F,0xD2,0x3D,0x05);


MIDL_DEFINE_GUID(IID, IID_IAcadEllipse,0x95C75CDA,0xFDAA,0x47E4,0xB0,0xA5,0x36,0x3B,0xB0,0x85,0x21,0x71);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadEllipse,0x6C490DE0,0xDADC,0x44A3,0x89,0xAF,0x1B,0xE2,0x24,0x7E,0x4D,0x20);


MIDL_DEFINE_GUID(IID, IID_IAcadHatch,0x799E7858,0x2806,0x447E,0x90,0xAD,0x4D,0xD2,0x7E,0xF9,0x1A,0x40);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadHatch,0xB383973A,0x3C50,0x428B,0x9A,0x4A,0x0F,0xE4,0x7D,0xBA,0x02,0x09);


MIDL_DEFINE_GUID(IID, IID_IAcadLeader,0x854D8CB4,0xFCEC,0x449B,0x80,0x76,0xCC,0x6B,0x08,0xF8,0xDD,0xC1);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLeader,0x79464EDF,0x94EB,0x4F6D,0xA3,0x7D,0xF7,0xE6,0x03,0x5A,0x9A,0x99);


MIDL_DEFINE_GUID(IID, IID_IAcadSubEntity,0xB0A41DBE,0xED4F,0x4646,0xB8,0xC4,0x8A,0xD3,0xF6,0x36,0x2F,0xD3);


MIDL_DEFINE_GUID(IID, IID_IAcadMLeaderLeader,0x57655B5C,0xCA04,0x4BD1,0x92,0x3C,0x59,0xDA,0x7E,0xC8,0x4A,0x26);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMLeaderLeader,0x988BA02B,0x1B64,0x479A,0xB9,0xF6,0x8C,0xED,0xB2,0xB3,0x5A,0x15);


MIDL_DEFINE_GUID(IID, IID_IAcadMLeader,0x5E09CDEB,0xEF18,0x4B59,0xA8,0xFC,0x1E,0x83,0x0D,0xFD,0xEA,0xD0);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMLeader,0x95C9299B,0x0929,0x43CA,0x87,0x62,0x5A,0x22,0xB8,0xB1,0xE4,0x89);


MIDL_DEFINE_GUID(IID, IID_IAcadLWPolyline,0x94ACD8BC,0xEF57,0x4FF7,0x80,0x9A,0x74,0x34,0x51,0x2F,0xC7,0x29);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLWPolyline,0x41FBC9BB,0x92F9,0x4375,0x98,0x95,0x4F,0x71,0xD9,0xA2,0xB2,0x08);


MIDL_DEFINE_GUID(IID, IID_IAcadLine,0xB7AED173,0x1AB4,0x4CAD,0xAC,0xA4,0xC7,0x92,0xC0,0xBB,0x4E,0x64);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLine,0x9BE645E1,0xBBD9,0x4BC1,0xBF,0xF6,0x98,0x9F,0xCC,0xEB,0xBC,0xAC);


MIDL_DEFINE_GUID(IID, IID_IAcadMText,0xD744C21A,0xCC04,0x4C77,0xAE,0x4D,0xFF,0x03,0xBC,0xB9,0x9A,0x45);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMText,0x73165417,0xC292,0x4E70,0x86,0x76,0xAE,0xEF,0x66,0x75,0x79,0x56);


MIDL_DEFINE_GUID(IID, IID_IAcadPoint,0x909AE297,0xD481,0x49A2,0x9B,0x2D,0xC7,0xDF,0xBD,0xCC,0x35,0xC6);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPoint,0x5A41C328,0x9E56,0x4CF3,0x81,0xD7,0xC9,0xC7,0x60,0x1D,0x3C,0xC7);


MIDL_DEFINE_GUID(IID, IID_IAcadPolyline,0x9C2FBD0A,0xD5CB,0x4B48,0xAD,0x7A,0x17,0x26,0x20,0x1A,0x7E,0x68);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPolyline,0xF2ADAC45,0x3C69,0x4215,0xAB,0x0A,0x5F,0x34,0xE8,0x52,0xA9,0x76);


MIDL_DEFINE_GUID(IID, IID_IAcadPolygonMesh,0x357E929A,0x9DFF,0x4561,0x93,0x00,0x20,0x9A,0x64,0x18,0x65,0x65);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPolygonMesh,0xBE0BEE2E,0xAECF,0x4DAB,0xA7,0xA3,0xB1,0x56,0x4D,0x89,0x0C,0x2A);


MIDL_DEFINE_GUID(IID, IID_IAcadRay,0xB8138219,0x2ABE,0x4AD6,0x84,0x8E,0x89,0x0A,0x87,0x75,0x62,0x4E);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadRay,0x77781838,0xD547,0x4969,0x9D,0x17,0x47,0x66,0x73,0x10,0x86,0x7D);


MIDL_DEFINE_GUID(IID, IID_IAcadShape,0xD1546830,0x76B1,0x48D0,0x94,0x45,0x7F,0x82,0xD8,0xB8,0xA0,0xB4);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadShape,0x371C502F,0x8ECC,0x408E,0x9D,0xE6,0xC7,0xC2,0x27,0x61,0x0B,0xFC);


MIDL_DEFINE_GUID(IID, IID_IAcadSolid,0x4BD00892,0x377D,0x46E5,0xA7,0x50,0x02,0x80,0xC3,0xDF,0x4E,0x76);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSolid,0xE8355A27,0xA9B1,0x410C,0xB8,0xE9,0x63,0xF0,0x24,0x70,0x81,0x0E);


MIDL_DEFINE_GUID(IID, IID_IAcadSpline,0x57B5E6AF,0xAB96,0x4CF8,0xBE,0x79,0x1A,0x13,0xA2,0xF1,0xC4,0x9F);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSpline,0x2D52F7DC,0xEF7C,0x4437,0x94,0x53,0x55,0xC3,0xB3,0xC3,0x96,0x1E);


MIDL_DEFINE_GUID(IID, IID_IAcadText,0x192DDC23,0x6C6A,0x481C,0x88,0x6F,0x2B,0xD0,0x1C,0xB3,0x67,0x95);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadText,0x35FD0123,0x4B49,0x4E8D,0x9B,0xCC,0x20,0xB2,0xC0,0xE2,0x40,0xF0);


MIDL_DEFINE_GUID(IID, IID_IAcadTolerance,0xEC103676,0x7DBF,0x4CFE,0x8D,0x96,0x14,0x13,0x69,0x6E,0xE1,0x76);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadTolerance,0x864B76DA,0x054A,0x4B50,0x9A,0xE3,0xA3,0x4B,0x83,0xEC,0xE2,0x4E);


MIDL_DEFINE_GUID(IID, IID_IAcadTrace,0xC504A3D1,0x17B4,0x463B,0xA1,0x35,0x82,0x27,0xD0,0x4B,0x87,0xCE);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadTrace,0xCBD0625E,0x8565,0x4C46,0x98,0x7F,0x89,0x75,0xFC,0x27,0x3C,0xB3);


MIDL_DEFINE_GUID(IID, IID_IAcadXline,0x4D936EFA,0xAE27,0x4BDE,0x85,0x3A,0x75,0x6D,0x6E,0x63,0x5F,0x59);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadXline,0xAF703C53,0xA442,0x402F,0xAA,0x7D,0xC8,0x69,0x27,0xE1,0xFC,0x2C);


MIDL_DEFINE_GUID(IID, IID_IAcadPViewport,0xCA5C1E39,0xCC1E,0x4FDA,0x81,0xBF,0x7D,0x52,0xF3,0xA7,0x45,0x09);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPViewport,0x61A6F246,0xCAD2,0x4846,0xA5,0x1B,0x8C,0xF4,0x1E,0xB7,0x80,0x5F);


MIDL_DEFINE_GUID(IID, IID_IAcadMInsertBlock,0xF7F40682,0xB5F3,0x440B,0xAF,0xC4,0x6E,0xE9,0xF6,0x40,0xE2,0xE8);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMInsertBlock,0x1F62A2EC,0x2B8E,0x4CBB,0x81,0xD6,0x74,0x23,0xB3,0xC3,0x49,0x6B);


MIDL_DEFINE_GUID(IID, IID_IAcadPolyfaceMesh,0x73B216F6,0x22F1,0x40AD,0x8C,0xF4,0x49,0x9C,0x34,0x98,0x68,0x5F);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPolyfaceMesh,0x0584DCCD,0xCA95,0x448E,0xB4,0x99,0xB5,0xC8,0x44,0xD6,0x82,0x18);


MIDL_DEFINE_GUID(IID, IID_IAcadMLine,0xA7907F33,0x5CD2,0x4BB5,0x8B,0xAA,0xEF,0x44,0x78,0xA8,0x66,0xAD);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMLine,0x9FAA7B3C,0xE13D,0x4D07,0xB7,0x7D,0xCB,0x1D,0xC3,0xA4,0xE3,0xE5);


MIDL_DEFINE_GUID(IID, IID_IAcadExternalReference,0xB379BB4D,0xCD74,0x44FA,0xBC,0x28,0x0D,0xE0,0x30,0x49,0x37,0xD1);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadExternalReference,0x8E462A4E,0x6221,0x4C8A,0x87,0xF0,0x2A,0x0E,0x96,0xF8,0xB4,0xFB);


MIDL_DEFINE_GUID(IID, IID_IAcadTable,0x523BADED,0x51D3,0x4A19,0x9F,0xA4,0x8D,0x1F,0x82,0x2D,0xFB,0xE8);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadTable,0x96490F92,0x5E25,0x41EE,0xAD,0x48,0x16,0xAE,0x8F,0xC3,0xD2,0xDE);


MIDL_DEFINE_GUID(IID, IID_IAcadOle,0xA688AF42,0xBFC9,0x44F5,0xB9,0xE7,0x82,0x59,0x37,0xBF,0xDC,0x0F);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadOle,0x6A4E56B5,0x0647,0x4841,0xB1,0xBE,0xBF,0xC6,0x79,0xB3,0x3C,0x6F);


MIDL_DEFINE_GUID(IID, IID_IAcadHelix,0x837C44BD,0xDC9E,0x44B8,0x9A,0xE4,0x12,0x45,0x1F,0xEC,0xBF,0xDF);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadHelix,0x2B41B5E7,0x34DA,0x4CB7,0xA0,0xFB,0xD3,0x22,0xD3,0xBB,0xC4,0xA5);


MIDL_DEFINE_GUID(IID, IID_IAcadSurface,0x42FCAA14,0xF210,0x4234,0xA0,0x73,0x2A,0x26,0x8D,0x3C,0xD6,0xBB);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSurface,0xBA9AFD64,0x114E,0x4755,0x9F,0xB8,0x30,0xF4,0x26,0xFE,0x64,0x79);


MIDL_DEFINE_GUID(IID, IID_IAcadPlaneSurface,0x3BC40836,0xFFFE,0x4DFD,0xAF,0x9A,0xEB,0x2A,0x98,0x41,0xA7,0x8F);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPlaneSurface,0x8D751624,0x7267,0x4F12,0xB3,0x65,0x43,0x30,0xF6,0xEA,0xFC,0x76);


MIDL_DEFINE_GUID(IID, IID_IAcadExtrudedSurface,0x2A5EBF80,0x30A4,0x4088,0xB7,0x70,0x88,0x5F,0xA5,0xE3,0x70,0x74);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadExtrudedSurface,0xBBC76012,0x02A6,0x4172,0x9B,0xDB,0x90,0xA9,0xD3,0x9B,0xDD,0xD7);


MIDL_DEFINE_GUID(IID, IID_IAcadRevolvedSurface,0x852D2DCF,0x1020,0x4A70,0x9F,0x4C,0x4C,0x18,0x7B,0x18,0x86,0xF7);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadRevolvedSurface,0xCB1F97B7,0x66F1,0x4C7B,0xA5,0x29,0xB5,0xFD,0x68,0x94,0xE0,0xE6);


MIDL_DEFINE_GUID(IID, IID_IAcadSweptSurface,0x35E92035,0x104A,0x4910,0x8C,0xA2,0x5D,0x4E,0x43,0x3E,0x83,0xDC);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSweptSurface,0x2FAFFE29,0xEFF6,0x40B0,0xAD,0x3B,0x49,0x9D,0xDA,0xBA,0x34,0xD8);


MIDL_DEFINE_GUID(IID, IID_IAcadLoftedSurface,0x21E5BC1C,0xC62A,0x4E1B,0xB0,0xCD,0xC6,0x3B,0xDE,0x64,0x82,0x07);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLoftedSurface,0x44797D71,0xED09,0x41A1,0xBB,0x32,0x1D,0xB2,0x6C,0x1A,0x47,0x31);


MIDL_DEFINE_GUID(IID, IID_IAcadSection,0xE33DF606,0x3BD1,0x4509,0xBE,0xE5,0xE0,0xB9,0x75,0x42,0x1E,0x9A);


MIDL_DEFINE_GUID(IID, IID_IAcadSection2,0x9C37A3C6,0x67F1,0x46BF,0xA8,0x4C,0xDD,0x30,0x7A,0xD0,0xB3,0x99);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSection,0x78C9BF6F,0x8514,0x41E1,0xB8,0x1F,0x00,0x3A,0xD0,0xCC,0xB1,0x9F);


MIDL_DEFINE_GUID(IID, IID_IAcadSectionManager,0x811544BF,0xB840,0x43EE,0x9C,0x77,0x83,0x73,0x19,0x61,0xC7,0x98);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSectionManager,0xC256FC4C,0x9832,0x44A7,0x88,0x65,0x03,0x1E,0x02,0x0D,0xE8,0xCE);


MIDL_DEFINE_GUID(IID, IID_IAcadUnderlay,0x9E4A5228,0x30B2,0x43BC,0x9D,0xF0,0x4C,0x19,0xD7,0xED,0x5C,0x5B);


MIDL_DEFINE_GUID(IID, IID_IAcadDwfUnderlay,0xE76FDAA8,0x73EA,0x4CE6,0x9D,0x08,0x33,0xCD,0x79,0x9B,0xDC,0x57);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDwfUnderlay,0x457B965C,0xE67F,0x43FB,0x94,0x91,0x69,0x16,0x2D,0xB6,0x2B,0xE0);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDgnUnderlay,0xAA71FEAF,0x2B65,0x457D,0x95,0x17,0xFC,0xAB,0x29,0x6F,0x98,0x5D);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPdfUnderlay,0x105AC7CF,0x74FE,0x4BFB,0x8F,0x87,0x12,0x42,0xC0,0x73,0x8F,0xB2);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSubEntity,0x3C718F35,0x4451,0x4C98,0xBA,0x74,0x62,0x52,0x64,0x4B,0xB9,0x54);


MIDL_DEFINE_GUID(IID, IID_IAcadSubEntSolidFace,0xFFC9719C,0x9EA6,0x413A,0x87,0x13,0x9C,0x96,0xB4,0x5B,0xBC,0xED);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSubEntSolidFace,0x1E8B3FB0,0xE02F,0x4304,0x82,0xE4,0x0D,0x96,0xD0,0x4F,0x6E,0x2F);


MIDL_DEFINE_GUID(IID, IID_IAcadSubEntSolidEdge,0x861227F9,0xEFB1,0x4E4A,0x94,0x35,0x01,0x62,0xC9,0x7C,0xCA,0xBA);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSubEntSolidEdge,0xBEEC1AC5,0x4909,0x4F82,0x9C,0xFE,0x1D,0xF2,0xE8,0xFF,0xA7,0xAE);


MIDL_DEFINE_GUID(IID, IID_IAcadSubEntSolidVertex,0xD1EA8236,0x3A0F,0x4A76,0xA6,0x66,0x3C,0x2A,0x68,0x46,0xC2,0x7C);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSubEntSolidVertex,0x15E2281D,0x71EE,0x4433,0xBE,0xA2,0x73,0xAF,0xC5,0xAE,0xF9,0xAF);


MIDL_DEFINE_GUID(IID, IID_IAcadSubEntSolidNode,0xD24237C8,0x4941,0x40FD,0xA1,0x45,0xC8,0x89,0xC5,0x9D,0x2E,0xA5);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSubEntSolidNode,0xB476ECE6,0x6F7E,0x4CBC,0xAB,0x02,0x71,0x41,0xF6,0xB0,0x56,0x9A);


MIDL_DEFINE_GUID(IID, IID_IAcadWipeout,0x97601D56,0xB12B,0x458D,0x9C,0xAD,0x88,0x41,0x54,0x77,0x36,0xBC);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadWipeout,0xE17A0618,0x1D8B,0x418D,0x87,0xFF,0x97,0xD6,0x63,0x67,0xBD,0xF4);


MIDL_DEFINE_GUID(IID, IID_IAcadSubDMesh,0xBE61F29E,0x0BCD,0x4339,0xB9,0xB7,0x37,0x05,0x07,0xC7,0xCE,0xDC);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSubDMesh,0x3DADC568,0x3017,0x4289,0xA7,0x0A,0x5C,0xA0,0x39,0xF6,0x69,0xAD);


MIDL_DEFINE_GUID(IID, IID_IAcadSubDMeshFace,0xD13ADE0E,0x01CB,0x4950,0xB9,0xE4,0xC4,0x91,0x68,0xD6,0x15,0x03);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSubDMeshFace,0xCC617083,0xACCE,0x42DC,0xAA,0x9A,0x80,0xC6,0xDA,0x55,0x82,0x7A);


MIDL_DEFINE_GUID(IID, IID_IAcadSubDMeshEdge,0x07978F1A,0x97DD,0x4724,0x9F,0x33,0xD5,0x03,0x93,0x53,0xFF,0x70);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSubDMeshEdge,0x6C88198B,0x23A8,0x4266,0x92,0xC1,0x86,0x21,0x76,0xB6,0xF9,0x92);


MIDL_DEFINE_GUID(IID, IID_IAcadSubDMeshVertex,0x59618D33,0x565F,0x484E,0xA0,0xA8,0x50,0x6B,0x7E,0xD8,0xD5,0xC4);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSubDMeshVertex,0x9E78597D,0x7A65,0x4AD3,0x92,0xA4,0x4A,0xFB,0x0C,0xD6,0x21,0x8C);


MIDL_DEFINE_GUID(IID, IID_IAcadNurbSurface,0xE6E8CB21,0x4100,0x46A7,0x85,0x80,0xFA,0x11,0xA5,0xE3,0x98,0x0D);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadNurbSurface,0xC314D4C3,0x41B5,0x4175,0xAC,0x0D,0xCD,0x56,0x06,0x69,0x0F,0xDB);


MIDL_DEFINE_GUID(IID, IID_IAcadGeoPositionMarker,0x8D1CA17C,0x7118,0x444E,0xB3,0x53,0xAE,0xD4,0x41,0xCF,0x96,0x06);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadGeoPositionMarker,0x596AC23D,0x8F9D,0x4848,0xA4,0x1D,0x4E,0x5F,0x5A,0xA8,0xED,0xEE);


MIDL_DEFINE_GUID(IID, IID_IAcadGeomapImage,0xFDA8F43B,0x3EEF,0x46C8,0x8F,0x96,0x94,0xD1,0x06,0x9B,0xD2,0xEF);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadGeomapImage,0x80FD12F0,0xC879,0x4A6E,0x89,0xB2,0x44,0xB7,0xC2,0x7D,0xE7,0x07);


MIDL_DEFINE_GUID(IID, IID_IAcadDimension,0x7CBAAF21,0xDBB8,0x4CAD,0x9F,0xCA,0xA4,0xA6,0xE3,0xF5,0x5D,0x67);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimension,0x8D7FC5F3,0x5AAB,0x4833,0x95,0xAA,0xA5,0x0B,0x6C,0x31,0x75,0x18);


MIDL_DEFINE_GUID(IID, IID_IAcadDimAligned,0x5FCC3405,0xE9AB,0x4441,0xBE,0xA5,0xF6,0x87,0xA0,0xEF,0xD8,0x6D);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimAligned,0x167AC0F9,0x6848,0x486C,0xA6,0x88,0x2C,0xCE,0x0C,0xCC,0xEC,0xE3);


MIDL_DEFINE_GUID(IID, IID_IAcadDimAngular,0xA0E8D222,0xC2B8,0x4B25,0xBC,0x53,0xC1,0x54,0xCA,0xE6,0x95,0x0F);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimAngular,0xD56A20B6,0x75F4,0x4B51,0xA2,0x67,0x77,0xB8,0xEE,0x74,0x91,0x30);


MIDL_DEFINE_GUID(IID, IID_IAcadDimDiametric,0x85C0233D,0xF261,0x447E,0xAC,0x0E,0x18,0xED,0x6D,0x3A,0x7D,0xF6);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimDiametric,0x3DD1037D,0xA173,0x4043,0xB9,0xF6,0xE3,0x31,0xFE,0x5B,0x0B,0xF9);


MIDL_DEFINE_GUID(IID, IID_IAcadDimOrdinate,0xD69B48D9,0x08A9,0x427D,0x84,0x72,0xA7,0x0D,0xC4,0x42,0xB2,0xEF);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimOrdinate,0x1A53E8C0,0x6387,0x4CA9,0x89,0xD9,0x88,0xB1,0x37,0x0C,0xCB,0x0A);


MIDL_DEFINE_GUID(IID, IID_IAcadDimRadial,0xEC156541,0x26B8,0x403E,0xA4,0xF2,0x66,0xAF,0x6C,0x8E,0x15,0x48);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimRadial,0xD08B65B3,0x3909,0x44A1,0x95,0xFC,0x5B,0x8A,0x83,0x0F,0x0A,0x76);


MIDL_DEFINE_GUID(IID, IID_IAcadDimRotated,0xD019D740,0xBFE1,0x402E,0xA1,0x5B,0x39,0x9B,0x25,0x57,0x87,0x4D);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimRotated,0x0AA15FCA,0x2D73,0x4DDD,0x82,0x86,0xF6,0x5A,0xA1,0x62,0x1C,0xE4);


MIDL_DEFINE_GUID(IID, IID_IAcadDim3PointAngular,0x670D08F4,0x1296,0x4E66,0xA3,0x04,0xD8,0xD5,0x2F,0x18,0x31,0x0A);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDim3PointAngular,0x5961E7CD,0xEA16,0x4DBB,0xBE,0x46,0x34,0x07,0x05,0x78,0xA3,0xC3);


MIDL_DEFINE_GUID(IID, IID_IAcadDimArcLength,0x2C3CD465,0xF27F,0x4883,0xBC,0xDA,0xB9,0x9E,0x51,0xAE,0x16,0xBF);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimArcLength,0x8CF9DBE9,0xAD3D,0x419E,0x85,0x63,0x5B,0x3C,0xE4,0x3E,0x89,0x33);


MIDL_DEFINE_GUID(IID, IID_IAcadDimRadialLarge,0x5841DC67,0x981B,0x42E4,0xB5,0x65,0xA1,0x35,0xC5,0xF5,0xEB,0x9C);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDimRadialLarge,0x17E9B011,0x53C2,0x4900,0xA6,0xBE,0x08,0x65,0xAE,0x9A,0x55,0xC7);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadBlock,0x9519F17C,0x24D4,0x40BE,0x8A,0x6F,0x63,0x9B,0x0E,0xF8,0x2D,0xA0);


MIDL_DEFINE_GUID(IID, IID_IAcadModelSpace,0x9251B9DC,0xB36C,0x457B,0x82,0x5D,0x1E,0x78,0x11,0xA6,0xE9,0x9F);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadModelSpace,0xC2C20721,0x1603,0x4B88,0xB8,0x76,0xCA,0x9D,0xBB,0x88,0x6E,0x2A);


MIDL_DEFINE_GUID(IID, IID_IAcadPaperSpace,0x0E3A8222,0x4298,0x4368,0xBC,0x2F,0xB3,0x93,0xA8,0xF4,0x51,0x26);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPaperSpace,0x8AF533B5,0xF76D,0x4F06,0xAD,0x3F,0x1C,0x19,0xC9,0x03,0xF3,0xBF);


MIDL_DEFINE_GUID(IID, IID_IAcadPointCloud,0x6C311DC3,0xFB1F,0x4005,0x9C,0x68,0xCD,0xDA,0x31,0x41,0xF7,0xD6);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPointCloud,0x5EB2EE02,0xA192,0x49FD,0x99,0xA6,0x40,0x00,0xE7,0x8D,0xD4,0x9C);


MIDL_DEFINE_GUID(IID, IID_IAcadPointCloudEx,0x1664D596,0x67E9,0x4E74,0x86,0xD6,0xE9,0xD1,0x5D,0x6B,0x4A,0xC8);


MIDL_DEFINE_GUID(IID, IID_IAcadPointCloudEx2,0x9B73BEBC,0xAC0C,0x4DCF,0x98,0x65,0xBE,0xE4,0x4B,0x1A,0x31,0x43);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPointCloudEx,0xFEFEE828,0xE288,0x45B1,0xBB,0x21,0xDF,0x6C,0xAE,0xA0,0xD9,0x0B);


MIDL_DEFINE_GUID(IID, IID_IAcadFileDependency,0x5506C397,0x08E6,0x4449,0xB1,0x9E,0x40,0xB0,0x44,0x40,0x96,0xD7);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadFileDependency,0x9603023B,0x7BD8,0x4D49,0x9C,0xFE,0x94,0x26,0x5E,0x21,0xCF,0x2C);


MIDL_DEFINE_GUID(IID, IID_IAcadFileDependencies,0x5F879067,0xA99A,0x4874,0xAC,0x4D,0xEA,0x57,0x1C,0xE0,0x2E,0x00);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadFileDependencies,0x8551E0B7,0x331A,0x4CD7,0x92,0x41,0x02,0x84,0xBA,0x9A,0xB0,0x11);


MIDL_DEFINE_GUID(IID, IID_IAcadSummaryInfo,0x78682EC7,0x3D2E,0x40ED,0x99,0x7C,0x7E,0xB1,0x5E,0xBB,0x63,0x1D);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSummaryInfo,0xE8C500E8,0x689E,0x4B2E,0x9D,0x71,0x3A,0x89,0xB9,0x69,0x6C,0x0A);


MIDL_DEFINE_GUID(IID, IID_IAcadDatabasePreferences,0x648DF458,0xE372,0x4518,0x97,0xA9,0x91,0x92,0xDF,0xE9,0x03,0x63);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDatabasePreferences,0x573FCDC4,0x6A92,0x46A0,0xBE,0x06,0xBB,0x03,0x1E,0xFA,0x28,0x08);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDatabase,0xECFFA436,0xF348,0x4BAA,0xA0,0xDF,0x2C,0xE1,0x3A,0x27,0xF3,0x11);


MIDL_DEFINE_GUID(IID, IID_IAcadSecurityParams,0xD26457CF,0x9DAF,0x48FF,0xBD,0x1D,0xA5,0xFC,0xD2,0x48,0x97,0x0B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSecurityParams,0x2FE0DF6F,0x9E53,0x4545,0x83,0xDB,0x63,0x2D,0xE5,0xCC,0xFD,0x8E);


MIDL_DEFINE_GUID(IID, IID_IAcadLayerStateManager,0x3616FDC0,0xC4A7,0x4BD1,0xAE,0x83,0xDC,0xC7,0x64,0x95,0x79,0x03);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadLayerStateManager,0xBEBDD05C,0x96F1,0x4A21,0x8B,0xF2,0x91,0xD7,0x3A,0xAB,0xF6,0x76);


MIDL_DEFINE_GUID(IID, DIID__DAcadApplicationEvents,0x6A9B2257,0x1478,0x44E7,0xAF,0x4D,0x1A,0x3A,0xDA,0x88,0x4A,0x33);


MIDL_DEFINE_GUID(IID, IID_IAcadDocument,0x91BEE4EC,0x364E,0x4356,0xBE,0x09,0x28,0xA2,0xFA,0x90,0xFD,0xB0);


MIDL_DEFINE_GUID(IID, IID_IAcadDocuments,0x2A79782E,0xAE83,0x4051,0xAB,0x84,0xF7,0x13,0x7A,0x99,0xA5,0x46);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferences,0x8474BFE5,0xF884,0x4183,0xB2,0x85,0x40,0x19,0xA9,0xF5,0x36,0x98);


MIDL_DEFINE_GUID(IID, IID_IAcadMenuGroups,0x822C2B76,0x18A9,0x45E6,0xA2,0x75,0xE2,0x3C,0x99,0xCF,0xBB,0x01);


MIDL_DEFINE_GUID(IID, IID_IAcadMenuBar,0x476D7B9B,0x674E,0x4BC4,0x89,0x2B,0x33,0x15,0x93,0x8D,0x52,0xEA);


MIDL_DEFINE_GUID(IID, IID_IAcadApplication,0x9FD28580,0x7461,0x4A57,0xAF,0x4F,0x69,0x5A,0xF5,0xFD,0xDA,0x35);


MIDL_DEFINE_GUID(IID, IID_IAcadState,0x82BED8AA,0x93EE,0x47A4,0x81,0x21,0x86,0xF6,0xEA,0xC2,0x55,0x6B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadState,0xBF5735F7,0x1073,0x4235,0xB2,0x4F,0xDC,0xB5,0x2B,0x6C,0xBA,0x28);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadApplication,0x0B628DE4,0x07AD,0x4284,0x81,0xCA,0x5B,0x43,0x9F,0x67,0xC5,0xE6);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadApplicationMinorVersion1,0x5370C727,0x1451,0x4700,0xA9,0x60,0x77,0x63,0x09,0x50,0xAF,0x6D);


MIDL_DEFINE_GUID(IID, IID_IAcadSelectionSet,0xCD3D0B59,0x36EE,0x4AEA,0xB7,0x6E,0x04,0x47,0x72,0xC0,0x25,0x29);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSelectionSet,0x79EDA828,0x741A,0x4B64,0xB2,0x21,0x17,0xB6,0x70,0xAE,0x8A,0xB3);


MIDL_DEFINE_GUID(IID, IID_IAcadSelectionSets,0x3982A0E8,0xC397,0x4F00,0xBB,0x65,0xCA,0x9B,0x03,0xE9,0xFD,0x10);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadSelectionSets,0xD4ADDDFB,0xF017,0x48D1,0x9B,0x00,0x07,0x9F,0xB3,0x07,0xE2,0x61);


MIDL_DEFINE_GUID(IID, IID_IAcadPlot,0xFDC6001D,0x0BD2,0x4829,0x85,0x6B,0xB2,0x71,0x93,0xDA,0x95,0x2B);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPlot,0x19832287,0x333B,0x4E09,0xA2,0x74,0xF3,0x9A,0x07,0xE4,0xD8,0xCF);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferencesFiles,0x77342B82,0xEFC4,0x4D64,0xA9,0x3B,0x95,0xD0,0x89,0x2F,0xF4,0x47);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferencesDisplay,0x67009891,0xFBE3,0x4EF6,0x8E,0xB6,0x2F,0x1A,0x93,0x23,0x36,0xBC);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferencesOpenSave,0xCE1FE892,0x4B0A,0x4056,0x9C,0x48,0x3D,0x7D,0x1C,0x82,0xA1,0x1E);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferencesUser,0x0428D199,0xD96F,0x4801,0xAB,0x23,0xF5,0x09,0x94,0x93,0xC0,0x6F);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferencesProfiles,0x6BC4F38F,0x9BF7,0x4CB5,0xBC,0x0E,0x49,0xF6,0x20,0xBD,0x8E,0x26);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferencesDrafting,0xAFFC32CA,0xEC76,0x4713,0x8A,0x04,0x3C,0x22,0xB2,0xC5,0xB9,0x16);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferencesOutput,0x29F8594A,0x391F,0x4409,0xB0,0xD6,0x4F,0x2E,0x4A,0xF0,0x2F,0x00);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferencesSelection,0x8C2FB498,0x0069,0x4FEA,0xAA,0xAE,0x72,0xAE,0x8D,0x3E,0x55,0x5E);


MIDL_DEFINE_GUID(IID, IID_IAcadPreferencesSystem,0x8BF67553,0xBE02,0x40B1,0x88,0xC4,0xEC,0x65,0x78,0x9C,0x1D,0x65);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferences,0xBE016D04,0x1334,0x428F,0xB5,0x87,0xCE,0x1B,0x67,0xED,0x2D,0x2F);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferencesDrafting,0x16EC3EBF,0x0B55,0x4C4D,0xB6,0x29,0x0D,0xEE,0x47,0x4B,0xB9,0x1C);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferencesDisplay,0x044A7376,0xC644,0x484C,0xAF,0x05,0x11,0x17,0xC0,0x04,0xFD,0x34);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferencesFiles,0xA9AAFD60,0x6855,0x4AC3,0x96,0xD6,0x05,0x35,0x4D,0xF1,0x1D,0x51);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferencesOpenSave,0x2C5B2059,0x8C15,0x43CE,0x93,0x51,0xE6,0xD5,0x7A,0xEE,0x58,0x68);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferencesOutput,0x69DBACE4,0xE3E3,0x49B4,0xAB,0x3C,0x05,0x69,0x00,0x3B,0x5F,0x46);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferencesProfiles,0x162126EA,0xFEBB,0x4756,0xB5,0x05,0xCD,0xDC,0x27,0x3D,0x9B,0xF1);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferencesSelection,0x7089E547,0xB453,0x4BE8,0xBB,0x29,0xCF,0x5F,0x4A,0x66,0x8A,0x0A);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferencesSystem,0x47A81A38,0xFE0A,0x445E,0xB5,0x7D,0xF4,0xDC,0x29,0x5B,0x4F,0x0A);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPreferencesUser,0x7DFE7873,0x174B,0x452F,0x9E,0xF4,0x30,0x4F,0xEB,0x16,0x98,0xDD);


MIDL_DEFINE_GUID(IID, IID_IAcadMenuGroup,0x5E450129,0xA574,0x4B29,0x88,0x33,0x4E,0xE5,0x91,0xF7,0x6D,0xAE);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMenuGroups,0x22B07BAE,0x8452,0x4C81,0xA2,0x34,0x93,0x41,0x80,0x78,0x9E,0xB9);


MIDL_DEFINE_GUID(IID, IID_IAcadPopupMenus,0xC4C5317B,0x8768,0x4345,0xAB,0x37,0xE4,0x0F,0xB6,0xBD,0x6B,0x77);


MIDL_DEFINE_GUID(IID, IID_IAcadToolbars,0xB43982F3,0x24E0,0x423D,0xAD,0x2C,0xF5,0x67,0xA7,0x81,0x51,0x52);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMenuGroup,0xE563BE67,0xE06E,0x4C0E,0xB9,0x3F,0x35,0x14,0x22,0xAE,0x58,0x19);


MIDL_DEFINE_GUID(IID, IID_IAcadPopupMenu,0xAECE9667,0x3439,0x48A5,0xA5,0x5F,0xFF,0x0D,0x4B,0xAD,0x20,0x60);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadMenuBar,0x816FC9E7,0x1E6D,0x42EC,0xB1,0x62,0x87,0x0D,0x1B,0x8C,0xD0,0xD5);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPopupMenus,0xABDAA7C4,0x7FEC,0x40E5,0x86,0x37,0xCE,0x9A,0x2B,0x31,0xC1,0x2E);


MIDL_DEFINE_GUID(IID, IID_IAcadPopupMenuItem,0x2F69C659,0xD058,0x4F3D,0xB2,0xB5,0x5C,0x98,0xAD,0xB2,0x27,0xD4);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPopupMenu,0xFE67648E,0x52CC,0x414B,0x89,0x84,0xC5,0x3A,0xB9,0x08,0xCB,0xE3);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadPopupMenuItem,0x2FA74830,0xA3AC,0x487E,0x93,0x63,0xB0,0xE7,0x94,0x84,0x29,0xE5);


MIDL_DEFINE_GUID(IID, IID_IAcadUtility,0xF062C2FC,0x199E,0x4ED0,0x83,0x94,0x2A,0x32,0xD4,0xCF,0x71,0xC9);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadUtility,0x36613D86,0xEDFB,0x4A84,0xB5,0x58,0x0C,0x7B,0xD4,0x2D,0xC6,0xC9);


MIDL_DEFINE_GUID(IID, DIID__DAcadDocumentEvents,0x59FD00E9,0xBAD5,0x41DA,0xA7,0x2B,0xFC,0xB0,0x9B,0x57,0x9F,0x05);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDocument,0x149DD748,0xEA85,0x45A6,0x93,0xC5,0xAC,0x50,0xD0,0x26,0x0C,0x98);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadDocuments,0x2881008C,0xBD3D,0x419B,0x84,0x6B,0xDC,0xDA,0x31,0x27,0x26,0xD5);


MIDL_DEFINE_GUID(IID, IID_IAcadToolbar,0xA85645C8,0xD9D7,0x45C5,0xA4,0xAC,0x8C,0x03,0x4B,0x78,0x9E,0x78);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadToolbars,0xA1C4F743,0x456E,0x41E3,0x80,0x20,0x06,0xFB,0x0E,0x61,0x63,0xB0);


MIDL_DEFINE_GUID(IID, IID_IAcadToolbarItem,0xAC8CDBCD,0xA01B,0x4EC0,0x98,0xF0,0x8C,0x03,0xA0,0x44,0x2E,0xC0);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadToolbar,0xACEA0C81,0xF89B,0x405D,0x91,0xB3,0x6A,0xA3,0xED,0x9D,0x58,0xE9);


MIDL_DEFINE_GUID(CLSID, CLSID_AcadToolbarItem,0xF876307A,0xE509,0x48AE,0xB7,0xAE,0x8C,0x52,0x5F,0x61,0xC8,0xF3);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



