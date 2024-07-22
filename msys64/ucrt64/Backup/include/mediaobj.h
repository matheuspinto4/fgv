/*** Autogenerated by WIDL 9.5 from include/mediaobj.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __mediaobj_h__
#define __mediaobj_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IEnumDMO_FWD_DEFINED__
#define __IEnumDMO_FWD_DEFINED__
typedef interface IEnumDMO IEnumDMO;
#ifdef __cplusplus
interface IEnumDMO;
#endif /* __cplusplus */
#endif

#ifndef __IMediaBuffer_FWD_DEFINED__
#define __IMediaBuffer_FWD_DEFINED__
typedef interface IMediaBuffer IMediaBuffer;
#ifdef __cplusplus
interface IMediaBuffer;
#endif /* __cplusplus */
#endif

#ifndef __IMediaObject_FWD_DEFINED__
#define __IMediaObject_FWD_DEFINED__
typedef interface IMediaObject IMediaObject;
#ifdef __cplusplus
interface IMediaObject;
#endif /* __cplusplus */
#endif

#ifndef __IMediaObjectInPlace_FWD_DEFINED__
#define __IMediaObjectInPlace_FWD_DEFINED__
typedef interface IMediaObjectInPlace IMediaObjectInPlace;
#ifdef __cplusplus
interface IMediaObjectInPlace;
#endif /* __cplusplus */
#endif

#ifndef __IDMOQualityControl_FWD_DEFINED__
#define __IDMOQualityControl_FWD_DEFINED__
typedef interface IDMOQualityControl IDMOQualityControl;
#ifdef __cplusplus
interface IDMOQualityControl;
#endif /* __cplusplus */
#endif

#ifndef __IDMOVideoOutputOptimizations_FWD_DEFINED__
#define __IDMOVideoOutputOptimizations_FWD_DEFINED__
typedef interface IDMOVideoOutputOptimizations IDMOVideoOutputOptimizations;
#ifdef __cplusplus
interface IDMOVideoOutputOptimizations;
#endif /* __cplusplus */
#endif

/* Headers for imported files */

#include <unknwn.h>
#include <objidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __strmif_h__
typedef AM_MEDIA_TYPE DMO_MEDIA_TYPE;
#else
typedef struct _DMOMediaType {
    GUID majortype;
    GUID subtype;
    WINBOOL bFixedSizeSamples;
    WINBOOL bTemporalCompression;
    ULONG lSampleSize;
    GUID formattype;
    IUnknown *pUnk;
    ULONG cbFormat;
    BYTE *pbFormat;
} DMO_MEDIA_TYPE;
typedef LONGLONG REFERENCE_TIME;
#endif
/*****************************************************************************
 * IEnumDMO interface
 */
#ifndef __IEnumDMO_INTERFACE_DEFINED__
#define __IEnumDMO_INTERFACE_DEFINED__

DEFINE_GUID(IID_IEnumDMO, 0x2c3cd98a, 0x2bfa, 0x4a53, 0x9c,0x27, 0x52,0x49,0xba,0x64,0xba,0x0f);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("2c3cd98a-2bfa-4a53-9c27-5249ba64ba0f")
IEnumDMO : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Next(
        DWORD cItemsToFetch,
        CLSID *pCLSID,
        WCHAR **Names,
        DWORD *pcItemsFetched) = 0;

    virtual HRESULT STDMETHODCALLTYPE Skip(
        DWORD cItemsToSkip) = 0;

    virtual HRESULT STDMETHODCALLTYPE Reset(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Clone(
        IEnumDMO **ppEnum) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IEnumDMO, 0x2c3cd98a, 0x2bfa, 0x4a53, 0x9c,0x27, 0x52,0x49,0xba,0x64,0xba,0x0f)
#endif
#else
typedef struct IEnumDMOVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IEnumDMO *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IEnumDMO *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IEnumDMO *This);

    /*** IEnumDMO methods ***/
    HRESULT (STDMETHODCALLTYPE *Next)(
        IEnumDMO *This,
        DWORD cItemsToFetch,
        CLSID *pCLSID,
        WCHAR **Names,
        DWORD *pcItemsFetched);

    HRESULT (STDMETHODCALLTYPE *Skip)(
        IEnumDMO *This,
        DWORD cItemsToSkip);

    HRESULT (STDMETHODCALLTYPE *Reset)(
        IEnumDMO *This);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IEnumDMO *This,
        IEnumDMO **ppEnum);

    END_INTERFACE
} IEnumDMOVtbl;

interface IEnumDMO {
    CONST_VTBL IEnumDMOVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IEnumDMO_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IEnumDMO_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IEnumDMO_Release(This) (This)->lpVtbl->Release(This)
/*** IEnumDMO methods ***/
#define IEnumDMO_Next(This,cItemsToFetch,pCLSID,Names,pcItemsFetched) (This)->lpVtbl->Next(This,cItemsToFetch,pCLSID,Names,pcItemsFetched)
#define IEnumDMO_Skip(This,cItemsToSkip) (This)->lpVtbl->Skip(This,cItemsToSkip)
#define IEnumDMO_Reset(This) (This)->lpVtbl->Reset(This)
#define IEnumDMO_Clone(This,ppEnum) (This)->lpVtbl->Clone(This,ppEnum)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IEnumDMO_QueryInterface(IEnumDMO* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IEnumDMO_AddRef(IEnumDMO* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IEnumDMO_Release(IEnumDMO* This) {
    return This->lpVtbl->Release(This);
}
/*** IEnumDMO methods ***/
static __WIDL_INLINE HRESULT IEnumDMO_Next(IEnumDMO* This,DWORD cItemsToFetch,CLSID *pCLSID,WCHAR **Names,DWORD *pcItemsFetched) {
    return This->lpVtbl->Next(This,cItemsToFetch,pCLSID,Names,pcItemsFetched);
}
static __WIDL_INLINE HRESULT IEnumDMO_Skip(IEnumDMO* This,DWORD cItemsToSkip) {
    return This->lpVtbl->Skip(This,cItemsToSkip);
}
static __WIDL_INLINE HRESULT IEnumDMO_Reset(IEnumDMO* This) {
    return This->lpVtbl->Reset(This);
}
static __WIDL_INLINE HRESULT IEnumDMO_Clone(IEnumDMO* This,IEnumDMO **ppEnum) {
    return This->lpVtbl->Clone(This,ppEnum);
}
#endif
#endif

#endif


#endif  /* __IEnumDMO_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMediaBuffer interface
 */
#ifndef __IMediaBuffer_INTERFACE_DEFINED__
#define __IMediaBuffer_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMediaBuffer, 0x59eff8b9, 0x938c, 0x4a26, 0x82,0xf2, 0x95,0xcb,0x84,0xcd,0xc8,0x37);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("59eff8b9-938c-4a26-82f2-95cb84cdc837")
IMediaBuffer : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetLength(
        DWORD cbLength) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetMaxLength(
        DWORD *pcbMaxLength) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetBufferAndLength(
        BYTE **ppBuffer,
        DWORD *pcbLength) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMediaBuffer, 0x59eff8b9, 0x938c, 0x4a26, 0x82,0xf2, 0x95,0xcb,0x84,0xcd,0xc8,0x37)
#endif
#else
typedef struct IMediaBufferVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMediaBuffer *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMediaBuffer *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMediaBuffer *This);

    /*** IMediaBuffer methods ***/
    HRESULT (STDMETHODCALLTYPE *SetLength)(
        IMediaBuffer *This,
        DWORD cbLength);

    HRESULT (STDMETHODCALLTYPE *GetMaxLength)(
        IMediaBuffer *This,
        DWORD *pcbMaxLength);

    HRESULT (STDMETHODCALLTYPE *GetBufferAndLength)(
        IMediaBuffer *This,
        BYTE **ppBuffer,
        DWORD *pcbLength);

    END_INTERFACE
} IMediaBufferVtbl;

interface IMediaBuffer {
    CONST_VTBL IMediaBufferVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMediaBuffer_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMediaBuffer_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMediaBuffer_Release(This) (This)->lpVtbl->Release(This)
/*** IMediaBuffer methods ***/
#define IMediaBuffer_SetLength(This,cbLength) (This)->lpVtbl->SetLength(This,cbLength)
#define IMediaBuffer_GetMaxLength(This,pcbMaxLength) (This)->lpVtbl->GetMaxLength(This,pcbMaxLength)
#define IMediaBuffer_GetBufferAndLength(This,ppBuffer,pcbLength) (This)->lpVtbl->GetBufferAndLength(This,ppBuffer,pcbLength)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IMediaBuffer_QueryInterface(IMediaBuffer* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IMediaBuffer_AddRef(IMediaBuffer* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IMediaBuffer_Release(IMediaBuffer* This) {
    return This->lpVtbl->Release(This);
}
/*** IMediaBuffer methods ***/
static __WIDL_INLINE HRESULT IMediaBuffer_SetLength(IMediaBuffer* This,DWORD cbLength) {
    return This->lpVtbl->SetLength(This,cbLength);
}
static __WIDL_INLINE HRESULT IMediaBuffer_GetMaxLength(IMediaBuffer* This,DWORD *pcbMaxLength) {
    return This->lpVtbl->GetMaxLength(This,pcbMaxLength);
}
static __WIDL_INLINE HRESULT IMediaBuffer_GetBufferAndLength(IMediaBuffer* This,BYTE **ppBuffer,DWORD *pcbLength) {
    return This->lpVtbl->GetBufferAndLength(This,ppBuffer,pcbLength);
}
#endif
#endif

#endif


#endif  /* __IMediaBuffer_INTERFACE_DEFINED__ */

enum _DMO_INPUT_STATUS_FLAGS {
    DMO_INPUT_STATUSF_ACCEPT_DATA = 0x1
};
enum _DMO_INPUT_DATA_BUFFER_FLAGS {
    DMO_INPUT_DATA_BUFFERF_SYNCPOINT = 0x1,
    DMO_INPUT_DATA_BUFFERF_TIME = 0x2,
    DMO_INPUT_DATA_BUFFERF_TIMELENGTH = 0x4
};
enum _DMO_PROCESS_OUTPUT_FLAGS {
    DMO_PROCESS_OUTPUT_DISCARD_WHEN_NO_BUFFER = 0x1
};
typedef struct _DMO_OUTPUT_DATA_BUFFER {
    IMediaBuffer *pBuffer;
    DWORD dwStatus;
    REFERENCE_TIME rtTimestamp;
    REFERENCE_TIME rtTimelength;
} DMO_OUTPUT_DATA_BUFFER;
typedef struct _DMO_OUTPUT_DATA_BUFFER *PDMO_OUTPUT_DATA_BUFFER;
enum _DMO_INPLACE_PROCESS_FLAGS {
    DMO_INPLACE_NORMAL = 0x0,
    DMO_INPLACE_ZERO = 0x1
};
enum _DMO_SET_TYPE_FLAGS {
    DMO_SET_TYPEF_TEST_ONLY = 0x1,
    DMO_SET_TYPEF_CLEAR = 0x2
};
enum _DMO_OUTPUT_DATA_BUFFERF_FLAGS {
    DMO_OUTPUT_DATA_BUFFERF_SYNCPOINT = 0x1,
    DMO_OUTPUT_DATA_BUFFERF_TIME = 0x2,
    DMO_OUTPUT_DATA_BUFFERF_TIMELENGTH = 0x4,
    DMO_OUTPUT_DATA_BUFFERF_INCOMPLETE = 0x1000000
};
/*****************************************************************************
 * IMediaObject interface
 */
#ifndef __IMediaObject_INTERFACE_DEFINED__
#define __IMediaObject_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMediaObject, 0xd8ad0f58, 0x5494, 0x4102, 0x97,0xc5, 0xec,0x79,0x8e,0x59,0xbc,0xf4);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("d8ad0f58-5494-4102-97c5-ec798e59bcf4")
IMediaObject : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE GetStreamCount(
        DWORD *pcInputStreams,
        DWORD *pcOutputStreams) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInputStreamInfo(
        DWORD dwInputStreamIndex,
        DWORD *pdwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetOutputStreamInfo(
        DWORD dwOutputStreamIndex,
        DWORD *pdwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInputType(
        DWORD dwInputStreamIndex,
        DWORD dwTypeIndex,
        DMO_MEDIA_TYPE *pmt) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetOutputType(
        DWORD dwOutputStreamIndex,
        DWORD dwTypeIndex,
        DMO_MEDIA_TYPE *pmt) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetInputType(
        DWORD dwInputStreamIndex,
        const DMO_MEDIA_TYPE *pmt,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetOutputType(
        DWORD dwOutputStreamIndex,
        const DMO_MEDIA_TYPE *pmt,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInputCurrentType(
        DWORD dwInputStreamIndex,
        DMO_MEDIA_TYPE *pmt) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetOutputCurrentType(
        DWORD dwOutputStreamIndex,
        DMO_MEDIA_TYPE *pmt) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInputSizeInfo(
        DWORD dwInputStreamIndex,
        DWORD *pcbSize,
        DWORD *pcbMaxLookahead,
        DWORD *pcbAlignment) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetOutputSizeInfo(
        DWORD dwOutputStreamIndex,
        DWORD *pcbSize,
        DWORD *pcbAlignment) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInputMaxLatency(
        DWORD dwInputStreamIndex,
        REFERENCE_TIME *prtMaxLatency) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetInputMaxLatency(
        DWORD dwInputStreamIndex,
        REFERENCE_TIME rtMaxLatency) = 0;

    virtual HRESULT STDMETHODCALLTYPE Flush(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE Discontinuity(
        DWORD dwInputStreamIndex) = 0;

    virtual HRESULT STDMETHODCALLTYPE AllocateStreamingResources(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE FreeStreamingResources(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetInputStatus(
        DWORD dwInputStreamIndex,
        DWORD *dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE ProcessInput(
        DWORD dwInputStreamIndex,
        IMediaBuffer *pBuffer,
        DWORD dwFlags,
        REFERENCE_TIME rtTimestamp,
        REFERENCE_TIME rtTimelength) = 0;

    virtual HRESULT STDMETHODCALLTYPE ProcessOutput(
        DWORD dwFlags,
        DWORD cOutputBufferCount,
        DMO_OUTPUT_DATA_BUFFER *pOutputBuffers,
        DWORD *pdwStatus) = 0;

    virtual HRESULT STDMETHODCALLTYPE Lock(
        LONG bLock) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMediaObject, 0xd8ad0f58, 0x5494, 0x4102, 0x97,0xc5, 0xec,0x79,0x8e,0x59,0xbc,0xf4)
#endif
#else
typedef struct IMediaObjectVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMediaObject *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMediaObject *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMediaObject *This);

    /*** IMediaObject methods ***/
    HRESULT (STDMETHODCALLTYPE *GetStreamCount)(
        IMediaObject *This,
        DWORD *pcInputStreams,
        DWORD *pcOutputStreams);

    HRESULT (STDMETHODCALLTYPE *GetInputStreamInfo)(
        IMediaObject *This,
        DWORD dwInputStreamIndex,
        DWORD *pdwFlags);

    HRESULT (STDMETHODCALLTYPE *GetOutputStreamInfo)(
        IMediaObject *This,
        DWORD dwOutputStreamIndex,
        DWORD *pdwFlags);

    HRESULT (STDMETHODCALLTYPE *GetInputType)(
        IMediaObject *This,
        DWORD dwInputStreamIndex,
        DWORD dwTypeIndex,
        DMO_MEDIA_TYPE *pmt);

    HRESULT (STDMETHODCALLTYPE *GetOutputType)(
        IMediaObject *This,
        DWORD dwOutputStreamIndex,
        DWORD dwTypeIndex,
        DMO_MEDIA_TYPE *pmt);

    HRESULT (STDMETHODCALLTYPE *SetInputType)(
        IMediaObject *This,
        DWORD dwInputStreamIndex,
        const DMO_MEDIA_TYPE *pmt,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *SetOutputType)(
        IMediaObject *This,
        DWORD dwOutputStreamIndex,
        const DMO_MEDIA_TYPE *pmt,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *GetInputCurrentType)(
        IMediaObject *This,
        DWORD dwInputStreamIndex,
        DMO_MEDIA_TYPE *pmt);

    HRESULT (STDMETHODCALLTYPE *GetOutputCurrentType)(
        IMediaObject *This,
        DWORD dwOutputStreamIndex,
        DMO_MEDIA_TYPE *pmt);

    HRESULT (STDMETHODCALLTYPE *GetInputSizeInfo)(
        IMediaObject *This,
        DWORD dwInputStreamIndex,
        DWORD *pcbSize,
        DWORD *pcbMaxLookahead,
        DWORD *pcbAlignment);

    HRESULT (STDMETHODCALLTYPE *GetOutputSizeInfo)(
        IMediaObject *This,
        DWORD dwOutputStreamIndex,
        DWORD *pcbSize,
        DWORD *pcbAlignment);

    HRESULT (STDMETHODCALLTYPE *GetInputMaxLatency)(
        IMediaObject *This,
        DWORD dwInputStreamIndex,
        REFERENCE_TIME *prtMaxLatency);

    HRESULT (STDMETHODCALLTYPE *SetInputMaxLatency)(
        IMediaObject *This,
        DWORD dwInputStreamIndex,
        REFERENCE_TIME rtMaxLatency);

    HRESULT (STDMETHODCALLTYPE *Flush)(
        IMediaObject *This);

    HRESULT (STDMETHODCALLTYPE *Discontinuity)(
        IMediaObject *This,
        DWORD dwInputStreamIndex);

    HRESULT (STDMETHODCALLTYPE *AllocateStreamingResources)(
        IMediaObject *This);

    HRESULT (STDMETHODCALLTYPE *FreeStreamingResources)(
        IMediaObject *This);

    HRESULT (STDMETHODCALLTYPE *GetInputStatus)(
        IMediaObject *This,
        DWORD dwInputStreamIndex,
        DWORD *dwFlags);

    HRESULT (STDMETHODCALLTYPE *ProcessInput)(
        IMediaObject *This,
        DWORD dwInputStreamIndex,
        IMediaBuffer *pBuffer,
        DWORD dwFlags,
        REFERENCE_TIME rtTimestamp,
        REFERENCE_TIME rtTimelength);

    HRESULT (STDMETHODCALLTYPE *ProcessOutput)(
        IMediaObject *This,
        DWORD dwFlags,
        DWORD cOutputBufferCount,
        DMO_OUTPUT_DATA_BUFFER *pOutputBuffers,
        DWORD *pdwStatus);

    HRESULT (STDMETHODCALLTYPE *Lock)(
        IMediaObject *This,
        LONG bLock);

    END_INTERFACE
} IMediaObjectVtbl;

interface IMediaObject {
    CONST_VTBL IMediaObjectVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMediaObject_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMediaObject_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMediaObject_Release(This) (This)->lpVtbl->Release(This)
/*** IMediaObject methods ***/
#define IMediaObject_GetStreamCount(This,pcInputStreams,pcOutputStreams) (This)->lpVtbl->GetStreamCount(This,pcInputStreams,pcOutputStreams)
#define IMediaObject_GetInputStreamInfo(This,dwInputStreamIndex,pdwFlags) (This)->lpVtbl->GetInputStreamInfo(This,dwInputStreamIndex,pdwFlags)
#define IMediaObject_GetOutputStreamInfo(This,dwOutputStreamIndex,pdwFlags) (This)->lpVtbl->GetOutputStreamInfo(This,dwOutputStreamIndex,pdwFlags)
#define IMediaObject_GetInputType(This,dwInputStreamIndex,dwTypeIndex,pmt) (This)->lpVtbl->GetInputType(This,dwInputStreamIndex,dwTypeIndex,pmt)
#define IMediaObject_GetOutputType(This,dwOutputStreamIndex,dwTypeIndex,pmt) (This)->lpVtbl->GetOutputType(This,dwOutputStreamIndex,dwTypeIndex,pmt)
#define IMediaObject_SetInputType(This,dwInputStreamIndex,pmt,dwFlags) (This)->lpVtbl->SetInputType(This,dwInputStreamIndex,pmt,dwFlags)
#define IMediaObject_SetOutputType(This,dwOutputStreamIndex,pmt,dwFlags) (This)->lpVtbl->SetOutputType(This,dwOutputStreamIndex,pmt,dwFlags)
#define IMediaObject_GetInputCurrentType(This,dwInputStreamIndex,pmt) (This)->lpVtbl->GetInputCurrentType(This,dwInputStreamIndex,pmt)
#define IMediaObject_GetOutputCurrentType(This,dwOutputStreamIndex,pmt) (This)->lpVtbl->GetOutputCurrentType(This,dwOutputStreamIndex,pmt)
#define IMediaObject_GetInputSizeInfo(This,dwInputStreamIndex,pcbSize,pcbMaxLookahead,pcbAlignment) (This)->lpVtbl->GetInputSizeInfo(This,dwInputStreamIndex,pcbSize,pcbMaxLookahead,pcbAlignment)
#define IMediaObject_GetOutputSizeInfo(This,dwOutputStreamIndex,pcbSize,pcbAlignment) (This)->lpVtbl->GetOutputSizeInfo(This,dwOutputStreamIndex,pcbSize,pcbAlignment)
#define IMediaObject_GetInputMaxLatency(This,dwInputStreamIndex,prtMaxLatency) (This)->lpVtbl->GetInputMaxLatency(This,dwInputStreamIndex,prtMaxLatency)
#define IMediaObject_SetInputMaxLatency(This,dwInputStreamIndex,rtMaxLatency) (This)->lpVtbl->SetInputMaxLatency(This,dwInputStreamIndex,rtMaxLatency)
#define IMediaObject_Flush(This) (This)->lpVtbl->Flush(This)
#define IMediaObject_Discontinuity(This,dwInputStreamIndex) (This)->lpVtbl->Discontinuity(This,dwInputStreamIndex)
#define IMediaObject_AllocateStreamingResources(This) (This)->lpVtbl->AllocateStreamingResources(This)
#define IMediaObject_FreeStreamingResources(This) (This)->lpVtbl->FreeStreamingResources(This)
#define IMediaObject_GetInputStatus(This,dwInputStreamIndex,dwFlags) (This)->lpVtbl->GetInputStatus(This,dwInputStreamIndex,dwFlags)
#define IMediaObject_ProcessInput(This,dwInputStreamIndex,pBuffer,dwFlags,rtTimestamp,rtTimelength) (This)->lpVtbl->ProcessInput(This,dwInputStreamIndex,pBuffer,dwFlags,rtTimestamp,rtTimelength)
#define IMediaObject_ProcessOutput(This,dwFlags,cOutputBufferCount,pOutputBuffers,pdwStatus) (This)->lpVtbl->ProcessOutput(This,dwFlags,cOutputBufferCount,pOutputBuffers,pdwStatus)
#define IMediaObject_Lock(This,bLock) (This)->lpVtbl->Lock(This,bLock)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IMediaObject_QueryInterface(IMediaObject* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IMediaObject_AddRef(IMediaObject* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IMediaObject_Release(IMediaObject* This) {
    return This->lpVtbl->Release(This);
}
/*** IMediaObject methods ***/
static __WIDL_INLINE HRESULT IMediaObject_GetStreamCount(IMediaObject* This,DWORD *pcInputStreams,DWORD *pcOutputStreams) {
    return This->lpVtbl->GetStreamCount(This,pcInputStreams,pcOutputStreams);
}
static __WIDL_INLINE HRESULT IMediaObject_GetInputStreamInfo(IMediaObject* This,DWORD dwInputStreamIndex,DWORD *pdwFlags) {
    return This->lpVtbl->GetInputStreamInfo(This,dwInputStreamIndex,pdwFlags);
}
static __WIDL_INLINE HRESULT IMediaObject_GetOutputStreamInfo(IMediaObject* This,DWORD dwOutputStreamIndex,DWORD *pdwFlags) {
    return This->lpVtbl->GetOutputStreamInfo(This,dwOutputStreamIndex,pdwFlags);
}
static __WIDL_INLINE HRESULT IMediaObject_GetInputType(IMediaObject* This,DWORD dwInputStreamIndex,DWORD dwTypeIndex,DMO_MEDIA_TYPE *pmt) {
    return This->lpVtbl->GetInputType(This,dwInputStreamIndex,dwTypeIndex,pmt);
}
static __WIDL_INLINE HRESULT IMediaObject_GetOutputType(IMediaObject* This,DWORD dwOutputStreamIndex,DWORD dwTypeIndex,DMO_MEDIA_TYPE *pmt) {
    return This->lpVtbl->GetOutputType(This,dwOutputStreamIndex,dwTypeIndex,pmt);
}
static __WIDL_INLINE HRESULT IMediaObject_SetInputType(IMediaObject* This,DWORD dwInputStreamIndex,const DMO_MEDIA_TYPE *pmt,DWORD dwFlags) {
    return This->lpVtbl->SetInputType(This,dwInputStreamIndex,pmt,dwFlags);
}
static __WIDL_INLINE HRESULT IMediaObject_SetOutputType(IMediaObject* This,DWORD dwOutputStreamIndex,const DMO_MEDIA_TYPE *pmt,DWORD dwFlags) {
    return This->lpVtbl->SetOutputType(This,dwOutputStreamIndex,pmt,dwFlags);
}
static __WIDL_INLINE HRESULT IMediaObject_GetInputCurrentType(IMediaObject* This,DWORD dwInputStreamIndex,DMO_MEDIA_TYPE *pmt) {
    return This->lpVtbl->GetInputCurrentType(This,dwInputStreamIndex,pmt);
}
static __WIDL_INLINE HRESULT IMediaObject_GetOutputCurrentType(IMediaObject* This,DWORD dwOutputStreamIndex,DMO_MEDIA_TYPE *pmt) {
    return This->lpVtbl->GetOutputCurrentType(This,dwOutputStreamIndex,pmt);
}
static __WIDL_INLINE HRESULT IMediaObject_GetInputSizeInfo(IMediaObject* This,DWORD dwInputStreamIndex,DWORD *pcbSize,DWORD *pcbMaxLookahead,DWORD *pcbAlignment) {
    return This->lpVtbl->GetInputSizeInfo(This,dwInputStreamIndex,pcbSize,pcbMaxLookahead,pcbAlignment);
}
static __WIDL_INLINE HRESULT IMediaObject_GetOutputSizeInfo(IMediaObject* This,DWORD dwOutputStreamIndex,DWORD *pcbSize,DWORD *pcbAlignment) {
    return This->lpVtbl->GetOutputSizeInfo(This,dwOutputStreamIndex,pcbSize,pcbAlignment);
}
static __WIDL_INLINE HRESULT IMediaObject_GetInputMaxLatency(IMediaObject* This,DWORD dwInputStreamIndex,REFERENCE_TIME *prtMaxLatency) {
    return This->lpVtbl->GetInputMaxLatency(This,dwInputStreamIndex,prtMaxLatency);
}
static __WIDL_INLINE HRESULT IMediaObject_SetInputMaxLatency(IMediaObject* This,DWORD dwInputStreamIndex,REFERENCE_TIME rtMaxLatency) {
    return This->lpVtbl->SetInputMaxLatency(This,dwInputStreamIndex,rtMaxLatency);
}
static __WIDL_INLINE HRESULT IMediaObject_Flush(IMediaObject* This) {
    return This->lpVtbl->Flush(This);
}
static __WIDL_INLINE HRESULT IMediaObject_Discontinuity(IMediaObject* This,DWORD dwInputStreamIndex) {
    return This->lpVtbl->Discontinuity(This,dwInputStreamIndex);
}
static __WIDL_INLINE HRESULT IMediaObject_AllocateStreamingResources(IMediaObject* This) {
    return This->lpVtbl->AllocateStreamingResources(This);
}
static __WIDL_INLINE HRESULT IMediaObject_FreeStreamingResources(IMediaObject* This) {
    return This->lpVtbl->FreeStreamingResources(This);
}
static __WIDL_INLINE HRESULT IMediaObject_GetInputStatus(IMediaObject* This,DWORD dwInputStreamIndex,DWORD *dwFlags) {
    return This->lpVtbl->GetInputStatus(This,dwInputStreamIndex,dwFlags);
}
static __WIDL_INLINE HRESULT IMediaObject_ProcessInput(IMediaObject* This,DWORD dwInputStreamIndex,IMediaBuffer *pBuffer,DWORD dwFlags,REFERENCE_TIME rtTimestamp,REFERENCE_TIME rtTimelength) {
    return This->lpVtbl->ProcessInput(This,dwInputStreamIndex,pBuffer,dwFlags,rtTimestamp,rtTimelength);
}
static __WIDL_INLINE HRESULT IMediaObject_ProcessOutput(IMediaObject* This,DWORD dwFlags,DWORD cOutputBufferCount,DMO_OUTPUT_DATA_BUFFER *pOutputBuffers,DWORD *pdwStatus) {
    return This->lpVtbl->ProcessOutput(This,dwFlags,cOutputBufferCount,pOutputBuffers,pdwStatus);
}
static __WIDL_INLINE HRESULT IMediaObject_Lock(IMediaObject* This,LONG bLock) {
    return This->lpVtbl->Lock(This,bLock);
}
#endif
#endif

#endif


#endif  /* __IMediaObject_INTERFACE_DEFINED__ */

/*****************************************************************************
 * IMediaObjectInPlace interface
 */
#ifndef __IMediaObjectInPlace_INTERFACE_DEFINED__
#define __IMediaObjectInPlace_INTERFACE_DEFINED__

DEFINE_GUID(IID_IMediaObjectInPlace, 0x651b9ad0, 0x0fc7, 0x4aa9, 0x95,0x38, 0xd8,0x99,0x31,0x01,0x07,0x41);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("651b9ad0-0fc7-4aa9-9538-d89931010741")
IMediaObjectInPlace : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE Process(
        ULONG ulSize,
        BYTE *pData,
        REFERENCE_TIME refTimeStart,
        DWORD dwFlags) = 0;

    virtual HRESULT STDMETHODCALLTYPE Clone(
        IMediaObjectInPlace **ppMediaObject) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetLatency(
        REFERENCE_TIME *pLatencyTime) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IMediaObjectInPlace, 0x651b9ad0, 0x0fc7, 0x4aa9, 0x95,0x38, 0xd8,0x99,0x31,0x01,0x07,0x41)
#endif
#else
typedef struct IMediaObjectInPlaceVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IMediaObjectInPlace *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IMediaObjectInPlace *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IMediaObjectInPlace *This);

    /*** IMediaObjectInPlace methods ***/
    HRESULT (STDMETHODCALLTYPE *Process)(
        IMediaObjectInPlace *This,
        ULONG ulSize,
        BYTE *pData,
        REFERENCE_TIME refTimeStart,
        DWORD dwFlags);

    HRESULT (STDMETHODCALLTYPE *Clone)(
        IMediaObjectInPlace *This,
        IMediaObjectInPlace **ppMediaObject);

    HRESULT (STDMETHODCALLTYPE *GetLatency)(
        IMediaObjectInPlace *This,
        REFERENCE_TIME *pLatencyTime);

    END_INTERFACE
} IMediaObjectInPlaceVtbl;

interface IMediaObjectInPlace {
    CONST_VTBL IMediaObjectInPlaceVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IMediaObjectInPlace_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IMediaObjectInPlace_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IMediaObjectInPlace_Release(This) (This)->lpVtbl->Release(This)
/*** IMediaObjectInPlace methods ***/
#define IMediaObjectInPlace_Process(This,ulSize,pData,refTimeStart,dwFlags) (This)->lpVtbl->Process(This,ulSize,pData,refTimeStart,dwFlags)
#define IMediaObjectInPlace_Clone(This,ppMediaObject) (This)->lpVtbl->Clone(This,ppMediaObject)
#define IMediaObjectInPlace_GetLatency(This,pLatencyTime) (This)->lpVtbl->GetLatency(This,pLatencyTime)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IMediaObjectInPlace_QueryInterface(IMediaObjectInPlace* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IMediaObjectInPlace_AddRef(IMediaObjectInPlace* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IMediaObjectInPlace_Release(IMediaObjectInPlace* This) {
    return This->lpVtbl->Release(This);
}
/*** IMediaObjectInPlace methods ***/
static __WIDL_INLINE HRESULT IMediaObjectInPlace_Process(IMediaObjectInPlace* This,ULONG ulSize,BYTE *pData,REFERENCE_TIME refTimeStart,DWORD dwFlags) {
    return This->lpVtbl->Process(This,ulSize,pData,refTimeStart,dwFlags);
}
static __WIDL_INLINE HRESULT IMediaObjectInPlace_Clone(IMediaObjectInPlace* This,IMediaObjectInPlace **ppMediaObject) {
    return This->lpVtbl->Clone(This,ppMediaObject);
}
static __WIDL_INLINE HRESULT IMediaObjectInPlace_GetLatency(IMediaObjectInPlace* This,REFERENCE_TIME *pLatencyTime) {
    return This->lpVtbl->GetLatency(This,pLatencyTime);
}
#endif
#endif

#endif


#endif  /* __IMediaObjectInPlace_INTERFACE_DEFINED__ */

enum _DMO_QUALITY_STATUS_FLAGS {
    DMO_QUALITY_STATUS_ENABLED = 0x1
};
/*****************************************************************************
 * IDMOQualityControl interface
 */
#ifndef __IDMOQualityControl_INTERFACE_DEFINED__
#define __IDMOQualityControl_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDMOQualityControl, 0x65abea96, 0xcf36, 0x453f, 0xaf,0x8a, 0x70,0x5e,0x98,0xf1,0x62,0x60);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("65abea96-cf36-453f-af8a-705e98f16260")
IDMOQualityControl : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE SetNow(
        REFERENCE_TIME now) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetStatus(
        DWORD flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetStatus(
        DWORD *flags) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDMOQualityControl, 0x65abea96, 0xcf36, 0x453f, 0xaf,0x8a, 0x70,0x5e,0x98,0xf1,0x62,0x60)
#endif
#else
typedef struct IDMOQualityControlVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDMOQualityControl *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDMOQualityControl *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDMOQualityControl *This);

    /*** IDMOQualityControl methods ***/
    HRESULT (STDMETHODCALLTYPE *SetNow)(
        IDMOQualityControl *This,
        REFERENCE_TIME now);

    HRESULT (STDMETHODCALLTYPE *SetStatus)(
        IDMOQualityControl *This,
        DWORD flags);

    HRESULT (STDMETHODCALLTYPE *GetStatus)(
        IDMOQualityControl *This,
        DWORD *flags);

    END_INTERFACE
} IDMOQualityControlVtbl;

interface IDMOQualityControl {
    CONST_VTBL IDMOQualityControlVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDMOQualityControl_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDMOQualityControl_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDMOQualityControl_Release(This) (This)->lpVtbl->Release(This)
/*** IDMOQualityControl methods ***/
#define IDMOQualityControl_SetNow(This,now) (This)->lpVtbl->SetNow(This,now)
#define IDMOQualityControl_SetStatus(This,flags) (This)->lpVtbl->SetStatus(This,flags)
#define IDMOQualityControl_GetStatus(This,flags) (This)->lpVtbl->GetStatus(This,flags)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IDMOQualityControl_QueryInterface(IDMOQualityControl* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IDMOQualityControl_AddRef(IDMOQualityControl* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IDMOQualityControl_Release(IDMOQualityControl* This) {
    return This->lpVtbl->Release(This);
}
/*** IDMOQualityControl methods ***/
static __WIDL_INLINE HRESULT IDMOQualityControl_SetNow(IDMOQualityControl* This,REFERENCE_TIME now) {
    return This->lpVtbl->SetNow(This,now);
}
static __WIDL_INLINE HRESULT IDMOQualityControl_SetStatus(IDMOQualityControl* This,DWORD flags) {
    return This->lpVtbl->SetStatus(This,flags);
}
static __WIDL_INLINE HRESULT IDMOQualityControl_GetStatus(IDMOQualityControl* This,DWORD *flags) {
    return This->lpVtbl->GetStatus(This,flags);
}
#endif
#endif

#endif


#endif  /* __IDMOQualityControl_INTERFACE_DEFINED__ */

enum _DMO_VIDEO_OUTPUT_STREAM_FLAGS {
    DMO_VOSF_NEEDS_PREVIOUS_SAMPLE = 0x1
};
/*****************************************************************************
 * IDMOVideoOutputOptimizations interface
 */
#ifndef __IDMOVideoOutputOptimizations_INTERFACE_DEFINED__
#define __IDMOVideoOutputOptimizations_INTERFACE_DEFINED__

DEFINE_GUID(IID_IDMOVideoOutputOptimizations, 0xbe8f4f4e, 0x5b16, 0x4d29, 0xb3,0x50, 0x7f,0x6b,0x5d,0x92,0x98,0xac);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("be8f4f4e-5b16-4d29-b350-7f6b5d9298ac")
IDMOVideoOutputOptimizations : public IUnknown
{
    virtual HRESULT STDMETHODCALLTYPE QueryOperationModePreferences(
        ULONG index,
        DWORD *flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetOperationMode(
        ULONG index,
        DWORD flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetCurrentOperationMode(
        ULONG index,
        DWORD *flags) = 0;

    virtual HRESULT STDMETHODCALLTYPE GetCurrentSampleRequirements(
        ULONG index,
        DWORD *flags) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IDMOVideoOutputOptimizations, 0xbe8f4f4e, 0x5b16, 0x4d29, 0xb3,0x50, 0x7f,0x6b,0x5d,0x92,0x98,0xac)
#endif
#else
typedef struct IDMOVideoOutputOptimizationsVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IDMOVideoOutputOptimizations *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IDMOVideoOutputOptimizations *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IDMOVideoOutputOptimizations *This);

    /*** IDMOVideoOutputOptimizations methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryOperationModePreferences)(
        IDMOVideoOutputOptimizations *This,
        ULONG index,
        DWORD *flags);

    HRESULT (STDMETHODCALLTYPE *SetOperationMode)(
        IDMOVideoOutputOptimizations *This,
        ULONG index,
        DWORD flags);

    HRESULT (STDMETHODCALLTYPE *GetCurrentOperationMode)(
        IDMOVideoOutputOptimizations *This,
        ULONG index,
        DWORD *flags);

    HRESULT (STDMETHODCALLTYPE *GetCurrentSampleRequirements)(
        IDMOVideoOutputOptimizations *This,
        ULONG index,
        DWORD *flags);

    END_INTERFACE
} IDMOVideoOutputOptimizationsVtbl;

interface IDMOVideoOutputOptimizations {
    CONST_VTBL IDMOVideoOutputOptimizationsVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IDMOVideoOutputOptimizations_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IDMOVideoOutputOptimizations_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IDMOVideoOutputOptimizations_Release(This) (This)->lpVtbl->Release(This)
/*** IDMOVideoOutputOptimizations methods ***/
#define IDMOVideoOutputOptimizations_QueryOperationModePreferences(This,index,flags) (This)->lpVtbl->QueryOperationModePreferences(This,index,flags)
#define IDMOVideoOutputOptimizations_SetOperationMode(This,index,flags) (This)->lpVtbl->SetOperationMode(This,index,flags)
#define IDMOVideoOutputOptimizations_GetCurrentOperationMode(This,index,flags) (This)->lpVtbl->GetCurrentOperationMode(This,index,flags)
#define IDMOVideoOutputOptimizations_GetCurrentSampleRequirements(This,index,flags) (This)->lpVtbl->GetCurrentSampleRequirements(This,index,flags)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IDMOVideoOutputOptimizations_QueryInterface(IDMOVideoOutputOptimizations* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IDMOVideoOutputOptimizations_AddRef(IDMOVideoOutputOptimizations* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IDMOVideoOutputOptimizations_Release(IDMOVideoOutputOptimizations* This) {
    return This->lpVtbl->Release(This);
}
/*** IDMOVideoOutputOptimizations methods ***/
static __WIDL_INLINE HRESULT IDMOVideoOutputOptimizations_QueryOperationModePreferences(IDMOVideoOutputOptimizations* This,ULONG index,DWORD *flags) {
    return This->lpVtbl->QueryOperationModePreferences(This,index,flags);
}
static __WIDL_INLINE HRESULT IDMOVideoOutputOptimizations_SetOperationMode(IDMOVideoOutputOptimizations* This,ULONG index,DWORD flags) {
    return This->lpVtbl->SetOperationMode(This,index,flags);
}
static __WIDL_INLINE HRESULT IDMOVideoOutputOptimizations_GetCurrentOperationMode(IDMOVideoOutputOptimizations* This,ULONG index,DWORD *flags) {
    return This->lpVtbl->GetCurrentOperationMode(This,index,flags);
}
static __WIDL_INLINE HRESULT IDMOVideoOutputOptimizations_GetCurrentSampleRequirements(IDMOVideoOutputOptimizations* This,ULONG index,DWORD *flags) {
    return This->lpVtbl->GetCurrentSampleRequirements(This,index,flags);
}
#endif
#endif

#endif


#endif  /* __IDMOVideoOutputOptimizations_INTERFACE_DEFINED__ */

/* Begin additional prototypes for all interfaces */


/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __mediaobj_h__ */