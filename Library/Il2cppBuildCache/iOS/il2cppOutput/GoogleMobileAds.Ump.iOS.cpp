#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2)
	{
		void* params[2] = { &p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3)
	{
		void* params[3] = { p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<GoogleMobileAds.Ump.Api.FormError>
struct Action_1_tB03D82616088D202ABD23F934CC2976A2ED530B4;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// GoogleMobileAds.Ump.Api.ConsentDebugSettings
struct ConsentDebugSettings_t21BCD70B1E4DB762E04807E88E78285CC51370C6;
// GoogleMobileAds.Ump.iOS.ConsentFormClient
struct ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1;
// GoogleMobileAds.Ump.iOS.ConsentInformationClient
struct ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1;
// GoogleMobileAds.Ump.Api.ConsentRequestParameters
struct ConsentRequestParameters_t34C1E8C04ED21B543DFE57708C303AABEA447516;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// GoogleMobileAds.Ump.iOS.Externs
struct Externs_t8C1E08109EC604AF48C9B439F139F4B64E537504;
// GoogleMobileAds.Ump.Api.FormError
struct FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// GoogleMobileAds.Ump.Common.IConsentFormClient
struct IConsentFormClient_t74E4CFA27BAAA6057C6C3F92D010640FFF44B541;
// GoogleMobileAds.Ump.Common.IConsentInformationClient
struct IConsentInformationClient_tF58668605A3AC2F36DB94BA4A3A2621D3059259E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// GoogleMobileAds.Ump.iOS.UmpClientFactory
struct UmpClientFactory_t419C0174AA6B63B15489EF309508540C1D78CF18;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler
struct GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254;
// GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler
struct GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25;
// GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback
struct GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB;

IL2CPP_EXTERN_C RuntimeClass* ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A42A54D7FD4D3A3A3F27FE6D9BA4765B168528A;
IL2CPP_EXTERN_C String_t* _stringLiteral3296FB3BF3E142D4895B55FBC5FB54361B9207CA;
IL2CPP_EXTERN_C String_t* _stringLiteral981AE4478E71C4EC026A30E7892E7C4381F95DB9;
IL2CPP_EXTERN_C String_t* _stringLiteralAB3C01CC2E6DD25665EFC9D45FBFCDDB7EE3F0B1;
IL2CPP_EXTERN_C String_t* _stringLiteralECB59AE03B3FE9DF44D788977626C01307347E50;
IL2CPP_EXTERN_C const RuntimeMethod* ConsentFormClient_ConsentFormLoadCompletionHandler_m3161FC8CDF3BDB16015D91FA7ED7035655DE5BFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsentFormClient_ConsentFormPresentCompletionHandler_m04F646ACFA0B3B5CDAC0554D1EFAC5EC039F765B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsentInformationClient_ConsentInfoUpdateCallback_m01A1B5982AE827C301F4BA2A0801A2A3E13577D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsentInformationClient_GetConsentStatus_mA0ED9529AE12E1AC62492A26304BEF9F3A5DF492_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsentInformationClient_IsConsentFormAvailable_mD4D908AC971567F63970100C3A476D67C4FF4385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConsentInformationClient_Reset_m33D05624221D6CB935EE36964C4BFFB99873C5D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_CopyTo_m87398D95BED8C0626A669D782ECE31DE73392BDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UmpClientFactory_ConsentFormClient_mADABD934A32673E760D2B45A4B246DE52D3F01A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UmpClientFactory_ConsentInformationClient_mC8BCFC29B4D19B11F8AE4E1AAE25C940CDCDAFBA_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t2E436F02646AE15477D3A3C17B521F580FFA2360 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// GoogleMobileAds.Ump.Api.ConsentRequestParameters
struct ConsentRequestParameters_t34C1E8C04ED21B543DFE57708C303AABEA447516  : public RuntimeObject
{
	// System.Boolean GoogleMobileAds.Ump.Api.ConsentRequestParameters::TagForUnderAgeOfConsent
	bool ___TagForUnderAgeOfConsent_0;
	// GoogleMobileAds.Ump.Api.ConsentDebugSettings GoogleMobileAds.Ump.Api.ConsentRequestParameters::ConsentDebugSettings
	ConsentDebugSettings_t21BCD70B1E4DB762E04807E88E78285CC51370C6* ___ConsentDebugSettings_1;
};

// GoogleMobileAds.Ump.iOS.Externs
struct Externs_t8C1E08109EC604AF48C9B439F139F4B64E537504  : public RuntimeObject
{
};

// GoogleMobileAds.Ump.Api.FormError
struct FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026  : public RuntimeObject
{
	// System.Int32 GoogleMobileAds.Ump.Api.FormError::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_0;
	// System.String GoogleMobileAds.Ump.Api.FormError::<Message>k__BackingField
	String_t* ___U3CMessageU3Ek__BackingField_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// GoogleMobileAds.Ump.iOS.UmpClientFactory
struct UmpClientFactory_t419C0174AA6B63B15489EF309508540C1D78CF18  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// GoogleMobileAds.Ump.iOS.ConsentFormClient
struct ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1  : public RuntimeObject
{
	// System.IntPtr GoogleMobileAds.Ump.iOS.ConsentFormClient::_consentForm
	intptr_t ____consentForm_1;
	// System.IntPtr GoogleMobileAds.Ump.iOS.ConsentFormClient::_consentFormClientPtr
	intptr_t ____consentFormClientPtr_2;
	// System.Action GoogleMobileAds.Ump.iOS.ConsentFormClient::_loadCompleteAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____loadCompleteAction_3;
	// System.Action`1<GoogleMobileAds.Ump.Api.FormError> GoogleMobileAds.Ump.iOS.ConsentFormClient::_loadFailedAction
	Action_1_tB03D82616088D202ABD23F934CC2976A2ED530B4* ____loadFailedAction_4;
	// System.Action`1<GoogleMobileAds.Ump.Api.FormError> GoogleMobileAds.Ump.iOS.ConsentFormClient::_consentFormDismissedAction
	Action_1_tB03D82616088D202ABD23F934CC2976A2ED530B4* ____consentFormDismissedAction_5;
};

// GoogleMobileAds.Ump.iOS.ConsentInformationClient
struct ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1  : public RuntimeObject
{
	// System.IntPtr GoogleMobileAds.Ump.iOS.ConsentInformationClient::_consentInformationClientPtr
	intptr_t ____consentInformationClientPtr_1;
	// System.IntPtr GoogleMobileAds.Ump.iOS.ConsentInformationClient::_consentInformationPtr
	intptr_t ____consentInformationPtr_2;
	// System.Action GoogleMobileAds.Ump.iOS.ConsentInformationClient::_consentInfoUpdateSuccessAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____consentInfoUpdateSuccessAction_3;
	// System.Action`1<GoogleMobileAds.Ump.Api.FormError> GoogleMobileAds.Ump.iOS.ConsentInformationClient::_consentInfoUpdateFailureAction
	Action_1_tB03D82616088D202ABD23F934CC2976A2ED530B4* ____consentInfoUpdateFailureAction_4;
};

// GoogleMobileAds.Ump.Api.DebugGeography
struct DebugGeography_tE764B93413E15CC10191FEAFB27703EB137D4722 
{
	// System.Int32 GoogleMobileAds.Ump.Api.DebugGeography::value__
	int32_t ___value___2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	intptr_t ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// UnityEngine.RuntimePlatform
struct RuntimePlatform_t9A8AAF204603076FCAAECCCC05DA386AEE7BF66E 
{
	// System.Int32 UnityEngine.RuntimePlatform::value__
	int32_t ___value___2;
};

// GoogleMobileAds.Ump.Api.ConsentDebugSettings
struct ConsentDebugSettings_t21BCD70B1E4DB762E04807E88E78285CC51370C6  : public RuntimeObject
{
	// GoogleMobileAds.Ump.Api.DebugGeography GoogleMobileAds.Ump.Api.ConsentDebugSettings::DebugGeography
	int32_t ___DebugGeography_0;
	// System.Collections.Generic.List`1<System.String> GoogleMobileAds.Ump.Api.ConsentDebugSettings::TestDeviceHashedIds
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___TestDeviceHashedIds_1;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<GoogleMobileAds.Ump.Api.FormError>
struct Action_1_tB03D82616088D202ABD23F934CC2976A2ED530B4  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.TypeLoadException
struct TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_18;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_19;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_20;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_21;
};

// GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler
struct GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254  : public MulticastDelegate_t
{
};

// GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler
struct GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25  : public MulticastDelegate_t
{
};

// GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback
struct GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB  : public MulticastDelegate_t
{
};

// System.EntryPointNotFoundException
struct EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743  : public TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32
{
};

// <Module>

// <Module>

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.String>

// GoogleMobileAds.Ump.Api.ConsentRequestParameters

// GoogleMobileAds.Ump.Api.ConsentRequestParameters

// GoogleMobileAds.Ump.iOS.Externs

// GoogleMobileAds.Ump.iOS.Externs

// GoogleMobileAds.Ump.Api.FormError

// GoogleMobileAds.Ump.Api.FormError

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// GoogleMobileAds.Ump.iOS.UmpClientFactory

// GoogleMobileAds.Ump.iOS.UmpClientFactory

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// System.Void

// System.Void

// GoogleMobileAds.Ump.iOS.ConsentFormClient
struct ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_StaticFields
{
	// GoogleMobileAds.Ump.iOS.ConsentFormClient GoogleMobileAds.Ump.iOS.ConsentFormClient::_instance
	ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* ____instance_0;
	// GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler GoogleMobileAds.Ump.iOS.ConsentFormClient::<>f__mg$cache0
	GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254* ___U3CU3Ef__mgU24cache0_6;
	// GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler GoogleMobileAds.Ump.iOS.ConsentFormClient::<>f__mg$cache1
	GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25* ___U3CU3Ef__mgU24cache1_7;
};

// GoogleMobileAds.Ump.iOS.ConsentFormClient

// GoogleMobileAds.Ump.iOS.ConsentInformationClient
struct ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_StaticFields
{
	// GoogleMobileAds.Ump.iOS.ConsentInformationClient GoogleMobileAds.Ump.iOS.ConsentInformationClient::_instance
	ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* ____instance_0;
	// GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback GoogleMobileAds.Ump.iOS.ConsentInformationClient::<>f__mg$cache0
	GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB* ___U3CU3Ef__mgU24cache0_5;
};

// GoogleMobileAds.Ump.iOS.ConsentInformationClient

// GoogleMobileAds.Ump.Api.DebugGeography

// GoogleMobileAds.Ump.Api.DebugGeography

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Runtime.InteropServices.GCHandle

// System.Runtime.InteropServices.GCHandle

// UnityEngine.RuntimePlatform

// UnityEngine.RuntimePlatform

// GoogleMobileAds.Ump.Api.ConsentDebugSettings

// GoogleMobileAds.Ump.Api.ConsentDebugSettings

// System.Action`1<GoogleMobileAds.Ump.Api.FormError>

// System.Action`1<GoogleMobileAds.Ump.Api.FormError>

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// System.InvalidOperationException

// System.InvalidOperationException

// GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler

// GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler

// GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler

// GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler

// GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback

// GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback

// System.EntryPointNotFoundException

// System.EntryPointNotFoundException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::CopyTo(T[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_CopyTo_mDA4751F464411AB4C757C63C6EDBF4891BFD6891_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, const RuntimeMethod* method) ;

// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::ConsentFormLoadCompletionHandler(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient_ConsentFormLoadCompletionHandler_m3161FC8CDF3BDB16015D91FA7ED7035655DE5BFD (intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::ConsentFormPresentCompletionHandler(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient_ConsentFormPresentCompletionHandler_m04F646ACFA0B3B5CDAC0554D1EFAC5EC039F765B (intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::op_Explicit(System.Runtime.InteropServices.GCHandle)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GCHandle_op_Explicit_m03DD8D9FB45D565431455A6EE5C30A87305EF73C_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___0_value, const RuntimeMethod* method) ;
// System.IntPtr GoogleMobileAds.Ump.iOS.Externs::GADUCreateConsentForm(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateConsentForm_m4EBB46674010C2BDB73AC7D2D407C483D5664EE3 (intptr_t ___0_clientRef, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentFormLoadCompletionHandler__ctor_m73C10AD0211F66C303676C205F697F25E4D00079 (GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADULoadConsentForm(System.IntPtr,GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADULoadConsentForm_m6852D39910D8F09C3CD3EF0CA28B85CA5F0FB878 (intptr_t ___0_formRef, GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254* ___1_consentFormLoadCallback, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentFormPresentCompletionHandler__ctor_mE8A485414387552E135CBFB0850AA971BA665F4D (GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUPresentConsentForm(System.IntPtr,GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUPresentConsentForm_mCC8114769B778D5CC8F449AFE2925ACEFC55C487 (intptr_t ___0_formRef, GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25* ___1_consentFormPresentCallback, const RuntimeMethod* method) ;
// GoogleMobileAds.Ump.iOS.ConsentFormClient GoogleMobileAds.Ump.iOS.ConsentFormClient::IntPtrToConsentFormClient(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* ConsentFormClient_IntPtrToConsentFormClient_mB8BFD0B1074AFC85277F47ED61F7543E39D4C448 (intptr_t ___0_clientRef, const RuntimeMethod* method) ;
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271 (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Int32 GoogleMobileAds.Ump.iOS.Externs::GADUGetFormErrorCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Externs_GADUGetFormErrorCode_mCED0FCF2EFCF807A812A2698A1F928594B8B83AF (intptr_t ___0_error, const RuntimeMethod* method) ;
// System.String GoogleMobileAds.Ump.iOS.Externs::GADUGetFormErrorMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Externs_GADUGetFormErrorMessage_mC85893CCE27D7CB289FD724D0AE4A65CFE3732CB (intptr_t ___0_error, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Ump.Api.FormError::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormError__ctor_m74D2F9BD01E242B45657155A11219192DF02A8A7 (FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026* __this, int32_t ___0_errorCode, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void System.Action`1<GoogleMobileAds.Ump.Api.FormError>::Invoke(T)
inline void Action_1_Invoke_m3DEF207D7DDE949DDC2EC78FF96E9789029BAC51_inline (Action_1_tB03D82616088D202ABD23F934CC2976A2ED530B4* __this, FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB03D82616088D202ABD23F934CC2976A2ED530B4*, FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B (intptr_t ___0_value1, intptr_t ___1_value2, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_op_Explicit_mA5F28206637454AD677BE13DF86C6152190B6F0F (intptr_t ___0_value, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient_Dispose_mAD8DB765B7A9C642BAEEAAE6980D4691C762343E (ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient__ctor_mC1EEA93DCAF7CE4FA1EC79FE00241D914A6B3AAE (ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::ConsentInfoUpdateCallback(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient_ConsentInfoUpdateCallback_m01A1B5982AE827C301F4BA2A0801A2A3E13577D6 (intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method) ;
// System.IntPtr GoogleMobileAds.Ump.iOS.Externs::GADUCreateConsentInformation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateConsentInformation_m40445E013F2C25A5030190929D07FA5204386C35 (intptr_t ___0_clientRef, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::set_ConsentInformationPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient_set_ConsentInformationPtr_mBA0AF74DDCD02983BCFADFA8907E4144332D7823 (ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* __this, intptr_t ___0_value, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADURelease(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADURelease_mD645D7AE2BD9355B6F45F8E0F59FA4FA8BFF0100 (intptr_t ___0_obj, const RuntimeMethod* method) ;
// System.IntPtr GoogleMobileAds.Ump.iOS.Externs::GADUCreateRequestParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateRequestParameters_mA0DB2EA8850345665565D7C28D5EB06F25DCD9B5 (const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUSetRequestParametersTagForUnderAgeOfConsent(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetRequestParametersTagForUnderAgeOfConsent_m21898F9CEC922FDE18A9AF55842C52E9C3755F55 (intptr_t ___0_requestParametersRef, bool ___1_tagForUnderAgeOfConsent, const RuntimeMethod* method) ;
// System.IntPtr GoogleMobileAds.Ump.iOS.Externs::GADUCreateDebugSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateDebugSettings_mB7A04EAAA7CAEB0DB94B9054B8F69389C2A1D457 (const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUSetDebugSettingsDebugGeography(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetDebugSettingsDebugGeography_m724BFF876907DF87B9AA06D0BFB87AB59018772F (intptr_t ___0_debugSettingsRef, int32_t ___1_debugGeography, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(T[])
inline void List_1_CopyTo_m87398D95BED8C0626A669D782ECE31DE73392BDC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_array, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*, const RuntimeMethod*))List_1_CopyTo_mDA4751F464411AB4C757C63C6EDBF4891BFD6891_gshared)(__this, ___0_array, method);
}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUSetDebugSettingsTestDeviceIdentifiers(System.IntPtr,System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetDebugSettingsTestDeviceIdentifiers_m19F3AEECF8B6CB1F8B5931E6ABBB5C2570564847 (intptr_t ___0_debugSettingsRef, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_testDeviceIDs, int32_t ___2_testDeviceIDLength, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUSetRequestParametersDebugSettings(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetRequestParametersDebugSettings_m710CF368AC20FCBF1FEB0EA5578136B32D51CB93 (intptr_t ___0_requestParametersRef, intptr_t ___1_debugSettingsRef, const RuntimeMethod* method) ;
// System.IntPtr GoogleMobileAds.Ump.iOS.ConsentInformationClient::get_ConsentInformationPtr()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ConsentInformationClient_get_ConsentInformationPtr_m67A4ED0E10DF4DB7B9E2A1643225177905DD06C5_inline (ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentInfoUpdateCallback__ctor_m5F3AD20929FE57E93270BCE0EFEADFAEA41812B3 (GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADURequestConsentInfoUpdate(System.IntPtr,System.IntPtr,GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADURequestConsentInfoUpdate_mD77603CF4CE1EB7438348E93A601A042274364F4 (intptr_t ___0_clientRef, intptr_t ___1_parameters, GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB* ___2_callback, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUResetConsentInformation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUResetConsentInformation_m23FCECCE4CACCE15CD5B5A307F2B404BF64D6D66 (intptr_t ___0_consentInfoRef, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 GoogleMobileAds.Ump.iOS.Externs::GADUGetConsentStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Externs_GADUGetConsentStatus_mD9905A66A5060741B894A9C2D7D00ECD9E36532D (intptr_t ___0_consentInfoRef, const RuntimeMethod* method) ;
// System.Boolean GoogleMobileAds.Ump.iOS.Externs::GADUIsConsentFormAvailable(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_GADUIsConsentFormAvailable_mF1F363401873F80C010E475B0E60685796DED593 (intptr_t ___0_consentInfoRef, const RuntimeMethod* method) ;
// GoogleMobileAds.Ump.iOS.ConsentInformationClient GoogleMobileAds.Ump.iOS.ConsentInformationClient::IntPtrToConsentInformationClient(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* ConsentInformationClient_IntPtrToConsentInformationClient_m7ADD9E4D86678379FB4E89C7BAB887E855609B5F (intptr_t ___0_clientRef, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient_Dispose_mC49216E7F4398541A5E8D83C9B08DE9DFACE48F9 (ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* __this, const RuntimeMethod* method) ;
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient__ctor_mA4272704F07B4B3CC88339FB36187A49C94ADF82 (ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* __this, const RuntimeMethod* method) ;
// GoogleMobileAds.Ump.iOS.ConsentFormClient GoogleMobileAds.Ump.iOS.ConsentFormClient::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* ConsentFormClient_get_Instance_mA3644D237BAED202A6035C3B04C15871D26E36F1_inline (const RuntimeMethod* method) ;
// GoogleMobileAds.Ump.iOS.ConsentInformationClient GoogleMobileAds.Ump.iOS.ConsentInformationClient::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* ConsentInformationClient_get_Instance_m4F33F30EFF31A02F7DCF81826BA7C4BCEE5A7A08_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GADUGetFormErrorCode(intptr_t);
IL2CPP_EXTERN_C char* DEFAULT_CALL GADUGetFormErrorMessage(intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUCreateRequestParameters();
IL2CPP_EXTERN_C void DEFAULT_CALL GADUSetRequestParametersTagForUnderAgeOfConsent(intptr_t, int32_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUCreateDebugSettings();
IL2CPP_EXTERN_C void DEFAULT_CALL GADUSetDebugSettingsDebugGeography(intptr_t, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL GADUSetDebugSettingsTestDeviceIdentifiers(intptr_t, char**, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL GADUSetRequestParametersDebugSettings(intptr_t, intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUCreateConsentInformation(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL GADUResetConsentInformation(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GADUGetConsentStatus(intptr_t);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL GADUIsConsentFormAvailable(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL GADURequestConsentInfoUpdate(intptr_t, intptr_t, Il2CppMethodPointer);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GADUCreateConsentForm(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL GADULoadConsentForm(intptr_t, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL GADUPresentConsentForm(intptr_t, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL GADURelease(intptr_t);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ConsentFormClient_ConsentFormLoadCompletionHandler_m3161FC8CDF3BDB16015D91FA7ED7035655DE5BFD(intptr_t ___0_clientRef, intptr_t ___1_errorRef)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ConsentFormClient_ConsentFormLoadCompletionHandler_m3161FC8CDF3BDB16015D91FA7ED7035655DE5BFD(___0_clientRef, ___1_errorRef, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ConsentFormClient_ConsentFormPresentCompletionHandler_m04F646ACFA0B3B5CDAC0554D1EFAC5EC039F765B(intptr_t ___0_clientRef, intptr_t ___1_errorRef)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ConsentFormClient_ConsentFormPresentCompletionHandler_m04F646ACFA0B3B5CDAC0554D1EFAC5EC039F765B(___0_clientRef, ___1_errorRef, NULL);

}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient__ctor_mC1EEA93DCAF7CE4FA1EC79FE00241D914A6B3AAE (ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0033;
		}
	}
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(__this, NULL);
		intptr_t L_2;
		L_2 = GCHandle_op_Explicit_m03DD8D9FB45D565431455A6EE5C30A87305EF73C_inline(L_1, NULL);
		__this->____consentFormClientPtr_2 = L_2;
		intptr_t L_3 = __this->____consentFormClientPtr_2;
		intptr_t L_4;
		L_4 = Externs_GADUCreateConsentForm_m4EBB46674010C2BDB73AC7D2D407C483D5664EE3(L_3, NULL);
		__this->____consentForm_1 = L_4;
	}

IL_0033:
	{
		return;
	}
}
// GoogleMobileAds.Ump.iOS.ConsentFormClient GoogleMobileAds.Ump.iOS.ConsentFormClient::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* ConsentFormClient_get_Instance_mA3644D237BAED202A6035C3B04C15871D26E36F1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* L_0 = ((ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::Load(System.Action,System.Action`1<GoogleMobileAds.Ump.Api.FormError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient_Load_m3940F0990769CAF8E68C10C4CEB00A75EB578812 (ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_onFormLoaded, Action_1_tB03D82616088D202ABD23F934CC2976A2ED530B4* ___1_onError, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_ConsentFormLoadCompletionHandler_m3161FC8CDF3BDB16015D91FA7ED7035655DE5BFD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_onFormLoaded;
		__this->____loadCompleteAction_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____loadCompleteAction_3), (void*)L_0);
		Action_1_tB03D82616088D202ABD23F934CC2976A2ED530B4* L_1 = ___1_onError;
		__this->____loadFailedAction_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____loadFailedAction_4), (void*)L_1);
		int32_t L_2;
		L_2 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_3 = __this->____consentForm_1;
		il2cpp_codegen_runtime_class_init_inline(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254* L_4 = ((ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_6;
		G_B2_0 = L_3;
		if (L_4)
		{
			G_B3_0 = L_3;
			goto IL_0037;
		}
	}
	{
		GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254* L_5 = (GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254*)il2cpp_codegen_object_new(GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		GADUConsentFormLoadCompletionHandler__ctor_m73C10AD0211F66C303676C205F697F25E4D00079(L_5, NULL, (intptr_t)((void*)ConsentFormClient_ConsentFormLoadCompletionHandler_m3161FC8CDF3BDB16015D91FA7ED7035655DE5BFD_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		((ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_6), (void*)L_5);
		G_B3_0 = G_B2_0;
	}

IL_0037:
	{
		il2cpp_codegen_runtime_class_init_inline(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254* L_6 = ((ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_6;
		Externs_GADULoadConsentForm_m6852D39910D8F09C3CD3EF0CA28B85CA5F0FB878(G_B3_0, L_6, NULL);
	}

IL_0041:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::Show(System.Action`1<GoogleMobileAds.Ump.Api.FormError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient_Show_m0027D3151786645885B08685CFDED4C8F549203B (ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* __this, Action_1_tB03D82616088D202ABD23F934CC2976A2ED530B4* ___0_onDismissed, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_ConsentFormPresentCompletionHandler_m04F646ACFA0B3B5CDAC0554D1EFAC5EC039F765B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	intptr_t G_B2_0;
	memset((&G_B2_0), 0, sizeof(G_B2_0));
	{
		Action_1_tB03D82616088D202ABD23F934CC2976A2ED530B4* L_0 = ___0_onDismissed;
		__this->____consentFormDismissedAction_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____consentFormDismissedAction_5), (void*)L_0);
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_003a;
		}
	}
	{
		intptr_t L_2 = __this->____consentForm_1;
		il2cpp_codegen_runtime_class_init_inline(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25* L_3 = ((ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_7;
		G_B2_0 = L_2;
		if (L_3)
		{
			G_B3_0 = L_2;
			goto IL_0030;
		}
	}
	{
		GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25* L_4 = (GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25*)il2cpp_codegen_object_new(GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		GADUConsentFormPresentCompletionHandler__ctor_mE8A485414387552E135CBFB0850AA971BA665F4D(L_4, NULL, (intptr_t)((void*)ConsentFormClient_ConsentFormPresentCompletionHandler_m04F646ACFA0B3B5CDAC0554D1EFAC5EC039F765B_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		((ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_7), (void*)L_4);
		G_B3_0 = G_B2_0;
	}

IL_0030:
	{
		il2cpp_codegen_runtime_class_init_inline(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25* L_5 = ((ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_7;
		Externs_GADUPresentConsentForm_mCC8114769B778D5CC8F449AFE2925ACEFC55C487(G_B3_0, L_5, NULL);
	}

IL_003a:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::ConsentFormLoadCompletionHandler(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient_ConsentFormLoadCompletionHandler_m3161FC8CDF3BDB16015D91FA7ED7035655DE5BFD (intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3296FB3BF3E142D4895B55FBC5FB54361B9207CA);
		s_Il2CppMethodInitialized = true;
	}
	ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		intptr_t L_0 = ___0_clientRef;
		il2cpp_codegen_runtime_class_init_inline(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* L_1;
		L_1 = ConsentFormClient_IntPtrToConsentFormClient_mB8BFD0B1074AFC85277F47ED61F7543E39D4C448(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = ___1_errorRef;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* L_5 = V_0;
		NullCheck(L_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = L_5->____loadCompleteAction_3;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* L_7 = V_0;
		NullCheck(L_7);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = L_7->____loadCompleteAction_3;
		NullCheck(L_8);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_8, NULL);
	}

IL_002d:
	{
		goto IL_0094;
	}

IL_0032:
	{
		ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* L_9 = V_0;
		NullCheck(L_9);
		Action_1_tB03D82616088D202ABD23F934CC2976A2ED530B4* L_10 = L_9->____loadFailedAction_4;
		if (!L_10)
		{
			goto IL_0094;
		}
	}
	{
		V_1 = 7;
		V_2 = _stringLiteral3296FB3BF3E142D4895B55FBC5FB54361B9207CA;
	}
	try
	{// begin try (depth: 1)
		intptr_t L_11 = ___1_errorRef;
		int32_t L_12;
		L_12 = Externs_GADUGetFormErrorCode_mCED0FCF2EFCF807A812A2698A1F928594B8B83AF(L_11, NULL);
		V_1 = L_12;
		intptr_t L_13 = ___1_errorRef;
		String_t* L_14;
		L_14 = Externs_GADUGetFormErrorMessage_mC85893CCE27D7CB289FD724D0AE4A65CFE3732CB(L_13, NULL);
		V_2 = L_14;
		goto IL_0082;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0058;
		}
		throw e;
	}

CATCH_0058:
	{// begin catch(System.EntryPointNotFoundException)
		EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743* L_15 = ((EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743*)IL2CPP_GET_ACTIVE_EXCEPTION(EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743*));;
		V_3 = L_15;
		MethodBase_t* L_16;
		L_16 = il2cpp_codegen_get_method_object(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentFormClient_ConsentFormLoadCompletionHandler_m3161FC8CDF3BDB16015D91FA7ED7035655DE5BFD_RuntimeMethod_var)));
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743* L_18 = V_3;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_18);
		String_t* L_20;
		L_20 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A42A54D7FD4D3A3A3F27FE6D9BA4765B168528A)), L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB3C01CC2E6DD25665EFC9D45FBFCDDB7EE3F0B1)), L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_20, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0082;
	}// end catch (depth: 1)

IL_0082:
	{
		ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* L_21 = V_0;
		NullCheck(L_21);
		Action_1_tB03D82616088D202ABD23F934CC2976A2ED530B4* L_22 = L_21->____loadFailedAction_4;
		int32_t L_23 = V_1;
		String_t* L_24 = V_2;
		FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026* L_25 = (FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026*)il2cpp_codegen_object_new(FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		FormError__ctor_m74D2F9BD01E242B45657155A11219192DF02A8A7(L_25, L_23, L_24, NULL);
		NullCheck(L_22);
		Action_1_Invoke_m3DEF207D7DDE949DDC2EC78FF96E9789029BAC51_inline(L_22, L_25, NULL);
	}

IL_0094:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::ConsentFormPresentCompletionHandler(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient_ConsentFormPresentCompletionHandler_m04F646ACFA0B3B5CDAC0554D1EFAC5EC039F765B (intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral981AE4478E71C4EC026A30E7892E7C4381F95DB9);
		s_Il2CppMethodInitialized = true;
	}
	ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* V_0 = NULL;
	FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		intptr_t L_0 = ___0_clientRef;
		il2cpp_codegen_runtime_class_init_inline(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* L_1;
		L_1 = ConsentFormClient_IntPtrToConsentFormClient_mB8BFD0B1074AFC85277F47ED61F7543E39D4C448(L_0, NULL);
		V_0 = L_1;
		ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* L_2 = V_0;
		NullCheck(L_2);
		Action_1_tB03D82616088D202ABD23F934CC2976A2ED530B4* L_3 = L_2->____consentFormDismissedAction_5;
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		V_1 = (FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026*)NULL;
		intptr_t L_4 = ___1_errorRef;
		intptr_t L_5 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_6;
		L_6 = IntPtr_op_Inequality_m90EFC9C4CAD9A33E309F2DDF98EE4E1DD253637B(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0074;
		}
	}
	{
		V_2 = 5;
		V_3 = _stringLiteral981AE4478E71C4EC026A30E7892E7C4381F95DB9;
	}
	try
	{// begin try (depth: 1)
		intptr_t L_7 = ___1_errorRef;
		int32_t L_8;
		L_8 = Externs_GADUGetFormErrorCode_mCED0FCF2EFCF807A812A2698A1F928594B8B83AF(L_7, NULL);
		V_2 = L_8;
		intptr_t L_9 = ___1_errorRef;
		String_t* L_10;
		L_10 = Externs_GADUGetFormErrorMessage_mC85893CCE27D7CB289FD724D0AE4A65CFE3732CB(L_9, NULL);
		V_3 = L_10;
		goto IL_006c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0040;
		}
		throw e;
	}

CATCH_0040:
	{// begin catch(System.EntryPointNotFoundException)
		EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743* L_11 = ((EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743*)IL2CPP_GET_ACTIVE_EXCEPTION(EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743*));;
		V_4 = L_11;
		MethodBase_t* L_12;
		L_12 = il2cpp_codegen_get_method_object(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentFormClient_ConsentFormPresentCompletionHandler_m04F646ACFA0B3B5CDAC0554D1EFAC5EC039F765B_RuntimeMethod_var)));
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_12);
		EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743* L_14 = V_4;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_14);
		String_t* L_16;
		L_16 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A42A54D7FD4D3A3A3F27FE6D9BA4765B168528A)), L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB3C01CC2E6DD25665EFC9D45FBFCDDB7EE3F0B1)), L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_16, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_006c;
	}// end catch (depth: 1)

IL_006c:
	{
		int32_t L_17 = V_2;
		String_t* L_18 = V_3;
		FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026* L_19 = (FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026*)il2cpp_codegen_object_new(FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		FormError__ctor_m74D2F9BD01E242B45657155A11219192DF02A8A7(L_19, L_17, L_18, NULL);
		V_1 = L_19;
	}

IL_0074:
	{
		ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* L_20 = V_0;
		NullCheck(L_20);
		Action_1_tB03D82616088D202ABD23F934CC2976A2ED530B4* L_21 = L_20->____consentFormDismissedAction_5;
		FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026* L_22 = V_1;
		NullCheck(L_21);
		Action_1_Invoke_m3DEF207D7DDE949DDC2EC78FF96E9789029BAC51_inline(L_21, L_22, NULL);
		return;
	}
}
// GoogleMobileAds.Ump.iOS.ConsentFormClient GoogleMobileAds.Ump.iOS.ConsentFormClient::IntPtrToConsentFormClient(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* ConsentFormClient_IntPtrToConsentFormClient_mB8BFD0B1074AFC85277F47ED61F7543E39D4C448 (intptr_t ___0_clientRef, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_clientRef;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_mA5F28206637454AD677BE13DF86C6152190B6F0F(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		return ((ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1*)IsInstClass((RuntimeObject*)L_2, ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var));
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient_Dispose_mAD8DB765B7A9C642BAEEAAE6980D4691C762343E (ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* __this, const RuntimeMethod* method) 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->____consentFormClientPtr_2;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_mA5F28206637454AD677BE13DF86C6152190B6F0F(L_0, NULL);
		V_0 = L_1;
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient_Finalize_m01D399787813BD345E4839C4C5CD5F0CB007D305 (ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			ConsentFormClient_Dispose_mAD8DB765B7A9C642BAEEAAE6980D4691C762343E(__this, NULL);
			goto IL_0012;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0012:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentFormClient__cctor_m68BC343BDCD3B60074410B4BE93C7BEB7413A768 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* L_0 = (ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1*)il2cpp_codegen_object_new(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConsentFormClient__ctor_mC1EEA93DCAF7CE4FA1EC79FE00241D914A6B3AAE(L_0, NULL);
		((ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var))->____instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var))->____instance_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GADUConsentFormLoadCompletionHandler_Invoke_m0ECD08D6196C89823EC5BD5D01FE9C2866750A80_Multicast(GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254* currentDelegate = reinterpret_cast<GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_clientRef, ___1_errorRef, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GADUConsentFormLoadCompletionHandler_Invoke_m0ECD08D6196C89823EC5BD5D01FE9C2866750A80_OpenInst(GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_clientRef, ___1_errorRef, method);
}
void GADUConsentFormLoadCompletionHandler_Invoke_m0ECD08D6196C89823EC5BD5D01FE9C2866750A80_OpenStatic(GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_clientRef, ___1_errorRef, method);
}
void GADUConsentFormLoadCompletionHandler_Invoke_m0ECD08D6196C89823EC5BD5D01FE9C2866750A80_OpenStaticInvoker(GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_clientRef, ___1_errorRef);
}
void GADUConsentFormLoadCompletionHandler_Invoke_m0ECD08D6196C89823EC5BD5D01FE9C2866750A80_ClosedStaticInvoker(GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_clientRef, ___1_errorRef);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254 (GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_clientRef, ___1_errorRef);

}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentFormLoadCompletionHandler__ctor_m73C10AD0211F66C303676C205F697F25E4D00079 (GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GADUConsentFormLoadCompletionHandler_Invoke_m0ECD08D6196C89823EC5BD5D01FE9C2866750A80_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GADUConsentFormLoadCompletionHandler_Invoke_m0ECD08D6196C89823EC5BD5D01FE9C2866750A80_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GADUConsentFormLoadCompletionHandler_Invoke_m0ECD08D6196C89823EC5BD5D01FE9C2866750A80_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&GADUConsentFormLoadCompletionHandler_Invoke_m0ECD08D6196C89823EC5BD5D01FE9C2866750A80_Multicast;
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentFormLoadCompletionHandler_Invoke_m0ECD08D6196C89823EC5BD5D01FE9C2866750A80 (GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_clientRef, ___1_errorRef, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUConsentFormLoadCompletionHandler_BeginInvoke_mBCFC7FF4A05C5187A1A001D5828887BBDADB9BFC (GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_clientRef);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_errorRef);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentFormLoadCompletionHandler_EndInvoke_m0DA7CFCFD6C5077706267B15467B4E6B054F0DAC (GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GADUConsentFormPresentCompletionHandler_Invoke_mC69F0A2FC468CF52B09BCF4F2CE84139FB3CB258_Multicast(GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25* currentDelegate = reinterpret_cast<GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_clientRef, ___1_errorRef, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GADUConsentFormPresentCompletionHandler_Invoke_mC69F0A2FC468CF52B09BCF4F2CE84139FB3CB258_OpenInst(GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_clientRef, ___1_errorRef, method);
}
void GADUConsentFormPresentCompletionHandler_Invoke_mC69F0A2FC468CF52B09BCF4F2CE84139FB3CB258_OpenStatic(GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_clientRef, ___1_errorRef, method);
}
void GADUConsentFormPresentCompletionHandler_Invoke_mC69F0A2FC468CF52B09BCF4F2CE84139FB3CB258_OpenStaticInvoker(GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_clientRef, ___1_errorRef);
}
void GADUConsentFormPresentCompletionHandler_Invoke_mC69F0A2FC468CF52B09BCF4F2CE84139FB3CB258_ClosedStaticInvoker(GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_clientRef, ___1_errorRef);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25 (GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_clientRef, ___1_errorRef);

}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentFormPresentCompletionHandler__ctor_mE8A485414387552E135CBFB0850AA971BA665F4D (GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GADUConsentFormPresentCompletionHandler_Invoke_mC69F0A2FC468CF52B09BCF4F2CE84139FB3CB258_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GADUConsentFormPresentCompletionHandler_Invoke_mC69F0A2FC468CF52B09BCF4F2CE84139FB3CB258_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GADUConsentFormPresentCompletionHandler_Invoke_mC69F0A2FC468CF52B09BCF4F2CE84139FB3CB258_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&GADUConsentFormPresentCompletionHandler_Invoke_mC69F0A2FC468CF52B09BCF4F2CE84139FB3CB258_Multicast;
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentFormPresentCompletionHandler_Invoke_mC69F0A2FC468CF52B09BCF4F2CE84139FB3CB258 (GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_clientRef, ___1_errorRef, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUConsentFormPresentCompletionHandler_BeginInvoke_mB22E9CC983737AF39D4E97169F02D170F1C23946 (GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_clientRef);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_errorRef);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentFormPresentCompletionHandler_EndInvoke_m5B9DBC2B5FA37CF0AE844A83E9AB13F77395EA3F (GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ConsentInformationClient_ConsentInfoUpdateCallback_m01A1B5982AE827C301F4BA2A0801A2A3E13577D6(intptr_t ___0_clientRef, intptr_t ___1_errorRef)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	ConsentInformationClient_ConsentInfoUpdateCallback_m01A1B5982AE827C301F4BA2A0801A2A3E13577D6(___0_clientRef, ___1_errorRef, NULL);

}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient__ctor_mA4272704F07B4B3CC88339FB36187A49C94ADF82 (ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0033;
		}
	}
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_Alloc_m845AB5ED62859B099C023F34C05BEAEDB4AFE27D(__this, NULL);
		intptr_t L_2;
		L_2 = GCHandle_op_Explicit_m03DD8D9FB45D565431455A6EE5C30A87305EF73C_inline(L_1, NULL);
		__this->____consentInformationClientPtr_1 = L_2;
		intptr_t L_3 = __this->____consentInformationClientPtr_1;
		intptr_t L_4;
		L_4 = Externs_GADUCreateConsentInformation_m40445E013F2C25A5030190929D07FA5204386C35(L_3, NULL);
		ConsentInformationClient_set_ConsentInformationPtr_mBA0AF74DDCD02983BCFADFA8907E4144332D7823(__this, L_4, NULL);
	}

IL_0033:
	{
		return;
	}
}
// System.IntPtr GoogleMobileAds.Ump.iOS.ConsentInformationClient::get_ConsentInformationPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ConsentInformationClient_get_ConsentInformationPtr_m67A4ED0E10DF4DB7B9E2A1643225177905DD06C5 (ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____consentInformationPtr_2;
		return L_0;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::set_ConsentInformationPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient_set_ConsentInformationPtr_mBA0AF74DDCD02983BCFADFA8907E4144332D7823 (ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* __this, intptr_t ___0_value, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____consentInformationPtr_2;
		Externs_GADURelease_mD645D7AE2BD9355B6F45F8E0F59FA4FA8BFF0100(L_0, NULL);
		intptr_t L_1 = ___0_value;
		__this->____consentInformationPtr_2 = L_1;
		return;
	}
}
// GoogleMobileAds.Ump.iOS.ConsentInformationClient GoogleMobileAds.Ump.iOS.ConsentInformationClient::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* ConsentInformationClient_get_Instance_m4F33F30EFF31A02F7DCF81826BA7C4BCEE5A7A08 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var);
		ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* L_0 = ((ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::Update(GoogleMobileAds.Ump.Api.ConsentRequestParameters,System.Action,System.Action`1<GoogleMobileAds.Ump.Api.FormError>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient_Update_mCD49A6432843EE1F3EC248A386B6E3768D564183 (ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* __this, ConsentRequestParameters_t34C1E8C04ED21B543DFE57708C303AABEA447516* ___0_request, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___1_onConsentInfoUpdateSuccessCallback, Action_1_tB03D82616088D202ABD23F934CC2976A2ED530B4* ___2_onConsentInfoUpdateFailureCallback, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentInformationClient_ConsentInfoUpdateCallback_m01A1B5982AE827C301F4BA2A0801A2A3E13577D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_CopyTo_m87398D95BED8C0626A669D782ECE31DE73392BDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	intptr_t G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	intptr_t G_B5_1;
	memset((&G_B5_1), 0, sizeof(G_B5_1));
	intptr_t G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	intptr_t G_B4_1;
	memset((&G_B4_1), 0, sizeof(G_B4_1));
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___1_onConsentInfoUpdateSuccessCallback;
		__this->____consentInfoUpdateSuccessAction_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____consentInfoUpdateSuccessAction_3), (void*)L_0);
		Action_1_tB03D82616088D202ABD23F934CC2976A2ED530B4* L_1 = ___2_onConsentInfoUpdateFailureCallback;
		__this->____consentInfoUpdateFailureAction_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____consentInfoUpdateFailureAction_4), (void*)L_1);
		int32_t L_2;
		L_2 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)8))))
		{
			goto IL_00aa;
		}
	}
	{
		intptr_t L_3;
		L_3 = Externs_GADUCreateRequestParameters_mA0DB2EA8850345665565D7C28D5EB06F25DCD9B5(NULL);
		V_0 = L_3;
		intptr_t L_4 = V_0;
		ConsentRequestParameters_t34C1E8C04ED21B543DFE57708C303AABEA447516* L_5 = ___0_request;
		NullCheck(L_5);
		bool L_6 = L_5->___TagForUnderAgeOfConsent_0;
		Externs_GADUSetRequestParametersTagForUnderAgeOfConsent_m21898F9CEC922FDE18A9AF55842C52E9C3755F55(L_4, L_6, NULL);
		intptr_t L_7;
		L_7 = Externs_GADUCreateDebugSettings_mB7A04EAAA7CAEB0DB94B9054B8F69389C2A1D457(NULL);
		V_1 = L_7;
		intptr_t L_8 = V_1;
		ConsentRequestParameters_t34C1E8C04ED21B543DFE57708C303AABEA447516* L_9 = ___0_request;
		NullCheck(L_9);
		ConsentDebugSettings_t21BCD70B1E4DB762E04807E88E78285CC51370C6* L_10 = L_9->___ConsentDebugSettings_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->___DebugGeography_0;
		Externs_GADUSetDebugSettingsDebugGeography_m724BFF876907DF87B9AA06D0BFB87AB59018772F(L_8, L_11, NULL);
		ConsentRequestParameters_t34C1E8C04ED21B543DFE57708C303AABEA447516* L_12 = ___0_request;
		NullCheck(L_12);
		ConsentDebugSettings_t21BCD70B1E4DB762E04807E88E78285CC51370C6* L_13 = L_12->___ConsentDebugSettings_1;
		NullCheck(L_13);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_14 = L_13->___TestDeviceHashedIds_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_inline(L_14, List_1_get_Count_mB63183A9151F4345A9DD444A7CBE0D6E03F77C7C_RuntimeMethod_var);
		V_2 = L_15;
		int32_t L_16 = V_2;
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_17 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_17);
		V_3 = L_18;
		ConsentRequestParameters_t34C1E8C04ED21B543DFE57708C303AABEA447516* L_19 = ___0_request;
		NullCheck(L_19);
		ConsentDebugSettings_t21BCD70B1E4DB762E04807E88E78285CC51370C6* L_20 = L_19->___ConsentDebugSettings_1;
		NullCheck(L_20);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_21 = L_20->___TestDeviceHashedIds_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_3;
		NullCheck(L_21);
		List_1_CopyTo_m87398D95BED8C0626A669D782ECE31DE73392BDC(L_21, L_22, List_1_CopyTo_m87398D95BED8C0626A669D782ECE31DE73392BDC_RuntimeMethod_var);
		intptr_t L_23 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = V_3;
		int32_t L_25 = V_2;
		Externs_GADUSetDebugSettingsTestDeviceIdentifiers_m19F3AEECF8B6CB1F8B5931E6ABBB5C2570564847(L_23, L_24, L_25, NULL);
	}

IL_007a:
	{
		intptr_t L_26 = V_0;
		intptr_t L_27 = V_1;
		Externs_GADUSetRequestParametersDebugSettings_m710CF368AC20FCBF1FEB0EA5578136B32D51CB93(L_26, L_27, NULL);
		intptr_t L_28;
		L_28 = ConsentInformationClient_get_ConsentInformationPtr_m67A4ED0E10DF4DB7B9E2A1643225177905DD06C5_inline(__this, NULL);
		intptr_t L_29 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var);
		GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB* L_30 = ((ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_5;
		G_B4_0 = L_29;
		G_B4_1 = L_28;
		if (L_30)
		{
			G_B5_0 = L_29;
			G_B5_1 = L_28;
			goto IL_00a0;
		}
	}
	{
		GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB* L_31 = (GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB*)il2cpp_codegen_object_new(GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		GADUConsentInfoUpdateCallback__ctor_m5F3AD20929FE57E93270BCE0EFEADFAEA41812B3(L_31, NULL, (intptr_t)((void*)ConsentInformationClient_ConsentInfoUpdateCallback_m01A1B5982AE827C301F4BA2A0801A2A3E13577D6_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var);
		((ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_5 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&((ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_5), (void*)L_31);
		G_B5_0 = G_B4_0;
		G_B5_1 = G_B4_1;
	}

IL_00a0:
	{
		il2cpp_codegen_runtime_class_init_inline(ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var);
		GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB* L_32 = ((ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_5;
		Externs_GADURequestConsentInfoUpdate_mD77603CF4CE1EB7438348E93A601A042274364F4(G_B5_1, G_B5_0, L_32, NULL);
	}

IL_00aa:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient_Reset_m33D05624221D6CB935EE36964C4BFFB99873C5D3 (ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_001b;
		}
	}
	{
		intptr_t L_1;
		L_1 = ConsentInformationClient_get_ConsentInformationPtr_m67A4ED0E10DF4DB7B9E2A1643225177905DD06C5_inline(__this, NULL);
		Externs_GADUResetConsentInformation_m23FCECCE4CACCE15CD5B5A307F2B404BF64D6D66(L_1, NULL);
		goto IL_003a;
	}

IL_001b:
	{
		MethodBase_t* L_2;
		L_2 = il2cpp_codegen_get_method_object(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentInformationClient_Reset_m33D05624221D6CB935EE36964C4BFFB99873C5D3_RuntimeMethod_var)));
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A42A54D7FD4D3A3A3F27FE6D9BA4765B168528A)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECB59AE03B3FE9DF44D788977626C01307347E50)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentInformationClient_Reset_m33D05624221D6CB935EE36964C4BFFB99873C5D3_RuntimeMethod_var)));
	}

IL_003a:
	{
		return;
	}
}
// System.Int32 GoogleMobileAds.Ump.iOS.ConsentInformationClient::GetConsentStatus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ConsentInformationClient_GetConsentStatus_mA0ED9529AE12E1AC62492A26304BEF9F3A5DF492 (ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0038;
		}
	}
	{
		intptr_t L_1;
		L_1 = ConsentInformationClient_get_ConsentInformationPtr_m67A4ED0E10DF4DB7B9E2A1643225177905DD06C5_inline(__this, NULL);
		int32_t L_2;
		L_2 = Externs_GADUGetConsentStatus_mD9905A66A5060741B894A9C2D7D00ECD9E36532D(L_1, NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_0034;
			}
			case 3:
			{
				goto IL_0036;
			}
		}
	}
	{
		goto IL_0036;
	}

IL_0032:
	{
		return 2;
	}

IL_0034:
	{
		return 1;
	}

IL_0036:
	{
		int32_t L_4 = V_0;
		return L_4;
	}

IL_0038:
	{
		MethodBase_t* L_5;
		L_5 = il2cpp_codegen_get_method_object(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentInformationClient_GetConsentStatus_mA0ED9529AE12E1AC62492A26304BEF9F3A5DF492_RuntimeMethod_var)));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_5);
		String_t* L_7;
		L_7 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A42A54D7FD4D3A3A3F27FE6D9BA4765B168528A)), L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECB59AE03B3FE9DF44D788977626C01307347E50)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_8 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_8, L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentInformationClient_GetConsentStatus_mA0ED9529AE12E1AC62492A26304BEF9F3A5DF492_RuntimeMethod_var)));
	}
}
// System.Boolean GoogleMobileAds.Ump.iOS.ConsentInformationClient::IsConsentFormAvailable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConsentInformationClient_IsConsentFormAvailable_mD4D908AC971567F63970100C3A476D67C4FF4385 (ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0017;
		}
	}
	{
		intptr_t L_1;
		L_1 = ConsentInformationClient_get_ConsentInformationPtr_m67A4ED0E10DF4DB7B9E2A1643225177905DD06C5_inline(__this, NULL);
		bool L_2;
		L_2 = Externs_GADUIsConsentFormAvailable_mF1F363401873F80C010E475B0E60685796DED593(L_1, NULL);
		return L_2;
	}

IL_0017:
	{
		MethodBase_t* L_3;
		L_3 = il2cpp_codegen_get_method_object(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentInformationClient_IsConsentFormAvailable_mD4D908AC971567F63970100C3A476D67C4FF4385_RuntimeMethod_var)));
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_3);
		String_t* L_5;
		L_5 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A42A54D7FD4D3A3A3F27FE6D9BA4765B168528A)), L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECB59AE03B3FE9DF44D788977626C01307347E50)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_6 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentInformationClient_IsConsentFormAvailable_mD4D908AC971567F63970100C3A476D67C4FF4385_RuntimeMethod_var)));
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::ConsentInfoUpdateCallback(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient_ConsentInfoUpdateCallback_m01A1B5982AE827C301F4BA2A0801A2A3E13577D6 (intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral981AE4478E71C4EC026A30E7892E7C4381F95DB9);
		s_Il2CppMethodInitialized = true;
	}
	ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		intptr_t L_0 = ___0_clientRef;
		il2cpp_codegen_runtime_class_init_inline(ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var);
		ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* L_1;
		L_1 = ConsentInformationClient_IntPtrToConsentInformationClient_m7ADD9E4D86678379FB4E89C7BAB887E855609B5F(L_0, NULL);
		V_0 = L_1;
		intptr_t L_2 = ___1_errorRef;
		intptr_t L_3 = ((IntPtr_t_StaticFields*)il2cpp_codegen_static_fields_for(IntPtr_t_il2cpp_TypeInfo_var))->___Zero_1;
		bool L_4;
		L_4 = IntPtr_op_Equality_m7D9CDCDE9DC2A0C2C614633F4921E90187FAB271(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* L_5 = V_0;
		NullCheck(L_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = L_5->____consentInfoUpdateSuccessAction_3;
		if (!L_6)
		{
			goto IL_002d;
		}
	}
	{
		ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* L_7 = V_0;
		NullCheck(L_7);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8 = L_7->____consentInfoUpdateSuccessAction_3;
		NullCheck(L_8);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_8, NULL);
	}

IL_002d:
	{
		goto IL_0094;
	}

IL_0032:
	{
		ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* L_9 = V_0;
		NullCheck(L_9);
		Action_1_tB03D82616088D202ABD23F934CC2976A2ED530B4* L_10 = L_9->____consentInfoUpdateFailureAction_4;
		if (!L_10)
		{
			goto IL_0094;
		}
	}
	{
		V_1 = 5;
		V_2 = _stringLiteral981AE4478E71C4EC026A30E7892E7C4381F95DB9;
	}
	try
	{// begin try (depth: 1)
		intptr_t L_11 = ___1_errorRef;
		int32_t L_12;
		L_12 = Externs_GADUGetFormErrorCode_mCED0FCF2EFCF807A812A2698A1F928594B8B83AF(L_11, NULL);
		V_1 = L_12;
		intptr_t L_13 = ___1_errorRef;
		String_t* L_14;
		L_14 = Externs_GADUGetFormErrorMessage_mC85893CCE27D7CB289FD724D0AE4A65CFE3732CB(L_13, NULL);
		V_2 = L_14;
		goto IL_0082;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0058;
		}
		throw e;
	}

CATCH_0058:
	{// begin catch(System.EntryPointNotFoundException)
		EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743* L_15 = ((EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743*)IL2CPP_GET_ACTIVE_EXCEPTION(EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743*));;
		V_3 = L_15;
		MethodBase_t* L_16;
		L_16 = il2cpp_codegen_get_method_object(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConsentInformationClient_ConsentInfoUpdateCallback_m01A1B5982AE827C301F4BA2A0801A2A3E13577D6_RuntimeMethod_var)));
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_16);
		EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743* L_18 = V_3;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_18);
		String_t* L_20;
		L_20 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A42A54D7FD4D3A3A3F27FE6D9BA4765B168528A)), L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAB3C01CC2E6DD25665EFC9D45FBFCDDB7EE3F0B1)), L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_20, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0082;
	}// end catch (depth: 1)

IL_0082:
	{
		ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* L_21 = V_0;
		NullCheck(L_21);
		Action_1_tB03D82616088D202ABD23F934CC2976A2ED530B4* L_22 = L_21->____consentInfoUpdateFailureAction_4;
		int32_t L_23 = V_1;
		String_t* L_24 = V_2;
		FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026* L_25 = (FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026*)il2cpp_codegen_object_new(FormError_t925BBA051FDAC8CC3DECB9E5511864E8ED383026_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		FormError__ctor_m74D2F9BD01E242B45657155A11219192DF02A8A7(L_25, L_23, L_24, NULL);
		NullCheck(L_22);
		Action_1_Invoke_m3DEF207D7DDE949DDC2EC78FF96E9789029BAC51_inline(L_22, L_25, NULL);
	}

IL_0094:
	{
		return;
	}
}
// GoogleMobileAds.Ump.iOS.ConsentInformationClient GoogleMobileAds.Ump.iOS.ConsentInformationClient::IntPtrToConsentInformationClient(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* ConsentInformationClient_IntPtrToConsentInformationClient_m7ADD9E4D86678379FB4E89C7BAB887E855609B5F (intptr_t ___0_clientRef, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___0_clientRef;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_mA5F28206637454AD677BE13DF86C6152190B6F0F(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		return ((ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1*)IsInstClass((RuntimeObject*)L_2, ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var));
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient_Dispose_mC49216E7F4398541A5E8D83C9B08DE9DFACE48F9 (ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* __this, const RuntimeMethod* method) 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = __this->____consentInformationClientPtr_1;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_op_Explicit_mA5F28206637454AD677BE13DF86C6152190B6F0F(L_0, NULL);
		V_0 = L_1;
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		return;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient_Finalize_m34691F9551F3D7E1589E9C71FBD5F8B5ADDF1D30 (ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_000b:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			ConsentInformationClient_Dispose_mC49216E7F4398541A5E8D83C9B08DE9DFACE48F9(__this, NULL);
			goto IL_0012;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0012:
	{
		return;
	}
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConsentInformationClient__cctor_mD8CC9E5335DC768DEEE2A843907ABE64A51EC3B7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* L_0 = (ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1*)il2cpp_codegen_object_new(ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConsentInformationClient__ctor_mA4272704F07B4B3CC88339FB36187A49C94ADF82(L_0, NULL);
		((ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var))->____instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var))->____instance_0), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void GADUConsentInfoUpdateCallback_Invoke_m2F8DB1303E06B75C396BA37D288E6E32BEF4E138_Multicast(GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB* currentDelegate = reinterpret_cast<GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_clientRef, ___1_errorRef, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void GADUConsentInfoUpdateCallback_Invoke_m2F8DB1303E06B75C396BA37D288E6E32BEF4E138_OpenInst(GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_clientRef, ___1_errorRef, method);
}
void GADUConsentInfoUpdateCallback_Invoke_m2F8DB1303E06B75C396BA37D288E6E32BEF4E138_OpenStatic(GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_clientRef, ___1_errorRef, method);
}
void GADUConsentInfoUpdateCallback_Invoke_m2F8DB1303E06B75C396BA37D288E6E32BEF4E138_OpenStaticInvoker(GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method)
{
	InvokerActionInvoker2< intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, ___0_clientRef, ___1_errorRef);
}
void GADUConsentInfoUpdateCallback_Invoke_m2F8DB1303E06B75C396BA37D288E6E32BEF4E138_ClosedStaticInvoker(GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, intptr_t, intptr_t >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_clientRef, ___1_errorRef);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB (GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc(___0_clientRef, ___1_errorRef);

}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentInfoUpdateCallback__ctor_m5F3AD20929FE57E93270BCE0EFEADFAEA41812B3 (GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GADUConsentInfoUpdateCallback_Invoke_m2F8DB1303E06B75C396BA37D288E6E32BEF4E138_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&GADUConsentInfoUpdateCallback_Invoke_m2F8DB1303E06B75C396BA37D288E6E32BEF4E138_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&GADUConsentInfoUpdateCallback_Invoke_m2F8DB1303E06B75C396BA37D288E6E32BEF4E138_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = __this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = __this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&GADUConsentInfoUpdateCallback_Invoke_m2F8DB1303E06B75C396BA37D288E6E32BEF4E138_Multicast;
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback::Invoke(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentInfoUpdateCallback_Invoke_m2F8DB1303E06B75C396BA37D288E6E32BEF4E138 (GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_clientRef, ___1_errorRef, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback::BeginInvoke(System.IntPtr,System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GADUConsentInfoUpdateCallback_BeginInvoke_m5C631FC2C39183EA8FB01FFA9A61677A77134878 (GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB* __this, intptr_t ___0_clientRef, intptr_t ___1_errorRef, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___2_callback, RuntimeObject* ___3_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IntPtr_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___0_clientRef);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___1_errorRef);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___2_callback, (RuntimeObject*)___3_object);
}
// System.Void GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GADUConsentInfoUpdateCallback_EndInvoke_mF0918A41C381886B02D7750CB93B160CD6853198 (GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Ump.iOS.Externs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs__ctor_mD45431FDBE09B3540B3F0270F5169AFBA758DE66 (Externs_t8C1E08109EC604AF48C9B439F139F4B64E537504* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 GoogleMobileAds.Ump.iOS.Externs::GADUGetFormErrorCode(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Externs_GADUGetFormErrorCode_mCED0FCF2EFCF807A812A2698A1F928594B8B83AF (intptr_t ___0_error, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GADUGetFormErrorCode)(___0_error);

	return returnValue;
}
// System.String GoogleMobileAds.Ump.iOS.Externs::GADUGetFormErrorMessage(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Externs_GADUGetFormErrorMessage_mC85893CCE27D7CB289FD724D0AE4A65CFE3732CB (intptr_t ___0_error, const RuntimeMethod* method) 
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(GADUGetFormErrorMessage)(___0_error);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr GoogleMobileAds.Ump.iOS.Externs::GADUCreateRequestParameters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateRequestParameters_mA0DB2EA8850345665565D7C28D5EB06F25DCD9B5 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUCreateRequestParameters)();

	return returnValue;
}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUSetRequestParametersTagForUnderAgeOfConsent(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetRequestParametersTagForUnderAgeOfConsent_m21898F9CEC922FDE18A9AF55842C52E9C3755F55 (intptr_t ___0_requestParametersRef, bool ___1_tagForUnderAgeOfConsent, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADUSetRequestParametersTagForUnderAgeOfConsent)(___0_requestParametersRef, static_cast<int32_t>(___1_tagForUnderAgeOfConsent));

}
// System.IntPtr GoogleMobileAds.Ump.iOS.Externs::GADUCreateDebugSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateDebugSettings_mB7A04EAAA7CAEB0DB94B9054B8F69389C2A1D457 (const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUCreateDebugSettings)();

	return returnValue;
}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUSetDebugSettingsDebugGeography(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetDebugSettingsDebugGeography_m724BFF876907DF87B9AA06D0BFB87AB59018772F (intptr_t ___0_debugSettingsRef, int32_t ___1_debugGeography, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADUSetDebugSettingsDebugGeography)(___0_debugSettingsRef, ___1_debugGeography);

}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUSetDebugSettingsTestDeviceIdentifiers(System.IntPtr,System.String[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetDebugSettingsTestDeviceIdentifiers_m19F3AEECF8B6CB1F8B5931E6ABBB5C2570564847 (intptr_t ___0_debugSettingsRef, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___1_testDeviceIDs, int32_t ___2_testDeviceIDLength, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, char**, int32_t);

	// Marshaling of parameter '___1_testDeviceIDs' to native representation
	char** ____1_testDeviceIDs_marshaled = NULL;
	if (___1_testDeviceIDs != NULL)
	{
		il2cpp_array_size_t ____1_testDeviceIDs_Length = (___1_testDeviceIDs)->max_length;
		____1_testDeviceIDs_marshaled = il2cpp_codegen_marshal_allocate_array<char*>(____1_testDeviceIDs_Length + 1);
		(____1_testDeviceIDs_marshaled)[____1_testDeviceIDs_Length] = NULL;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____1_testDeviceIDs_Length); i++)
		{
			(____1_testDeviceIDs_marshaled)[i] = il2cpp_codegen_marshal_string((___1_testDeviceIDs)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		____1_testDeviceIDs_marshaled = NULL;
	}

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADUSetDebugSettingsTestDeviceIdentifiers)(___0_debugSettingsRef, ____1_testDeviceIDs_marshaled, ___2_testDeviceIDLength);

	// Marshaling cleanup of parameter '___1_testDeviceIDs' native representation
	if (____1_testDeviceIDs_marshaled != NULL)
	{
		const il2cpp_array_size_t ____1_testDeviceIDs_marshaled_CleanupLoopCount = (___1_testDeviceIDs != NULL) ? (___1_testDeviceIDs)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____1_testDeviceIDs_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free((____1_testDeviceIDs_marshaled)[i]);
			(____1_testDeviceIDs_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____1_testDeviceIDs_marshaled);
		____1_testDeviceIDs_marshaled = NULL;
	}

}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUSetRequestParametersDebugSettings(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUSetRequestParametersDebugSettings_m710CF368AC20FCBF1FEB0EA5578136B32D51CB93 (intptr_t ___0_requestParametersRef, intptr_t ___1_debugSettingsRef, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADUSetRequestParametersDebugSettings)(___0_requestParametersRef, ___1_debugSettingsRef);

}
// System.IntPtr GoogleMobileAds.Ump.iOS.Externs::GADUCreateConsentInformation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateConsentInformation_m40445E013F2C25A5030190929D07FA5204386C35 (intptr_t ___0_clientRef, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUCreateConsentInformation)(___0_clientRef);

	return returnValue;
}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUResetConsentInformation(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUResetConsentInformation_m23FCECCE4CACCE15CD5B5A307F2B404BF64D6D66 (intptr_t ___0_consentInfoRef, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADUResetConsentInformation)(___0_consentInfoRef);

}
// System.Int32 GoogleMobileAds.Ump.iOS.Externs::GADUGetConsentStatus(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Externs_GADUGetConsentStatus_mD9905A66A5060741B894A9C2D7D00ECD9E36532D (intptr_t ___0_consentInfoRef, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GADUGetConsentStatus)(___0_consentInfoRef);

	return returnValue;
}
// System.Boolean GoogleMobileAds.Ump.iOS.Externs::GADUIsConsentFormAvailable(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Externs_GADUIsConsentFormAvailable_mF1F363401873F80C010E475B0E60685796DED593 (intptr_t ___0_consentInfoRef, const RuntimeMethod* method) 
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(GADUIsConsentFormAvailable)(___0_consentInfoRef);

	return static_cast<bool>(returnValue);
}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADURequestConsentInfoUpdate(System.IntPtr,System.IntPtr,GoogleMobileAds.Ump.iOS.ConsentInformationClient/GADUConsentInfoUpdateCallback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADURequestConsentInfoUpdate_mD77603CF4CE1EB7438348E93A601A042274364F4 (intptr_t ___0_clientRef, intptr_t ___1_parameters, GADUConsentInfoUpdateCallback_t3F5F5E587ACC5BAF163FADD1269401A40163AEDB* ___2_callback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, intptr_t, Il2CppMethodPointer);

	// Marshaling of parameter '___2_callback' to native representation
	Il2CppMethodPointer ____2_callback_marshaled = NULL;
	____2_callback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___2_callback));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADURequestConsentInfoUpdate)(___0_clientRef, ___1_parameters, ____2_callback_marshaled);

}
// System.IntPtr GoogleMobileAds.Ump.iOS.Externs::GADUCreateConsentForm(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Externs_GADUCreateConsentForm_m4EBB46674010C2BDB73AC7D2D407C483D5664EE3 (intptr_t ___0_clientRef, const RuntimeMethod* method) 
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GADUCreateConsentForm)(___0_clientRef);

	return returnValue;
}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADULoadConsentForm(System.IntPtr,GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormLoadCompletionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADULoadConsentForm_m6852D39910D8F09C3CD3EF0CA28B85CA5F0FB878 (intptr_t ___0_formRef, GADUConsentFormLoadCompletionHandler_tCEDA61B1731AA6292F53FF26EAEFD5960A4E3254* ___1_consentFormLoadCallback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);

	// Marshaling of parameter '___1_consentFormLoadCallback' to native representation
	Il2CppMethodPointer ____1_consentFormLoadCallback_marshaled = NULL;
	____1_consentFormLoadCallback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_consentFormLoadCallback));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADULoadConsentForm)(___0_formRef, ____1_consentFormLoadCallback_marshaled);

}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADUPresentConsentForm(System.IntPtr,GoogleMobileAds.Ump.iOS.ConsentFormClient/GADUConsentFormPresentCompletionHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADUPresentConsentForm_mCC8114769B778D5CC8F449AFE2925ACEFC55C487 (intptr_t ___0_formRef, GADUConsentFormPresentCompletionHandler_t7BE8E6E55FBFBD76CBAA12588EEBE1B796442E25* ___1_consentFormPresentCallback, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, Il2CppMethodPointer);

	// Marshaling of parameter '___1_consentFormPresentCallback' to native representation
	Il2CppMethodPointer ____1_consentFormPresentCallback_marshaled = NULL;
	____1_consentFormPresentCallback_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___1_consentFormPresentCallback));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADUPresentConsentForm)(___0_formRef, ____1_consentFormPresentCallback_marshaled);

}
// System.Void GoogleMobileAds.Ump.iOS.Externs::GADURelease(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Externs_GADURelease_mD645D7AE2BD9355B6F45F8E0F59FA4FA8BFF0100 (intptr_t ___0_obj, const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GADURelease)(___0_obj);

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void GoogleMobileAds.Ump.iOS.UmpClientFactory::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UmpClientFactory__ctor_m5C0430D964888036FFE3EFEEB4BFEF01975F8C01 (UmpClientFactory_t419C0174AA6B63B15489EF309508540C1D78CF18* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// GoogleMobileAds.Ump.Common.IConsentFormClient GoogleMobileAds.Ump.iOS.UmpClientFactory::ConsentFormClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UmpClientFactory_ConsentFormClient_mADABD934A32673E760D2B45A4B246DE52D3F01A9 (UmpClientFactory_t419C0174AA6B63B15489EF309508540C1D78CF18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0011;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* L_1;
		L_1 = ConsentFormClient_get_Instance_mA3644D237BAED202A6035C3B04C15871D26E36F1_inline(NULL);
		return L_1;
	}

IL_0011:
	{
		MethodBase_t* L_2;
		L_2 = il2cpp_codegen_get_method_object(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UmpClientFactory_ConsentFormClient_mADABD934A32673E760D2B45A4B246DE52D3F01A9_RuntimeMethod_var)));
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A42A54D7FD4D3A3A3F27FE6D9BA4765B168528A)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECB59AE03B3FE9DF44D788977626C01307347E50)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UmpClientFactory_ConsentFormClient_mADABD934A32673E760D2B45A4B246DE52D3F01A9_RuntimeMethod_var)));
	}
}
// GoogleMobileAds.Ump.Common.IConsentInformationClient GoogleMobileAds.Ump.iOS.UmpClientFactory::ConsentInformationClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UmpClientFactory_ConsentInformationClient_mC8BCFC29B4D19B11F8AE4E1AAE25C940CDCDAFBA (UmpClientFactory_t419C0174AA6B63B15489EF309508540C1D78CF18* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)8))))
		{
			goto IL_0011;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var);
		ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* L_1;
		L_1 = ConsentInformationClient_get_Instance_m4F33F30EFF31A02F7DCF81826BA7C4BCEE5A7A08_inline(NULL);
		return L_1;
	}

IL_0011:
	{
		MethodBase_t* L_2;
		L_2 = il2cpp_codegen_get_method_object(((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UmpClientFactory_ConsentInformationClient_mC8BCFC29B4D19B11F8AE4E1AAE25C940CDCDAFBA_RuntimeMethod_var)));
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A42A54D7FD4D3A3A3F27FE6D9BA4765B168528A)), L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECB59AE03B3FE9DF44D788977626C01307347E50)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, L_4, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UmpClientFactory_ConsentInformationClient_mC8BCFC29B4D19B11F8AE4E1AAE25C940CDCDAFBA_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t GCHandle_op_Explicit_m03DD8D9FB45D565431455A6EE5C30A87305EF73C_inline (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___0_value, const RuntimeMethod* method) 
{
	{
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_0 = ___0_value;
		intptr_t L_1 = L_0.___handle_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t ConsentInformationClient_get_ConsentInformationPtr_m67A4ED0E10DF4DB7B9E2A1643225177905DD06C5_inline (ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->____consentInformationPtr_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* ConsentFormClient_get_Instance_mA3644D237BAED202A6035C3B04C15871D26E36F1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var);
		ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1* L_0 = ((ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentFormClient_tBEC2D325BC9255F78BF2FB9DD0EBFA8DC8A0B7E1_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* ConsentInformationClient_get_Instance_m4F33F30EFF31A02F7DCF81826BA7C4BCEE5A7A08_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var);
		ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1* L_0 = ((ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_StaticFields*)il2cpp_codegen_static_fields_for(ConsentInformationClient_tA72DF61A2E613C9DC9DE3111E8D5AC7672A23FB1_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_2;
		return L_0;
	}
}
