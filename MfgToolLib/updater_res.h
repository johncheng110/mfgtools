/*
 * Copyright 2009-2011, 2016 Freescale Semiconductor, Inc.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright notice, this
 * list of conditions and the following disclaimer in the documentation and/or
 * other materials provided with the distribution.
 *
 * Neither the name of the Freescale Semiconductor nor the names of its
 * contributors may be used to endorse or promote products derived from this
 * software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

//
// These resource definitions MUST MATCH between StBinder and the updater.
//
#pragma once

#define IDR_BOUND_LANG_IDS				150
#define IDR_BOUND_RESOURCE_COUNT		151
#define IDR_BOUND_LANG_RESOURCE_COUNT	152
#define IDR_BOUND_RESOURCE_TABLE		153
#define IDR_BOUND_RESOURCE_TABLE_LEN	154
#define IDR_USE_LOCAL_RESOURCES			155
#define IDR_DEFAULT_DIALOG				156

// Recovery Mode Driver Files
#define IDR_STMP3REC_SYS                160
#define IDR_STMP3REC_INF                161
#define IDR_STMP3REC_CAT                162
#define IDR_STMP3RECX64_SYS             163
#define IDR_STMP3RECX64_INF             164
#define IDR_STMP3RECX64_CAT             165

// Updater files
#define IDR_DEFAULT_PROFILE_RESID_0		6000
#define IDR_DEFAULT_PROFILE_RESID_1		6001
#define IDR_DEFAULT_PROFILE_RESID_2		6002
#define IDR_DEFAULT_PROFILE_RESID_3		6003

//OTP Access files
#define IDR_OTPACCESS3700_RESID			6010
#define IDR_OTPACCESS3770_RESID			6011
#define IDR_OTPACCESS3780_RESID			6012

#define IDR_RESID_UNKNOWN				-1

#define IDR_CFG_ALWAYS_FORCE_RECOVERY	170
#define IDR_CFG_ERASE_MEDIA				171
#define IDR_CFG_FORMAT_DATA				172

#define IDR_CFG_VERSION					173
#define IDR_CFG_COMPANYNAME				174
#define IDR_CFG_PRODUCTDESC				175
#define IDR_CFG_PRODUCTNAME				176
#define IDR_CFG_APPTITLE				177
#define IDR_CFG_COPYRIGHT				178
#define IDR_CFG_COMMENTS				179
#define IDR_CFG_SCSIMFG					180
#define IDR_CFG_SCSIPROD				181
#define IDR_CFG_MTPMFG					182
#define IDR_CFG_MTPPROD					183
#define IDR_CFG_USBVENDOR				184
#define IDR_CFG_USBPROD					185
#define IDR_CFG_AUTORECOVERY			186
#define IDR_CFG_FORCERECOVERY			187
#define IDR_CFG_USELOCALRES				188
#define IDR_CFG_WINCE					189
#define IDR_CFG_DLGTYPE					190
#define IDR_CFG_FORMATDATA				191
#define IDR_CFG_ERASEMEDIA				192
#define IDR_CFG_DEFAULTFAT				193
#define IDR_CFG_DEFAULTLABEL			194
#define IDR_CFG_REBOOTMSG				195
#define IDR_CFG_ABOUT_BMP				196
#define IDR_CFG_BASE_SDK				197
#define IDR_CFG_LOW_NAND_SOLUTION		198
#define IDR_CFG_AUTOSTART				199
#define IDR_CFG_AUTOCLOSE				200
#define IDR_CFG_BITMAP_ID				201
#define IDR_CFG_MINDLG_FMT_MSG			202
#define IDR_CFG_USBPROD_SECONDARY		203

#define IDR_CFG_UPD_MAJOR_VERSION		250
#define IDR_CFG_UPD_MINOR_VERSION		251
#define IDR_CFG_PROD_MAJOR_VERSION		252
#define IDR_CFG_PROD_MINOR_VERSION		253

#define IDR_CFG_DRVARRAY_NUM_DRIVES		300
#define IDR_CFG_DRVARRAY_ONE			301
#define IDR_CFG_DRVARRAY_TWO			302
#define IDR_CFG_DRVARRAY_THREE			303
#define IDR_CFG_DRVARRAY_FOUR			304
#define IDR_CFG_DRVARRAY_FIVE			305
#define IDR_CFG_DRVARRAY_SIX			306
#define IDR_CFG_DRVARRAY_SEVEN			307
#define IDR_CFG_DRVARRAY_EIGHT			308
#define IDR_CFG_DRVARRAY_NINE			309
#define IDR_CFG_DRVARRAY_TEN			310
#define IDR_CFG_DRVARRAY_ELEVEN			311
#define IDR_CFG_DRVARRAY_TWELVE			312
#define IDR_CFG_DRVARRAY_THIRTEEN		313
#define IDR_CFG_DRVARRAY_FOURTEEN		314
#define IDR_CFG_DRVARRAY_FIFTEEN		315

#define IDI_UPDATER_ICON                102
#define IDI_COMPANY_ICON                104
#define IDI_COMPANY_BMP					109
#define IDI_CUSTOM_COMPANY_BMP			110
