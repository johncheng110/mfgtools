/*
 * Copyright 2009-2013, 2016 Freescale Semiconductor, Inc.
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


#pragma once

#include "Device.h"
#include "Disk.h"
#include "StApi.h"


#define MAX_SCSI_DATA_TRANSFER_SIZE 0x10000
/// <summary>
/// A volume device.
/// </summary>
class Volume : public Device
{
	public:
		Volume(DeviceClass * deviceClass, DEVINST devInst, CString path, INSTANCE_HANDLE handle);
		libusb_device_handle* handle;
		virtual ~Volume(void);

		enum LockType{ LockType_Physical, LockType_Logical };

		bool IsUsb();
		virtual Device* UsbDevice();
		Disk* StorageDisk();
		HANDLE Lock(LockType lockType);
		int Unlock(HANDLE hDrive, bool close = true);
		virtual UINT SendCommand(StApi& api, UCHAR* additionalInfo = NULL);
		virtual UINT SendCommand(HANDLE hDrive, StApi& api, UCHAR* additionalInfo, NotifyStruct& nsInfo);

		UCHAR *m_pBuffer;

		// PROPERTIES
		class volumeName : public StringProperty { public: CString get(); }_volumeName;
		class logicalDrive : public StringProperty { public: CString get(); }_logicalDrive;
		class friendlyName : public Device::friendlyName { public: CString get(); }_friendlyName;
		class diskNumber : public Int32Property { public: diskNumber(int val):Int32Property(val){}; int get(); }_diskNumber;

		void NotifyUpdateUI(int cmdOpIndex, int position, int maximum);

	private:
#pragma pack (push, 1)
		struct _NT_SCSI_REQUEST
		{
#ifndef __linux__
			SCSI_PASS_THROUGH PassThrough;	//should include "ntddscsi.h"
#endif
			__int64          Tag;
			SENSE_DATA        SenseData;		//should include "scsi.h"
			UCHAR           DataBuffer[1];          // Allocate buffer space
		};

#pragma pack (pop)

		Disk* _Disk;
		HANDLE _hEvent;
};
