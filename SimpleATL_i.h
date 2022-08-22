

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 08:44:07 2038
 */
/* Compiler settings for SimpleATL.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __SimpleATL_i_h__
#define __SimpleATL_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IFirstATL_FWD_DEFINED__
#define __IFirstATL_FWD_DEFINED__
typedef interface IFirstATL IFirstATL;

#endif 	/* __IFirstATL_FWD_DEFINED__ */


#ifndef __FirstATL_FWD_DEFINED__
#define __FirstATL_FWD_DEFINED__

#ifdef __cplusplus
typedef class FirstATL FirstATL;
#else
typedef struct FirstATL FirstATL;
#endif /* __cplusplus */

#endif 	/* __FirstATL_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IFirstATL_INTERFACE_DEFINED__
#define __IFirstATL_INTERFACE_DEFINED__

/* interface IFirstATL */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IFirstATL;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("a72d662a-d5cb-4d41-a89f-0110190d8d9c")
    IFirstATL : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE AddNumbers( 
            /* [in] */ long Num1,
            /* [in] */ long Num2,
            /* [out] */ long *ReturnVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IFirstATLVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IFirstATL * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IFirstATL * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IFirstATL * This);
        
        HRESULT ( STDMETHODCALLTYPE *AddNumbers )( 
            IFirstATL * This,
            /* [in] */ long Num1,
            /* [in] */ long Num2,
            /* [out] */ long *ReturnVal);
        
        END_INTERFACE
    } IFirstATLVtbl;

    interface IFirstATL
    {
        CONST_VTBL struct IFirstATLVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IFirstATL_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IFirstATL_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IFirstATL_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IFirstATL_AddNumbers(This,Num1,Num2,ReturnVal)	\
    ( (This)->lpVtbl -> AddNumbers(This,Num1,Num2,ReturnVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IFirstATL_INTERFACE_DEFINED__ */



#ifndef __SimpleATLLib_LIBRARY_DEFINED__
#define __SimpleATLLib_LIBRARY_DEFINED__

/* library SimpleATLLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_SimpleATLLib;

EXTERN_C const CLSID CLSID_FirstATL;

#ifdef __cplusplus

class DECLSPEC_UUID("b925d0e3-9d3a-4ac2-97e3-73e6b21b485a")
FirstATL;
#endif
#endif /* __SimpleATLLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


