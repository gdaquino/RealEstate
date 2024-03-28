#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,HutongGames.PlayMaker.NamedVariable>
struct Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_t9BFC4EA32B04B96A5BB13A056B7E299ADC431143;
// System.Collections.Generic.IEnumerable`1<HutongGames.PlayMaker.NamedVariable>
struct IEnumerable_1_tFF5412B0FE6BF6FE9663CB3CE98169F1A42396FA;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,HutongGames.PlayMaker.NamedVariable>
struct KeyCollection_t093E95D55B06F1B78138C9C5BEAB443A0AB60183;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Type>
struct KeyCollection_t0E4390205378461F38BE857216C35DA687D245FA;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4;
// System.Collections.Generic.List`1<HutongGames.PlayMaker.NamedVariable>
struct List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.Queue`1<HutongGames.Extensions.TextureExtensions/Point>
struct Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,HutongGames.PlayMaker.NamedVariable>
struct ValueCollection_tFEBB089031DDCBDE1CD782E4772D62388CCE3D34;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Type>
struct ValueCollection_tA14BD0EE42AEA7EBFF2E10776A87B14C678C2E11;
// System.Collections.Generic.Dictionary`2/Entry<System.String,HutongGames.PlayMaker.NamedVariable>[]
struct EntryU5BU5D_t120E82F45AC1096A1D59D04F685AE8DDDF271A20;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Type>[]
struct EntryU5BU5D_t544267CEF10C325101E064C4EC137C5A1ADC3D92;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
// HutongGames.PlayMaker.FsmArray[]
struct FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F;
// HutongGames.PlayMaker.FsmBool[]
struct FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26;
// HutongGames.PlayMaker.FsmColor[]
struct FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD;
// HutongGames.PlayMaker.FsmEnum[]
struct FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6;
// HutongGames.PlayMaker.FsmFloat[]
struct FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D;
// HutongGames.PlayMaker.FsmGameObject[]
struct FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999;
// HutongGames.PlayMaker.FsmInt[]
struct FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A;
// HutongGames.PlayMaker.FsmMaterial[]
struct FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422;
// HutongGames.PlayMaker.FsmObject[]
struct FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F;
// HutongGames.PlayMaker.FsmQuaternion[]
struct FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F;
// HutongGames.PlayMaker.FsmRect[]
struct FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636;
// HutongGames.PlayMaker.FsmString[]
struct FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A;
// HutongGames.PlayMaker.FsmTexture[]
struct FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61;
// HutongGames.PlayMaker.FsmVector2[]
struct FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F;
// HutongGames.PlayMaker.FsmVector3[]
struct FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
// HutongGames.PlayMaker.NamedVariable[]
struct NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.Object[]
struct ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A;
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// HutongGames.Extensions.TextureExtensions/Point[]
struct PointU5BU5D_tC75267545C70B385FE419129D9708C75AE1A0DCB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// HutongGames.PlayMaker.Fsm
struct Fsm_t5EC5E967A5030D310E25F4B91CC48BD5CE67BABB;
// HutongGames.PlayMaker.FsmArray
struct FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082;
// HutongGames.PlayMaker.FsmBool
struct FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D;
// HutongGames.PlayMaker.FsmColor
struct FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242;
// HutongGames.PlayMaker.FsmEnum
struct FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7;
// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t99C088B49A35579867184120212107B5FB177420;
// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68;
// HutongGames.PlayMaker.FsmInt
struct FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667;
// HutongGames.PlayMaker.FsmMaterial
struct FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564;
// HutongGames.PlayMaker.FsmObject
struct FsmObject_t69096525269982576D57D563C4659F408D7A2A6D;
// HutongGames.PlayMaker.FsmQuaternion
struct FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85;
// HutongGames.PlayMaker.FsmRect
struct FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051;
// HutongGames.PlayMaker.FsmState
struct FsmState_tDC4E3E9E7D94953586410E34151FA311D4AABFE0;
// HutongGames.PlayMaker.FsmStateAction
struct FsmStateAction_t0804A0232CBB77766DD11F3CDBA380D7BDE3F01D;
// HutongGames.PlayMaker.FsmString
struct FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4;
// HutongGames.PlayMaker.FsmTexture
struct FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96;
// HutongGames.PlayMaker.FsmVariables
struct FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597;
// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2;
// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// HutongGames.PlayMaker.ActionsInternal.Header
struct Header_tB5B89661C6700A9D6D467F21FE12EF8EEA28E2F8;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// HutongGames.PlayMaker.Actions.MissingAction
struct MissingAction_tE38C98B5ADB1ADE5392B673F8F43DB6D680EDE2B;
// HutongGames.PlayMaker.NamedVariable
struct NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlayMakerFSM
struct PlayMakerFSM_t93DD2842009DE87C518628728B8581AA931C7D8A;
// PlayMakerGlobals
struct PlayMakerGlobals_tBAC67870679A215F79CB30D3DCF2B2E2AC519861;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_tE0DE36700D110F4D267B26686541ABCF9588A6DD;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_1_t06235C8C320CE45724915E9B9054B2DFDDEC88BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_1_t56C7614D0E07CDE8BA0836E746CD60E403F6D898_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_1_t5BFCE75DD262DB03BF593D106501A42F3362FE24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_1_t6154EE22C9F0744AB088A2CA6B72446C93C9730C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_1_t725C931CB337C9080A3631518A1E9BD4902A5D01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_1_t7C331138E3CCE9AD644C6BE62D7CE8DAA877A1D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_1_t9B6A160B6308F886B1EC3103AD19E56D10333EA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_1_tAD44B9BD27FBE4A1D73AA2424426096DF485541D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_1_tB123AF4BF4E8C211CA4956AD9CCEBD99192C57CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_1_tB7D2648C1A8DC3399F678D91DFDBD8DAAA678AE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_1_tC9626D4A94CEA028A25D3A7AB673DF974D36ADB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_1_tCECF75C828E86621EB0B4824FA8429CEA6CE49DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_1_tEE1A6D08D39A8B6A734CA43135677C42B63BCFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_1_tF2CF7A35C1A9F756F85D0ABE2F07B9374A14E733_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Arrays_1_tFF363C7069008868CB1321E2C44BE6A903668B38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmFloat_t99C088B49A35579867184120212107B5FB177420_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmObject_t69096525269982576D57D563C4659F408D7A2A6D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayMakerGlobals_tBAC67870679A215F79CB30D3DCF2B2E2AC519861_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyInfo_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetParameterCountException_t06AE62DE58A6F9CAC9E33DBEFA5B224F08293859_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableType_t3484FCB961D5F506EA13CC398D85765FA491AE08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral0D232809F1236D1590A5D679586ABAC38218EBE9;
IL2CPP_EXTERN_C String_t* _stringLiteral11962912FC511FA2B6243A82F7361F5348C01B16;
IL2CPP_EXTERN_C String_t* _stringLiteral1C5989C56421669F25837E7E76D0AE730BF908EF;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral2A8F1CBC9C6E5B7CC9E13A7E871CEDC4C60C124A;
IL2CPP_EXTERN_C String_t* _stringLiteral2C582085B7F925D3465BB62C03F975D41BE66E3F;
IL2CPP_EXTERN_C String_t* _stringLiteral345E250C4292980D57A811120BC2C22E6D59D0E2;
IL2CPP_EXTERN_C String_t* _stringLiteral40EF83410F81D39C3FFBE7335B0FC9B79B1354F4;
IL2CPP_EXTERN_C String_t* _stringLiteral45D7BEAEBD58D81368134962FBAE626B36062C94;
IL2CPP_EXTERN_C String_t* _stringLiteral4784CA4E159D86F8767CCC55143536AF34801074;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral679D58DED5F4042A18779DF3ABD8CCB74D0D6499;
IL2CPP_EXTERN_C String_t* _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD;
IL2CPP_EXTERN_C String_t* _stringLiteral8976338BA98D1A7F965D3DD286C668981EB3156C;
IL2CPP_EXTERN_C String_t* _stringLiteral8A4A50A8F9F79CAD2838F0A73081A76EDC3D1A3A;
IL2CPP_EXTERN_C String_t* _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralA8F18DBC783B4BD35DEEB4760AB90F131D03C6A0;
IL2CPP_EXTERN_C String_t* _stringLiteralAD1D4B97C701302B2E89FF5DD38E43BA1F4D0950;
IL2CPP_EXTERN_C String_t* _stringLiteralB312C3A4F4437E7AEBBAD86EAAC890B12F60A64A;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralBC6CF9F6D1A2B396B7B59FC54CCA37099045AF41;
IL2CPP_EXTERN_C String_t* _stringLiteralBD2075E7648A36778D4C437A3963D77FEEE1C0EE;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCFEF3227A766442073C70EFE7DC19B6BA9C63006;
IL2CPP_EXTERN_C String_t* _stringLiteralD68508B50CDE1B2E777400476044304CB8149311;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
IL2CPP_EXTERN_C String_t* _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE;
IL2CPP_EXTERN_C String_t* _stringLiteralF2A76AA542882CF4F9F11156EBAEC225212118C1;
IL2CPP_EXTERN_C String_t* _stringLiteralFBE9C0DF412B8A68FF1CF9FE71E7EC163023A342;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mAB65C90518F9DAFB2AFC456DA9CC22A1DCD025D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m507191DC01CE675338D8029183BD317BA883EF48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsValue_mA916C2087EC11E3353877D634AAFF9EE4196E0FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m73DDAC151CCC5E06EF7533528A1505EA2AA440B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mABB0055F51D71AEB872FC7C3C1726FBF9371E402_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mE4A90E4608E8ACEF12F9723153046F50E88608AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1A7292C7B7101AAB1601300AAF7AE2658861F5EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m849E52416EE25BDD1E4E3A6BE4326AE27B705028_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m9E3D1B31D3ACF10BE1301EC210B5CD90C484533B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m600D5F0E26DCB0448D56689E08D0549407A14BE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5FD7494BF6E5CA818B31BF1506F0EC92926981E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBBD5EB735C7BE4C57A5DEFB9BB88881F96F749AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FsmVariables_GetVariable_m3E60C2C17691FE9C03DC4E0550DCCCA46919CE21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mFDD370E143C78AA5DA55A6DD602C5B96A81B5341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m000A7A606626EA1FA3F196EDADB63DF720E0553B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m181204CF02D08BA13C32066CEE42E12A12654ABD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2B4AD55AD5E4B9EFC3C5633D5A246D68242DF6BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1ECCAADF7DB1972688A2B429816CF4E0581D4E2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m640DDBED6DF56A13645B15A081F8EC3A27D71080_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8EB71881B937BF5BD8161C75AE53755D8E12097B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m2BCDF8354BB2421C637334345A684BDD65F16081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mC2C3C175853EFA59303F121EC520A06CD89BA44A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m862485EFC609D55604F50E5DC9FEBF63567245EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mE39FB54CAE8903AC765EF23FFCDB8FA454521D20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtils_GetGlobalType_mAB4517C0987F76C01BEEAB001195FB29461E0727_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtils_GetMemberUnderlyingType_mACB0FC87FF306C3F5072245071AF5D8BF7732BE1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtils_GetMemberValue_m22D7B2208CCC9B9C1A69158B636CCC67BFF82CFA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionUtils_SetMemberValue_mFDA444E488ACCA726087463BC659BC678FAD7B6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m6DBD469E38A474D460F7955ED853AB9E3CE84B31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_get_Count_m63AB051747CEBAB945744303D1F8ED2C8938CC6B_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8;
struct FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F;
struct FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26;
struct FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD;
struct FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6;
struct FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D;
struct FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999;
struct FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A;
struct FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422;
struct FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F;
struct FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F;
struct FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636;
struct FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A;
struct FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61;
struct FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F;
struct FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053;
struct NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmArray>
struct Arrays_1_t725C931CB337C9080A3631518A1E9BD4902A5D01  : public RuntimeObject
{
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmBool>
struct Arrays_1_tEE1A6D08D39A8B6A734CA43135677C42B63BCFED  : public RuntimeObject
{
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmColor>
struct Arrays_1_tCECF75C828E86621EB0B4824FA8429CEA6CE49DE  : public RuntimeObject
{
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmEnum>
struct Arrays_1_t06235C8C320CE45724915E9B9054B2DFDDEC88BB  : public RuntimeObject
{
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmFloat>
struct Arrays_1_t9B6A160B6308F886B1EC3103AD19E56D10333EA3  : public RuntimeObject
{
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmGameObject>
struct Arrays_1_t56C7614D0E07CDE8BA0836E746CD60E403F6D898  : public RuntimeObject
{
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmInt>
struct Arrays_1_tF2CF7A35C1A9F756F85D0ABE2F07B9374A14E733  : public RuntimeObject
{
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmMaterial>
struct Arrays_1_t7C331138E3CCE9AD644C6BE62D7CE8DAA877A1D0  : public RuntimeObject
{
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmObject>
struct Arrays_1_t5BFCE75DD262DB03BF593D106501A42F3362FE24  : public RuntimeObject
{
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmQuaternion>
struct Arrays_1_tAD44B9BD27FBE4A1D73AA2424426096DF485541D  : public RuntimeObject
{
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmRect>
struct Arrays_1_tB7D2648C1A8DC3399F678D91DFDBD8DAAA678AE8  : public RuntimeObject
{
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmString>
struct Arrays_1_tB123AF4BF4E8C211CA4956AD9CCEBD99192C57CB  : public RuntimeObject
{
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmTexture>
struct Arrays_1_tC9626D4A94CEA028A25D3A7AB673DF974D36ADB6  : public RuntimeObject
{
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmVector2>
struct Arrays_1_tFF363C7069008868CB1321E2C44BE6A903668B38  : public RuntimeObject
{
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmVector3>
struct Arrays_1_t6154EE22C9F0744AB088A2CA6B72446C93C9730C  : public RuntimeObject
{
};

// System.Collections.Generic.Dictionary`2<System.String,HutongGames.PlayMaker.NamedVariable>
struct Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t120E82F45AC1096A1D59D04F685AE8DDDF271A20* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t093E95D55B06F1B78138C9C5BEAB443A0AB60183* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tFEBB089031DDCBDE1CD782E4772D62388CCE3D34* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t544267CEF10C325101E064C4EC137C5A1ADC3D92* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t0E4390205378461F38BE857216C35DA687D245FA* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA14BD0EE42AEA7EBFF2E10776A87B14C678C2E11* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<HutongGames.PlayMaker.NamedVariable>
struct List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
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

// System.Collections.Generic.Queue`1<HutongGames.Extensions.TextureExtensions/Point>
struct Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	PointU5BU5D_tC75267545C70B385FE419129D9708C75AE1A0DCB* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,HutongGames.PlayMaker.NamedVariable>
struct ValueCollection_tFEBB089031DDCBDE1CD782E4772D62388CCE3D34  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* ____dictionary_0;
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.BitConverter
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27  : public RuntimeObject
{
};

// HutongGames.Utility.ColorUtils
struct ColorUtils_t8AC615E71E79C8C86C53F314008C8371C7DEC052  : public RuntimeObject
{
};

// HutongGames.PlayMaker.FsmStateAction
struct FsmStateAction_t0804A0232CBB77766DD11F3CDBA380D7BDE3F01D  : public RuntimeObject
{
	// System.String HutongGames.PlayMaker.FsmStateAction::name
	String_t* ___name_2;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::enabled
	bool ___enabled_3;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::isOpen
	bool ___isOpen_4;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::active
	bool ___active_5;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::finished
	bool ___finished_6;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::autoName
	bool ___autoName_7;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::blocksFinish
	bool ___blocksFinish_8;
	// UnityEngine.GameObject HutongGames.PlayMaker.FsmStateAction::owner
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___owner_9;
	// HutongGames.PlayMaker.FsmState HutongGames.PlayMaker.FsmStateAction::fsmState
	FsmState_tDC4E3E9E7D94953586410E34151FA311D4AABFE0* ___fsmState_10;
	// HutongGames.PlayMaker.Fsm HutongGames.PlayMaker.FsmStateAction::fsm
	Fsm_t5EC5E967A5030D310E25F4B91CC48BD5CE67BABB* ___fsm_11;
	// PlayMakerFSM HutongGames.PlayMaker.FsmStateAction::fsmComponent
	PlayMakerFSM_t93DD2842009DE87C518628728B8581AA931C7D8A* ___fsmComponent_12;
	// System.String HutongGames.PlayMaker.FsmStateAction::<DisplayName>k__BackingField
	String_t* ___U3CDisplayNameU3Ek__BackingField_13;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::<Entered>k__BackingField
	bool ___U3CEnteredU3Ek__BackingField_14;
};

// HutongGames.PlayMaker.FsmVariables
struct FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,HutongGames.PlayMaker.NamedVariable> HutongGames.PlayMaker.FsmVariables::_variableLookup
	Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* ____variableLookup_1;
	// HutongGames.PlayMaker.NamedVariable[] HutongGames.PlayMaker.FsmVariables::_allVariables
	NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* ____allVariables_2;
	// System.Collections.Generic.List`1<HutongGames.PlayMaker.NamedVariable> HutongGames.PlayMaker.FsmVariables::_emptyVariables
	List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* ____emptyVariables_3;
	// HutongGames.PlayMaker.FsmFloat[] HutongGames.PlayMaker.FsmVariables::floatVariables
	FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* ___floatVariables_4;
	// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.FsmVariables::intVariables
	FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* ___intVariables_5;
	// HutongGames.PlayMaker.FsmBool[] HutongGames.PlayMaker.FsmVariables::boolVariables
	FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* ___boolVariables_6;
	// HutongGames.PlayMaker.FsmString[] HutongGames.PlayMaker.FsmVariables::stringVariables
	FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* ___stringVariables_7;
	// HutongGames.PlayMaker.FsmVector2[] HutongGames.PlayMaker.FsmVariables::vector2Variables
	FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* ___vector2Variables_8;
	// HutongGames.PlayMaker.FsmVector3[] HutongGames.PlayMaker.FsmVariables::vector3Variables
	FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* ___vector3Variables_9;
	// HutongGames.PlayMaker.FsmColor[] HutongGames.PlayMaker.FsmVariables::colorVariables
	FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* ___colorVariables_10;
	// HutongGames.PlayMaker.FsmRect[] HutongGames.PlayMaker.FsmVariables::rectVariables
	FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* ___rectVariables_11;
	// HutongGames.PlayMaker.FsmQuaternion[] HutongGames.PlayMaker.FsmVariables::quaternionVariables
	FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* ___quaternionVariables_12;
	// HutongGames.PlayMaker.FsmGameObject[] HutongGames.PlayMaker.FsmVariables::gameObjectVariables
	FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* ___gameObjectVariables_13;
	// HutongGames.PlayMaker.FsmObject[] HutongGames.PlayMaker.FsmVariables::objectVariables
	FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* ___objectVariables_14;
	// HutongGames.PlayMaker.FsmMaterial[] HutongGames.PlayMaker.FsmVariables::materialVariables
	FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* ___materialVariables_15;
	// HutongGames.PlayMaker.FsmTexture[] HutongGames.PlayMaker.FsmVariables::textureVariables
	FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* ___textureVariables_16;
	// HutongGames.PlayMaker.FsmArray[] HutongGames.PlayMaker.FsmVariables::arrayVariables
	FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* ___arrayVariables_17;
	// HutongGames.PlayMaker.FsmEnum[] HutongGames.PlayMaker.FsmVariables::enumVariables
	FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* ___enumVariables_18;
	// System.String[] HutongGames.PlayMaker.FsmVariables::categories
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___categories_19;
	// System.Int32[] HutongGames.PlayMaker.FsmVariables::variableCategoryIDs
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___variableCategoryIDs_20;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// HutongGames.PlayMaker.NamedVariable
struct NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6  : public RuntimeObject
{
	// System.Boolean HutongGames.PlayMaker.NamedVariable::useVariable
	bool ___useVariable_0;
	// System.String HutongGames.PlayMaker.NamedVariable::name
	String_t* ___name_1;
	// System.String HutongGames.PlayMaker.NamedVariable::tooltip
	String_t* ___tooltip_2;
	// System.Boolean HutongGames.PlayMaker.NamedVariable::showInInspector
	bool ___showInInspector_3;
	// System.Boolean HutongGames.PlayMaker.NamedVariable::networkSync
	bool ___networkSync_4;
	// System.Object HutongGames.PlayMaker.NamedVariable::obj
	RuntimeObject* ___obj_5;
};

// HutongGames.Extensions.RectExtensions
struct RectExtensions_t1F70371C1D82BF3AEA5BF588D449EB5B6235F390  : public RuntimeObject
{
};

// HutongGames.PlayMaker.ReflectionUtils
struct ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81  : public RuntimeObject
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// HutongGames.Utility.StringUtils
struct StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877  : public RuntimeObject
{
};

// HutongGames.Extensions.TextureExtensions
struct TextureExtensions_t0DCA8B5C0D4D37C99FEF28C128CE6D2795195F05  : public RuntimeObject
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

// HutongGames.PlayMaker.FsmUtility/BitConverter
struct BitConverter_t02478D5DA8A67EFBBB21EA1722EF7B1B3AC5111F  : public RuntimeObject
{
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.String>
struct Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	String_t* ____current_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>
struct Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	RuntimeObject* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,HutongGames.PlayMaker.NamedVariable>
struct Enumerator_tB32ADA14D6ED3B8FAC028A8B730A94841FCCA002 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* ____currentValue_3;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
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

// System.Reflection.EventInfo
struct EventInfo_t  : public MemberInfo_t
{
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_tE0DE36700D110F4D267B26686541ABCF9588A6DD* ___cached_add_event_0;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
};

// HutongGames.PlayMaker.FsmBool
struct FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D  : public NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6
{
	// System.Boolean HutongGames.PlayMaker.FsmBool::value
	bool ___value_6;
};

// HutongGames.PlayMaker.FsmEnum
struct FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7  : public NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6
{
	// System.String HutongGames.PlayMaker.FsmEnum::enumName
	String_t* ___enumName_6;
	// System.Int32 HutongGames.PlayMaker.FsmEnum::intValue
	int32_t ___intValue_7;
	// System.Enum HutongGames.PlayMaker.FsmEnum::value
	Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___value_8;
	// System.Int32 HutongGames.PlayMaker.FsmEnum::parsedIntValue
	int32_t ___parsedIntValue_9;
	// System.Type HutongGames.PlayMaker.FsmEnum::enumType
	Type_t* ___enumType_10;
};

// HutongGames.PlayMaker.FsmFloat
struct FsmFloat_t99C088B49A35579867184120212107B5FB177420  : public NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6
{
	// System.Single HutongGames.PlayMaker.FsmFloat::value
	float ___value_6;
};

// HutongGames.PlayMaker.FsmGameObject
struct FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68  : public NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6
{
	// System.Action HutongGames.PlayMaker.FsmGameObject::OnChange
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnChange_6;
	// UnityEngine.GameObject HutongGames.PlayMaker.FsmGameObject::value
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___value_7;
};

// HutongGames.PlayMaker.FsmInt
struct FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667  : public NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6
{
	// System.Int32 HutongGames.PlayMaker.FsmInt::value
	int32_t ___value_6;
};

// HutongGames.PlayMaker.FsmObject
struct FsmObject_t69096525269982576D57D563C4659F408D7A2A6D  : public NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6
{
	// System.String HutongGames.PlayMaker.FsmObject::typeName
	String_t* ___typeName_6;
	// UnityEngine.Object HutongGames.PlayMaker.FsmObject::value
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___value_7;
	// System.Type HutongGames.PlayMaker.FsmObject::objectType
	Type_t* ___objectType_8;
};

// HutongGames.PlayMaker.FsmString
struct FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4  : public NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6
{
	// System.String HutongGames.PlayMaker.FsmString::value
	String_t* ___value_6;
};

// HutongGames.PlayMaker.ActionsInternal.Header
struct Header_tB5B89661C6700A9D6D467F21FE12EF8EEA28E2F8  : public FsmStateAction_t0804A0232CBB77766DD11F3CDBA380D7BDE3F01D
{
	// System.String HutongGames.PlayMaker.ActionsInternal.Header::comment
	String_t* ___comment_15;
	// System.Int32 HutongGames.PlayMaker.ActionsInternal.Header::colorId
	int32_t ___colorId_16;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
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

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682 
{
	union
	{
		struct
		{
		};
		uint8_t Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682__padding[1];
	};
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// HutongGames.PlayMaker.Actions.MissingAction
struct MissingAction_tE38C98B5ADB1ADE5392B673F8F43DB6D680EDE2B  : public FsmStateAction_t0804A0232CBB77766DD11F3CDBA380D7BDE3F01D
{
	// System.String HutongGames.PlayMaker.Actions.MissingAction::actionName
	String_t* ___actionName_15;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
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

// HutongGames.Extensions.TextureExtensions/Point
struct Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 
{
	// System.Int16 HutongGames.Extensions.TextureExtensions/Point::x
	int16_t ___x_0;
	// System.Int16 HutongGames.Extensions.TextureExtensions/Point::y
	int16_t ___y_1;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

// HutongGames.PlayMaker.ArrayVariableTypesNicified
struct ArrayVariableTypesNicified_t16752FD0E0F94BF6AB8EB7274CC17CBDB09FAA80 
{
	// System.Int32 HutongGames.PlayMaker.ArrayVariableTypesNicified::value__
	int32_t ___value___2;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
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

// HutongGames.PlayMaker.FsmColor
struct FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242  : public NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6
{
	// UnityEngine.Color HutongGames.PlayMaker.FsmColor::value
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value_6;
};

// HutongGames.PlayMaker.FsmMaterial
struct FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564  : public FsmObject_t69096525269982576D57D563C4659F408D7A2A6D
{
};

// HutongGames.PlayMaker.FsmQuaternion
struct FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85  : public NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6
{
	// UnityEngine.Quaternion HutongGames.PlayMaker.FsmQuaternion::value
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value_6;
};

// HutongGames.PlayMaker.FsmRect
struct FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051  : public NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6
{
	// UnityEngine.Rect HutongGames.PlayMaker.FsmRect::value
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___value_6;
};

// HutongGames.PlayMaker.FsmTexture
struct FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96  : public FsmObject_t69096525269982576D57D563C4659F408D7A2A6D
{
};

// HutongGames.PlayMaker.FsmVector2
struct FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2  : public NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6
{
	// UnityEngine.Vector2 HutongGames.PlayMaker.FsmVector2::value
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value_6;
};

// HutongGames.PlayMaker.FsmVector3
struct FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8  : public NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6
{
	// UnityEngine.Vector3 HutongGames.PlayMaker.FsmVector3::value
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value_6;
};

// System.Reflection.MemberTypes
struct MemberTypes_t26BAB0893BEC9328F2F64E8BACDA967C445632E5 
{
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___2;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// HutongGames.PlayMaker.VariableType
struct VariableType_t3484FCB961D5F506EA13CC398D85765FA491AE08 
{
	// System.Int32 HutongGames.PlayMaker.VariableType::value__
	int32_t ___value___2;
};

// HutongGames.PlayMaker.VariableTypeNicified
struct VariableTypeNicified_t94E70E0D0E17DBCD63DA4F374C4E77DC59B1B1CC 
{
	// System.Int32 HutongGames.PlayMaker.VariableTypeNicified::value__
	int32_t ___value___2;
};

// System.ApplicationException
struct ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A  : public Exception_t
{
};

// HutongGames.PlayMaker.FsmArray
struct FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082  : public NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6
{
	// HutongGames.PlayMaker.VariableType HutongGames.PlayMaker.FsmArray::type
	int32_t ___type_6;
	// System.String HutongGames.PlayMaker.FsmArray::objectTypeName
	String_t* ___objectTypeName_7;
	// System.Type HutongGames.PlayMaker.FsmArray::objectType
	Type_t* ___objectType_8;
	// System.Single[] HutongGames.PlayMaker.FsmArray::floatValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___floatValues_9;
	// System.Int32[] HutongGames.PlayMaker.FsmArray::intValues
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___intValues_10;
	// System.Boolean[] HutongGames.PlayMaker.FsmArray::boolValues
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___boolValues_11;
	// System.String[] HutongGames.PlayMaker.FsmArray::stringValues
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___stringValues_12;
	// UnityEngine.Vector4[] HutongGames.PlayMaker.FsmArray::vector4Values
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___vector4Values_13;
	// UnityEngine.Object[] HutongGames.PlayMaker.FsmArray::objectReferences
	ObjectU5BU5D_tD4BF1BEC72A31DF6611C0B8FA3112AF128FC3F8A* ___objectReferences_14;
	// System.Array HutongGames.PlayMaker.FsmArray::sourceArray
	RuntimeArray* ___sourceArray_15;
	// System.Object[] HutongGames.PlayMaker.FsmArray::values
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___values_16;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// PlayMakerGlobals
struct PlayMakerGlobals_tBAC67870679A215F79CB30D3DCF2B2E2AC519861  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean PlayMakerGlobals::initialized
	bool ___initialized_9;
	// HutongGames.PlayMaker.FsmVariables PlayMakerGlobals::variables
	FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* ___variables_10;
	// System.Collections.Generic.List`1<System.String> PlayMakerGlobals::events
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___events_11;
};

// System.Reflection.TargetParameterCountException
struct TargetParameterCountException_t06AE62DE58A6F9CAC9E33DBEFA5B224F08293859  : public ApplicationException_tA744BED4E90266BD255285CD4CF909BAB3EE811A
{
};

// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmArray>
struct Arrays_1_t725C931CB337C9080A3631518A1E9BD4902A5D01_StaticFields
{
	// T[] HutongGames.Utility.Arrays`1::Empty
	FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* ___Empty_0;
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmArray>

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmBool>
struct Arrays_1_tEE1A6D08D39A8B6A734CA43135677C42B63BCFED_StaticFields
{
	// T[] HutongGames.Utility.Arrays`1::Empty
	FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* ___Empty_0;
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmBool>

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmColor>
struct Arrays_1_tCECF75C828E86621EB0B4824FA8429CEA6CE49DE_StaticFields
{
	// T[] HutongGames.Utility.Arrays`1::Empty
	FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* ___Empty_0;
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmColor>

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmEnum>
struct Arrays_1_t06235C8C320CE45724915E9B9054B2DFDDEC88BB_StaticFields
{
	// T[] HutongGames.Utility.Arrays`1::Empty
	FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* ___Empty_0;
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmEnum>

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmFloat>
struct Arrays_1_t9B6A160B6308F886B1EC3103AD19E56D10333EA3_StaticFields
{
	// T[] HutongGames.Utility.Arrays`1::Empty
	FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* ___Empty_0;
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmFloat>

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmGameObject>
struct Arrays_1_t56C7614D0E07CDE8BA0836E746CD60E403F6D898_StaticFields
{
	// T[] HutongGames.Utility.Arrays`1::Empty
	FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* ___Empty_0;
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmGameObject>

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmInt>
struct Arrays_1_tF2CF7A35C1A9F756F85D0ABE2F07B9374A14E733_StaticFields
{
	// T[] HutongGames.Utility.Arrays`1::Empty
	FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* ___Empty_0;
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmInt>

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmMaterial>
struct Arrays_1_t7C331138E3CCE9AD644C6BE62D7CE8DAA877A1D0_StaticFields
{
	// T[] HutongGames.Utility.Arrays`1::Empty
	FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* ___Empty_0;
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmMaterial>

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmObject>
struct Arrays_1_t5BFCE75DD262DB03BF593D106501A42F3362FE24_StaticFields
{
	// T[] HutongGames.Utility.Arrays`1::Empty
	FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* ___Empty_0;
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmObject>

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmQuaternion>
struct Arrays_1_tAD44B9BD27FBE4A1D73AA2424426096DF485541D_StaticFields
{
	// T[] HutongGames.Utility.Arrays`1::Empty
	FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* ___Empty_0;
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmQuaternion>

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmRect>
struct Arrays_1_tB7D2648C1A8DC3399F678D91DFDBD8DAAA678AE8_StaticFields
{
	// T[] HutongGames.Utility.Arrays`1::Empty
	FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* ___Empty_0;
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmRect>

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmString>
struct Arrays_1_tB123AF4BF4E8C211CA4956AD9CCEBD99192C57CB_StaticFields
{
	// T[] HutongGames.Utility.Arrays`1::Empty
	FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* ___Empty_0;
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmString>

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmTexture>
struct Arrays_1_tC9626D4A94CEA028A25D3A7AB673DF974D36ADB6_StaticFields
{
	// T[] HutongGames.Utility.Arrays`1::Empty
	FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* ___Empty_0;
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmTexture>

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmVector2>
struct Arrays_1_tFF363C7069008868CB1321E2C44BE6A903668B38_StaticFields
{
	// T[] HutongGames.Utility.Arrays`1::Empty
	FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* ___Empty_0;
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmVector2>

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmVector3>
struct Arrays_1_t6154EE22C9F0744AB088A2CA6B72446C93C9730C_StaticFields
{
	// T[] HutongGames.Utility.Arrays`1::Empty
	FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* ___Empty_0;
};

// HutongGames.Utility.Arrays`1<HutongGames.PlayMaker.FsmVector3>

// System.Collections.Generic.Dictionary`2<System.String,HutongGames.PlayMaker.NamedVariable>

// System.Collections.Generic.Dictionary`2<System.String,HutongGames.PlayMaker.NamedVariable>

// System.Collections.Generic.Dictionary`2<System.String,System.Type>

// System.Collections.Generic.Dictionary`2<System.String,System.Type>

// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Reflection.MemberInfo>

// System.Collections.Generic.List`1<HutongGames.PlayMaker.NamedVariable>
struct List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<HutongGames.PlayMaker.NamedVariable>

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

// System.Collections.Generic.Queue`1<HutongGames.Extensions.TextureExtensions/Point>

// System.Collections.Generic.Queue`1<HutongGames.Extensions.TextureExtensions/Point>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,HutongGames.PlayMaker.NamedVariable>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,HutongGames.PlayMaker.NamedVariable>

// System.Reflection.Assembly

// System.Reflection.Assembly

// System.BitConverter
struct BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields
{
	// System.Boolean System.BitConverter::IsLittleEndian
	bool ___IsLittleEndian_0;
};

// System.BitConverter

// HutongGames.Utility.ColorUtils

// HutongGames.Utility.ColorUtils

// HutongGames.PlayMaker.FsmStateAction
struct FsmStateAction_t0804A0232CBB77766DD11F3CDBA380D7BDE3F01D_StaticFields
{
	// UnityEngine.Color HutongGames.PlayMaker.FsmStateAction::ActiveHighlightColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___ActiveHighlightColor_0;
	// System.Boolean HutongGames.PlayMaker.FsmStateAction::Repaint
	bool ___Repaint_1;
};

// HutongGames.PlayMaker.FsmStateAction

// HutongGames.PlayMaker.FsmVariables
struct FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597_StaticFields
{
	// System.Boolean HutongGames.PlayMaker.FsmVariables::<GlobalVariablesSynced>k__BackingField
	bool ___U3CGlobalVariablesSyncedU3Ek__BackingField_0;
};

// HutongGames.PlayMaker.FsmVariables

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// HutongGames.PlayMaker.NamedVariable

// HutongGames.PlayMaker.NamedVariable

// HutongGames.Extensions.RectExtensions

// HutongGames.Extensions.RectExtensions

// HutongGames.PlayMaker.ReflectionUtils
struct ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_StaticFields
{
	// System.Collections.Generic.List`1<System.String> HutongGames.PlayMaker.ReflectionUtils::assemblyNames
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___assemblyNames_0;
	// System.Reflection.Assembly[] HutongGames.PlayMaker.ReflectionUtils::loadedAssemblies
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* ___loadedAssemblies_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> HutongGames.PlayMaker.ReflectionUtils::typeLookup
	Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* ___typeLookup_2;
};

// HutongGames.PlayMaker.ReflectionUtils

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Text.StringBuilder

// System.Text.StringBuilder

// HutongGames.Utility.StringUtils
struct StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877_StaticFields
{
	// System.Boolean HutongGames.Utility.StringUtils::forceAscii
	bool ___forceAscii_1;
};

// HutongGames.Utility.StringUtils
struct StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877_ThreadStaticFields
{
	// System.Text.StringBuilder HutongGames.Utility.StringUtils::escapeBuilder
	StringBuilder_t* ___escapeBuilder_0;
};

// HutongGames.Extensions.TextureExtensions

// HutongGames.Extensions.TextureExtensions

// HutongGames.PlayMaker.FsmUtility/BitConverter

// HutongGames.PlayMaker.FsmUtility/BitConverter

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.Object>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Collections.Generic.List`1/Enumerator<System.String>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,HutongGames.PlayMaker.NamedVariable>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,HutongGames.PlayMaker.NamedVariable>

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// UnityEngine.Color

// UnityEngine.Color

// UnityEngine.Color32

// UnityEngine.Color32

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Reflection.EventInfo

// System.Reflection.EventInfo

// System.Reflection.FieldInfo

// System.Reflection.FieldInfo

// HutongGames.PlayMaker.FsmBool

// HutongGames.PlayMaker.FsmBool

// HutongGames.PlayMaker.FsmEnum

// HutongGames.PlayMaker.FsmEnum

// HutongGames.PlayMaker.FsmFloat

// HutongGames.PlayMaker.FsmFloat

// HutongGames.PlayMaker.FsmGameObject

// HutongGames.PlayMaker.FsmGameObject

// HutongGames.PlayMaker.FsmInt

// HutongGames.PlayMaker.FsmInt

// HutongGames.PlayMaker.FsmObject

// HutongGames.PlayMaker.FsmObject

// HutongGames.PlayMaker.FsmString

// HutongGames.PlayMaker.FsmString

// HutongGames.PlayMaker.ActionsInternal.Header

// HutongGames.PlayMaker.ActionsInternal.Header

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// UnityEngine.Mathf
struct Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields
{
	// System.Single UnityEngine.Mathf::Epsilon
	float ___Epsilon_0;
};

// UnityEngine.Mathf

// HutongGames.PlayMaker.Actions.MissingAction

// HutongGames.PlayMaker.Actions.MissingAction

// System.Reflection.PropertyInfo

// System.Reflection.PropertyInfo

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.Rect

// UnityEngine.Rect

// System.Single

// System.Single

// System.UInt16

// System.UInt16

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// HutongGames.Extensions.TextureExtensions/Point

// HutongGames.Extensions.TextureExtensions/Point

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};

// HutongGames.PlayMaker.ArrayVariableTypesNicified

// HutongGames.PlayMaker.ArrayVariableTypesNicified

// System.Reflection.BindingFlags

// System.Reflection.BindingFlags

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// HutongGames.PlayMaker.FsmColor

// HutongGames.PlayMaker.FsmColor

// HutongGames.PlayMaker.FsmMaterial

// HutongGames.PlayMaker.FsmMaterial

// HutongGames.PlayMaker.FsmQuaternion

// HutongGames.PlayMaker.FsmQuaternion

// HutongGames.PlayMaker.FsmRect

// HutongGames.PlayMaker.FsmRect

// HutongGames.PlayMaker.FsmTexture

// HutongGames.PlayMaker.FsmTexture

// HutongGames.PlayMaker.FsmVector2

// HutongGames.PlayMaker.FsmVector2

// HutongGames.PlayMaker.FsmVector3

// HutongGames.PlayMaker.FsmVector3

// System.Reflection.MemberTypes

// System.Reflection.MemberTypes

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// HutongGames.PlayMaker.VariableType

// HutongGames.PlayMaker.VariableType

// HutongGames.PlayMaker.VariableTypeNicified

// HutongGames.PlayMaker.VariableTypeNicified

// HutongGames.PlayMaker.FsmArray

// HutongGames.PlayMaker.FsmArray

// UnityEngine.GameObject

// UnityEngine.GameObject

// UnityEngine.Material

// UnityEngine.Material

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Texture

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.ArgumentException

// System.ArgumentException

// PlayMakerGlobals
struct PlayMakerGlobals_tBAC67870679A215F79CB30D3DCF2B2E2AC519861_StaticFields
{
	// System.Boolean PlayMakerGlobals::<IsPlayingInEditor>k__BackingField
	bool ___U3CIsPlayingInEditorU3Ek__BackingField_4;
	// System.Boolean PlayMakerGlobals::<IsPlaying>k__BackingField
	bool ___U3CIsPlayingU3Ek__BackingField_5;
	// System.Boolean PlayMakerGlobals::<IsEditor>k__BackingField
	bool ___U3CIsEditorU3Ek__BackingField_6;
	// System.Boolean PlayMakerGlobals::<IsBuilding>k__BackingField
	bool ___U3CIsBuildingU3Ek__BackingField_7;
	// PlayMakerGlobals PlayMakerGlobals::instance
	PlayMakerGlobals_tBAC67870679A215F79CB30D3DCF2B2E2AC519861* ___instance_8;
};

// PlayMakerGlobals

// System.Reflection.TargetParameterCountException

// System.Reflection.TargetParameterCountException

// UnityEngine.Texture2D

// UnityEngine.Texture2D

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// HutongGames.PlayMaker.NamedVariable[]
struct NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD  : public RuntimeArray
{
	ALIGN_FIELD (8) NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* m_Items[1];

	inline NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* value)
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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// HutongGames.PlayMaker.FsmFloat[]
struct FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D  : public RuntimeArray
{
	ALIGN_FIELD (8) FsmFloat_t99C088B49A35579867184120212107B5FB177420* m_Items[1];

	inline FsmFloat_t99C088B49A35579867184120212107B5FB177420* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FsmFloat_t99C088B49A35579867184120212107B5FB177420** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FsmFloat_t99C088B49A35579867184120212107B5FB177420* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FsmFloat_t99C088B49A35579867184120212107B5FB177420* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FsmFloat_t99C088B49A35579867184120212107B5FB177420** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FsmFloat_t99C088B49A35579867184120212107B5FB177420* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HutongGames.PlayMaker.FsmInt[]
struct FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A  : public RuntimeArray
{
	ALIGN_FIELD (8) FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* m_Items[1];

	inline FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HutongGames.PlayMaker.FsmBool[]
struct FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26  : public RuntimeArray
{
	ALIGN_FIELD (8) FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* m_Items[1];

	inline FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HutongGames.PlayMaker.FsmGameObject[]
struct FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999  : public RuntimeArray
{
	ALIGN_FIELD (8) FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* m_Items[1];

	inline FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HutongGames.PlayMaker.FsmColor[]
struct FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD  : public RuntimeArray
{
	ALIGN_FIELD (8) FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* m_Items[1];

	inline FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HutongGames.PlayMaker.FsmVector2[]
struct FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F  : public RuntimeArray
{
	ALIGN_FIELD (8) FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* m_Items[1];

	inline FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HutongGames.PlayMaker.FsmVector3[]
struct FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47  : public RuntimeArray
{
	ALIGN_FIELD (8) FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* m_Items[1];

	inline FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HutongGames.PlayMaker.FsmRect[]
struct FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636  : public RuntimeArray
{
	ALIGN_FIELD (8) FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* m_Items[1];

	inline FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HutongGames.PlayMaker.FsmQuaternion[]
struct FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F  : public RuntimeArray
{
	ALIGN_FIELD (8) FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* m_Items[1];

	inline FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HutongGames.PlayMaker.FsmObject[]
struct FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F  : public RuntimeArray
{
	ALIGN_FIELD (8) FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* m_Items[1];

	inline FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FsmObject_t69096525269982576D57D563C4659F408D7A2A6D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FsmObject_t69096525269982576D57D563C4659F408D7A2A6D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HutongGames.PlayMaker.FsmMaterial[]
struct FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422  : public RuntimeArray
{
	ALIGN_FIELD (8) FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* m_Items[1];

	inline FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HutongGames.PlayMaker.FsmTexture[]
struct FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61  : public RuntimeArray
{
	ALIGN_FIELD (8) FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* m_Items[1];

	inline FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HutongGames.PlayMaker.FsmString[]
struct FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A  : public RuntimeArray
{
	ALIGN_FIELD (8) FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* m_Items[1];

	inline FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HutongGames.PlayMaker.FsmArray[]
struct FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F  : public RuntimeArray
{
	ALIGN_FIELD (8) FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* m_Items[1];

	inline FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// HutongGames.PlayMaker.FsmEnum[]
struct FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6  : public RuntimeArray
{
	ALIGN_FIELD (8) FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* m_Items[1];

	inline FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339  : public RuntimeArray
{
	ALIGN_FIELD (8) Assembly_t* m_Items[1];

	inline Assembly_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053  : public RuntimeArray
{
	ALIGN_FIELD (8) MemberInfo_t* m_Items[1];

	inline MemberInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MemberInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MemberInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MemberInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8  : public RuntimeArray
{
	ALIGN_FIELD (8) FieldInfo_t* m_Items[1];

	inline FieldInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7  : public RuntimeArray
{
	ALIGN_FIELD (8) PropertyInfo_t* m_Items[1];

	inline PropertyInfo_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259  : public RuntimeArray
{
	ALIGN_FIELD (8) Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B m_Items[1];

	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueCollection_get_Count_m8138319201D267998400C7759D4EA510C591587C_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared (ValueCollection_t038245E04B5D2A80048D9F8021A23E69A0C9DBAA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Sort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m31071C3C6DF1FAD770119031BEA9315A2E3C1298_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsValue_m51A7764AD04D34D0B2CDB01F960FA1FEBCF6B562_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___0_key, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<HutongGames.Extensions.TextureExtensions/Point>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m862485EFC609D55604F50E5DC9FEBF63567245EC_gshared (Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<HutongGames.Extensions.TextureExtensions/Point>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mC2C3C175853EFA59303F121EC520A06CD89BA44A_gshared (Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E* __this, Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<HutongGames.Extensions.TextureExtensions/Point>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 Queue_1_Dequeue_m2BCDF8354BB2421C637334345A684BDD65F16081_gshared (Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<HutongGames.Extensions.TextureExtensions/Point>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE39FB54CAE8903AC765EF23FFCDB8FA454521D20_gshared_inline (Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E* __this, const RuntimeMethod* method) ;

// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Void System.Array::Reverse(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD (RuntimeArray* ___0_array, int32_t ___1_index, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Single System.BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_m61C4AA4550F008C0F7681DFF8D6FAE889FA149FD (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Boolean System.BitConverter::ToBoolean(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitConverter_ToBoolean_mBDA6F9734B907F7BA1135819940F5D6C3E5085FB (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m8129D5C616ECE5D5095473D8A931B65487C770BF (bool ___0_value, const RuntimeMethod* method) ;
// System.Void System.Array::Reverse(System.Array)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C (RuntimeArray* ___0_array, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9 (int32_t ___0_value, const RuntimeMethod* method) ;
// System.Byte[] System.BitConverter::GetBytes(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m86ADBB3533A4FFA79B7303FBEBC9EBD1BCA6A549 (float ___0_value, const RuntimeMethod* method) ;
// PlayMakerGlobals PlayMakerGlobals::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayMakerGlobals_tBAC67870679A215F79CB30D3DCF2B2E2AC519861* PlayMakerGlobals_get_Instance_mD39AD803B829B4F0A082C1D17B8D2BB73ADB2E72 (const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmVariables PlayMakerGlobals::get_Variables()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* PlayMakerGlobals_get_Variables_m70ED9FFD03D4C4E2B6E6E4C04CEB1AD4E74E7DA4_inline (PlayMakerGlobals_tBAC67870679A215F79CB30D3DCF2B2E2AC519861* __this, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmVariables::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_Init_m1D4D97A0DC015D761085D13AFB6E36D905683C9A (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900 (RuntimeArray* ___0_sourceArray, RuntimeArray* ___1_destinationArray, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmFloat::.ctor(HutongGames.PlayMaker.FsmFloat)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmFloat__ctor_m44DB5226A6A8F9C408AE1E01B821B30BF32799AF (FsmFloat_t99C088B49A35579867184120212107B5FB177420* __this, FsmFloat_t99C088B49A35579867184120212107B5FB177420* ___0_source, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmInt::.ctor(HutongGames.PlayMaker.FsmInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmInt__ctor_m70E96625770D1F919BF513D714EF3EB0A904C245 (FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* __this, FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* ___0_source, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmBool::.ctor(HutongGames.PlayMaker.FsmBool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmBool__ctor_m0A991D21A5DA181674A256118E50BB8B3F9FB452 (FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* __this, FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* ___0_source, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmGameObject::.ctor(HutongGames.PlayMaker.FsmGameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmGameObject__ctor_m6ECB3C5BE2D48C5DF51E8CDBC1C10D2D75FC0988 (FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* __this, FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* ___0_source, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmColor::.ctor(HutongGames.PlayMaker.FsmColor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmColor__ctor_m67D6B2E3DA66DA539F213FB8B15D7606632DD522 (FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* __this, FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* ___0_source, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmVector2::.ctor(HutongGames.PlayMaker.FsmVector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVector2__ctor_mD5BCAE3E34B976200F0E663EFB9FB1666C33660C (FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* __this, FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* ___0_source, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmVector3::.ctor(HutongGames.PlayMaker.FsmVector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVector3__ctor_mE02A4B9C3074C4A809E8B3076260129CE550C960 (FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* __this, FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* ___0_source, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmRect::.ctor(HutongGames.PlayMaker.FsmRect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmRect__ctor_m72D1D7070807C6F53EAF52CD91CD8B454EB363F0 (FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* __this, FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* ___0_source, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmQuaternion::.ctor(HutongGames.PlayMaker.FsmQuaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmQuaternion__ctor_mF4196D0D10FB1810472FD583FF3406A2CF3A1B90 (FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* __this, FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* ___0_source, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmObject::.ctor(HutongGames.PlayMaker.FsmObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmObject__ctor_m36419D9C145D50F5E3A334D8151FD176CB02EAB7 (FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* __this, FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* ___0_source, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmMaterial::.ctor(HutongGames.PlayMaker.FsmObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmMaterial__ctor_mB299A604C1A9596882D70137AC83296284162EFB (FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* __this, FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* ___0_source, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmTexture::.ctor(HutongGames.PlayMaker.FsmObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmTexture__ctor_mC6789E9AE5BA2DD77DCDBCCB9EED603F278CF304 (FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* __this, FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* ___0_source, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmString::.ctor(HutongGames.PlayMaker.FsmString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmString__ctor_m94A299B090D39B0CA817A853E3785C6CB2718C0A (FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* __this, FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* ___0_source, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmArray::.ctor(HutongGames.PlayMaker.FsmArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmArray__ctor_m6B1113FA14C2E3D0E6D7887CB21666C481B2830B (FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* __this, FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* ___0_source, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmEnum::.ctor(HutongGames.PlayMaker.FsmEnum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmEnum__ctor_mFCA0C00CFCE7E7E0593C982CEE20660B44FAC9B4 (FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* __this, FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* ___0_source, const RuntimeMethod* method) ;
// System.Int32[] HutongGames.PlayMaker.FsmVariables::get_CategoryIDs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* FsmVariables_get_CategoryIDs_m983AF5B6EF89AB9CF32D32D6B185A363E10D5FD6_inline (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmVariables::set_CategoryIDs(System.Int32[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmVariables_set_CategoryIDs_m1590E726F467DC08B9D800953A2D230A4574A584_inline (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<HutongGames.PlayMaker.NamedVariable>::.ctor()
inline void List_1__ctor_m640DDBED6DF56A13645B15A081F8EC3A27D71080 (List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,HutongGames.PlayMaker.NamedVariable>::.ctor()
inline void Dictionary_2__ctor_m1A7292C7B7101AAB1601300AAF7AE2658861F5EB (Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// HutongGames.PlayMaker.FsmFloat[] HutongGames.PlayMaker.FsmVariables::get_FloatVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* FsmVariables_get_FloatVariables_m9A554326DE2BAF295D19FA0FA87240D871D2DC3D (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmVariables::AddVariableLookup(HutongGames.PlayMaker.NamedVariable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_AddVariableLookup_m464E412758C9E75CAB180B69D399F9B1AD0C1653 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* ___0_v, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.FsmVariables::get_IntVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* FsmVariables_get_IntVariables_m4F3D72E17E63EBBCBC603DF133129010C62E6042 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmBool[] HutongGames.PlayMaker.FsmVariables::get_BoolVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* FsmVariables_get_BoolVariables_mDBF6EFCBF4C3B454D690E831F6F2F5CA35C5DC47 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmString[] HutongGames.PlayMaker.FsmVariables::get_StringVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* FsmVariables_get_StringVariables_mF73342631D1B5FF92B028EDD5CE82CD82F235AB9 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmVector2[] HutongGames.PlayMaker.FsmVariables::get_Vector2Variables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* FsmVariables_get_Vector2Variables_m85DE6DDC7EF8890624AFC5167AA5C9A98EBB540A (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmVector3[] HutongGames.PlayMaker.FsmVariables::get_Vector3Variables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* FsmVariables_get_Vector3Variables_m6FD7B81514AA51C95E67601F4DFB443D467F2F0D (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmRect[] HutongGames.PlayMaker.FsmVariables::get_RectVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* FsmVariables_get_RectVariables_m3E08BC600245031E6DDBAE797871B11E5F593E2F (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmQuaternion[] HutongGames.PlayMaker.FsmVariables::get_QuaternionVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* FsmVariables_get_QuaternionVariables_m08898919CA4145C676808BE9D301F669B5FAFE78 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmGameObject[] HutongGames.PlayMaker.FsmVariables::get_GameObjectVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* FsmVariables_get_GameObjectVariables_m12954A97685FECDF37ED76A95821A1C50160651B (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmObject[] HutongGames.PlayMaker.FsmVariables::get_ObjectVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* FsmVariables_get_ObjectVariables_mA98B0586520A729234994B2F0FC6DCC67F5C9051 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmMaterial[] HutongGames.PlayMaker.FsmVariables::get_MaterialVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* FsmVariables_get_MaterialVariables_m4665A8E211BBCEAEC19F72D593AFBD462D40EBA2 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmTexture[] HutongGames.PlayMaker.FsmVariables::get_TextureVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* FsmVariables_get_TextureVariables_mD2BD3864F92E7EE5310239F5E59A5C826DF3949F (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmColor[] HutongGames.PlayMaker.FsmVariables::get_ColorVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* FsmVariables_get_ColorVariables_m0FC4DA49A05A0C1ABE826B730AC958261DE55D8D (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmArray[] HutongGames.PlayMaker.FsmVariables::get_ArrayVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* FsmVariables_get_ArrayVariables_mCFF234537EEAC04D255AE69428931227E22864D6 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmEnum[] HutongGames.PlayMaker.FsmVariables::get_EnumVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* FsmVariables_get_EnumVariables_m364A01B95D92703E3FCD6516D1AC7DEB4C6F9E54 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,HutongGames.PlayMaker.NamedVariable> HutongGames.PlayMaker.FsmVariables::get_variableLookup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* FsmVariables_get_variableLookup_mA279487E9D8EB7DF14B70A00A04FC2F82C691D32 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,HutongGames.PlayMaker.NamedVariable>::get_Values()
inline ValueCollection_tFEBB089031DDCBDE1CD782E4772D62388CCE3D34* Dictionary_2_get_Values_m9E3D1B31D3ACF10BE1301EC210B5CD90C484533B (Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_tFEBB089031DDCBDE1CD782E4772D62388CCE3D34* (*) (Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA*, const RuntimeMethod*))Dictionary_2_get_Values_mA0C01DEA55329E55380E96BBD04D4D228B437EC5_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,HutongGames.PlayMaker.NamedVariable>::get_Count()
inline int32_t ValueCollection_get_Count_m63AB051747CEBAB945744303D1F8ED2C8938CC6B (ValueCollection_tFEBB089031DDCBDE1CD782E4772D62388CCE3D34* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ValueCollection_tFEBB089031DDCBDE1CD782E4772D62388CCE3D34*, const RuntimeMethod*))ValueCollection_get_Count_m8138319201D267998400C7759D4EA510C591587C_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,HutongGames.PlayMaker.NamedVariable>::GetEnumerator()
inline Enumerator_tB32ADA14D6ED3B8FAC028A8B730A94841FCCA002 ValueCollection_GetEnumerator_m6DBD469E38A474D460F7955ED853AB9E3CE84B31 (ValueCollection_tFEBB089031DDCBDE1CD782E4772D62388CCE3D34* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB32ADA14D6ED3B8FAC028A8B730A94841FCCA002 (*) (ValueCollection_tFEBB089031DDCBDE1CD782E4772D62388CCE3D34*, const RuntimeMethod*))ValueCollection_GetEnumerator_m025EE28BE2F31676E08BC3D7C8E39D8232BDBBF8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,HutongGames.PlayMaker.NamedVariable>::Dispose()
inline void Enumerator_Dispose_m600D5F0E26DCB0448D56689E08D0549407A14BE1 (Enumerator_tB32ADA14D6ED3B8FAC028A8B730A94841FCCA002* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB32ADA14D6ED3B8FAC028A8B730A94841FCCA002*, const RuntimeMethod*))Enumerator_Dispose_mFD8FAB8D9FF5EDF9AE3B14CF539A8A34AA9527A8_gshared)(__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,HutongGames.PlayMaker.NamedVariable>::get_Current()
inline NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* Enumerator_get_Current_mBBD5EB735C7BE4C57A5DEFB9BB88881F96F749AA_inline (Enumerator_tB32ADA14D6ED3B8FAC028A8B730A94841FCCA002* __this, const RuntimeMethod* method)
{
	return ((  NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* (*) (Enumerator_tB32ADA14D6ED3B8FAC028A8B730A94841FCCA002*, const RuntimeMethod*))Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,HutongGames.PlayMaker.NamedVariable>::MoveNext()
inline bool Enumerator_MoveNext_m5FD7494BF6E5CA818B31BF1506F0EC92926981E2 (Enumerator_tB32ADA14D6ED3B8FAC028A8B730A94841FCCA002* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB32ADA14D6ED3B8FAC028A8B730A94841FCCA002*, const RuntimeMethod*))Enumerator_MoveNext_mBE11DA1DAFC756EB87E884AADC5EDC4BB72FB032_gshared)(__this, method);
}
// System.String HutongGames.PlayMaker.NamedVariable::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline (NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<HutongGames.PlayMaker.NamedVariable> HutongGames.PlayMaker.FsmVariables::get_emptyVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* FsmVariables_get_emptyVariables_m0F5A0F71A3FDA05372F831FC243E19EB633AA0BE (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<HutongGames.PlayMaker.NamedVariable>::Add(T)
inline void List_1_Add_m000A7A606626EA1FA3F196EDADB63DF720E0553B_inline (List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* __this, NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97*, NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,HutongGames.PlayMaker.NamedVariable>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m507191DC01CE675338D8029183BD317BA883EF48 (Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___0_key, method);
}
// TValue System.Collections.Generic.Dictionary`2<System.String,HutongGames.PlayMaker.NamedVariable>::get_Item(TKey)
inline NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* Dictionary_2_get_Item_m849E52416EE25BDD1E4E3A6BE4326AE27B705028 (Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* (*) (Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA*, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___0_key, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_args, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,HutongGames.PlayMaker.NamedVariable>::Add(TKey,TValue)
inline void Dictionary_2_Add_mAB65C90518F9DAFB2AFC456DA9CC22A1DCD025D8 (Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* __this, String_t* ___0_key, NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA*, String_t*, NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6*, const RuntimeMethod*))Dictionary_2_Add_m93FFFABE8FCE7FA9793F0915E2A8842C7CD0C0C1_gshared)(__this, ___0_key, ___1_value, method);
}
// HutongGames.PlayMaker.NamedVariable[] HutongGames.PlayMaker.FsmVariables::get_allVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* FsmVariables_get_allVariables_m604D9002071151541DEAD6D61A59031F1692CAB5 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<HutongGames.PlayMaker.NamedVariable>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m8EB71881B937BF5BD8161C75AE53755D8E12097B (List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___0_collection, method);
}
// System.Void System.Collections.Generic.List`1<HutongGames.PlayMaker.NamedVariable>::Sort()
inline void List_1_Sort_m181204CF02D08BA13C32066CEE42E12A12654ABD (List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97*, const RuntimeMethod*))List_1_Sort_m31071C3C6DF1FAD770119031BEA9315A2E3C1298_gshared)(__this, method);
}
// T[] System.Collections.Generic.List`1<HutongGames.PlayMaker.NamedVariable>::ToArray()
inline NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* List_1_ToArray_m2B4AD55AD5E4B9EFC3C5633D5A246D68242DF6BD (List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* __this, const RuntimeMethod* method)
{
	return ((  NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* (*) (List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// HutongGames.PlayMaker.NamedVariable[] HutongGames.PlayMaker.FsmVariables::GetAllNamedVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* FsmVariables_GetAllNamedVariables_m00063174BA64083861BF41D0C13354C8C0313147 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.NamedVariable[] HutongGames.PlayMaker.FsmVariables::GetNamedVariables(HutongGames.PlayMaker.VariableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* FsmVariables_GetNamedVariables_mCC04214255A9DB9932B868016CF8DAE62775D948 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, int32_t ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,HutongGames.PlayMaker.NamedVariable>::ContainsValue(TValue)
inline bool Dictionary_2_ContainsValue_mA916C2087EC11E3353877D634AAFF9EE4196E0FC (Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* __this, NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA*, NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6*, const RuntimeMethod*))Dictionary_2_ContainsValue_m51A7764AD04D34D0B2CDB01F960FA1FEBCF6B562_gshared)(__this, ___0_value, method);
}
// HutongGames.PlayMaker.VariableType HutongGames.PlayMaker.FsmVar::GetVariableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FsmVar_GetVariableType_m4BA1279EAFC14CC73534657DA578D7744188CCF6 (Type_t* ___0_type, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Boolean HutongGames.PlayMaker.NamedVariable::get_ShowInInspector()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NamedVariable_get_ShowInInspector_mDE3C8EE25E8E8A38901EBF8EBD38A9FD3DA7541A_inline (NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* __this, const RuntimeMethod* method) ;
// System.Single HutongGames.PlayMaker.FsmFloat::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float FsmFloat_get_Value_m265F39829C4C42B0A79775F1A2C20F1A62BA3ACD (FsmFloat_t99C088B49A35579867184120212107B5FB177420* __this, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmFloat::set_Value(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmFloat_set_Value_mF252A515BE1BF1C4A94E74F807987A6695F7D7C7_inline (FsmFloat_t99C088B49A35579867184120212107B5FB177420* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Int32 HutongGames.PlayMaker.FsmInt::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FsmInt_get_Value_mB223B0A0C2082A67F53E7FCD990F3D5AA879610D (FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* __this, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmInt::set_Value(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmInt_set_Value_mB7EB98D36202229B329F024942F80A7EF793659E_inline (FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Boolean HutongGames.PlayMaker.FsmBool::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FsmBool_get_Value_m2A36605407DC0F27ED37A095942A05DB93AC9BFC (FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* __this, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmBool::set_Value(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmBool_set_Value_m8050208AF94EB950D663485E5D134DA34F3C95F4_inline (FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* __this, bool ___0_value, const RuntimeMethod* method) ;
// UnityEngine.GameObject HutongGames.PlayMaker.FsmGameObject::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* FsmGameObject_get_Value_m029F838272E39B99D02D7529562B5338FD2E2584 (FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* __this, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmGameObject::set_Value(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmGameObject_set_Value_mE5FDC9A93EA0E7B64C2C78A558C0679DD8D6BE44 (FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Color HutongGames.PlayMaker.FsmColor::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F FsmColor_get_Value_mD11C7F67290AA84061E4D8EE055FE09CAC7115E2_inline (FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* __this, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmColor::set_Value(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmColor_set_Value_mB888645B6E49718FE4ECF613BF10083C5BF431DF_inline (FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector2 HutongGames.PlayMaker.FsmVector2::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FsmVector2_get_Value_mB7BE45F818D5B78246F185D66B592987DD3CCF55_inline (FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* __this, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmVector2::set_Value(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmVector2_set_Value_m0EB667A0CF1C74FEC94FA97CC2215D74BD3ED904_inline (FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 HutongGames.PlayMaker.FsmVector3::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 FsmVector3_get_Value_m6196631A608232530F1CD4B7572E99D69AC1C4E1 (FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* __this, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmVector3::set_Value(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmVector3_set_Value_m51DCF660E54F20CF74084C95C41C5D0D9CFDA7CC_inline (FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Rect HutongGames.PlayMaker.FsmRect::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D FsmRect_get_Value_mC0A513D684FA20436438E8287209D6DD702DD6B2_inline (FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* __this, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmRect::set_Value(UnityEngine.Rect)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmRect_set_Value_m04CFC74B987B305B26E1B13CAB03D616FDADD141_inline (FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion HutongGames.PlayMaker.FsmQuaternion::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 FsmQuaternion_get_Value_m9B99B77E8A84133DBA0114F1E705FA731DF4011E_inline (FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* __this, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmQuaternion::set_Value(UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmQuaternion_set_Value_m9CC98C1DEB6EB81CAED46789D0D0891E78990FBD_inline (FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Object HutongGames.PlayMaker.FsmObject::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* FsmObject_get_Value_m4BAC2DC7BD28A61FF42057608B5E6BA213974891 (FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* __this, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmObject::set_Value(UnityEngine.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmObject_set_Value_m80FD7143C40FE8CB2C0642B134E12A6BE5972C73_inline (FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Material HutongGames.PlayMaker.FsmMaterial::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* FsmMaterial_get_Value_mE9BFCA868C19B112CCB1CD051BE7A8C2EF6DD375 (FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* __this, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmMaterial::set_Value(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmMaterial_set_Value_m3ED44866449C25D2F771677FD76A4C8A028C149E (FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* __this, Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Texture HutongGames.PlayMaker.FsmTexture::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* FsmTexture_get_Value_m9E10A59BCAF70582841D5A8DCAFFCAD26569B295 (FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* __this, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmTexture::set_Value(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmTexture_set_Value_m6CADBCAFD1C435C999656F18D4A995EFADCBD200 (FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* __this, Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* ___0_value, const RuntimeMethod* method) ;
// System.String HutongGames.PlayMaker.FsmString::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FsmString_get_Value_mF43802ADDAA73622CA6CE25425C712BD9B15916D (FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* __this, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmString::set_Value(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmString_set_Value_m73BB296E0E78080EA98402FA2CCDD3779781C8B0_inline (FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmArray::CopyValues(HutongGames.PlayMaker.FsmArray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmArray_CopyValues_m83347A5D76DE64DE66EF756205DDECADD85D295D (FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* __this, FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* ___0_source, const RuntimeMethod* method) ;
// System.Enum HutongGames.PlayMaker.FsmEnum::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* FsmEnum_get_Value_m4C7241940B767D14DC79184A4A614179BFF3759E (FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* __this, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmEnum::set_Value(System.Enum)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmEnum_set_Value_mFE5419E5BB8B68321A7C40861F923781D9DE4996 (FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* __this, Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* ___0_value, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.FsmVariables::FindFsmFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmFloat_t99C088B49A35579867184120212107B5FB177420* FsmVariables_FindFsmFloat_m3E3A17DB596D726E5B6901F46A7033C3B7C417B4 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.FsmVariables::FindFsmInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* FsmVariables_FindFsmInt_mABEFD65A7515E55EEAEDA168B398F97F9F59FAFE (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.FsmVariables::FindFsmBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* FsmVariables_FindFsmBool_m45256EFFEB6938AF8D0B3F16D2F30EF78AF0C558 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmRect HutongGames.PlayMaker.FsmVariables::FindFsmRect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* FsmVariables_FindFsmRect_m2D87EF64539F0F006D1A26AD2201A463EFE68B96 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.FsmVariables::FindFsmQuaternion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* FsmVariables_FindFsmQuaternion_m495B300BDF3CB74225C5D7700D7C028A7DB872E8 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.FsmVariables::FindFsmObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* FsmVariables_FindFsmObject_m67F2BC2FCE589D93E69F51DEAB3E535B18C006B0 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmMaterial HutongGames.PlayMaker.FsmVariables::FindFsmMaterial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* FsmVariables_FindFsmMaterial_m5AD86F94E0DB8CE8D036BBCAB6067656A76DEBC4 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmTexture HutongGames.PlayMaker.FsmVariables::FindFsmTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* FsmVariables_FindFsmTexture_m4D3FF1252BE006F15E6B719DAC96FF55BDF56878 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.FsmVariables::FindFsmString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* FsmVariables_FindFsmString_mCFEA267A6A552D0B2923CF043BED35E3E8FE21B8 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.FsmVariables::FindFsmEnum(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* FsmVariables_FindFsmEnum_m9DB15E92C420BA8BC401A01D82694D645DE7D52F (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.FsmVariables::FindFsmArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* FsmVariables_FindFsmArray_m2F2D8DFA48495CF75758E0C6B1F9D31544FD617D (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,HutongGames.PlayMaker.NamedVariable>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mE4A90E4608E8ACEF12F9723153046F50E88608AA (Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* __this, String_t* ___0_key, NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA*, String_t*, NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// HutongGames.PlayMaker.FsmVariables HutongGames.PlayMaker.FsmVariables::get_GlobalVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* FsmVariables_get_GlobalVariables_m229AA5DAFB0CFC9B9C6D8DA280DA3479F32568D0 (const RuntimeMethod* method) ;
// HutongGames.PlayMaker.NamedVariable HutongGames.PlayMaker.FsmVariables::FindVariable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* FsmVariables_FindVariable_m20B820ED7D93578DB8FAA754575D195471088BF9 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean PlayMakerGlobals::get_IsPlaying()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayMakerGlobals_get_IsPlaying_mB87FAAD797E64E9C2069469D2F90A73843726562_inline (const RuntimeMethod* method) ;
// HutongGames.PlayMaker.NamedVariable HutongGames.PlayMaker.NamedVariable::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* NamedVariable_Copy_mDE0983ADFF0A8901E74CF28B8835EC05BDE7E47B (NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* __this, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.NamedVariable HutongGames.PlayMaker.FsmVariables::GetVariable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmFloat::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmFloat__ctor_m3C6268535EF4B3D9E582ADB4D38E329E157C5C31 (FsmFloat_t99C088B49A35579867184120212107B5FB177420* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.NamedVariable::set_CastVariable(HutongGames.PlayMaker.NamedVariable)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline (NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* __this, NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* ___0_value, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmInt::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmInt__ctor_m048BCE07523D678A286C114A05718087F6ED690D (FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmBool::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmBool__ctor_mA26E07BF8C5190FC8B2137CEB77033580ED56F33 (FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmGameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmGameObject__ctor_mBE0B5D73F529A3C162AC9D26AB8E67030352C55C (FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmString::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmString__ctor_m9545C6856B9901BFB252CFC464128EACBF2EACC2 (FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmVector2::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVector2__ctor_mA11561CD2792FF3F797F3B1329F1AF0F9B2676B3 (FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmVector3::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVector3__ctor_m2C71240F9D79054F1660CB4B313F31A201C5AC6C (FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmColor::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmColor__ctor_mBCFA90C99494EDB1C21304DEB03ECB8CC53B4B80 (FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmRect::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmRect__ctor_m0A91EDC10CEE50B16E1079A9D14AFDE713162CAD (FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmMaterial::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmMaterial__ctor_mBEC459F1D620427DE3408D464BFDB75F6500ACD9 (FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmTexture::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmTexture__ctor_m70A2C3A989927FC2199DE8F8D0B9D2EF05FEAF77 (FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmQuaternion::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmQuaternion__ctor_m2ABF4653AFE71AE804A23E544A5AFC34DE790B09 (FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmObject__ctor_m5B8BA5463236DC29D82D17282CD783D48574D3E1 (FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmArray::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmArray__ctor_mC577A860B640E75FED30BE6C72D33FAB898728F3 (FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmEnum::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmEnum__ctor_m7EB718CEA41DD1A74050A9574CD7DEEFB47E8741 (FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, RuntimeObject* ___1_actualValue, String_t* ___2_message, const RuntimeMethod* method) ;
// HutongGames.PlayMaker.NamedVariable HutongGames.PlayMaker.FsmVariables::FindVariable(HutongGames.PlayMaker.VariableType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* FsmVariables_FindVariable_mEE0E90C8FE9CBF932F404D07721C528BA86A1293 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, int32_t ___0_type, String_t* ___1_name, const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mABB0055F51D71AEB872FC7C3C1726FBF9371E402 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___0_key, Type_t** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, Type_t**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___0_key, ___1_value, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___0_item, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7 (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___0_key, Type_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, Type_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___0_key, ___1_value, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Type>::Remove(TKey)
inline bool Dictionary_2_Remove_m73DDAC151CCC5E06EF7533528A1505EA2AA440B0 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, String_t* ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___0_key, method);
}
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___0_separator, const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0 (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Object HutongGames.PlayMaker.ReflectionUtils::GetMemberValue(System.Reflection.MemberInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetMemberValue_m22D7B2208CCC9B9C1A69158B636CCC67BFF82CFA (MemberInfo_t* ___0_member, RuntimeObject* ___1_target, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, Exception_t* ___2_innerException, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___0_obj, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318 (Type_t* __this, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.ReflectionUtils::SetBoxedMemberValue(System.Object,System.Reflection.MemberInfo,System.Object,System.Reflection.MemberInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtils_SetBoxedMemberValue_mDEF70DAD451816F08D773735292225BCAC47B20E (RuntimeObject* ___0_parent, MemberInfo_t* ___1_targetInfo, RuntimeObject* ___2_target, MemberInfo_t* ___3_propertyInfo, RuntimeObject* ___4_value, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.ReflectionUtils::SetMemberValue(System.Reflection.MemberInfo,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtils_SetMemberValue_mFDA444E488ACCA726087463BC659BC678FAD7B6D (MemberInfo_t* ___0_member, RuntimeObject* ___1_target, RuntimeObject* ___2_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::.ctor()
inline void List_1__ctor_m1ECCAADF7DB1972688A2B429816CF4E0581D4E2A (List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_mFDD370E143C78AA5DA55A6DD602C5B96A81B5341 (List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m1F76B300133150E6046C5FED00E88B5DE0A02E17_gshared)(__this, ___0_collection, method);
}
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Type>::.ctor()
inline void Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428 (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void HutongGames.PlayMaker.FsmStateAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmStateAction__ctor_m51DB5C981D5BFE42887218FC4DC39FCAC5E1CADF (FsmStateAction_t0804A0232CBB77766DD11F3CDBA380D7BDE3F01D* __this, const RuntimeMethod* method) ;
// System.Void HutongGames.PlayMaker.FsmStateAction::set_Enabled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmStateAction_set_Enabled_m4BD8D99D7B45E4AB710F048023AEC99D5CED647E_inline (FsmStateAction_t0804A0232CBB77766DD11F3CDBA380D7BDE3F01D* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___0_s, int32_t* ___1_result, const RuntimeMethod* method) ;
// System.String System.String::CreateString(System.Char,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B (String_t* __this, Il2CppChar ___0_c, int32_t ___1_count, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_m811FCA60D20059998EC547FC390F053C524D045D (String_t* ___0_input, String_t* ___1_pattern, String_t* ___2_replacement, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
// System.String HutongGames.Utility.StringUtils::StripHtml(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_StripHtml_m9B39E6D1DC8F0E63F67A72D56A0FE0F347EA7FA6 (String_t* ___0_input, const RuntimeMethod* method) ;
// System.String HutongGames.Utility.StringUtils::StripMarkdown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_StripMarkdown_mDF61E17C0AC7EFAD798122799114519B4C730918 (String_t* ___0_input, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder HutongGames.Utility.StringUtils::get_EscapeBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringUtils_get_EscapeBuilder_mC4F86F0B36E201900294AF866BE9DE2C6F40A9DF (const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Capacity_m9DBF3B3940BC0BB882CA26F0EDB53896A491AD1E (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Capacity(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Capacity_m11BD24481D70C842320ADF7C959CC674D18AF574 (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
// System.String System.UInt16::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt16_ToString_m75C61173B6A4DCF2D678D8A03EA713FEE29CC98C (uint16_t* __this, String_t* ___0_format, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMax()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_x, float ___1_y, float ___2_width, float ___3_height, const RuntimeMethod* method) ;
// System.Boolean HutongGames.Extensions.RectExtensions::IsDifferent(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectExtensions_IsDifferent_mEA192CB75BCCC54CC48F6D8D2C852F8F05D96074 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_xMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.Rect::MinMaxRect(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D Rect_MinMaxRect_m540D2DD8C255D276AD4AE06D9CCA2A667EFA39E5 (float ___0_xmin, float ___1_ymin, float ___2_xmax, float ___3_ymax, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect HutongGames.Extensions.RectExtensions::ScaleSizeBy(UnityEngine.Rect,System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtensions_ScaleSizeBy_mEE827CFCE3A6565DD328D38D42F91780A287E352 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, float ___1_scale, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_pivotPoint, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_x(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_xMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_xMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_xMax_m97C28D468455A6D19325D0D862E80A093240D49D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_yMin(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_yMin_m9F780E509B9215A9E5826178CF664BD0E486D4EE (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rect::set_yMax(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect_set_yMax_mCF452040E0068A4B3CB15994C0B4B6AD4D78E04B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Rect HutongGames.Extensions.RectExtensions::ScaleSizeBy(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtensions_ScaleSizeBy_m8D572E573575457134D039308A76822D77EED77E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_scale, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_pivotPoint, const RuntimeMethod* method) ;
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* Texture2D_GetPixels32_m48230192E7543765C1A517F251D1D9BFCFB58C3D (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<HutongGames.Extensions.TextureExtensions/Point>::.ctor()
inline void Queue_1__ctor_m862485EFC609D55604F50E5DC9FEBF63567245EC (Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E*, const RuntimeMethod*))Queue_1__ctor_m862485EFC609D55604F50E5DC9FEBF63567245EC_gshared)(__this, method);
}
// System.Void HutongGames.Extensions.TextureExtensions/Point::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_mC13607EF25FC68F6AB06E7C9C650A5BC38C9DDF4 (Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1* __this, int32_t ___0_aX, int32_t ___1_aY, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<HutongGames.Extensions.TextureExtensions/Point>::Enqueue(T)
inline void Queue_1_Enqueue_mC2C3C175853EFA59303F121EC520A06CD89BA44A (Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E* __this, Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E*, Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1, const RuntimeMethod*))Queue_1_Enqueue_mC2C3C175853EFA59303F121EC520A06CD89BA44A_gshared)(__this, ___0_item, method);
}
// T System.Collections.Generic.Queue`1<HutongGames.Extensions.TextureExtensions/Point>::Dequeue()
inline Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 Queue_1_Dequeue_m2BCDF8354BB2421C637334345A684BDD65F16081 (Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E* __this, const RuntimeMethod* method)
{
	return ((  Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 (*) (Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E*, const RuntimeMethod*))Queue_1_Dequeue_m2BCDF8354BB2421C637334345A684BDD65F16081_gshared)(__this, method);
}
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<HutongGames.Extensions.TextureExtensions/Point>::get_Count()
inline int32_t Queue_1_get_Count_mE39FB54CAE8903AC765EF23FFCDB8FA454521D20_inline (Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E*, const RuntimeMethod*))Queue_1_get_Count_mE39FB54CAE8903AC765EF23FFCDB8FA454521D20_gshared_inline)(__this, method);
}
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_SetPixels32_m169F9873A21FB8DECA24DC1B8F06FB23D13BEE2A (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* __this, Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___0_colors, const RuntimeMethod* method) ;
// System.Void HutongGames.Extensions.TextureExtensions/Point::.ctor(System.Int16,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m6D556B563C2873006A45F066E416F9C7F92B42B6 (Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1* __this, int16_t ___0_aX, int16_t ___1_aY, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 HutongGames.PlayMaker.FsmUtility/BitConverter::ToInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_mF03938F14BD9539D86194E8EF64B7520F5F38A13 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_value;
		int32_t L_2 = ___1_startIndex;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3(L_1, L_2, NULL);
		return L_3;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_value;
		int32_t L_5 = ___1_startIndex;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD((RuntimeArray*)L_4, L_5, 4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_value;
		int32_t L_7 = ___1_startIndex;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_8;
		L_8 = BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3(L_6, L_7, NULL);
		return L_8;
	}
}
// System.Single HutongGames.PlayMaker.FsmUtility/BitConverter::ToSingle(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BitConverter_ToSingle_m6D45F3B574C7C74A2A556874655B83317D58D3A0 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = ___0_value;
		int32_t L_2 = ___1_startIndex;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		float L_3;
		L_3 = BitConverter_ToSingle_m61C4AA4550F008C0F7681DFF8D6FAE889FA149FD(L_1, L_2, NULL);
		return L_3;
	}

IL_000f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___0_value;
		int32_t L_5 = ___1_startIndex;
		Array_Reverse_mE788006243D34C654D7DDEF13E2D9E7B129AF8AD((RuntimeArray*)L_4, L_5, 4, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_value;
		int32_t L_7 = ___1_startIndex;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		float L_8;
		L_8 = BitConverter_ToSingle_m61C4AA4550F008C0F7681DFF8D6FAE889FA149FD(L_6, L_7, NULL);
		return L_8;
	}
}
// System.Boolean HutongGames.PlayMaker.FsmUtility/BitConverter::ToBoolean(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BitConverter_ToBoolean_mB275A39C80CB1E05B0A19EA54CAEF3194C6D1AC2 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_value;
		int32_t L_1 = ___1_startIndex;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = BitConverter_ToBoolean_mBDA6F9734B907F7BA1135819940F5D6C3E5085FB(L_0, L_1, NULL);
		return L_2;
	}
}
// System.Byte[] HutongGames.PlayMaker.FsmUtility/BitConverter::GetBytes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m32D5019ABD31FC4AD73BFE9E74B2CBF2934CE564 (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		bool L_1 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m8129D5C616ECE5D5095473D8A931B65487C770BF(L_1, NULL);
		return L_2;
	}

IL_000e:
	{
		bool L_3 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = BitConverter_GetBytes_m8129D5C616ECE5D5095473D8A931B65487C770BF(L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_5, NULL);
		return L_5;
	}
}
// System.Byte[] HutongGames.PlayMaker.FsmUtility/BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m33832B63259F7311C2072C0DC6E91CF1BD68C16F (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_1 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(L_1, NULL);
		return L_2;
	}

IL_000e:
	{
		int32_t L_3 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = BitConverter_GetBytes_mCD74C79673617CEBF85F8A653520C860A9F014F9(L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_5, NULL);
		return L_5;
	}
}
// System.Byte[] HutongGames.PlayMaker.FsmUtility/BitConverter::GetBytes(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* BitConverter_GetBytes_m571C2DDE21F881D21290092CADCD3F7EB0D4CEE3 (float ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		bool L_0 = ((BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_StaticFields*)il2cpp_codegen_static_fields_for(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var))->___IsLittleEndian_0;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		float L_1 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = BitConverter_GetBytes_m86ADBB3533A4FFA79B7303FBEBC9EBD1BCA6A549(L_1, NULL);
		return L_2;
	}

IL_000e:
	{
		float L_3 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
		L_4 = BitConverter_GetBytes_m86ADBB3533A4FFA79B7303FBEBC9EBD1BCA6A549(L_3, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4;
		Array_Reverse_m464993603E0F56B4A68F70113212032FE7381B6C((RuntimeArray*)L_5, NULL);
		return L_5;
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
// PlayMakerGlobals HutongGames.PlayMaker.FsmVariables::get_GlobalsComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayMakerGlobals_tBAC67870679A215F79CB30D3DCF2B2E2AC519861* FsmVariables_get_GlobalsComponent_m875EE8329EA81CF63552A4E9F6F393010923826B (const RuntimeMethod* method) 
{
	{
		PlayMakerGlobals_tBAC67870679A215F79CB30D3DCF2B2E2AC519861* L_0;
		L_0 = PlayMakerGlobals_get_Instance_mD39AD803B829B4F0A082C1D17B8D2BB73ADB2E72(NULL);
		return L_0;
	}
}
// HutongGames.PlayMaker.FsmVariables HutongGames.PlayMaker.FsmVariables::get_GlobalVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* FsmVariables_get_GlobalVariables_m229AA5DAFB0CFC9B9C6D8DA280DA3479F32568D0 (const RuntimeMethod* method) 
{
	{
		PlayMakerGlobals_tBAC67870679A215F79CB30D3DCF2B2E2AC519861* L_0;
		L_0 = PlayMakerGlobals_get_Instance_mD39AD803B829B4F0A082C1D17B8D2BB73ADB2E72(NULL);
		NullCheck(L_0);
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_1;
		L_1 = PlayMakerGlobals_get_Variables_m70ED9FFD03D4C4E2B6E6E4C04CEB1AD4E74E7DA4_inline(L_0, NULL);
		return L_1;
	}
}
// System.Boolean HutongGames.PlayMaker.FsmVariables::get_GlobalVariablesSynced()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FsmVariables_get_GlobalVariablesSynced_m7CD3031411901DD3263B17368A79E5C6970FB607 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597_StaticFields*)il2cpp_codegen_static_fields_for(FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597_il2cpp_TypeInfo_var))->___U3CGlobalVariablesSyncedU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::set_GlobalVariablesSynced(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_set_GlobalVariablesSynced_m506273DB7B2823B44BF78BFC115A5670F80CE5AC (bool ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___0_value;
		((FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597_StaticFields*)il2cpp_codegen_static_fields_for(FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597_il2cpp_TypeInfo_var))->___U3CGlobalVariablesSyncedU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Collections.Generic.Dictionary`2<System.String,HutongGames.PlayMaker.NamedVariable> HutongGames.PlayMaker.FsmVariables::get_variableLookup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* FsmVariables_get_variableLookup_mA279487E9D8EB7DF14B70A00A04FC2F82C691D32 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	{
		Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* L_0 = __this->____variableLookup_1;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		FsmVariables_Init_m1D4D97A0DC015D761085D13AFB6E36D905683C9A(__this, NULL);
	}

IL_000e:
	{
		Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* L_1 = __this->____variableLookup_1;
		return L_1;
	}
}
// HutongGames.PlayMaker.NamedVariable[] HutongGames.PlayMaker.FsmVariables::get_allVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* FsmVariables_get_allVariables_m604D9002071151541DEAD6D61A59031F1692CAB5 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	{
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_0 = __this->____allVariables_2;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		FsmVariables_Init_m1D4D97A0DC015D761085D13AFB6E36D905683C9A(__this, NULL);
	}

IL_000e:
	{
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_1 = __this->____allVariables_2;
		return L_1;
	}
}
// System.Collections.Generic.List`1<HutongGames.PlayMaker.NamedVariable> HutongGames.PlayMaker.FsmVariables::get_emptyVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* FsmVariables_get_emptyVariables_m0F5A0F71A3FDA05372F831FC243E19EB633AA0BE (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	{
		List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* L_0 = __this->____emptyVariables_3;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		FsmVariables_Init_m1D4D97A0DC015D761085D13AFB6E36D905683C9A(__this, NULL);
	}

IL_000e:
	{
		List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* L_1 = __this->____emptyVariables_3;
		return L_1;
	}
}
// System.String[] HutongGames.PlayMaker.FsmVariables::get_Categories()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* FsmVariables_get_Categories_mC6F59CA328053B02BB2E031345BD974A682B1F4C (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___categories_19;
		return L_0;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::set_Categories(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_set_Categories_mBEF1DFD08767FFD7D8076681160DB3FFA75896F2 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_value, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___0_value;
		__this->___categories_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___categories_19), (void*)L_0);
		return;
	}
}
// System.Int32[] HutongGames.PlayMaker.FsmVariables::get_CategoryIDs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* FsmVariables_get_CategoryIDs_m983AF5B6EF89AB9CF32D32D6B185A363E10D5FD6 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___variableCategoryIDs_20;
		return L_0;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::set_CategoryIDs(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_set_CategoryIDs_m1590E726F467DC08B9D800953A2D230A4574A584 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_value, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_value;
		__this->___variableCategoryIDs_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___variableCategoryIDs_20), (void*)L_0);
		return;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables__ctor_mBCBAA537A189F4FCC8865EEA28DD58825A4CE7C8 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___categories_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___categories_19), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___variableCategoryIDs_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___variableCategoryIDs_20), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::.ctor(HutongGames.PlayMaker.FsmVariables)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables__ctor_mFB5835E36E672FB398E3B3FE5D6D65A228B864B3 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* ___0_source, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmFloat_t99C088B49A35579867184120212107B5FB177420_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmObject_t69096525269982576D57D563C4659F408D7A2A6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___categories_19 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___categories_19), (void*)L_1);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___variableCategoryIDs_20 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___variableCategoryIDs_20), (void*)L_2);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_3 = ___0_source;
		if (L_3)
		{
			goto IL_002a;
		}
	}
	{
		return;
	}

IL_002a:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_4 = ___0_source;
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4->___categories_19;
		NullCheck(L_5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		__this->___categories_19 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___categories_19), (void*)L_6);
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_7 = ___0_source;
		NullCheck(L_7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7->___categories_19;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = __this->___categories_19;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_10 = ___0_source;
		NullCheck(L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_10->___categories_19;
		NullCheck(L_11);
		Array_Copy_m4233828B4E6288B6D815F539AAA38575DE627900((RuntimeArray*)L_8, (RuntimeArray*)L_9, ((int32_t)(((RuntimeArray*)L_11)->max_length)), NULL);
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_12 = ___0_source;
		NullCheck(L_12);
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_13 = L_12->___floatVariables_4;
		if (!L_13)
		{
			goto IL_0099;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_14 = ___0_source;
		NullCheck(L_14);
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_15 = L_14->___floatVariables_4;
		NullCheck(L_15);
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_16 = (FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D*)(FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D*)SZArrayNew(FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)));
		__this->___floatVariables_4 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___floatVariables_4), (void*)L_16);
		V_0 = 0;
		goto IL_008e;
	}

IL_0075:
	{
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_17 = __this->___floatVariables_4;
		int32_t L_18 = V_0;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_19 = ___0_source;
		NullCheck(L_19);
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_20 = L_19->___floatVariables_4;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_24 = (FsmFloat_t99C088B49A35579867184120212107B5FB177420*)il2cpp_codegen_object_new(FsmFloat_t99C088B49A35579867184120212107B5FB177420_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		FsmFloat__ctor_m44DB5226A6A8F9C408AE1E01B821B30BF32799AF(L_24, L_23, NULL);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_24);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_18), (FsmFloat_t99C088B49A35579867184120212107B5FB177420*)L_24);
		int32_t L_25 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_008e:
	{
		int32_t L_26 = V_0;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_27 = ___0_source;
		NullCheck(L_27);
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_28 = L_27->___floatVariables_4;
		NullCheck(L_28);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0075;
		}
	}

IL_0099:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_29 = ___0_source;
		NullCheck(L_29);
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_30 = L_29->___intVariables_5;
		if (!L_30)
		{
			goto IL_00dc;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_31 = ___0_source;
		NullCheck(L_31);
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_32 = L_31->___intVariables_5;
		NullCheck(L_32);
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_33 = (FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A*)(FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A*)SZArrayNew(FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_32)->max_length)));
		__this->___intVariables_5 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___intVariables_5), (void*)L_33);
		V_1 = 0;
		goto IL_00d1;
	}

IL_00b8:
	{
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_34 = __this->___intVariables_5;
		int32_t L_35 = V_1;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_36 = ___0_source;
		NullCheck(L_36);
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_37 = L_36->___intVariables_5;
		int32_t L_38 = V_1;
		NullCheck(L_37);
		int32_t L_39 = L_38;
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_40 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_41 = (FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667*)il2cpp_codegen_object_new(FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		FsmInt__ctor_m70E96625770D1F919BF513D714EF3EB0A904C245(L_41, L_40, NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_41);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(L_35), (FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667*)L_41);
		int32_t L_42 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00d1:
	{
		int32_t L_43 = V_1;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_44 = ___0_source;
		NullCheck(L_44);
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_45 = L_44->___intVariables_5;
		NullCheck(L_45);
		if ((((int32_t)L_43) < ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))))
		{
			goto IL_00b8;
		}
	}

IL_00dc:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_46 = ___0_source;
		NullCheck(L_46);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_47 = L_46->___boolVariables_6;
		if (!L_47)
		{
			goto IL_011f;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_48 = ___0_source;
		NullCheck(L_48);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_49 = L_48->___boolVariables_6;
		NullCheck(L_49);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_50 = (FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26*)(FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26*)SZArrayNew(FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_49)->max_length)));
		__this->___boolVariables_6 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boolVariables_6), (void*)L_50);
		V_2 = 0;
		goto IL_0114;
	}

IL_00fb:
	{
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_51 = __this->___boolVariables_6;
		int32_t L_52 = V_2;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_53 = ___0_source;
		NullCheck(L_53);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_54 = L_53->___boolVariables_6;
		int32_t L_55 = V_2;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_58 = (FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D*)il2cpp_codegen_object_new(FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		FsmBool__ctor_m0A991D21A5DA181674A256118E50BB8B3F9FB452(L_58, L_57, NULL);
		NullCheck(L_51);
		ArrayElementTypeCheck (L_51, L_58);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D*)L_58);
		int32_t L_59 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0114:
	{
		int32_t L_60 = V_2;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_61 = ___0_source;
		NullCheck(L_61);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_62 = L_61->___boolVariables_6;
		NullCheck(L_62);
		if ((((int32_t)L_60) < ((int32_t)((int32_t)(((RuntimeArray*)L_62)->max_length)))))
		{
			goto IL_00fb;
		}
	}

IL_011f:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_63 = ___0_source;
		NullCheck(L_63);
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_64 = L_63->___gameObjectVariables_13;
		if (!L_64)
		{
			goto IL_0162;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_65 = ___0_source;
		NullCheck(L_65);
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_66 = L_65->___gameObjectVariables_13;
		NullCheck(L_66);
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_67 = (FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999*)(FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999*)SZArrayNew(FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_66)->max_length)));
		__this->___gameObjectVariables_13 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameObjectVariables_13), (void*)L_67);
		V_3 = 0;
		goto IL_0157;
	}

IL_013e:
	{
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_68 = __this->___gameObjectVariables_13;
		int32_t L_69 = V_3;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_70 = ___0_source;
		NullCheck(L_70);
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_71 = L_70->___gameObjectVariables_13;
		int32_t L_72 = V_3;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* L_75 = (FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68*)il2cpp_codegen_object_new(FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68_il2cpp_TypeInfo_var);
		NullCheck(L_75);
		FsmGameObject__ctor_m6ECB3C5BE2D48C5DF51E8CDBC1C10D2D75FC0988(L_75, L_74, NULL);
		NullCheck(L_68);
		ArrayElementTypeCheck (L_68, L_75);
		(L_68)->SetAt(static_cast<il2cpp_array_size_t>(L_69), (FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68*)L_75);
		int32_t L_76 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_0157:
	{
		int32_t L_77 = V_3;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_78 = ___0_source;
		NullCheck(L_78);
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_79 = L_78->___gameObjectVariables_13;
		NullCheck(L_79);
		if ((((int32_t)L_77) < ((int32_t)((int32_t)(((RuntimeArray*)L_79)->max_length)))))
		{
			goto IL_013e;
		}
	}

IL_0162:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_80 = ___0_source;
		NullCheck(L_80);
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_81 = L_80->___colorVariables_10;
		if (!L_81)
		{
			goto IL_01ab;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_82 = ___0_source;
		NullCheck(L_82);
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_83 = L_82->___colorVariables_10;
		NullCheck(L_83);
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_84 = (FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD*)(FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD*)SZArrayNew(FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_83)->max_length)));
		__this->___colorVariables_10 = L_84;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorVariables_10), (void*)L_84);
		V_4 = 0;
		goto IL_019f;
	}

IL_0182:
	{
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_85 = __this->___colorVariables_10;
		int32_t L_86 = V_4;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_87 = ___0_source;
		NullCheck(L_87);
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_88 = L_87->___colorVariables_10;
		int32_t L_89 = V_4;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* L_91 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* L_92 = (FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242*)il2cpp_codegen_object_new(FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242_il2cpp_TypeInfo_var);
		NullCheck(L_92);
		FsmColor__ctor_m67D6B2E3DA66DA539F213FB8B15D7606632DD522(L_92, L_91, NULL);
		NullCheck(L_85);
		ArrayElementTypeCheck (L_85, L_92);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(L_86), (FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242*)L_92);
		int32_t L_93 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_93, 1));
	}

IL_019f:
	{
		int32_t L_94 = V_4;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_95 = ___0_source;
		NullCheck(L_95);
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_96 = L_95->___colorVariables_10;
		NullCheck(L_96);
		if ((((int32_t)L_94) < ((int32_t)((int32_t)(((RuntimeArray*)L_96)->max_length)))))
		{
			goto IL_0182;
		}
	}

IL_01ab:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_97 = ___0_source;
		NullCheck(L_97);
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_98 = L_97->___vector2Variables_8;
		if (!L_98)
		{
			goto IL_01f4;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_99 = ___0_source;
		NullCheck(L_99);
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_100 = L_99->___vector2Variables_8;
		NullCheck(L_100);
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_101 = (FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F*)(FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F*)SZArrayNew(FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_100)->max_length)));
		__this->___vector2Variables_8 = L_101;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vector2Variables_8), (void*)L_101);
		V_5 = 0;
		goto IL_01e8;
	}

IL_01cb:
	{
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_102 = __this->___vector2Variables_8;
		int32_t L_103 = V_5;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_104 = ___0_source;
		NullCheck(L_104);
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_105 = L_104->___vector2Variables_8;
		int32_t L_106 = V_5;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* L_108 = (L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* L_109 = (FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2*)il2cpp_codegen_object_new(FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2_il2cpp_TypeInfo_var);
		NullCheck(L_109);
		FsmVector2__ctor_mD5BCAE3E34B976200F0E663EFB9FB1666C33660C(L_109, L_108, NULL);
		NullCheck(L_102);
		ArrayElementTypeCheck (L_102, L_109);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(L_103), (FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2*)L_109);
		int32_t L_110 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_110, 1));
	}

IL_01e8:
	{
		int32_t L_111 = V_5;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_112 = ___0_source;
		NullCheck(L_112);
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_113 = L_112->___vector2Variables_8;
		NullCheck(L_113);
		if ((((int32_t)L_111) < ((int32_t)((int32_t)(((RuntimeArray*)L_113)->max_length)))))
		{
			goto IL_01cb;
		}
	}

IL_01f4:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_114 = ___0_source;
		NullCheck(L_114);
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_115 = L_114->___vector3Variables_9;
		if (!L_115)
		{
			goto IL_023d;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_116 = ___0_source;
		NullCheck(L_116);
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_117 = L_116->___vector3Variables_9;
		NullCheck(L_117);
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_118 = (FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47*)(FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47*)SZArrayNew(FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_117)->max_length)));
		__this->___vector3Variables_9 = L_118;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vector3Variables_9), (void*)L_118);
		V_6 = 0;
		goto IL_0231;
	}

IL_0214:
	{
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_119 = __this->___vector3Variables_9;
		int32_t L_120 = V_6;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_121 = ___0_source;
		NullCheck(L_121);
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_122 = L_121->___vector3Variables_9;
		int32_t L_123 = V_6;
		NullCheck(L_122);
		int32_t L_124 = L_123;
		FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* L_126 = (FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8*)il2cpp_codegen_object_new(FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8_il2cpp_TypeInfo_var);
		NullCheck(L_126);
		FsmVector3__ctor_mE02A4B9C3074C4A809E8B3076260129CE550C960(L_126, L_125, NULL);
		NullCheck(L_119);
		ArrayElementTypeCheck (L_119, L_126);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(L_120), (FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8*)L_126);
		int32_t L_127 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_127, 1));
	}

IL_0231:
	{
		int32_t L_128 = V_6;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_129 = ___0_source;
		NullCheck(L_129);
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_130 = L_129->___vector3Variables_9;
		NullCheck(L_130);
		if ((((int32_t)L_128) < ((int32_t)((int32_t)(((RuntimeArray*)L_130)->max_length)))))
		{
			goto IL_0214;
		}
	}

IL_023d:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_131 = ___0_source;
		NullCheck(L_131);
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_132 = L_131->___rectVariables_11;
		if (!L_132)
		{
			goto IL_0286;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_133 = ___0_source;
		NullCheck(L_133);
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_134 = L_133->___rectVariables_11;
		NullCheck(L_134);
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_135 = (FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636*)(FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636*)SZArrayNew(FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_134)->max_length)));
		__this->___rectVariables_11 = L_135;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rectVariables_11), (void*)L_135);
		V_7 = 0;
		goto IL_027a;
	}

IL_025d:
	{
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_136 = __this->___rectVariables_11;
		int32_t L_137 = V_7;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_138 = ___0_source;
		NullCheck(L_138);
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_139 = L_138->___rectVariables_11;
		int32_t L_140 = V_7;
		NullCheck(L_139);
		int32_t L_141 = L_140;
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_142 = (L_139)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_143 = (FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051*)il2cpp_codegen_object_new(FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051_il2cpp_TypeInfo_var);
		NullCheck(L_143);
		FsmRect__ctor_m72D1D7070807C6F53EAF52CD91CD8B454EB363F0(L_143, L_142, NULL);
		NullCheck(L_136);
		ArrayElementTypeCheck (L_136, L_143);
		(L_136)->SetAt(static_cast<il2cpp_array_size_t>(L_137), (FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051*)L_143);
		int32_t L_144 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_144, 1));
	}

IL_027a:
	{
		int32_t L_145 = V_7;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_146 = ___0_source;
		NullCheck(L_146);
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_147 = L_146->___rectVariables_11;
		NullCheck(L_147);
		if ((((int32_t)L_145) < ((int32_t)((int32_t)(((RuntimeArray*)L_147)->max_length)))))
		{
			goto IL_025d;
		}
	}

IL_0286:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_148 = ___0_source;
		NullCheck(L_148);
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_149 = L_148->___quaternionVariables_12;
		if (!L_149)
		{
			goto IL_02cf;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_150 = ___0_source;
		NullCheck(L_150);
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_151 = L_150->___quaternionVariables_12;
		NullCheck(L_151);
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_152 = (FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F*)(FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F*)SZArrayNew(FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_151)->max_length)));
		__this->___quaternionVariables_12 = L_152;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___quaternionVariables_12), (void*)L_152);
		V_8 = 0;
		goto IL_02c3;
	}

IL_02a6:
	{
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_153 = __this->___quaternionVariables_12;
		int32_t L_154 = V_8;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_155 = ___0_source;
		NullCheck(L_155);
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_156 = L_155->___quaternionVariables_12;
		int32_t L_157 = V_8;
		NullCheck(L_156);
		int32_t L_158 = L_157;
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_159 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_158));
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_160 = (FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85*)il2cpp_codegen_object_new(FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85_il2cpp_TypeInfo_var);
		NullCheck(L_160);
		FsmQuaternion__ctor_mF4196D0D10FB1810472FD583FF3406A2CF3A1B90(L_160, L_159, NULL);
		NullCheck(L_153);
		ArrayElementTypeCheck (L_153, L_160);
		(L_153)->SetAt(static_cast<il2cpp_array_size_t>(L_154), (FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85*)L_160);
		int32_t L_161 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_161, 1));
	}

IL_02c3:
	{
		int32_t L_162 = V_8;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_163 = ___0_source;
		NullCheck(L_163);
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_164 = L_163->___quaternionVariables_12;
		NullCheck(L_164);
		if ((((int32_t)L_162) < ((int32_t)((int32_t)(((RuntimeArray*)L_164)->max_length)))))
		{
			goto IL_02a6;
		}
	}

IL_02cf:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_165 = ___0_source;
		NullCheck(L_165);
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_166 = L_165->___objectVariables_14;
		if (!L_166)
		{
			goto IL_0318;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_167 = ___0_source;
		NullCheck(L_167);
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_168 = L_167->___objectVariables_14;
		NullCheck(L_168);
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_169 = (FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F*)(FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F*)SZArrayNew(FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_168)->max_length)));
		__this->___objectVariables_14 = L_169;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectVariables_14), (void*)L_169);
		V_9 = 0;
		goto IL_030c;
	}

IL_02ef:
	{
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_170 = __this->___objectVariables_14;
		int32_t L_171 = V_9;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_172 = ___0_source;
		NullCheck(L_172);
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_173 = L_172->___objectVariables_14;
		int32_t L_174 = V_9;
		NullCheck(L_173);
		int32_t L_175 = L_174;
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_177 = (FsmObject_t69096525269982576D57D563C4659F408D7A2A6D*)il2cpp_codegen_object_new(FsmObject_t69096525269982576D57D563C4659F408D7A2A6D_il2cpp_TypeInfo_var);
		NullCheck(L_177);
		FsmObject__ctor_m36419D9C145D50F5E3A334D8151FD176CB02EAB7(L_177, L_176, NULL);
		NullCheck(L_170);
		ArrayElementTypeCheck (L_170, L_177);
		(L_170)->SetAt(static_cast<il2cpp_array_size_t>(L_171), (FsmObject_t69096525269982576D57D563C4659F408D7A2A6D*)L_177);
		int32_t L_178 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_178, 1));
	}

IL_030c:
	{
		int32_t L_179 = V_9;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_180 = ___0_source;
		NullCheck(L_180);
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_181 = L_180->___objectVariables_14;
		NullCheck(L_181);
		if ((((int32_t)L_179) < ((int32_t)((int32_t)(((RuntimeArray*)L_181)->max_length)))))
		{
			goto IL_02ef;
		}
	}

IL_0318:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_182 = ___0_source;
		NullCheck(L_182);
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_183 = L_182->___materialVariables_15;
		if (!L_183)
		{
			goto IL_0361;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_184 = ___0_source;
		NullCheck(L_184);
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_185 = L_184->___materialVariables_15;
		NullCheck(L_185);
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_186 = (FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422*)(FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422*)SZArrayNew(FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_185)->max_length)));
		__this->___materialVariables_15 = L_186;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___materialVariables_15), (void*)L_186);
		V_10 = 0;
		goto IL_0355;
	}

IL_0338:
	{
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_187 = __this->___materialVariables_15;
		int32_t L_188 = V_10;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_189 = ___0_source;
		NullCheck(L_189);
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_190 = L_189->___materialVariables_15;
		int32_t L_191 = V_10;
		NullCheck(L_190);
		int32_t L_192 = L_191;
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_193 = (L_190)->GetAt(static_cast<il2cpp_array_size_t>(L_192));
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_194 = (FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564*)il2cpp_codegen_object_new(FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564_il2cpp_TypeInfo_var);
		NullCheck(L_194);
		FsmMaterial__ctor_mB299A604C1A9596882D70137AC83296284162EFB(L_194, L_193, NULL);
		NullCheck(L_187);
		ArrayElementTypeCheck (L_187, L_194);
		(L_187)->SetAt(static_cast<il2cpp_array_size_t>(L_188), (FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564*)L_194);
		int32_t L_195 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_195, 1));
	}

IL_0355:
	{
		int32_t L_196 = V_10;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_197 = ___0_source;
		NullCheck(L_197);
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_198 = L_197->___materialVariables_15;
		NullCheck(L_198);
		if ((((int32_t)L_196) < ((int32_t)((int32_t)(((RuntimeArray*)L_198)->max_length)))))
		{
			goto IL_0338;
		}
	}

IL_0361:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_199 = ___0_source;
		NullCheck(L_199);
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_200 = L_199->___textureVariables_16;
		if (!L_200)
		{
			goto IL_03aa;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_201 = ___0_source;
		NullCheck(L_201);
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_202 = L_201->___textureVariables_16;
		NullCheck(L_202);
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_203 = (FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61*)(FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61*)SZArrayNew(FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_202)->max_length)));
		__this->___textureVariables_16 = L_203;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textureVariables_16), (void*)L_203);
		V_11 = 0;
		goto IL_039e;
	}

IL_0381:
	{
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_204 = __this->___textureVariables_16;
		int32_t L_205 = V_11;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_206 = ___0_source;
		NullCheck(L_206);
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_207 = L_206->___textureVariables_16;
		int32_t L_208 = V_11;
		NullCheck(L_207);
		int32_t L_209 = L_208;
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_210 = (L_207)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_211 = (FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96*)il2cpp_codegen_object_new(FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96_il2cpp_TypeInfo_var);
		NullCheck(L_211);
		FsmTexture__ctor_mC6789E9AE5BA2DD77DCDBCCB9EED603F278CF304(L_211, L_210, NULL);
		NullCheck(L_204);
		ArrayElementTypeCheck (L_204, L_211);
		(L_204)->SetAt(static_cast<il2cpp_array_size_t>(L_205), (FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96*)L_211);
		int32_t L_212 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_212, 1));
	}

IL_039e:
	{
		int32_t L_213 = V_11;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_214 = ___0_source;
		NullCheck(L_214);
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_215 = L_214->___textureVariables_16;
		NullCheck(L_215);
		if ((((int32_t)L_213) < ((int32_t)((int32_t)(((RuntimeArray*)L_215)->max_length)))))
		{
			goto IL_0381;
		}
	}

IL_03aa:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_216 = ___0_source;
		NullCheck(L_216);
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_217 = L_216->___stringVariables_7;
		if (!L_217)
		{
			goto IL_03f3;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_218 = ___0_source;
		NullCheck(L_218);
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_219 = L_218->___stringVariables_7;
		NullCheck(L_219);
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_220 = (FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A*)(FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A*)SZArrayNew(FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_219)->max_length)));
		__this->___stringVariables_7 = L_220;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stringVariables_7), (void*)L_220);
		V_12 = 0;
		goto IL_03e7;
	}

IL_03ca:
	{
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_221 = __this->___stringVariables_7;
		int32_t L_222 = V_12;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_223 = ___0_source;
		NullCheck(L_223);
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_224 = L_223->___stringVariables_7;
		int32_t L_225 = V_12;
		NullCheck(L_224);
		int32_t L_226 = L_225;
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_227 = (L_224)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_228 = (FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4*)il2cpp_codegen_object_new(FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4_il2cpp_TypeInfo_var);
		NullCheck(L_228);
		FsmString__ctor_m94A299B090D39B0CA817A853E3785C6CB2718C0A(L_228, L_227, NULL);
		NullCheck(L_221);
		ArrayElementTypeCheck (L_221, L_228);
		(L_221)->SetAt(static_cast<il2cpp_array_size_t>(L_222), (FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4*)L_228);
		int32_t L_229 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_229, 1));
	}

IL_03e7:
	{
		int32_t L_230 = V_12;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_231 = ___0_source;
		NullCheck(L_231);
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_232 = L_231->___stringVariables_7;
		NullCheck(L_232);
		if ((((int32_t)L_230) < ((int32_t)((int32_t)(((RuntimeArray*)L_232)->max_length)))))
		{
			goto IL_03ca;
		}
	}

IL_03f3:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_233 = ___0_source;
		NullCheck(L_233);
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_234 = L_233->___arrayVariables_17;
		if (!L_234)
		{
			goto IL_043c;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_235 = ___0_source;
		NullCheck(L_235);
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_236 = L_235->___arrayVariables_17;
		NullCheck(L_236);
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_237 = (FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F*)(FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F*)SZArrayNew(FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_236)->max_length)));
		__this->___arrayVariables_17 = L_237;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrayVariables_17), (void*)L_237);
		V_13 = 0;
		goto IL_0430;
	}

IL_0413:
	{
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_238 = __this->___arrayVariables_17;
		int32_t L_239 = V_13;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_240 = ___0_source;
		NullCheck(L_240);
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_241 = L_240->___arrayVariables_17;
		int32_t L_242 = V_13;
		NullCheck(L_241);
		int32_t L_243 = L_242;
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_244 = (L_241)->GetAt(static_cast<il2cpp_array_size_t>(L_243));
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_245 = (FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082*)il2cpp_codegen_object_new(FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082_il2cpp_TypeInfo_var);
		NullCheck(L_245);
		FsmArray__ctor_m6B1113FA14C2E3D0E6D7887CB21666C481B2830B(L_245, L_244, NULL);
		NullCheck(L_238);
		ArrayElementTypeCheck (L_238, L_245);
		(L_238)->SetAt(static_cast<il2cpp_array_size_t>(L_239), (FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082*)L_245);
		int32_t L_246 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_246, 1));
	}

IL_0430:
	{
		int32_t L_247 = V_13;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_248 = ___0_source;
		NullCheck(L_248);
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_249 = L_248->___arrayVariables_17;
		NullCheck(L_249);
		if ((((int32_t)L_247) < ((int32_t)((int32_t)(((RuntimeArray*)L_249)->max_length)))))
		{
			goto IL_0413;
		}
	}

IL_043c:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_250 = ___0_source;
		NullCheck(L_250);
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_251 = L_250->___enumVariables_18;
		if (!L_251)
		{
			goto IL_0485;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_252 = ___0_source;
		NullCheck(L_252);
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_253 = L_252->___enumVariables_18;
		NullCheck(L_253);
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_254 = (FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6*)(FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6*)SZArrayNew(FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_253)->max_length)));
		__this->___enumVariables_18 = L_254;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumVariables_18), (void*)L_254);
		V_14 = 0;
		goto IL_0479;
	}

IL_045c:
	{
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_255 = __this->___enumVariables_18;
		int32_t L_256 = V_14;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_257 = ___0_source;
		NullCheck(L_257);
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_258 = L_257->___enumVariables_18;
		int32_t L_259 = V_14;
		NullCheck(L_258);
		int32_t L_260 = L_259;
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_261 = (L_258)->GetAt(static_cast<il2cpp_array_size_t>(L_260));
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_262 = (FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7*)il2cpp_codegen_object_new(FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7_il2cpp_TypeInfo_var);
		NullCheck(L_262);
		FsmEnum__ctor_mFCA0C00CFCE7E7E0593C982CEE20660B44FAC9B4(L_262, L_261, NULL);
		NullCheck(L_255);
		ArrayElementTypeCheck (L_255, L_262);
		(L_255)->SetAt(static_cast<il2cpp_array_size_t>(L_256), (FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7*)L_262);
		int32_t L_263 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_263, 1));
	}

IL_0479:
	{
		int32_t L_264 = V_14;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_265 = ___0_source;
		NullCheck(L_265);
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_266 = L_265->___enumVariables_18;
		NullCheck(L_266);
		if ((((int32_t)L_264) < ((int32_t)((int32_t)(((RuntimeArray*)L_266)->max_length)))))
		{
			goto IL_045c;
		}
	}

IL_0485:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_267 = ___0_source;
		NullCheck(L_267);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_268 = L_267->___categories_19;
		if (!L_268)
		{
			goto IL_04c9;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_269 = ___0_source;
		NullCheck(L_269);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_270 = L_269->___categories_19;
		NullCheck(L_270);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_271 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_270)->max_length)));
		__this->___categories_19 = L_271;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___categories_19), (void*)L_271);
		V_15 = 0;
		goto IL_04bd;
	}

IL_04a5:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_272 = __this->___categories_19;
		int32_t L_273 = V_15;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_274 = ___0_source;
		NullCheck(L_274);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_275 = L_274->___categories_19;
		int32_t L_276 = V_15;
		NullCheck(L_275);
		int32_t L_277 = L_276;
		String_t* L_278 = (L_275)->GetAt(static_cast<il2cpp_array_size_t>(L_277));
		NullCheck(L_272);
		ArrayElementTypeCheck (L_272, L_278);
		(L_272)->SetAt(static_cast<il2cpp_array_size_t>(L_273), (String_t*)L_278);
		int32_t L_279 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_279, 1));
	}

IL_04bd:
	{
		int32_t L_280 = V_15;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_281 = ___0_source;
		NullCheck(L_281);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_282 = L_281->___categories_19;
		NullCheck(L_282);
		if ((((int32_t)L_280) < ((int32_t)((int32_t)(((RuntimeArray*)L_282)->max_length)))))
		{
			goto IL_04a5;
		}
	}

IL_04c9:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_283 = ___0_source;
		NullCheck(L_283);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_284;
		L_284 = FsmVariables_get_CategoryIDs_m983AF5B6EF89AB9CF32D32D6B185A363E10D5FD6_inline(L_283, NULL);
		if (!L_284)
		{
			goto IL_050d;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_285 = ___0_source;
		NullCheck(L_285);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_286;
		L_286 = FsmVariables_get_CategoryIDs_m983AF5B6EF89AB9CF32D32D6B185A363E10D5FD6_inline(L_285, NULL);
		NullCheck(L_286);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_287 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_286)->max_length)));
		FsmVariables_set_CategoryIDs_m1590E726F467DC08B9D800953A2D230A4574A584_inline(__this, L_287, NULL);
		V_16 = 0;
		goto IL_0501;
	}

IL_04e9:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_288;
		L_288 = FsmVariables_get_CategoryIDs_m983AF5B6EF89AB9CF32D32D6B185A363E10D5FD6_inline(__this, NULL);
		int32_t L_289 = V_16;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_290 = ___0_source;
		NullCheck(L_290);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_291;
		L_291 = FsmVariables_get_CategoryIDs_m983AF5B6EF89AB9CF32D32D6B185A363E10D5FD6_inline(L_290, NULL);
		int32_t L_292 = V_16;
		NullCheck(L_291);
		int32_t L_293 = L_292;
		int32_t L_294 = (L_291)->GetAt(static_cast<il2cpp_array_size_t>(L_293));
		NullCheck(L_288);
		(L_288)->SetAt(static_cast<il2cpp_array_size_t>(L_289), (int32_t)L_294);
		int32_t L_295 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_295, 1));
	}

IL_0501:
	{
		int32_t L_296 = V_16;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_297 = ___0_source;
		NullCheck(L_297);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_298;
		L_298 = FsmVariables_get_CategoryIDs_m983AF5B6EF89AB9CF32D32D6B185A363E10D5FD6_inline(L_297, NULL);
		NullCheck(L_298);
		if ((((int32_t)L_296) < ((int32_t)((int32_t)(((RuntimeArray*)L_298)->max_length)))))
		{
			goto IL_04e9;
		}
	}

IL_050d:
	{
		return;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_Init_m1D4D97A0DC015D761085D13AFB6E36D905683C9A (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1A7292C7B7101AAB1601300AAF7AE2658861F5EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m9E3D1B31D3ACF10BE1301EC210B5CD90C484533B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m600D5F0E26DCB0448D56689E08D0549407A14BE1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5FD7494BF6E5CA818B31BF1506F0EC92926981E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBBD5EB735C7BE4C57A5DEFB9BB88881F96F749AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m640DDBED6DF56A13645B15A081F8EC3A27D71080_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m6DBD469E38A474D460F7955ED853AB9E3CE84B31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_get_Count_m63AB051747CEBAB945744303D1F8ED2C8938CC6B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ValueCollection_tFEBB089031DDCBDE1CD782E4772D62388CCE3D34* V_0 = NULL;
	int32_t V_1 = 0;
	FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* V_2 = NULL;
	int32_t V_3 = 0;
	FsmFloat_t99C088B49A35579867184120212107B5FB177420* V_4 = NULL;
	FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* V_5 = NULL;
	FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* V_6 = NULL;
	FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* V_7 = NULL;
	FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* V_8 = NULL;
	FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* V_9 = NULL;
	FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* V_10 = NULL;
	FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* V_11 = NULL;
	FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* V_12 = NULL;
	FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* V_13 = NULL;
	FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* V_14 = NULL;
	FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* V_15 = NULL;
	FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* V_16 = NULL;
	FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* V_17 = NULL;
	FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* V_18 = NULL;
	FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* V_19 = NULL;
	FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* V_20 = NULL;
	FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* V_21 = NULL;
	FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* V_22 = NULL;
	FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* V_23 = NULL;
	FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* V_24 = NULL;
	FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* V_25 = NULL;
	FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* V_26 = NULL;
	FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* V_27 = NULL;
	FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* V_28 = NULL;
	FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* V_29 = NULL;
	FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* V_30 = NULL;
	FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* V_31 = NULL;
	FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* V_32 = NULL;
	Enumerator_tB32ADA14D6ED3B8FAC028A8B730A94841FCCA002 V_33;
	memset((&V_33), 0, sizeof(V_33));
	NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* V_34 = NULL;
	{
		List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* L_0 = (List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97*)il2cpp_codegen_object_new(List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m640DDBED6DF56A13645B15A081F8EC3A27D71080(L_0, List_1__ctor_m640DDBED6DF56A13645B15A081F8EC3A27D71080_RuntimeMethod_var);
		__this->____emptyVariables_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____emptyVariables_3), (void*)L_0);
		Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* L_1 = (Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA*)il2cpp_codegen_object_new(Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m1A7292C7B7101AAB1601300AAF7AE2658861F5EB(L_1, Dictionary_2__ctor_m1A7292C7B7101AAB1601300AAF7AE2658861F5EB_RuntimeMethod_var);
		__this->____variableLookup_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____variableLookup_1), (void*)L_1);
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_2;
		L_2 = FsmVariables_get_FloatVariables_m9A554326DE2BAF295D19FA0FA87240D871D2DC3D(__this, NULL);
		V_2 = L_2;
		V_3 = 0;
		goto IL_0032;
	}

IL_0021:
	{
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_3 = V_2;
		int32_t L_4 = V_3;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_4 = L_6;
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_7 = V_4;
		FsmVariables_AddVariableLookup_m464E412758C9E75CAB180B69D399F9B1AD0C1653(__this, L_7, NULL);
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0032:
	{
		int32_t L_9 = V_3;
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_10 = V_2;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0021;
		}
	}
	{
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_11;
		L_11 = FsmVariables_get_IntVariables_m4F3D72E17E63EBBCBC603DF133129010C62E6042(__this, NULL);
		V_5 = L_11;
		V_3 = 0;
		goto IL_0056;
	}

IL_0044:
	{
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_12 = V_5;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_6 = L_15;
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_16 = V_6;
		FsmVariables_AddVariableLookup_m464E412758C9E75CAB180B69D399F9B1AD0C1653(__this, L_16, NULL);
		int32_t L_17 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0056:
	{
		int32_t L_18 = V_3;
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_19 = V_5;
		NullCheck(L_19);
		if ((((int32_t)L_18) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0044;
		}
	}
	{
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_20;
		L_20 = FsmVariables_get_BoolVariables_mDBF6EFCBF4C3B454D690E831F6F2F5CA35C5DC47(__this, NULL);
		V_7 = L_20;
		V_3 = 0;
		goto IL_007b;
	}

IL_0069:
	{
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_21 = V_7;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_8 = L_24;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_25 = V_8;
		FsmVariables_AddVariableLookup_m464E412758C9E75CAB180B69D399F9B1AD0C1653(__this, L_25, NULL);
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_26, 1));
	}

IL_007b:
	{
		int32_t L_27 = V_3;
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_28 = V_7;
		NullCheck(L_28);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0069;
		}
	}
	{
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_29;
		L_29 = FsmVariables_get_StringVariables_mF73342631D1B5FF92B028EDD5CE82CD82F235AB9(__this, NULL);
		V_9 = L_29;
		V_3 = 0;
		goto IL_00a0;
	}

IL_008e:
	{
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_30 = V_9;
		int32_t L_31 = V_3;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_10 = L_33;
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_34 = V_10;
		FsmVariables_AddVariableLookup_m464E412758C9E75CAB180B69D399F9B1AD0C1653(__this, L_34, NULL);
		int32_t L_35 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00a0:
	{
		int32_t L_36 = V_3;
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_37 = V_9;
		NullCheck(L_37);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length)))))
		{
			goto IL_008e;
		}
	}
	{
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_38;
		L_38 = FsmVariables_get_Vector2Variables_m85DE6DDC7EF8890624AFC5167AA5C9A98EBB540A(__this, NULL);
		V_11 = L_38;
		V_3 = 0;
		goto IL_00c5;
	}

IL_00b3:
	{
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_39 = V_11;
		int32_t L_40 = V_3;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_12 = L_42;
		FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* L_43 = V_12;
		FsmVariables_AddVariableLookup_m464E412758C9E75CAB180B69D399F9B1AD0C1653(__this, L_43, NULL);
		int32_t L_44 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00c5:
	{
		int32_t L_45 = V_3;
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_46 = V_11;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_00b3;
		}
	}
	{
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_47;
		L_47 = FsmVariables_get_Vector3Variables_m6FD7B81514AA51C95E67601F4DFB443D467F2F0D(__this, NULL);
		V_13 = L_47;
		V_3 = 0;
		goto IL_00ea;
	}

IL_00d8:
	{
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_48 = V_13;
		int32_t L_49 = V_3;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_14 = L_51;
		FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* L_52 = V_14;
		FsmVariables_AddVariableLookup_m464E412758C9E75CAB180B69D399F9B1AD0C1653(__this, L_52, NULL);
		int32_t L_53 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_00ea:
	{
		int32_t L_54 = V_3;
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_55 = V_13;
		NullCheck(L_55);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_55)->max_length)))))
		{
			goto IL_00d8;
		}
	}
	{
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_56;
		L_56 = FsmVariables_get_RectVariables_m3E08BC600245031E6DDBAE797871B11E5F593E2F(__this, NULL);
		V_15 = L_56;
		V_3 = 0;
		goto IL_010f;
	}

IL_00fd:
	{
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_57 = V_15;
		int32_t L_58 = V_3;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		V_16 = L_60;
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_61 = V_16;
		FsmVariables_AddVariableLookup_m464E412758C9E75CAB180B69D399F9B1AD0C1653(__this, L_61, NULL);
		int32_t L_62 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_010f:
	{
		int32_t L_63 = V_3;
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_64 = V_15;
		NullCheck(L_64);
		if ((((int32_t)L_63) < ((int32_t)((int32_t)(((RuntimeArray*)L_64)->max_length)))))
		{
			goto IL_00fd;
		}
	}
	{
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_65;
		L_65 = FsmVariables_get_QuaternionVariables_m08898919CA4145C676808BE9D301F669B5FAFE78(__this, NULL);
		V_17 = L_65;
		V_3 = 0;
		goto IL_0134;
	}

IL_0122:
	{
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_66 = V_17;
		int32_t L_67 = V_3;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_69 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		V_18 = L_69;
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_70 = V_18;
		FsmVariables_AddVariableLookup_m464E412758C9E75CAB180B69D399F9B1AD0C1653(__this, L_70, NULL);
		int32_t L_71 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_71, 1));
	}

IL_0134:
	{
		int32_t L_72 = V_3;
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_73 = V_17;
		NullCheck(L_73);
		if ((((int32_t)L_72) < ((int32_t)((int32_t)(((RuntimeArray*)L_73)->max_length)))))
		{
			goto IL_0122;
		}
	}
	{
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_74;
		L_74 = FsmVariables_get_GameObjectVariables_m12954A97685FECDF37ED76A95821A1C50160651B(__this, NULL);
		V_19 = L_74;
		V_3 = 0;
		goto IL_0159;
	}

IL_0147:
	{
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_75 = V_19;
		int32_t L_76 = V_3;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* L_78 = (L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		V_20 = L_78;
		FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* L_79 = V_20;
		FsmVariables_AddVariableLookup_m464E412758C9E75CAB180B69D399F9B1AD0C1653(__this, L_79, NULL);
		int32_t L_80 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_0159:
	{
		int32_t L_81 = V_3;
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_82 = V_19;
		NullCheck(L_82);
		if ((((int32_t)L_81) < ((int32_t)((int32_t)(((RuntimeArray*)L_82)->max_length)))))
		{
			goto IL_0147;
		}
	}
	{
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_83;
		L_83 = FsmVariables_get_ObjectVariables_mA98B0586520A729234994B2F0FC6DCC67F5C9051(__this, NULL);
		V_21 = L_83;
		V_3 = 0;
		goto IL_017e;
	}

IL_016c:
	{
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_84 = V_21;
		int32_t L_85 = V_3;
		NullCheck(L_84);
		int32_t L_86 = L_85;
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_87 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		V_22 = L_87;
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_88 = V_22;
		FsmVariables_AddVariableLookup_m464E412758C9E75CAB180B69D399F9B1AD0C1653(__this, L_88, NULL);
		int32_t L_89 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_89, 1));
	}

IL_017e:
	{
		int32_t L_90 = V_3;
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_91 = V_21;
		NullCheck(L_91);
		if ((((int32_t)L_90) < ((int32_t)((int32_t)(((RuntimeArray*)L_91)->max_length)))))
		{
			goto IL_016c;
		}
	}
	{
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_92;
		L_92 = FsmVariables_get_MaterialVariables_m4665A8E211BBCEAEC19F72D593AFBD462D40EBA2(__this, NULL);
		V_23 = L_92;
		V_3 = 0;
		goto IL_01a3;
	}

IL_0191:
	{
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_93 = V_23;
		int32_t L_94 = V_3;
		NullCheck(L_93);
		int32_t L_95 = L_94;
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_96 = (L_93)->GetAt(static_cast<il2cpp_array_size_t>(L_95));
		V_24 = L_96;
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_97 = V_24;
		FsmVariables_AddVariableLookup_m464E412758C9E75CAB180B69D399F9B1AD0C1653(__this, L_97, NULL);
		int32_t L_98 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_01a3:
	{
		int32_t L_99 = V_3;
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_100 = V_23;
		NullCheck(L_100);
		if ((((int32_t)L_99) < ((int32_t)((int32_t)(((RuntimeArray*)L_100)->max_length)))))
		{
			goto IL_0191;
		}
	}
	{
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_101;
		L_101 = FsmVariables_get_TextureVariables_mD2BD3864F92E7EE5310239F5E59A5C826DF3949F(__this, NULL);
		V_25 = L_101;
		V_3 = 0;
		goto IL_01c8;
	}

IL_01b6:
	{
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_102 = V_25;
		int32_t L_103 = V_3;
		NullCheck(L_102);
		int32_t L_104 = L_103;
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		V_26 = L_105;
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_106 = V_26;
		FsmVariables_AddVariableLookup_m464E412758C9E75CAB180B69D399F9B1AD0C1653(__this, L_106, NULL);
		int32_t L_107 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_107, 1));
	}

IL_01c8:
	{
		int32_t L_108 = V_3;
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_109 = V_25;
		NullCheck(L_109);
		if ((((int32_t)L_108) < ((int32_t)((int32_t)(((RuntimeArray*)L_109)->max_length)))))
		{
			goto IL_01b6;
		}
	}
	{
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_110;
		L_110 = FsmVariables_get_ColorVariables_m0FC4DA49A05A0C1ABE826B730AC958261DE55D8D(__this, NULL);
		V_27 = L_110;
		V_3 = 0;
		goto IL_01ed;
	}

IL_01db:
	{
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_111 = V_27;
		int32_t L_112 = V_3;
		NullCheck(L_111);
		int32_t L_113 = L_112;
		FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* L_114 = (L_111)->GetAt(static_cast<il2cpp_array_size_t>(L_113));
		V_28 = L_114;
		FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* L_115 = V_28;
		FsmVariables_AddVariableLookup_m464E412758C9E75CAB180B69D399F9B1AD0C1653(__this, L_115, NULL);
		int32_t L_116 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_116, 1));
	}

IL_01ed:
	{
		int32_t L_117 = V_3;
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_118 = V_27;
		NullCheck(L_118);
		if ((((int32_t)L_117) < ((int32_t)((int32_t)(((RuntimeArray*)L_118)->max_length)))))
		{
			goto IL_01db;
		}
	}
	{
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_119;
		L_119 = FsmVariables_get_ArrayVariables_mCFF234537EEAC04D255AE69428931227E22864D6(__this, NULL);
		V_29 = L_119;
		V_3 = 0;
		goto IL_0212;
	}

IL_0200:
	{
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_120 = V_29;
		int32_t L_121 = V_3;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		V_30 = L_123;
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_124 = V_30;
		FsmVariables_AddVariableLookup_m464E412758C9E75CAB180B69D399F9B1AD0C1653(__this, L_124, NULL);
		int32_t L_125 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_125, 1));
	}

IL_0212:
	{
		int32_t L_126 = V_3;
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_127 = V_29;
		NullCheck(L_127);
		if ((((int32_t)L_126) < ((int32_t)((int32_t)(((RuntimeArray*)L_127)->max_length)))))
		{
			goto IL_0200;
		}
	}
	{
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_128;
		L_128 = FsmVariables_get_EnumVariables_m364A01B95D92703E3FCD6516D1AC7DEB4C6F9E54(__this, NULL);
		V_31 = L_128;
		V_3 = 0;
		goto IL_0237;
	}

IL_0225:
	{
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_129 = V_31;
		int32_t L_130 = V_3;
		NullCheck(L_129);
		int32_t L_131 = L_130;
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_132 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_131));
		V_32 = L_132;
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_133 = V_32;
		FsmVariables_AddVariableLookup_m464E412758C9E75CAB180B69D399F9B1AD0C1653(__this, L_133, NULL);
		int32_t L_134 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_134, 1));
	}

IL_0237:
	{
		int32_t L_135 = V_3;
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_136 = V_31;
		NullCheck(L_136);
		if ((((int32_t)L_135) < ((int32_t)((int32_t)(((RuntimeArray*)L_136)->max_length)))))
		{
			goto IL_0225;
		}
	}
	{
		Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* L_137;
		L_137 = FsmVariables_get_variableLookup_mA279487E9D8EB7DF14B70A00A04FC2F82C691D32(__this, NULL);
		NullCheck(L_137);
		ValueCollection_tFEBB089031DDCBDE1CD782E4772D62388CCE3D34* L_138;
		L_138 = Dictionary_2_get_Values_m9E3D1B31D3ACF10BE1301EC210B5CD90C484533B(L_137, Dictionary_2_get_Values_m9E3D1B31D3ACF10BE1301EC210B5CD90C484533B_RuntimeMethod_var);
		V_0 = L_138;
		ValueCollection_tFEBB089031DDCBDE1CD782E4772D62388CCE3D34* L_139 = V_0;
		NullCheck(L_139);
		int32_t L_140;
		L_140 = ValueCollection_get_Count_m63AB051747CEBAB945744303D1F8ED2C8938CC6B(L_139, ValueCollection_get_Count_m63AB051747CEBAB945744303D1F8ED2C8938CC6B_RuntimeMethod_var);
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_141 = (NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD*)(NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD*)SZArrayNew(NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD_il2cpp_TypeInfo_var, (uint32_t)L_140);
		__this->____allVariables_2 = L_141;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____allVariables_2), (void*)L_141);
		V_1 = 0;
		ValueCollection_tFEBB089031DDCBDE1CD782E4772D62388CCE3D34* L_142 = V_0;
		NullCheck(L_142);
		Enumerator_tB32ADA14D6ED3B8FAC028A8B730A94841FCCA002 L_143;
		L_143 = ValueCollection_GetEnumerator_m6DBD469E38A474D460F7955ED853AB9E3CE84B31(L_142, ValueCollection_GetEnumerator_m6DBD469E38A474D460F7955ED853AB9E3CE84B31_RuntimeMethod_var);
		V_33 = L_143;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0289:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m600D5F0E26DCB0448D56689E08D0549407A14BE1((&V_33), Enumerator_Dispose_m600D5F0E26DCB0448D56689E08D0549407A14BE1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_027e_1;
			}

IL_0267_1:
			{
				NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_144;
				L_144 = Enumerator_get_Current_mBBD5EB735C7BE4C57A5DEFB9BB88881F96F749AA_inline((&V_33), Enumerator_get_Current_mBBD5EB735C7BE4C57A5DEFB9BB88881F96F749AA_RuntimeMethod_var);
				V_34 = L_144;
				NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_145 = __this->____allVariables_2;
				int32_t L_146 = V_1;
				NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_147 = V_34;
				NullCheck(L_145);
				ArrayElementTypeCheck (L_145, L_147);
				(L_145)->SetAt(static_cast<il2cpp_array_size_t>(L_146), (NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6*)L_147);
				int32_t L_148 = V_1;
				V_1 = ((int32_t)il2cpp_codegen_add(L_148, 1));
			}

IL_027e_1:
			{
				bool L_149;
				L_149 = Enumerator_MoveNext_m5FD7494BF6E5CA818B31BF1506F0EC92926981E2((&V_33), Enumerator_MoveNext_m5FD7494BF6E5CA818B31BF1506F0EC92926981E2_RuntimeMethod_var);
				if (L_149)
				{
					goto IL_0267_1;
				}
			}
			{
				goto IL_0297;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0297:
	{
		return;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::AddVariableLookup(HutongGames.PlayMaker.NamedVariable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_AddVariableLookup_m464E412758C9E75CAB180B69D399F9B1AD0C1653 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* ___0_v, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mAB65C90518F9DAFB2AFC456DA9CC22A1DCD025D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m507191DC01CE675338D8029183BD317BA883EF48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m849E52416EE25BDD1E4E3A6BE4326AE27B705028_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m000A7A606626EA1FA3F196EDADB63DF720E0553B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableType_t3484FCB961D5F506EA13CC398D85765FA491AE08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45D7BEAEBD58D81368134962FBAE626B36062C94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral679D58DED5F4042A18779DF3ABD8CCB74D0D6499);
		s_Il2CppMethodInitialized = true;
	}
	NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_0 = ___0_v;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1 = ___0_v;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_1, NULL);
		bool L_3;
		L_3 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_2, NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* L_4;
		L_4 = FsmVariables_get_emptyVariables_m0F5A0F71A3FDA05372F831FC243E19EB633AA0BE(__this, NULL);
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_5 = ___0_v;
		NullCheck(L_4);
		List_1_Add_m000A7A606626EA1FA3F196EDADB63DF720E0553B_inline(L_4, L_5, List_1_Add_m000A7A606626EA1FA3F196EDADB63DF720E0553B_RuntimeMethod_var);
		return;
	}

IL_001e:
	{
		Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* L_6;
		L_6 = FsmVariables_get_variableLookup_mA279487E9D8EB7DF14B70A00A04FC2F82C691D32(__this, NULL);
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_7 = ___0_v;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_7, NULL);
		NullCheck(L_6);
		bool L_9;
		L_9 = Dictionary_2_ContainsKey_m507191DC01CE675338D8029183BD317BA883EF48(L_6, L_8, Dictionary_2_ContainsKey_m507191DC01CE675338D8029183BD317BA883EF48_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_00a5;
		}
	}
	{
		Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* L_10;
		L_10 = FsmVariables_get_variableLookup_mA279487E9D8EB7DF14B70A00A04FC2F82C691D32(__this, NULL);
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_11 = ___0_v;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_11, NULL);
		NullCheck(L_10);
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_13;
		L_13 = Dictionary_2_get_Item_m849E52416EE25BDD1E4E3A6BE4326AE27B705028(L_10, L_12, Dictionary_2_get_Item_m849E52416EE25BDD1E4E3A6BE4326AE27B705028_RuntimeMethod_var);
		V_0 = L_13;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_14 = ___0_v;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_14, NULL);
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral679D58DED5F4042A18779DF3ABD8CCB74D0D6499, L_15, NULL);
		V_1 = L_16;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_17 = ___0_v;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* HutongGames.PlayMaker.VariableType HutongGames.PlayMaker.NamedVariable::get_VariableType() */, L_17);
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* HutongGames.PlayMaker.VariableType HutongGames.PlayMaker.NamedVariable::get_VariableType() */, L_19);
		if ((((int32_t)L_18) == ((int32_t)L_20)))
		{
			goto IL_00a4;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = L_21;
		String_t* L_23 = V_1;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_23);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_24 = L_22;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral45D7BEAEBD58D81368134962FBAE626B36062C94);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)_stringLiteral45D7BEAEBD58D81368134962FBAE626B36062C94);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_25 = L_24;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_26 = ___0_v;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* HutongGames.PlayMaker.VariableType HutongGames.PlayMaker.NamedVariable::get_VariableType() */, L_26);
		int32_t L_28 = L_27;
		RuntimeObject* L_29 = Box(VariableType_t3484FCB961D5F506EA13CC398D85765FA491AE08_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_29);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_29);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_30 = L_25;
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_30;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_32 = V_0;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* HutongGames.PlayMaker.VariableType HutongGames.PlayMaker.NamedVariable::get_VariableType() */, L_32);
		int32_t L_34 = L_33;
		RuntimeObject* L_35 = Box(VariableType_t3484FCB961D5F506EA13CC398D85765FA491AE08_il2cpp_TypeInfo_var, &L_34);
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_35);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_35);
		String_t* L_36;
		L_36 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_31, NULL);
		V_1 = L_36;
		String_t* L_37 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_37, NULL);
	}

IL_00a4:
	{
		return;
	}

IL_00a5:
	{
		Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* L_38;
		L_38 = FsmVariables_get_variableLookup_mA279487E9D8EB7DF14B70A00A04FC2F82C691D32(__this, NULL);
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_39 = ___0_v;
		NullCheck(L_39);
		String_t* L_40;
		L_40 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_39, NULL);
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_41 = ___0_v;
		NullCheck(L_38);
		Dictionary_2_Add_mAB65C90518F9DAFB2AFC456DA9CC22A1DCD025D8(L_38, L_40, L_41, Dictionary_2_Add_mAB65C90518F9DAFB2AFC456DA9CC22A1DCD025D8_RuntimeMethod_var);
		return;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::Reinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_Reinitialize_m9041907274F9C55913FA444096A87F60F7B03388 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	{
		__this->____emptyVariables_3 = (List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____emptyVariables_3), (void*)(List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97*)NULL);
		__this->____variableLookup_1 = (Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____variableLookup_1), (void*)(Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA*)NULL);
		__this->____allVariables_2 = (NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____allVariables_2), (void*)(NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD*)NULL);
		return;
	}
}
// System.Int32 HutongGames.PlayMaker.FsmVariables::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FsmVariables_get_Count_mFC5BF27BA81E7E7A2D9B2D28D7F498FBDC10D7CE (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	{
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_0;
		L_0 = FsmVariables_get_allVariables_m604D9002071151541DEAD6D61A59031F1692CAB5(__this, NULL);
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
// HutongGames.PlayMaker.NamedVariable[] HutongGames.PlayMaker.FsmVariables::GetAllNamedVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* FsmVariables_GetAllNamedVariables_m00063174BA64083861BF41D0C13354C8C0313147 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	{
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_0;
		L_0 = FsmVariables_get_allVariables_m604D9002071151541DEAD6D61A59031F1692CAB5(__this, NULL);
		return L_0;
	}
}
// HutongGames.PlayMaker.NamedVariable[] HutongGames.PlayMaker.FsmVariables::GetAllNamedVariablesSorted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* FsmVariables_GetAllNamedVariablesSorted_m8766FEA636F3E628BF09A7E5CF22E430C5551666 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m181204CF02D08BA13C32066CEE42E12A12654ABD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2B4AD55AD5E4B9EFC3C5633D5A246D68242DF6BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8EB71881B937BF5BD8161C75AE53755D8E12097B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_0;
		L_0 = FsmVariables_get_allVariables_m604D9002071151541DEAD6D61A59031F1692CAB5(__this, NULL);
		List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* L_1 = (List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97*)il2cpp_codegen_object_new(List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m8EB71881B937BF5BD8161C75AE53755D8E12097B(L_1, (RuntimeObject*)L_0, List_1__ctor_m8EB71881B937BF5BD8161C75AE53755D8E12097B_RuntimeMethod_var);
		List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* L_2 = L_1;
		NullCheck(L_2);
		List_1_Sort_m181204CF02D08BA13C32066CEE42E12A12654ABD(L_2, List_1_Sort_m181204CF02D08BA13C32066CEE42E12A12654ABD_RuntimeMethod_var);
		NullCheck(L_2);
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_3;
		L_3 = List_1_ToArray_m2B4AD55AD5E4B9EFC3C5633D5A246D68242DF6BD(L_2, List_1_ToArray_m2B4AD55AD5E4B9EFC3C5633D5A246D68242DF6BD_RuntimeMethod_var);
		return L_3;
	}
}
// HutongGames.PlayMaker.NamedVariable[] HutongGames.PlayMaker.FsmVariables::GetNamedVariables(HutongGames.PlayMaker.VariableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* FsmVariables_GetNamedVariables_mCC04214255A9DB9932B868016CF8DAE62775D948 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m000A7A606626EA1FA3F196EDADB63DF720E0553B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2B4AD55AD5E4B9EFC3C5633D5A246D68242DF6BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m640DDBED6DF56A13645B15A081F8EC3A27D71080_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* V_0 = NULL;
	NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* V_1 = NULL;
	int32_t V_2 = 0;
	NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* V_3 = NULL;
	{
		int32_t L_0 = ___0_type;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_000b;
		}
	}
	{
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_1;
		L_1 = FsmVariables_GetAllNamedVariables_m00063174BA64083861BF41D0C13354C8C0313147(__this, NULL);
		return L_1;
	}

IL_000b:
	{
		List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* L_2 = (List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97*)il2cpp_codegen_object_new(List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m640DDBED6DF56A13645B15A081F8EC3A27D71080(L_2, List_1__ctor_m640DDBED6DF56A13645B15A081F8EC3A27D71080_RuntimeMethod_var);
		V_0 = L_2;
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_3;
		L_3 = FsmVariables_get_allVariables_m604D9002071151541DEAD6D61A59031F1692CAB5(__this, NULL);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0034;
	}

IL_001c:
	{
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_8 = V_3;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* HutongGames.PlayMaker.VariableType HutongGames.PlayMaker.NamedVariable::get_VariableType() */, L_8);
		int32_t L_10 = ___0_type;
		if ((!(((uint32_t)L_9) == ((uint32_t)L_10))))
		{
			goto IL_0030;
		}
	}
	{
		List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* L_11 = V_0;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_12 = V_3;
		NullCheck(L_11);
		List_1_Add_m000A7A606626EA1FA3F196EDADB63DF720E0553B_inline(L_11, L_12, List_1_Add_m000A7A606626EA1FA3F196EDADB63DF720E0553B_RuntimeMethod_var);
	}

IL_0030:
	{
		int32_t L_13 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0034:
	{
		int32_t L_14 = V_2;
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_15 = V_1;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_001c;
		}
	}
	{
		List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* L_16 = V_0;
		NullCheck(L_16);
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_17;
		L_17 = List_1_ToArray_m2B4AD55AD5E4B9EFC3C5633D5A246D68242DF6BD(L_16, List_1_ToArray_m2B4AD55AD5E4B9EFC3C5633D5A246D68242DF6BD_RuntimeMethod_var);
		return L_17;
	}
}
// HutongGames.PlayMaker.NamedVariable[] HutongGames.PlayMaker.FsmVariables::GetNamedVariablesSorted(HutongGames.PlayMaker.VariableType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* FsmVariables_GetNamedVariablesSorted_mB05D48FF74E3BC701F429544E746527FA69A7A5E (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m181204CF02D08BA13C32066CEE42E12A12654ABD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2B4AD55AD5E4B9EFC3C5633D5A246D68242DF6BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8EB71881B937BF5BD8161C75AE53755D8E12097B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___0_type;
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_1;
		L_1 = FsmVariables_GetNamedVariables_mCC04214255A9DB9932B868016CF8DAE62775D948(__this, L_0, NULL);
		List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* L_2 = (List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97*)il2cpp_codegen_object_new(List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m8EB71881B937BF5BD8161C75AE53755D8E12097B(L_2, (RuntimeObject*)L_1, List_1__ctor_m8EB71881B937BF5BD8161C75AE53755D8E12097B_RuntimeMethod_var);
		List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* L_3 = L_2;
		NullCheck(L_3);
		List_1_Sort_m181204CF02D08BA13C32066CEE42E12A12654ABD(L_3, List_1_Sort_m181204CF02D08BA13C32066CEE42E12A12654ABD_RuntimeMethod_var);
		NullCheck(L_3);
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_4;
		L_4 = List_1_ToArray_m2B4AD55AD5E4B9EFC3C5633D5A246D68242DF6BD(L_3, List_1_ToArray_m2B4AD55AD5E4B9EFC3C5633D5A246D68242DF6BD_RuntimeMethod_var);
		return L_4;
	}
}
// System.Collections.Generic.List`1<HutongGames.PlayMaker.NamedVariable> HutongGames.PlayMaker.FsmVariables::GetEmptyVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* FsmVariables_GetEmptyVariables_mAF2D0A9C2231904C00A73C55FF413FF920027A23 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	{
		List_1_tFAA5F0FF24B74B5EDD327F5E29832D146BA10F97* L_0;
		L_0 = FsmVariables_get_emptyVariables_m0F5A0F71A3FDA05372F831FC243E19EB633AA0BE(__this, NULL);
		return L_0;
	}
}
// System.Boolean HutongGames.PlayMaker.FsmVariables::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FsmVariables_Contains_m4E389D7F863574842E9B51E673EA82AA9C514A15 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_variableName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m507191DC01CE675338D8029183BD317BA883EF48_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* L_0;
		L_0 = FsmVariables_get_variableLookup_mA279487E9D8EB7DF14B70A00A04FC2F82C691D32(__this, NULL);
		String_t* L_1 = ___0_variableName;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m507191DC01CE675338D8029183BD317BA883EF48(L_0, L_1, Dictionary_2_ContainsKey_m507191DC01CE675338D8029183BD317BA883EF48_RuntimeMethod_var);
		return L_2;
	}
}
// System.Boolean HutongGames.PlayMaker.FsmVariables::Contains(HutongGames.PlayMaker.NamedVariable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FsmVariables_Contains_m010DC187C763BDA15D43F96CBB71409817967CD6 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* ___0_variable, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsValue_mA916C2087EC11E3353877D634AAFF9EE4196E0FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* L_0;
		L_0 = FsmVariables_get_variableLookup_mA279487E9D8EB7DF14B70A00A04FC2F82C691D32(__this, NULL);
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1 = ___0_variable;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsValue_mA916C2087EC11E3353877D634AAFF9EE4196E0FC(L_0, L_1, Dictionary_2_ContainsValue_mA916C2087EC11E3353877D634AAFF9EE4196E0FC_RuntimeMethod_var);
		return L_2;
	}
}
// HutongGames.PlayMaker.NamedVariable[] HutongGames.PlayMaker.FsmVariables::GetNames(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* FsmVariables_GetNames_mBC4D2DA4390C4CD1F7C8407E48041FD6C67BCAF6 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, Type_t* ___0_ofType, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_ofType;
		int32_t L_1;
		L_1 = FsmVar_GetVariableType_m4BA1279EAFC14CC73534657DA578D7744188CCF6(L_0, NULL);
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_2;
		L_2 = FsmVariables_GetNamedVariables_mCC04214255A9DB9932B868016CF8DAE62775D948(__this, L_1, NULL);
		return L_2;
	}
}
// System.Int32 HutongGames.PlayMaker.FsmVariables::GetVariableIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FsmVariables_GetVariableIndex_m96E4AA9318C9B04EE112ACA45C6739C18BF893E4 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_variableName, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_001f;
	}

IL_0004:
	{
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_0;
		L_0 = FsmVariables_get_allVariables_m604D9002071151541DEAD6D61A59031F1692CAB5(__this, NULL);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		String_t* L_4;
		L_4 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_3, NULL);
		String_t* L_5 = ___0_variableName;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_7 = V_0;
		return L_7;
	}

IL_001b:
	{
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_001f:
	{
		int32_t L_9 = V_0;
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_10;
		L_10 = FsmVariables_get_allVariables_m604D9002071151541DEAD6D61A59031F1692CAB5(__this, NULL);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		return (-1);
	}
}
// System.Boolean HutongGames.PlayMaker.FsmVariables::AreCompatible(HutongGames.PlayMaker.FsmVariables,HutongGames.PlayMaker.FsmVariables)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FsmVariables_AreCompatible_mAD6488994407B9F7C9D2CDEFBD76BEBF35FA9EB2 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* ___0_vars1, FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* ___1_vars2, const RuntimeMethod* method) 
{
	NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* V_0 = NULL;
	NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* V_1 = NULL;
	int32_t V_2 = 0;
	NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* V_3 = NULL;
	NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* V_4 = NULL;
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_0 = ___0_vars1;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_1 = ___1_vars2;
		if (L_1)
		{
			goto IL_0008;
		}
	}

IL_0006:
	{
		return (bool)0;
	}

IL_0008:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_2 = ___0_vars1;
		NullCheck(L_2);
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_3;
		L_3 = FsmVariables_get_allVariables_m604D9002071151541DEAD6D61A59031F1692CAB5(L_2, NULL);
		V_0 = L_3;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_4 = ___1_vars2;
		NullCheck(L_4);
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_5;
		L_5 = FsmVariables_get_allVariables_m604D9002071151541DEAD6D61A59031F1692CAB5(L_4, NULL);
		V_1 = L_5;
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_6 = V_0;
		NullCheck(L_6);
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_7 = V_1;
		NullCheck(L_7);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)))))
		{
			goto IL_0020;
		}
	}
	{
		return (bool)0;
	}

IL_0020:
	{
		V_2 = 0;
		goto IL_0069;
	}

IL_0024:
	{
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_8 = V_0;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_3 = L_11;
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		V_4 = L_15;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_16 = V_3;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* HutongGames.PlayMaker.VariableType HutongGames.PlayMaker.NamedVariable::get_VariableType() */, L_16);
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_18 = V_4;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* HutongGames.PlayMaker.VariableType HutongGames.PlayMaker.NamedVariable::get_VariableType() */, L_18);
		if ((((int32_t)L_17) == ((int32_t)L_19)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_003e:
	{
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_20 = V_3;
		NullCheck(L_20);
		Type_t* L_21;
		L_21 = VirtualFuncInvoker0< Type_t* >::Invoke(24 /* System.Type HutongGames.PlayMaker.NamedVariable::get_ObjectType() */, L_20);
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_22 = V_4;
		NullCheck(L_22);
		Type_t* L_23;
		L_23 = VirtualFuncInvoker0< Type_t* >::Invoke(24 /* System.Type HutongGames.PlayMaker.NamedVariable::get_ObjectType() */, L_22);
		if ((((RuntimeObject*)(Type_t*)L_21) == ((RuntimeObject*)(Type_t*)L_23)))
		{
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_004f:
	{
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_24 = V_3;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_24, NULL);
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_26 = V_4;
		NullCheck(L_26);
		String_t* L_27;
		L_27 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_26, NULL);
		bool L_28;
		L_28 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_25, L_27, NULL);
		if (!L_28)
		{
			goto IL_0065;
		}
	}
	{
		return (bool)0;
	}

IL_0065:
	{
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0069:
	{
		int32_t L_30 = V_2;
		NamedVariableU5BU5D_t6F8F5BD80A785AC86EEC2AB55D92189ED21B20BD* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		return (bool)1;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::OverrideVariableValues(HutongGames.PlayMaker.FsmVariables)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_OverrideVariableValues_mF5265E33AA16E2A0E2A93253DC691979011224AA (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* ___0_source, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	int32_t V_20 = 0;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	int32_t V_28 = 0;
	int32_t V_29 = 0;
	{
		V_0 = 0;
		goto IL_0065;
	}

IL_0004:
	{
		V_1 = 0;
		goto IL_0056;
	}

IL_0008:
	{
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_0 = __this->___floatVariables_4;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4;
		L_4 = NamedVariable_get_ShowInInspector_mDE3C8EE25E8E8A38901EBF8EBD38A9FD3DA7541A_inline(L_3, NULL);
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_5 = ___0_source;
		NullCheck(L_5);
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_6 = L_5->___floatVariables_4;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		String_t* L_10;
		L_10 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_9, NULL);
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_11 = __this->___floatVariables_4;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		String_t* L_15;
		L_15 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_14, NULL);
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, L_15, NULL);
		if (!L_16)
		{
			goto IL_0052;
		}
	}
	{
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_17 = __this->___floatVariables_4;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_21 = ___0_source;
		NullCheck(L_21);
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_22 = L_21->___floatVariables_4;
		int32_t L_23 = V_0;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		float L_26;
		L_26 = FsmFloat_get_Value_m265F39829C4C42B0A79775F1A2C20F1A62BA3ACD(L_25, NULL);
		NullCheck(L_20);
		FsmFloat_set_Value_mF252A515BE1BF1C4A94E74F807987A6695F7D7C7_inline(L_20, L_26, NULL);
	}

IL_0052:
	{
		int32_t L_27 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0056:
	{
		int32_t L_28 = V_1;
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_29;
		L_29 = FsmVariables_get_FloatVariables_m9A554326DE2BAF295D19FA0FA87240D871D2DC3D(__this, NULL);
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_30 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_0065:
	{
		int32_t L_31 = V_0;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_32 = ___0_source;
		NullCheck(L_32);
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_33;
		L_33 = FsmVariables_get_FloatVariables_m9A554326DE2BAF295D19FA0FA87240D871D2DC3D(L_32, NULL);
		NullCheck(L_33);
		if ((((int32_t)L_31) < ((int32_t)((int32_t)(((RuntimeArray*)L_33)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		V_2 = 0;
		goto IL_00d5;
	}

IL_0074:
	{
		V_3 = 0;
		goto IL_00c6;
	}

IL_0078:
	{
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_34 = __this->___intVariables_5;
		int32_t L_35 = V_3;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		bool L_38;
		L_38 = NamedVariable_get_ShowInInspector_mDE3C8EE25E8E8A38901EBF8EBD38A9FD3DA7541A_inline(L_37, NULL);
		if (!L_38)
		{
			goto IL_00c2;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_39 = ___0_source;
		NullCheck(L_39);
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_40 = L_39->___intVariables_5;
		int32_t L_41 = V_2;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		String_t* L_44;
		L_44 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_43, NULL);
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_45 = __this->___intVariables_5;
		int32_t L_46 = V_3;
		NullCheck(L_45);
		int32_t L_47 = L_46;
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_48 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		NullCheck(L_48);
		String_t* L_49;
		L_49 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_48, NULL);
		bool L_50;
		L_50 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_44, L_49, NULL);
		if (!L_50)
		{
			goto IL_00c2;
		}
	}
	{
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_51 = __this->___intVariables_5;
		int32_t L_52 = V_3;
		NullCheck(L_51);
		int32_t L_53 = L_52;
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_54 = (L_51)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_55 = ___0_source;
		NullCheck(L_55);
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_56 = L_55->___intVariables_5;
		int32_t L_57 = V_2;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_59 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_59);
		int32_t L_60;
		L_60 = FsmInt_get_Value_mB223B0A0C2082A67F53E7FCD990F3D5AA879610D(L_59, NULL);
		NullCheck(L_54);
		FsmInt_set_Value_mB7EB98D36202229B329F024942F80A7EF793659E_inline(L_54, L_60, NULL);
	}

IL_00c2:
	{
		int32_t L_61 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_61, 1));
	}

IL_00c6:
	{
		int32_t L_62 = V_3;
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_63;
		L_63 = FsmVariables_get_IntVariables_m4F3D72E17E63EBBCBC603DF133129010C62E6042(__this, NULL);
		NullCheck(L_63);
		if ((((int32_t)L_62) < ((int32_t)((int32_t)(((RuntimeArray*)L_63)->max_length)))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_64 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_00d5:
	{
		int32_t L_65 = V_2;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_66 = ___0_source;
		NullCheck(L_66);
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_67;
		L_67 = FsmVariables_get_IntVariables_m4F3D72E17E63EBBCBC603DF133129010C62E6042(L_66, NULL);
		NullCheck(L_67);
		if ((((int32_t)L_65) < ((int32_t)((int32_t)(((RuntimeArray*)L_67)->max_length)))))
		{
			goto IL_0074;
		}
	}
	{
		V_4 = 0;
		goto IL_0151;
	}

IL_00e5:
	{
		V_5 = 0;
		goto IL_013f;
	}

IL_00ea:
	{
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_68 = __this->___boolVariables_6;
		int32_t L_69 = V_5;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_71);
		bool L_72;
		L_72 = NamedVariable_get_ShowInInspector_mDE3C8EE25E8E8A38901EBF8EBD38A9FD3DA7541A_inline(L_71, NULL);
		if (!L_72)
		{
			goto IL_0139;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_73 = ___0_source;
		NullCheck(L_73);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_74 = L_73->___boolVariables_6;
		int32_t L_75 = V_4;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_77);
		String_t* L_78;
		L_78 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_77, NULL);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_79 = __this->___boolVariables_6;
		int32_t L_80 = V_5;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_82 = (L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_82);
		String_t* L_83;
		L_83 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_82, NULL);
		bool L_84;
		L_84 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_78, L_83, NULL);
		if (!L_84)
		{
			goto IL_0139;
		}
	}
	{
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_85 = __this->___boolVariables_6;
		int32_t L_86 = V_5;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_89 = ___0_source;
		NullCheck(L_89);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_90 = L_89->___boolVariables_6;
		int32_t L_91 = V_4;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_93);
		bool L_94;
		L_94 = FsmBool_get_Value_m2A36605407DC0F27ED37A095942A05DB93AC9BFC(L_93, NULL);
		NullCheck(L_88);
		FsmBool_set_Value_m8050208AF94EB950D663485E5D134DA34F3C95F4_inline(L_88, L_94, NULL);
	}

IL_0139:
	{
		int32_t L_95 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_013f:
	{
		int32_t L_96 = V_5;
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_97;
		L_97 = FsmVariables_get_BoolVariables_mDBF6EFCBF4C3B454D690E831F6F2F5CA35C5DC47(__this, NULL);
		NullCheck(L_97);
		if ((((int32_t)L_96) < ((int32_t)((int32_t)(((RuntimeArray*)L_97)->max_length)))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_98 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0151:
	{
		int32_t L_99 = V_4;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_100 = ___0_source;
		NullCheck(L_100);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_101;
		L_101 = FsmVariables_get_BoolVariables_mDBF6EFCBF4C3B454D690E831F6F2F5CA35C5DC47(L_100, NULL);
		NullCheck(L_101);
		if ((((int32_t)L_99) < ((int32_t)((int32_t)(((RuntimeArray*)L_101)->max_length)))))
		{
			goto IL_00e5;
		}
	}
	{
		V_6 = 0;
		goto IL_01ce;
	}

IL_0162:
	{
		V_7 = 0;
		goto IL_01bc;
	}

IL_0167:
	{
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_102 = __this->___gameObjectVariables_13;
		int32_t L_103 = V_7;
		NullCheck(L_102);
		int32_t L_104 = L_103;
		FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* L_105 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		NullCheck(L_105);
		bool L_106;
		L_106 = NamedVariable_get_ShowInInspector_mDE3C8EE25E8E8A38901EBF8EBD38A9FD3DA7541A_inline(L_105, NULL);
		if (!L_106)
		{
			goto IL_01b6;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_107 = ___0_source;
		NullCheck(L_107);
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_108 = L_107->___gameObjectVariables_13;
		int32_t L_109 = V_6;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* L_111 = (L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		NullCheck(L_111);
		String_t* L_112;
		L_112 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_111, NULL);
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_113 = __this->___gameObjectVariables_13;
		int32_t L_114 = V_7;
		NullCheck(L_113);
		int32_t L_115 = L_114;
		FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		NullCheck(L_116);
		String_t* L_117;
		L_117 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_116, NULL);
		bool L_118;
		L_118 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_112, L_117, NULL);
		if (!L_118)
		{
			goto IL_01b6;
		}
	}
	{
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_119 = __this->___gameObjectVariables_13;
		int32_t L_120 = V_7;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_123 = ___0_source;
		NullCheck(L_123);
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_124 = L_123->___gameObjectVariables_13;
		int32_t L_125 = V_6;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		NullCheck(L_127);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_128;
		L_128 = FsmGameObject_get_Value_m029F838272E39B99D02D7529562B5338FD2E2584(L_127, NULL);
		NullCheck(L_122);
		FsmGameObject_set_Value_mE5FDC9A93EA0E7B64C2C78A558C0679DD8D6BE44(L_122, L_128, NULL);
	}

IL_01b6:
	{
		int32_t L_129 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_129, 1));
	}

IL_01bc:
	{
		int32_t L_130 = V_7;
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_131;
		L_131 = FsmVariables_get_GameObjectVariables_m12954A97685FECDF37ED76A95821A1C50160651B(__this, NULL);
		NullCheck(L_131);
		if ((((int32_t)L_130) < ((int32_t)((int32_t)(((RuntimeArray*)L_131)->max_length)))))
		{
			goto IL_0167;
		}
	}
	{
		int32_t L_132 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_132, 1));
	}

IL_01ce:
	{
		int32_t L_133 = V_6;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_134 = ___0_source;
		NullCheck(L_134);
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_135;
		L_135 = FsmVariables_get_GameObjectVariables_m12954A97685FECDF37ED76A95821A1C50160651B(L_134, NULL);
		NullCheck(L_135);
		if ((((int32_t)L_133) < ((int32_t)((int32_t)(((RuntimeArray*)L_135)->max_length)))))
		{
			goto IL_0162;
		}
	}
	{
		V_8 = 0;
		goto IL_024b;
	}

IL_01df:
	{
		V_9 = 0;
		goto IL_0239;
	}

IL_01e4:
	{
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_136 = __this->___colorVariables_10;
		int32_t L_137 = V_9;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		NullCheck(L_139);
		bool L_140;
		L_140 = NamedVariable_get_ShowInInspector_mDE3C8EE25E8E8A38901EBF8EBD38A9FD3DA7541A_inline(L_139, NULL);
		if (!L_140)
		{
			goto IL_0233;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_141 = ___0_source;
		NullCheck(L_141);
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_142 = L_141->___colorVariables_10;
		int32_t L_143 = V_8;
		NullCheck(L_142);
		int32_t L_144 = L_143;
		FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* L_145 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_144));
		NullCheck(L_145);
		String_t* L_146;
		L_146 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_145, NULL);
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_147 = __this->___colorVariables_10;
		int32_t L_148 = V_9;
		NullCheck(L_147);
		int32_t L_149 = L_148;
		FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* L_150 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_149));
		NullCheck(L_150);
		String_t* L_151;
		L_151 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_150, NULL);
		bool L_152;
		L_152 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_146, L_151, NULL);
		if (!L_152)
		{
			goto IL_0233;
		}
	}
	{
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_153 = __this->___colorVariables_10;
		int32_t L_154 = V_9;
		NullCheck(L_153);
		int32_t L_155 = L_154;
		FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* L_156 = (L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_157 = ___0_source;
		NullCheck(L_157);
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_158 = L_157->___colorVariables_10;
		int32_t L_159 = V_8;
		NullCheck(L_158);
		int32_t L_160 = L_159;
		FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* L_161 = (L_158)->GetAt(static_cast<il2cpp_array_size_t>(L_160));
		NullCheck(L_161);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_162;
		L_162 = FsmColor_get_Value_mD11C7F67290AA84061E4D8EE055FE09CAC7115E2_inline(L_161, NULL);
		NullCheck(L_156);
		FsmColor_set_Value_mB888645B6E49718FE4ECF613BF10083C5BF431DF_inline(L_156, L_162, NULL);
	}

IL_0233:
	{
		int32_t L_163 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_163, 1));
	}

IL_0239:
	{
		int32_t L_164 = V_9;
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_165;
		L_165 = FsmVariables_get_ColorVariables_m0FC4DA49A05A0C1ABE826B730AC958261DE55D8D(__this, NULL);
		NullCheck(L_165);
		if ((((int32_t)L_164) < ((int32_t)((int32_t)(((RuntimeArray*)L_165)->max_length)))))
		{
			goto IL_01e4;
		}
	}
	{
		int32_t L_166 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_166, 1));
	}

IL_024b:
	{
		int32_t L_167 = V_8;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_168 = ___0_source;
		NullCheck(L_168);
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_169;
		L_169 = FsmVariables_get_ColorVariables_m0FC4DA49A05A0C1ABE826B730AC958261DE55D8D(L_168, NULL);
		NullCheck(L_169);
		if ((((int32_t)L_167) < ((int32_t)((int32_t)(((RuntimeArray*)L_169)->max_length)))))
		{
			goto IL_01df;
		}
	}
	{
		V_10 = 0;
		goto IL_02c8;
	}

IL_025c:
	{
		V_11 = 0;
		goto IL_02b6;
	}

IL_0261:
	{
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_170 = __this->___vector2Variables_8;
		int32_t L_171 = V_11;
		NullCheck(L_170);
		int32_t L_172 = L_171;
		FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* L_173 = (L_170)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		NullCheck(L_173);
		bool L_174;
		L_174 = NamedVariable_get_ShowInInspector_mDE3C8EE25E8E8A38901EBF8EBD38A9FD3DA7541A_inline(L_173, NULL);
		if (!L_174)
		{
			goto IL_02b0;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_175 = ___0_source;
		NullCheck(L_175);
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_176 = L_175->___vector2Variables_8;
		int32_t L_177 = V_10;
		NullCheck(L_176);
		int32_t L_178 = L_177;
		FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* L_179 = (L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		NullCheck(L_179);
		String_t* L_180;
		L_180 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_179, NULL);
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_181 = __this->___vector2Variables_8;
		int32_t L_182 = V_11;
		NullCheck(L_181);
		int32_t L_183 = L_182;
		FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* L_184 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_183));
		NullCheck(L_184);
		String_t* L_185;
		L_185 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_184, NULL);
		bool L_186;
		L_186 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_180, L_185, NULL);
		if (!L_186)
		{
			goto IL_02b0;
		}
	}
	{
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_187 = __this->___vector2Variables_8;
		int32_t L_188 = V_11;
		NullCheck(L_187);
		int32_t L_189 = L_188;
		FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* L_190 = (L_187)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_191 = ___0_source;
		NullCheck(L_191);
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_192 = L_191->___vector2Variables_8;
		int32_t L_193 = V_10;
		NullCheck(L_192);
		int32_t L_194 = L_193;
		FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* L_195 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		NullCheck(L_195);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_196;
		L_196 = FsmVector2_get_Value_mB7BE45F818D5B78246F185D66B592987DD3CCF55_inline(L_195, NULL);
		NullCheck(L_190);
		FsmVector2_set_Value_m0EB667A0CF1C74FEC94FA97CC2215D74BD3ED904_inline(L_190, L_196, NULL);
	}

IL_02b0:
	{
		int32_t L_197 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_197, 1));
	}

IL_02b6:
	{
		int32_t L_198 = V_11;
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_199;
		L_199 = FsmVariables_get_Vector2Variables_m85DE6DDC7EF8890624AFC5167AA5C9A98EBB540A(__this, NULL);
		NullCheck(L_199);
		if ((((int32_t)L_198) < ((int32_t)((int32_t)(((RuntimeArray*)L_199)->max_length)))))
		{
			goto IL_0261;
		}
	}
	{
		int32_t L_200 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_200, 1));
	}

IL_02c8:
	{
		int32_t L_201 = V_10;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_202 = ___0_source;
		NullCheck(L_202);
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_203;
		L_203 = FsmVariables_get_Vector2Variables_m85DE6DDC7EF8890624AFC5167AA5C9A98EBB540A(L_202, NULL);
		NullCheck(L_203);
		if ((((int32_t)L_201) < ((int32_t)((int32_t)(((RuntimeArray*)L_203)->max_length)))))
		{
			goto IL_025c;
		}
	}
	{
		V_12 = 0;
		goto IL_0345;
	}

IL_02d9:
	{
		V_13 = 0;
		goto IL_0333;
	}

IL_02de:
	{
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_204 = __this->___vector3Variables_9;
		int32_t L_205 = V_13;
		NullCheck(L_204);
		int32_t L_206 = L_205;
		FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* L_207 = (L_204)->GetAt(static_cast<il2cpp_array_size_t>(L_206));
		NullCheck(L_207);
		bool L_208;
		L_208 = NamedVariable_get_ShowInInspector_mDE3C8EE25E8E8A38901EBF8EBD38A9FD3DA7541A_inline(L_207, NULL);
		if (!L_208)
		{
			goto IL_032d;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_209 = ___0_source;
		NullCheck(L_209);
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_210 = L_209->___vector3Variables_9;
		int32_t L_211 = V_12;
		NullCheck(L_210);
		int32_t L_212 = L_211;
		FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* L_213 = (L_210)->GetAt(static_cast<il2cpp_array_size_t>(L_212));
		NullCheck(L_213);
		String_t* L_214;
		L_214 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_213, NULL);
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_215 = __this->___vector3Variables_9;
		int32_t L_216 = V_13;
		NullCheck(L_215);
		int32_t L_217 = L_216;
		FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* L_218 = (L_215)->GetAt(static_cast<il2cpp_array_size_t>(L_217));
		NullCheck(L_218);
		String_t* L_219;
		L_219 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_218, NULL);
		bool L_220;
		L_220 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_214, L_219, NULL);
		if (!L_220)
		{
			goto IL_032d;
		}
	}
	{
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_221 = __this->___vector3Variables_9;
		int32_t L_222 = V_13;
		NullCheck(L_221);
		int32_t L_223 = L_222;
		FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* L_224 = (L_221)->GetAt(static_cast<il2cpp_array_size_t>(L_223));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_225 = ___0_source;
		NullCheck(L_225);
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_226 = L_225->___vector3Variables_9;
		int32_t L_227 = V_12;
		NullCheck(L_226);
		int32_t L_228 = L_227;
		FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* L_229 = (L_226)->GetAt(static_cast<il2cpp_array_size_t>(L_228));
		NullCheck(L_229);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_230;
		L_230 = FsmVector3_get_Value_m6196631A608232530F1CD4B7572E99D69AC1C4E1(L_229, NULL);
		NullCheck(L_224);
		FsmVector3_set_Value_m51DCF660E54F20CF74084C95C41C5D0D9CFDA7CC_inline(L_224, L_230, NULL);
	}

IL_032d:
	{
		int32_t L_231 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_231, 1));
	}

IL_0333:
	{
		int32_t L_232 = V_13;
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_233;
		L_233 = FsmVariables_get_Vector3Variables_m6FD7B81514AA51C95E67601F4DFB443D467F2F0D(__this, NULL);
		NullCheck(L_233);
		if ((((int32_t)L_232) < ((int32_t)((int32_t)(((RuntimeArray*)L_233)->max_length)))))
		{
			goto IL_02de;
		}
	}
	{
		int32_t L_234 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_234, 1));
	}

IL_0345:
	{
		int32_t L_235 = V_12;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_236 = ___0_source;
		NullCheck(L_236);
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_237;
		L_237 = FsmVariables_get_Vector3Variables_m6FD7B81514AA51C95E67601F4DFB443D467F2F0D(L_236, NULL);
		NullCheck(L_237);
		if ((((int32_t)L_235) < ((int32_t)((int32_t)(((RuntimeArray*)L_237)->max_length)))))
		{
			goto IL_02d9;
		}
	}
	{
		V_14 = 0;
		goto IL_03c2;
	}

IL_0356:
	{
		V_15 = 0;
		goto IL_03b0;
	}

IL_035b:
	{
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_238 = __this->___rectVariables_11;
		int32_t L_239 = V_15;
		NullCheck(L_238);
		int32_t L_240 = L_239;
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_241 = (L_238)->GetAt(static_cast<il2cpp_array_size_t>(L_240));
		NullCheck(L_241);
		bool L_242;
		L_242 = NamedVariable_get_ShowInInspector_mDE3C8EE25E8E8A38901EBF8EBD38A9FD3DA7541A_inline(L_241, NULL);
		if (!L_242)
		{
			goto IL_03aa;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_243 = ___0_source;
		NullCheck(L_243);
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_244 = L_243->___rectVariables_11;
		int32_t L_245 = V_14;
		NullCheck(L_244);
		int32_t L_246 = L_245;
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_247 = (L_244)->GetAt(static_cast<il2cpp_array_size_t>(L_246));
		NullCheck(L_247);
		String_t* L_248;
		L_248 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_247, NULL);
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_249 = __this->___rectVariables_11;
		int32_t L_250 = V_15;
		NullCheck(L_249);
		int32_t L_251 = L_250;
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_252 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_251));
		NullCheck(L_252);
		String_t* L_253;
		L_253 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_252, NULL);
		bool L_254;
		L_254 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_248, L_253, NULL);
		if (!L_254)
		{
			goto IL_03aa;
		}
	}
	{
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_255 = __this->___rectVariables_11;
		int32_t L_256 = V_15;
		NullCheck(L_255);
		int32_t L_257 = L_256;
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_258 = (L_255)->GetAt(static_cast<il2cpp_array_size_t>(L_257));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_259 = ___0_source;
		NullCheck(L_259);
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_260 = L_259->___rectVariables_11;
		int32_t L_261 = V_14;
		NullCheck(L_260);
		int32_t L_262 = L_261;
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_263 = (L_260)->GetAt(static_cast<il2cpp_array_size_t>(L_262));
		NullCheck(L_263);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_264;
		L_264 = FsmRect_get_Value_mC0A513D684FA20436438E8287209D6DD702DD6B2_inline(L_263, NULL);
		NullCheck(L_258);
		FsmRect_set_Value_m04CFC74B987B305B26E1B13CAB03D616FDADD141_inline(L_258, L_264, NULL);
	}

IL_03aa:
	{
		int32_t L_265 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_265, 1));
	}

IL_03b0:
	{
		int32_t L_266 = V_15;
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_267;
		L_267 = FsmVariables_get_RectVariables_m3E08BC600245031E6DDBAE797871B11E5F593E2F(__this, NULL);
		NullCheck(L_267);
		if ((((int32_t)L_266) < ((int32_t)((int32_t)(((RuntimeArray*)L_267)->max_length)))))
		{
			goto IL_035b;
		}
	}
	{
		int32_t L_268 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_268, 1));
	}

IL_03c2:
	{
		int32_t L_269 = V_14;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_270 = ___0_source;
		NullCheck(L_270);
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_271;
		L_271 = FsmVariables_get_RectVariables_m3E08BC600245031E6DDBAE797871B11E5F593E2F(L_270, NULL);
		NullCheck(L_271);
		if ((((int32_t)L_269) < ((int32_t)((int32_t)(((RuntimeArray*)L_271)->max_length)))))
		{
			goto IL_0356;
		}
	}
	{
		V_16 = 0;
		goto IL_043f;
	}

IL_03d3:
	{
		V_17 = 0;
		goto IL_042d;
	}

IL_03d8:
	{
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_272 = __this->___quaternionVariables_12;
		int32_t L_273 = V_17;
		NullCheck(L_272);
		int32_t L_274 = L_273;
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_275 = (L_272)->GetAt(static_cast<il2cpp_array_size_t>(L_274));
		NullCheck(L_275);
		bool L_276;
		L_276 = NamedVariable_get_ShowInInspector_mDE3C8EE25E8E8A38901EBF8EBD38A9FD3DA7541A_inline(L_275, NULL);
		if (!L_276)
		{
			goto IL_0427;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_277 = ___0_source;
		NullCheck(L_277);
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_278 = L_277->___quaternionVariables_12;
		int32_t L_279 = V_16;
		NullCheck(L_278);
		int32_t L_280 = L_279;
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_281 = (L_278)->GetAt(static_cast<il2cpp_array_size_t>(L_280));
		NullCheck(L_281);
		String_t* L_282;
		L_282 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_281, NULL);
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_283 = __this->___quaternionVariables_12;
		int32_t L_284 = V_17;
		NullCheck(L_283);
		int32_t L_285 = L_284;
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_286 = (L_283)->GetAt(static_cast<il2cpp_array_size_t>(L_285));
		NullCheck(L_286);
		String_t* L_287;
		L_287 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_286, NULL);
		bool L_288;
		L_288 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_282, L_287, NULL);
		if (!L_288)
		{
			goto IL_0427;
		}
	}
	{
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_289 = __this->___quaternionVariables_12;
		int32_t L_290 = V_17;
		NullCheck(L_289);
		int32_t L_291 = L_290;
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_292 = (L_289)->GetAt(static_cast<il2cpp_array_size_t>(L_291));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_293 = ___0_source;
		NullCheck(L_293);
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_294 = L_293->___quaternionVariables_12;
		int32_t L_295 = V_16;
		NullCheck(L_294);
		int32_t L_296 = L_295;
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_297 = (L_294)->GetAt(static_cast<il2cpp_array_size_t>(L_296));
		NullCheck(L_297);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_298;
		L_298 = FsmQuaternion_get_Value_m9B99B77E8A84133DBA0114F1E705FA731DF4011E_inline(L_297, NULL);
		NullCheck(L_292);
		FsmQuaternion_set_Value_m9CC98C1DEB6EB81CAED46789D0D0891E78990FBD_inline(L_292, L_298, NULL);
	}

IL_0427:
	{
		int32_t L_299 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_299, 1));
	}

IL_042d:
	{
		int32_t L_300 = V_17;
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_301;
		L_301 = FsmVariables_get_QuaternionVariables_m08898919CA4145C676808BE9D301F669B5FAFE78(__this, NULL);
		NullCheck(L_301);
		if ((((int32_t)L_300) < ((int32_t)((int32_t)(((RuntimeArray*)L_301)->max_length)))))
		{
			goto IL_03d8;
		}
	}
	{
		int32_t L_302 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_302, 1));
	}

IL_043f:
	{
		int32_t L_303 = V_16;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_304 = ___0_source;
		NullCheck(L_304);
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_305;
		L_305 = FsmVariables_get_QuaternionVariables_m08898919CA4145C676808BE9D301F669B5FAFE78(L_304, NULL);
		NullCheck(L_305);
		if ((((int32_t)L_303) < ((int32_t)((int32_t)(((RuntimeArray*)L_305)->max_length)))))
		{
			goto IL_03d3;
		}
	}
	{
		V_18 = 0;
		goto IL_04bc;
	}

IL_0450:
	{
		V_19 = 0;
		goto IL_04aa;
	}

IL_0455:
	{
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_306 = __this->___objectVariables_14;
		int32_t L_307 = V_19;
		NullCheck(L_306);
		int32_t L_308 = L_307;
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_309 = (L_306)->GetAt(static_cast<il2cpp_array_size_t>(L_308));
		NullCheck(L_309);
		bool L_310;
		L_310 = NamedVariable_get_ShowInInspector_mDE3C8EE25E8E8A38901EBF8EBD38A9FD3DA7541A_inline(L_309, NULL);
		if (!L_310)
		{
			goto IL_04a4;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_311 = ___0_source;
		NullCheck(L_311);
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_312 = L_311->___objectVariables_14;
		int32_t L_313 = V_18;
		NullCheck(L_312);
		int32_t L_314 = L_313;
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_315 = (L_312)->GetAt(static_cast<il2cpp_array_size_t>(L_314));
		NullCheck(L_315);
		String_t* L_316;
		L_316 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_315, NULL);
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_317 = __this->___objectVariables_14;
		int32_t L_318 = V_19;
		NullCheck(L_317);
		int32_t L_319 = L_318;
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_320 = (L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_319));
		NullCheck(L_320);
		String_t* L_321;
		L_321 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_320, NULL);
		bool L_322;
		L_322 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_316, L_321, NULL);
		if (!L_322)
		{
			goto IL_04a4;
		}
	}
	{
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_323 = __this->___objectVariables_14;
		int32_t L_324 = V_19;
		NullCheck(L_323);
		int32_t L_325 = L_324;
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_326 = (L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_325));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_327 = ___0_source;
		NullCheck(L_327);
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_328 = L_327->___objectVariables_14;
		int32_t L_329 = V_18;
		NullCheck(L_328);
		int32_t L_330 = L_329;
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_331 = (L_328)->GetAt(static_cast<il2cpp_array_size_t>(L_330));
		NullCheck(L_331);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_332;
		L_332 = FsmObject_get_Value_m4BAC2DC7BD28A61FF42057608B5E6BA213974891(L_331, NULL);
		NullCheck(L_326);
		FsmObject_set_Value_m80FD7143C40FE8CB2C0642B134E12A6BE5972C73_inline(L_326, L_332, NULL);
	}

IL_04a4:
	{
		int32_t L_333 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_333, 1));
	}

IL_04aa:
	{
		int32_t L_334 = V_19;
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_335;
		L_335 = FsmVariables_get_ObjectVariables_mA98B0586520A729234994B2F0FC6DCC67F5C9051(__this, NULL);
		NullCheck(L_335);
		if ((((int32_t)L_334) < ((int32_t)((int32_t)(((RuntimeArray*)L_335)->max_length)))))
		{
			goto IL_0455;
		}
	}
	{
		int32_t L_336 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_336, 1));
	}

IL_04bc:
	{
		int32_t L_337 = V_18;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_338 = ___0_source;
		NullCheck(L_338);
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_339;
		L_339 = FsmVariables_get_ObjectVariables_mA98B0586520A729234994B2F0FC6DCC67F5C9051(L_338, NULL);
		NullCheck(L_339);
		if ((((int32_t)L_337) < ((int32_t)((int32_t)(((RuntimeArray*)L_339)->max_length)))))
		{
			goto IL_0450;
		}
	}
	{
		V_20 = 0;
		goto IL_0539;
	}

IL_04cd:
	{
		V_21 = 0;
		goto IL_0527;
	}

IL_04d2:
	{
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_340 = __this->___materialVariables_15;
		int32_t L_341 = V_21;
		NullCheck(L_340);
		int32_t L_342 = L_341;
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_343 = (L_340)->GetAt(static_cast<il2cpp_array_size_t>(L_342));
		NullCheck(L_343);
		bool L_344;
		L_344 = NamedVariable_get_ShowInInspector_mDE3C8EE25E8E8A38901EBF8EBD38A9FD3DA7541A_inline(L_343, NULL);
		if (!L_344)
		{
			goto IL_0521;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_345 = ___0_source;
		NullCheck(L_345);
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_346 = L_345->___materialVariables_15;
		int32_t L_347 = V_20;
		NullCheck(L_346);
		int32_t L_348 = L_347;
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_349 = (L_346)->GetAt(static_cast<il2cpp_array_size_t>(L_348));
		NullCheck(L_349);
		String_t* L_350;
		L_350 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_349, NULL);
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_351 = __this->___materialVariables_15;
		int32_t L_352 = V_21;
		NullCheck(L_351);
		int32_t L_353 = L_352;
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_354 = (L_351)->GetAt(static_cast<il2cpp_array_size_t>(L_353));
		NullCheck(L_354);
		String_t* L_355;
		L_355 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_354, NULL);
		bool L_356;
		L_356 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_350, L_355, NULL);
		if (!L_356)
		{
			goto IL_0521;
		}
	}
	{
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_357 = __this->___materialVariables_15;
		int32_t L_358 = V_21;
		NullCheck(L_357);
		int32_t L_359 = L_358;
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_360 = (L_357)->GetAt(static_cast<il2cpp_array_size_t>(L_359));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_361 = ___0_source;
		NullCheck(L_361);
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_362 = L_361->___materialVariables_15;
		int32_t L_363 = V_20;
		NullCheck(L_362);
		int32_t L_364 = L_363;
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_365 = (L_362)->GetAt(static_cast<il2cpp_array_size_t>(L_364));
		NullCheck(L_365);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_366;
		L_366 = FsmMaterial_get_Value_mE9BFCA868C19B112CCB1CD051BE7A8C2EF6DD375(L_365, NULL);
		NullCheck(L_360);
		FsmMaterial_set_Value_m3ED44866449C25D2F771677FD76A4C8A028C149E(L_360, L_366, NULL);
	}

IL_0521:
	{
		int32_t L_367 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_367, 1));
	}

IL_0527:
	{
		int32_t L_368 = V_21;
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_369;
		L_369 = FsmVariables_get_MaterialVariables_m4665A8E211BBCEAEC19F72D593AFBD462D40EBA2(__this, NULL);
		NullCheck(L_369);
		if ((((int32_t)L_368) < ((int32_t)((int32_t)(((RuntimeArray*)L_369)->max_length)))))
		{
			goto IL_04d2;
		}
	}
	{
		int32_t L_370 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_370, 1));
	}

IL_0539:
	{
		int32_t L_371 = V_20;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_372 = ___0_source;
		NullCheck(L_372);
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_373;
		L_373 = FsmVariables_get_MaterialVariables_m4665A8E211BBCEAEC19F72D593AFBD462D40EBA2(L_372, NULL);
		NullCheck(L_373);
		if ((((int32_t)L_371) < ((int32_t)((int32_t)(((RuntimeArray*)L_373)->max_length)))))
		{
			goto IL_04cd;
		}
	}
	{
		V_22 = 0;
		goto IL_05b6;
	}

IL_054a:
	{
		V_23 = 0;
		goto IL_05a4;
	}

IL_054f:
	{
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_374 = __this->___textureVariables_16;
		int32_t L_375 = V_23;
		NullCheck(L_374);
		int32_t L_376 = L_375;
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_377 = (L_374)->GetAt(static_cast<il2cpp_array_size_t>(L_376));
		NullCheck(L_377);
		bool L_378;
		L_378 = NamedVariable_get_ShowInInspector_mDE3C8EE25E8E8A38901EBF8EBD38A9FD3DA7541A_inline(L_377, NULL);
		if (!L_378)
		{
			goto IL_059e;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_379 = ___0_source;
		NullCheck(L_379);
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_380 = L_379->___textureVariables_16;
		int32_t L_381 = V_22;
		NullCheck(L_380);
		int32_t L_382 = L_381;
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_383 = (L_380)->GetAt(static_cast<il2cpp_array_size_t>(L_382));
		NullCheck(L_383);
		String_t* L_384;
		L_384 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_383, NULL);
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_385 = __this->___textureVariables_16;
		int32_t L_386 = V_23;
		NullCheck(L_385);
		int32_t L_387 = L_386;
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_388 = (L_385)->GetAt(static_cast<il2cpp_array_size_t>(L_387));
		NullCheck(L_388);
		String_t* L_389;
		L_389 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_388, NULL);
		bool L_390;
		L_390 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_384, L_389, NULL);
		if (!L_390)
		{
			goto IL_059e;
		}
	}
	{
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_391 = __this->___textureVariables_16;
		int32_t L_392 = V_23;
		NullCheck(L_391);
		int32_t L_393 = L_392;
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_394 = (L_391)->GetAt(static_cast<il2cpp_array_size_t>(L_393));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_395 = ___0_source;
		NullCheck(L_395);
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_396 = L_395->___textureVariables_16;
		int32_t L_397 = V_22;
		NullCheck(L_396);
		int32_t L_398 = L_397;
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_399 = (L_396)->GetAt(static_cast<il2cpp_array_size_t>(L_398));
		NullCheck(L_399);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_400;
		L_400 = FsmTexture_get_Value_m9E10A59BCAF70582841D5A8DCAFFCAD26569B295(L_399, NULL);
		NullCheck(L_394);
		FsmTexture_set_Value_m6CADBCAFD1C435C999656F18D4A995EFADCBD200(L_394, L_400, NULL);
	}

IL_059e:
	{
		int32_t L_401 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_401, 1));
	}

IL_05a4:
	{
		int32_t L_402 = V_23;
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_403;
		L_403 = FsmVariables_get_TextureVariables_mD2BD3864F92E7EE5310239F5E59A5C826DF3949F(__this, NULL);
		NullCheck(L_403);
		if ((((int32_t)L_402) < ((int32_t)((int32_t)(((RuntimeArray*)L_403)->max_length)))))
		{
			goto IL_054f;
		}
	}
	{
		int32_t L_404 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_404, 1));
	}

IL_05b6:
	{
		int32_t L_405 = V_22;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_406 = ___0_source;
		NullCheck(L_406);
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_407;
		L_407 = FsmVariables_get_TextureVariables_mD2BD3864F92E7EE5310239F5E59A5C826DF3949F(L_406, NULL);
		NullCheck(L_407);
		if ((((int32_t)L_405) < ((int32_t)((int32_t)(((RuntimeArray*)L_407)->max_length)))))
		{
			goto IL_054a;
		}
	}
	{
		V_24 = 0;
		goto IL_0633;
	}

IL_05c7:
	{
		V_25 = 0;
		goto IL_0621;
	}

IL_05cc:
	{
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_408 = __this->___stringVariables_7;
		int32_t L_409 = V_25;
		NullCheck(L_408);
		int32_t L_410 = L_409;
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_411 = (L_408)->GetAt(static_cast<il2cpp_array_size_t>(L_410));
		NullCheck(L_411);
		bool L_412;
		L_412 = NamedVariable_get_ShowInInspector_mDE3C8EE25E8E8A38901EBF8EBD38A9FD3DA7541A_inline(L_411, NULL);
		if (!L_412)
		{
			goto IL_061b;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_413 = ___0_source;
		NullCheck(L_413);
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_414 = L_413->___stringVariables_7;
		int32_t L_415 = V_24;
		NullCheck(L_414);
		int32_t L_416 = L_415;
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_417 = (L_414)->GetAt(static_cast<il2cpp_array_size_t>(L_416));
		NullCheck(L_417);
		String_t* L_418;
		L_418 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_417, NULL);
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_419 = __this->___stringVariables_7;
		int32_t L_420 = V_25;
		NullCheck(L_419);
		int32_t L_421 = L_420;
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_422 = (L_419)->GetAt(static_cast<il2cpp_array_size_t>(L_421));
		NullCheck(L_422);
		String_t* L_423;
		L_423 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_422, NULL);
		bool L_424;
		L_424 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_418, L_423, NULL);
		if (!L_424)
		{
			goto IL_061b;
		}
	}
	{
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_425 = __this->___stringVariables_7;
		int32_t L_426 = V_25;
		NullCheck(L_425);
		int32_t L_427 = L_426;
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_428 = (L_425)->GetAt(static_cast<il2cpp_array_size_t>(L_427));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_429 = ___0_source;
		NullCheck(L_429);
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_430 = L_429->___stringVariables_7;
		int32_t L_431 = V_24;
		NullCheck(L_430);
		int32_t L_432 = L_431;
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_433 = (L_430)->GetAt(static_cast<il2cpp_array_size_t>(L_432));
		NullCheck(L_433);
		String_t* L_434;
		L_434 = FsmString_get_Value_mF43802ADDAA73622CA6CE25425C712BD9B15916D(L_433, NULL);
		NullCheck(L_428);
		FsmString_set_Value_m73BB296E0E78080EA98402FA2CCDD3779781C8B0_inline(L_428, L_434, NULL);
	}

IL_061b:
	{
		int32_t L_435 = V_25;
		V_25 = ((int32_t)il2cpp_codegen_add(L_435, 1));
	}

IL_0621:
	{
		int32_t L_436 = V_25;
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_437;
		L_437 = FsmVariables_get_StringVariables_mF73342631D1B5FF92B028EDD5CE82CD82F235AB9(__this, NULL);
		NullCheck(L_437);
		if ((((int32_t)L_436) < ((int32_t)((int32_t)(((RuntimeArray*)L_437)->max_length)))))
		{
			goto IL_05cc;
		}
	}
	{
		int32_t L_438 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_438, 1));
	}

IL_0633:
	{
		int32_t L_439 = V_24;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_440 = ___0_source;
		NullCheck(L_440);
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_441;
		L_441 = FsmVariables_get_StringVariables_mF73342631D1B5FF92B028EDD5CE82CD82F235AB9(L_440, NULL);
		NullCheck(L_441);
		if ((((int32_t)L_439) < ((int32_t)((int32_t)(((RuntimeArray*)L_441)->max_length)))))
		{
			goto IL_05c7;
		}
	}
	{
		V_26 = 0;
		goto IL_06ab;
	}

IL_0644:
	{
		V_27 = 0;
		goto IL_0699;
	}

IL_0649:
	{
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_442 = __this->___arrayVariables_17;
		int32_t L_443 = V_27;
		NullCheck(L_442);
		int32_t L_444 = L_443;
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_445 = (L_442)->GetAt(static_cast<il2cpp_array_size_t>(L_444));
		NullCheck(L_445);
		bool L_446;
		L_446 = NamedVariable_get_ShowInInspector_mDE3C8EE25E8E8A38901EBF8EBD38A9FD3DA7541A_inline(L_445, NULL);
		if (!L_446)
		{
			goto IL_0693;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_447 = ___0_source;
		NullCheck(L_447);
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_448 = L_447->___arrayVariables_17;
		int32_t L_449 = V_26;
		NullCheck(L_448);
		int32_t L_450 = L_449;
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_451 = (L_448)->GetAt(static_cast<il2cpp_array_size_t>(L_450));
		NullCheck(L_451);
		String_t* L_452;
		L_452 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_451, NULL);
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_453 = __this->___arrayVariables_17;
		int32_t L_454 = V_27;
		NullCheck(L_453);
		int32_t L_455 = L_454;
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_456 = (L_453)->GetAt(static_cast<il2cpp_array_size_t>(L_455));
		NullCheck(L_456);
		String_t* L_457;
		L_457 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_456, NULL);
		bool L_458;
		L_458 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_452, L_457, NULL);
		if (!L_458)
		{
			goto IL_0693;
		}
	}
	{
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_459 = __this->___arrayVariables_17;
		int32_t L_460 = V_27;
		NullCheck(L_459);
		int32_t L_461 = L_460;
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_462 = (L_459)->GetAt(static_cast<il2cpp_array_size_t>(L_461));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_463 = ___0_source;
		NullCheck(L_463);
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_464 = L_463->___arrayVariables_17;
		int32_t L_465 = V_26;
		NullCheck(L_464);
		int32_t L_466 = L_465;
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_467 = (L_464)->GetAt(static_cast<il2cpp_array_size_t>(L_466));
		NullCheck(L_462);
		FsmArray_CopyValues_m83347A5D76DE64DE66EF756205DDECADD85D295D(L_462, L_467, NULL);
	}

IL_0693:
	{
		int32_t L_468 = V_27;
		V_27 = ((int32_t)il2cpp_codegen_add(L_468, 1));
	}

IL_0699:
	{
		int32_t L_469 = V_27;
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_470;
		L_470 = FsmVariables_get_ArrayVariables_mCFF234537EEAC04D255AE69428931227E22864D6(__this, NULL);
		NullCheck(L_470);
		if ((((int32_t)L_469) < ((int32_t)((int32_t)(((RuntimeArray*)L_470)->max_length)))))
		{
			goto IL_0649;
		}
	}
	{
		int32_t L_471 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_471, 1));
	}

IL_06ab:
	{
		int32_t L_472 = V_26;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_473 = ___0_source;
		NullCheck(L_473);
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_474;
		L_474 = FsmVariables_get_ArrayVariables_mCFF234537EEAC04D255AE69428931227E22864D6(L_473, NULL);
		NullCheck(L_474);
		if ((((int32_t)L_472) < ((int32_t)((int32_t)(((RuntimeArray*)L_474)->max_length)))))
		{
			goto IL_0644;
		}
	}
	{
		V_28 = 0;
		goto IL_0728;
	}

IL_06bc:
	{
		V_29 = 0;
		goto IL_0716;
	}

IL_06c1:
	{
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_475 = __this->___enumVariables_18;
		int32_t L_476 = V_29;
		NullCheck(L_475);
		int32_t L_477 = L_476;
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_478 = (L_475)->GetAt(static_cast<il2cpp_array_size_t>(L_477));
		NullCheck(L_478);
		bool L_479;
		L_479 = NamedVariable_get_ShowInInspector_mDE3C8EE25E8E8A38901EBF8EBD38A9FD3DA7541A_inline(L_478, NULL);
		if (!L_479)
		{
			goto IL_0710;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_480 = ___0_source;
		NullCheck(L_480);
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_481 = L_480->___enumVariables_18;
		int32_t L_482 = V_28;
		NullCheck(L_481);
		int32_t L_483 = L_482;
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_484 = (L_481)->GetAt(static_cast<il2cpp_array_size_t>(L_483));
		NullCheck(L_484);
		String_t* L_485;
		L_485 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_484, NULL);
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_486 = __this->___enumVariables_18;
		int32_t L_487 = V_29;
		NullCheck(L_486);
		int32_t L_488 = L_487;
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_489 = (L_486)->GetAt(static_cast<il2cpp_array_size_t>(L_488));
		NullCheck(L_489);
		String_t* L_490;
		L_490 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_489, NULL);
		bool L_491;
		L_491 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_485, L_490, NULL);
		if (!L_491)
		{
			goto IL_0710;
		}
	}
	{
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_492 = __this->___enumVariables_18;
		int32_t L_493 = V_29;
		NullCheck(L_492);
		int32_t L_494 = L_493;
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_495 = (L_492)->GetAt(static_cast<il2cpp_array_size_t>(L_494));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_496 = ___0_source;
		NullCheck(L_496);
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_497 = L_496->___enumVariables_18;
		int32_t L_498 = V_28;
		NullCheck(L_497);
		int32_t L_499 = L_498;
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_500 = (L_497)->GetAt(static_cast<il2cpp_array_size_t>(L_499));
		NullCheck(L_500);
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_501;
		L_501 = FsmEnum_get_Value_m4C7241940B767D14DC79184A4A614179BFF3759E(L_500, NULL);
		NullCheck(L_495);
		FsmEnum_set_Value_mFE5419E5BB8B68321A7C40861F923781D9DE4996(L_495, L_501, NULL);
	}

IL_0710:
	{
		int32_t L_502 = V_29;
		V_29 = ((int32_t)il2cpp_codegen_add(L_502, 1));
	}

IL_0716:
	{
		int32_t L_503 = V_29;
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_504;
		L_504 = FsmVariables_get_EnumVariables_m364A01B95D92703E3FCD6516D1AC7DEB4C6F9E54(__this, NULL);
		NullCheck(L_504);
		if ((((int32_t)L_503) < ((int32_t)((int32_t)(((RuntimeArray*)L_504)->max_length)))))
		{
			goto IL_06c1;
		}
	}
	{
		int32_t L_505 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_505, 1));
	}

IL_0728:
	{
		int32_t L_506 = V_28;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_507 = ___0_source;
		NullCheck(L_507);
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_508;
		L_508 = FsmVariables_get_EnumVariables_m364A01B95D92703E3FCD6516D1AC7DEB4C6F9E54(L_507, NULL);
		NullCheck(L_508);
		if ((((int32_t)L_506) < ((int32_t)((int32_t)(((RuntimeArray*)L_508)->max_length)))))
		{
			goto IL_06bc;
		}
	}
	{
		return;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::ApplyVariableValues(HutongGames.PlayMaker.FsmVariables)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_ApplyVariableValues_mDD60C62A68830CE5A901E647C9DD1FDE4327683E (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* ___0_source, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		V_0 = 0;
		goto IL_0026;
	}

IL_0008:
	{
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_1 = __this->___floatVariables_4;
		int32_t L_2 = V_0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_5 = ___0_source;
		NullCheck(L_5);
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_6 = L_5->___floatVariables_4;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		float L_10;
		L_10 = FsmFloat_get_Value_m265F39829C4C42B0A79775F1A2C20F1A62BA3ACD(L_9, NULL);
		NullCheck(L_4);
		FsmFloat_set_Value_mF252A515BE1BF1C4A94E74F807987A6695F7D7C7_inline(L_4, L_10, NULL);
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0026:
	{
		int32_t L_12 = V_0;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_13 = ___0_source;
		NullCheck(L_13);
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_14;
		L_14 = FsmVariables_get_FloatVariables_m9A554326DE2BAF295D19FA0FA87240D871D2DC3D(L_13, NULL);
		NullCheck(L_14);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0008;
		}
	}
	{
		V_1 = 0;
		goto IL_0053;
	}

IL_0035:
	{
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_15 = __this->___intVariables_5;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_19 = ___0_source;
		NullCheck(L_19);
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_20 = L_19->___intVariables_5;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		int32_t L_24;
		L_24 = FsmInt_get_Value_mB223B0A0C2082A67F53E7FCD990F3D5AA879610D(L_23, NULL);
		NullCheck(L_18);
		FsmInt_set_Value_mB7EB98D36202229B329F024942F80A7EF793659E_inline(L_18, L_24, NULL);
		int32_t L_25 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_0053:
	{
		int32_t L_26 = V_1;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_27 = ___0_source;
		NullCheck(L_27);
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_28;
		L_28 = FsmVariables_get_IntVariables_m4F3D72E17E63EBBCBC603DF133129010C62E6042(L_27, NULL);
		NullCheck(L_28);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)(((RuntimeArray*)L_28)->max_length)))))
		{
			goto IL_0035;
		}
	}
	{
		V_2 = 0;
		goto IL_0080;
	}

IL_0062:
	{
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_29 = __this->___boolVariables_6;
		int32_t L_30 = V_2;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_33 = ___0_source;
		NullCheck(L_33);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_34 = L_33->___boolVariables_6;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		int32_t L_36 = L_35;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_37 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		bool L_38;
		L_38 = FsmBool_get_Value_m2A36605407DC0F27ED37A095942A05DB93AC9BFC(L_37, NULL);
		NullCheck(L_32);
		FsmBool_set_Value_m8050208AF94EB950D663485E5D134DA34F3C95F4_inline(L_32, L_38, NULL);
		int32_t L_39 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_39, 1));
	}

IL_0080:
	{
		int32_t L_40 = V_2;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_41 = ___0_source;
		NullCheck(L_41);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_42;
		L_42 = FsmVariables_get_BoolVariables_mDBF6EFCBF4C3B454D690E831F6F2F5CA35C5DC47(L_41, NULL);
		NullCheck(L_42);
		if ((((int32_t)L_40) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_0062;
		}
	}
	{
		V_3 = 0;
		goto IL_00ad;
	}

IL_008f:
	{
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_43 = __this->___gameObjectVariables_13;
		int32_t L_44 = V_3;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_47 = ___0_source;
		NullCheck(L_47);
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_48 = L_47->___gameObjectVariables_13;
		int32_t L_49 = V_3;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_51);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52;
		L_52 = FsmGameObject_get_Value_m029F838272E39B99D02D7529562B5338FD2E2584(L_51, NULL);
		NullCheck(L_46);
		FsmGameObject_set_Value_mE5FDC9A93EA0E7B64C2C78A558C0679DD8D6BE44(L_46, L_52, NULL);
		int32_t L_53 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_53, 1));
	}

IL_00ad:
	{
		int32_t L_54 = V_3;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_55 = ___0_source;
		NullCheck(L_55);
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_56;
		L_56 = FsmVariables_get_GameObjectVariables_m12954A97685FECDF37ED76A95821A1C50160651B(L_55, NULL);
		NullCheck(L_56);
		if ((((int32_t)L_54) < ((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))
		{
			goto IL_008f;
		}
	}
	{
		V_4 = 0;
		goto IL_00df;
	}

IL_00bd:
	{
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_57 = __this->___colorVariables_10;
		int32_t L_58 = V_4;
		NullCheck(L_57);
		int32_t L_59 = L_58;
		FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* L_60 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_59));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_61 = ___0_source;
		NullCheck(L_61);
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_62 = L_61->___colorVariables_10;
		int32_t L_63 = V_4;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		NullCheck(L_65);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_66;
		L_66 = FsmColor_get_Value_mD11C7F67290AA84061E4D8EE055FE09CAC7115E2_inline(L_65, NULL);
		NullCheck(L_60);
		FsmColor_set_Value_mB888645B6E49718FE4ECF613BF10083C5BF431DF_inline(L_60, L_66, NULL);
		int32_t L_67 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_67, 1));
	}

IL_00df:
	{
		int32_t L_68 = V_4;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_69 = ___0_source;
		NullCheck(L_69);
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_70;
		L_70 = FsmVariables_get_ColorVariables_m0FC4DA49A05A0C1ABE826B730AC958261DE55D8D(L_69, NULL);
		NullCheck(L_70);
		if ((((int32_t)L_68) < ((int32_t)((int32_t)(((RuntimeArray*)L_70)->max_length)))))
		{
			goto IL_00bd;
		}
	}
	{
		V_5 = 0;
		goto IL_0112;
	}

IL_00f0:
	{
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_71 = __this->___vector2Variables_8;
		int32_t L_72 = V_5;
		NullCheck(L_71);
		int32_t L_73 = L_72;
		FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_75 = ___0_source;
		NullCheck(L_75);
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_76 = L_75->___vector2Variables_8;
		int32_t L_77 = V_5;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_79);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80;
		L_80 = FsmVector2_get_Value_mB7BE45F818D5B78246F185D66B592987DD3CCF55_inline(L_79, NULL);
		NullCheck(L_74);
		FsmVector2_set_Value_m0EB667A0CF1C74FEC94FA97CC2215D74BD3ED904_inline(L_74, L_80, NULL);
		int32_t L_81 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_81, 1));
	}

IL_0112:
	{
		int32_t L_82 = V_5;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_83 = ___0_source;
		NullCheck(L_83);
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_84;
		L_84 = FsmVariables_get_Vector2Variables_m85DE6DDC7EF8890624AFC5167AA5C9A98EBB540A(L_83, NULL);
		NullCheck(L_84);
		if ((((int32_t)L_82) < ((int32_t)((int32_t)(((RuntimeArray*)L_84)->max_length)))))
		{
			goto IL_00f0;
		}
	}
	{
		V_6 = 0;
		goto IL_0145;
	}

IL_0123:
	{
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_85 = __this->___vector3Variables_9;
		int32_t L_86 = V_6;
		NullCheck(L_85);
		int32_t L_87 = L_86;
		FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* L_88 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_89 = ___0_source;
		NullCheck(L_89);
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_90 = L_89->___vector3Variables_9;
		int32_t L_91 = V_6;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		NullCheck(L_93);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = FsmVector3_get_Value_m6196631A608232530F1CD4B7572E99D69AC1C4E1(L_93, NULL);
		NullCheck(L_88);
		FsmVector3_set_Value_m51DCF660E54F20CF74084C95C41C5D0D9CFDA7CC_inline(L_88, L_94, NULL);
		int32_t L_95 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_95, 1));
	}

IL_0145:
	{
		int32_t L_96 = V_6;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_97 = ___0_source;
		NullCheck(L_97);
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_98;
		L_98 = FsmVariables_get_Vector3Variables_m6FD7B81514AA51C95E67601F4DFB443D467F2F0D(L_97, NULL);
		NullCheck(L_98);
		if ((((int32_t)L_96) < ((int32_t)((int32_t)(((RuntimeArray*)L_98)->max_length)))))
		{
			goto IL_0123;
		}
	}
	{
		V_7 = 0;
		goto IL_0178;
	}

IL_0156:
	{
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_99 = __this->___rectVariables_11;
		int32_t L_100 = V_7;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_103 = ___0_source;
		NullCheck(L_103);
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_104 = L_103->___rectVariables_11;
		int32_t L_105 = V_7;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_107);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_108;
		L_108 = FsmRect_get_Value_mC0A513D684FA20436438E8287209D6DD702DD6B2_inline(L_107, NULL);
		NullCheck(L_102);
		FsmRect_set_Value_m04CFC74B987B305B26E1B13CAB03D616FDADD141_inline(L_102, L_108, NULL);
		int32_t L_109 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_109, 1));
	}

IL_0178:
	{
		int32_t L_110 = V_7;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_111 = ___0_source;
		NullCheck(L_111);
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_112;
		L_112 = FsmVariables_get_RectVariables_m3E08BC600245031E6DDBAE797871B11E5F593E2F(L_111, NULL);
		NullCheck(L_112);
		if ((((int32_t)L_110) < ((int32_t)((int32_t)(((RuntimeArray*)L_112)->max_length)))))
		{
			goto IL_0156;
		}
	}
	{
		V_8 = 0;
		goto IL_01ab;
	}

IL_0189:
	{
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_113 = __this->___quaternionVariables_12;
		int32_t L_114 = V_8;
		NullCheck(L_113);
		int32_t L_115 = L_114;
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_116 = (L_113)->GetAt(static_cast<il2cpp_array_size_t>(L_115));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_117 = ___0_source;
		NullCheck(L_117);
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_118 = L_117->___quaternionVariables_12;
		int32_t L_119 = V_8;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		NullCheck(L_121);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_122;
		L_122 = FsmQuaternion_get_Value_m9B99B77E8A84133DBA0114F1E705FA731DF4011E_inline(L_121, NULL);
		NullCheck(L_116);
		FsmQuaternion_set_Value_m9CC98C1DEB6EB81CAED46789D0D0891E78990FBD_inline(L_116, L_122, NULL);
		int32_t L_123 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_01ab:
	{
		int32_t L_124 = V_8;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_125 = ___0_source;
		NullCheck(L_125);
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_126;
		L_126 = FsmVariables_get_QuaternionVariables_m08898919CA4145C676808BE9D301F669B5FAFE78(L_125, NULL);
		NullCheck(L_126);
		if ((((int32_t)L_124) < ((int32_t)((int32_t)(((RuntimeArray*)L_126)->max_length)))))
		{
			goto IL_0189;
		}
	}
	{
		V_9 = 0;
		goto IL_01de;
	}

IL_01bc:
	{
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_127 = __this->___objectVariables_14;
		int32_t L_128 = V_9;
		NullCheck(L_127);
		int32_t L_129 = L_128;
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_130 = (L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_131 = ___0_source;
		NullCheck(L_131);
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_132 = L_131->___objectVariables_14;
		int32_t L_133 = V_9;
		NullCheck(L_132);
		int32_t L_134 = L_133;
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_135 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		NullCheck(L_135);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_136;
		L_136 = FsmObject_get_Value_m4BAC2DC7BD28A61FF42057608B5E6BA213974891(L_135, NULL);
		NullCheck(L_130);
		FsmObject_set_Value_m80FD7143C40FE8CB2C0642B134E12A6BE5972C73_inline(L_130, L_136, NULL);
		int32_t L_137 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_137, 1));
	}

IL_01de:
	{
		int32_t L_138 = V_9;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_139 = ___0_source;
		NullCheck(L_139);
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_140;
		L_140 = FsmVariables_get_ObjectVariables_mA98B0586520A729234994B2F0FC6DCC67F5C9051(L_139, NULL);
		NullCheck(L_140);
		if ((((int32_t)L_138) < ((int32_t)((int32_t)(((RuntimeArray*)L_140)->max_length)))))
		{
			goto IL_01bc;
		}
	}
	{
		V_10 = 0;
		goto IL_0211;
	}

IL_01ef:
	{
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_141 = __this->___materialVariables_15;
		int32_t L_142 = V_10;
		NullCheck(L_141);
		int32_t L_143 = L_142;
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_144 = (L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_145 = ___0_source;
		NullCheck(L_145);
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_146 = L_145->___materialVariables_15;
		int32_t L_147 = V_10;
		NullCheck(L_146);
		int32_t L_148 = L_147;
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_149 = (L_146)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		NullCheck(L_149);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_150;
		L_150 = FsmMaterial_get_Value_mE9BFCA868C19B112CCB1CD051BE7A8C2EF6DD375(L_149, NULL);
		NullCheck(L_144);
		FsmMaterial_set_Value_m3ED44866449C25D2F771677FD76A4C8A028C149E(L_144, L_150, NULL);
		int32_t L_151 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_151, 1));
	}

IL_0211:
	{
		int32_t L_152 = V_10;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_153 = ___0_source;
		NullCheck(L_153);
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_154;
		L_154 = FsmVariables_get_MaterialVariables_m4665A8E211BBCEAEC19F72D593AFBD462D40EBA2(L_153, NULL);
		NullCheck(L_154);
		if ((((int32_t)L_152) < ((int32_t)((int32_t)(((RuntimeArray*)L_154)->max_length)))))
		{
			goto IL_01ef;
		}
	}
	{
		V_11 = 0;
		goto IL_0244;
	}

IL_0222:
	{
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_155 = __this->___textureVariables_16;
		int32_t L_156 = V_11;
		NullCheck(L_155);
		int32_t L_157 = L_156;
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_158 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_159 = ___0_source;
		NullCheck(L_159);
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_160 = L_159->___textureVariables_16;
		int32_t L_161 = V_11;
		NullCheck(L_160);
		int32_t L_162 = L_161;
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_163 = (L_160)->GetAt(static_cast<il2cpp_array_size_t>(L_162));
		NullCheck(L_163);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_164;
		L_164 = FsmTexture_get_Value_m9E10A59BCAF70582841D5A8DCAFFCAD26569B295(L_163, NULL);
		NullCheck(L_158);
		FsmTexture_set_Value_m6CADBCAFD1C435C999656F18D4A995EFADCBD200(L_158, L_164, NULL);
		int32_t L_165 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_165, 1));
	}

IL_0244:
	{
		int32_t L_166 = V_11;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_167 = ___0_source;
		NullCheck(L_167);
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_168;
		L_168 = FsmVariables_get_TextureVariables_mD2BD3864F92E7EE5310239F5E59A5C826DF3949F(L_167, NULL);
		NullCheck(L_168);
		if ((((int32_t)L_166) < ((int32_t)((int32_t)(((RuntimeArray*)L_168)->max_length)))))
		{
			goto IL_0222;
		}
	}
	{
		V_12 = 0;
		goto IL_0277;
	}

IL_0255:
	{
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_169 = __this->___stringVariables_7;
		int32_t L_170 = V_12;
		NullCheck(L_169);
		int32_t L_171 = L_170;
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_172 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_171));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_173 = ___0_source;
		NullCheck(L_173);
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_174 = L_173->___stringVariables_7;
		int32_t L_175 = V_12;
		NullCheck(L_174);
		int32_t L_176 = L_175;
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_177 = (L_174)->GetAt(static_cast<il2cpp_array_size_t>(L_176));
		NullCheck(L_177);
		String_t* L_178;
		L_178 = FsmString_get_Value_mF43802ADDAA73622CA6CE25425C712BD9B15916D(L_177, NULL);
		NullCheck(L_172);
		FsmString_set_Value_m73BB296E0E78080EA98402FA2CCDD3779781C8B0_inline(L_172, L_178, NULL);
		int32_t L_179 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_179, 1));
	}

IL_0277:
	{
		int32_t L_180 = V_12;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_181 = ___0_source;
		NullCheck(L_181);
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_182;
		L_182 = FsmVariables_get_StringVariables_mF73342631D1B5FF92B028EDD5CE82CD82F235AB9(L_181, NULL);
		NullCheck(L_182);
		if ((((int32_t)L_180) < ((int32_t)((int32_t)(((RuntimeArray*)L_182)->max_length)))))
		{
			goto IL_0255;
		}
	}
	{
		V_13 = 0;
		goto IL_02aa;
	}

IL_0288:
	{
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_183 = __this->___enumVariables_18;
		int32_t L_184 = V_13;
		NullCheck(L_183);
		int32_t L_185 = L_184;
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_186 = (L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_187 = ___0_source;
		NullCheck(L_187);
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_188 = L_187->___enumVariables_18;
		int32_t L_189 = V_13;
		NullCheck(L_188);
		int32_t L_190 = L_189;
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_191 = (L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_190));
		NullCheck(L_191);
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_192;
		L_192 = FsmEnum_get_Value_m4C7241940B767D14DC79184A4A614179BFF3759E(L_191, NULL);
		NullCheck(L_186);
		FsmEnum_set_Value_mFE5419E5BB8B68321A7C40861F923781D9DE4996(L_186, L_192, NULL);
		int32_t L_193 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_193, 1));
	}

IL_02aa:
	{
		int32_t L_194 = V_13;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_195 = ___0_source;
		NullCheck(L_195);
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_196;
		L_196 = FsmVariables_get_EnumVariables_m364A01B95D92703E3FCD6516D1AC7DEB4C6F9E54(L_195, NULL);
		NullCheck(L_196);
		if ((((int32_t)L_194) < ((int32_t)((int32_t)(((RuntimeArray*)L_196)->max_length)))))
		{
			goto IL_0288;
		}
	}
	{
		V_14 = 0;
		goto IL_02d8;
	}

IL_02bb:
	{
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_197 = __this->___arrayVariables_17;
		int32_t L_198 = V_14;
		NullCheck(L_197);
		int32_t L_199 = L_198;
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_200 = (L_197)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_201 = ___0_source;
		NullCheck(L_201);
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_202 = L_201->___arrayVariables_17;
		int32_t L_203 = V_14;
		NullCheck(L_202);
		int32_t L_204 = L_203;
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_205 = (L_202)->GetAt(static_cast<il2cpp_array_size_t>(L_204));
		NullCheck(L_200);
		FsmArray_CopyValues_m83347A5D76DE64DE66EF756205DDECADD85D295D(L_200, L_205, NULL);
		int32_t L_206 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_206, 1));
	}

IL_02d8:
	{
		int32_t L_207 = V_14;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_208 = ___0_source;
		NullCheck(L_208);
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_209;
		L_209 = FsmVariables_get_ArrayVariables_mCFF234537EEAC04D255AE69428931227E22864D6(L_208, NULL);
		NullCheck(L_209);
		if ((((int32_t)L_207) < ((int32_t)((int32_t)(((RuntimeArray*)L_209)->max_length)))))
		{
			goto IL_02bb;
		}
	}
	{
		return;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::ApplyVariableValuesCareful(HutongGames.PlayMaker.FsmVariables)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_ApplyVariableValuesCareful_mADD9EBEDA76C2B38F1CDA7D7C606B8D893220401 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* ___0_source, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	FsmFloat_t99C088B49A35579867184120212107B5FB177420* V_1 = NULL;
	int32_t V_2 = 0;
	FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* V_3 = NULL;
	int32_t V_4 = 0;
	FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* V_5 = NULL;
	int32_t V_6 = 0;
	FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* V_7 = NULL;
	int32_t V_8 = 0;
	FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* V_9 = NULL;
	int32_t V_10 = 0;
	FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* V_11 = NULL;
	int32_t V_12 = 0;
	FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* V_13 = NULL;
	int32_t V_14 = 0;
	FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* V_15 = NULL;
	int32_t V_16 = 0;
	FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* V_17 = NULL;
	int32_t V_18 = 0;
	FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* V_19 = NULL;
	int32_t V_20 = 0;
	FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* V_21 = NULL;
	int32_t V_22 = 0;
	FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* V_23 = NULL;
	int32_t V_24 = 0;
	FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* V_25 = NULL;
	int32_t V_26 = 0;
	FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* V_27 = NULL;
	int32_t V_28 = 0;
	FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* V_29 = NULL;
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_0 = ___0_source;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		V_0 = 0;
		goto IL_0036;
	}

IL_0008:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_1 = ___0_source;
		NullCheck(L_1);
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_2 = L_1->___floatVariables_4;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		String_t* L_6;
		L_6 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_5, NULL);
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_7;
		L_7 = FsmVariables_FindFsmFloat_m3E3A17DB596D726E5B6901F46A7033C3B7C417B4(__this, L_6, NULL);
		V_1 = L_7;
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_8 = V_1;
		if (!L_8)
		{
			goto IL_0032;
		}
	}
	{
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_9 = V_1;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_10 = ___0_source;
		NullCheck(L_10);
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_11 = L_10->___floatVariables_4;
		int32_t L_12 = V_0;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		float L_15;
		L_15 = FsmFloat_get_Value_m265F39829C4C42B0A79775F1A2C20F1A62BA3ACD(L_14, NULL);
		NullCheck(L_9);
		FsmFloat_set_Value_mF252A515BE1BF1C4A94E74F807987A6695F7D7C7_inline(L_9, L_15, NULL);
	}

IL_0032:
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0036:
	{
		int32_t L_17 = V_0;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_18 = ___0_source;
		NullCheck(L_18);
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_19;
		L_19 = FsmVariables_get_FloatVariables_m9A554326DE2BAF295D19FA0FA87240D871D2DC3D(L_18, NULL);
		NullCheck(L_19);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_19)->max_length)))))
		{
			goto IL_0008;
		}
	}
	{
		V_2 = 0;
		goto IL_0073;
	}

IL_0045:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_20 = ___0_source;
		NullCheck(L_20);
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_21;
		L_21 = FsmVariables_get_IntVariables_m4F3D72E17E63EBBCBC603DF133129010C62E6042(L_20, NULL);
		int32_t L_22 = V_2;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_24);
		String_t* L_25;
		L_25 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_24, NULL);
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_26;
		L_26 = FsmVariables_FindFsmInt_mABEFD65A7515E55EEAEDA168B398F97F9F59FAFE(__this, L_25, NULL);
		V_3 = L_26;
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_27 = V_3;
		if (!L_27)
		{
			goto IL_006f;
		}
	}
	{
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_28 = V_3;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_29 = ___0_source;
		NullCheck(L_29);
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_30;
		L_30 = FsmVariables_get_IntVariables_m4F3D72E17E63EBBCBC603DF133129010C62E6042(L_29, NULL);
		int32_t L_31 = V_2;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		NullCheck(L_33);
		int32_t L_34;
		L_34 = FsmInt_get_Value_mB223B0A0C2082A67F53E7FCD990F3D5AA879610D(L_33, NULL);
		NullCheck(L_28);
		FsmInt_set_Value_mB7EB98D36202229B329F024942F80A7EF793659E_inline(L_28, L_34, NULL);
	}

IL_006f:
	{
		int32_t L_35 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_0073:
	{
		int32_t L_36 = V_2;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_37 = ___0_source;
		NullCheck(L_37);
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_38;
		L_38 = FsmVariables_get_IntVariables_m4F3D72E17E63EBBCBC603DF133129010C62E6042(L_37, NULL);
		NullCheck(L_38);
		if ((((int32_t)L_36) < ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_0045;
		}
	}
	{
		V_4 = 0;
		goto IL_00b8;
	}

IL_0083:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_39 = ___0_source;
		NullCheck(L_39);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_40;
		L_40 = FsmVariables_get_BoolVariables_mDBF6EFCBF4C3B454D690E831F6F2F5CA35C5DC47(L_39, NULL);
		int32_t L_41 = V_4;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_43 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		NullCheck(L_43);
		String_t* L_44;
		L_44 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_43, NULL);
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_45;
		L_45 = FsmVariables_FindFsmBool_m45256EFFEB6938AF8D0B3F16D2F30EF78AF0C558(__this, L_44, NULL);
		V_5 = L_45;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_46 = V_5;
		if (!L_46)
		{
			goto IL_00b2;
		}
	}
	{
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_47 = V_5;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_48 = ___0_source;
		NullCheck(L_48);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_49;
		L_49 = FsmVariables_get_BoolVariables_mDBF6EFCBF4C3B454D690E831F6F2F5CA35C5DC47(L_48, NULL);
		int32_t L_50 = V_4;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_52);
		bool L_53;
		L_53 = FsmBool_get_Value_m2A36605407DC0F27ED37A095942A05DB93AC9BFC(L_52, NULL);
		NullCheck(L_47);
		FsmBool_set_Value_m8050208AF94EB950D663485E5D134DA34F3C95F4_inline(L_47, L_53, NULL);
	}

IL_00b2:
	{
		int32_t L_54 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_00b8:
	{
		int32_t L_55 = V_4;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_56 = ___0_source;
		NullCheck(L_56);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_57;
		L_57 = FsmVariables_get_BoolVariables_mDBF6EFCBF4C3B454D690E831F6F2F5CA35C5DC47(L_56, NULL);
		NullCheck(L_57);
		if ((((int32_t)L_55) < ((int32_t)((int32_t)(((RuntimeArray*)L_57)->max_length)))))
		{
			goto IL_0083;
		}
	}
	{
		V_6 = 0;
		goto IL_00fe;
	}

IL_00c9:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_58 = ___0_source;
		NullCheck(L_58);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_59;
		L_59 = FsmVariables_get_BoolVariables_mDBF6EFCBF4C3B454D690E831F6F2F5CA35C5DC47(L_58, NULL);
		int32_t L_60 = V_6;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		String_t* L_63;
		L_63 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_62, NULL);
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_64;
		L_64 = FsmVariables_FindFsmBool_m45256EFFEB6938AF8D0B3F16D2F30EF78AF0C558(__this, L_63, NULL);
		V_7 = L_64;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_65 = V_7;
		if (!L_65)
		{
			goto IL_00f8;
		}
	}
	{
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_66 = V_7;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_67 = ___0_source;
		NullCheck(L_67);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_68;
		L_68 = FsmVariables_get_BoolVariables_mDBF6EFCBF4C3B454D690E831F6F2F5CA35C5DC47(L_67, NULL);
		int32_t L_69 = V_6;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_71 = (L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_71);
		bool L_72;
		L_72 = FsmBool_get_Value_m2A36605407DC0F27ED37A095942A05DB93AC9BFC(L_71, NULL);
		NullCheck(L_66);
		FsmBool_set_Value_m8050208AF94EB950D663485E5D134DA34F3C95F4_inline(L_66, L_72, NULL);
	}

IL_00f8:
	{
		int32_t L_73 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_00fe:
	{
		int32_t L_74 = V_6;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_75 = ___0_source;
		NullCheck(L_75);
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_76;
		L_76 = FsmVariables_get_GameObjectVariables_m12954A97685FECDF37ED76A95821A1C50160651B(L_75, NULL);
		NullCheck(L_76);
		if ((((int32_t)L_74) < ((int32_t)((int32_t)(((RuntimeArray*)L_76)->max_length)))))
		{
			goto IL_00c9;
		}
	}
	{
		V_8 = 0;
		goto IL_0144;
	}

IL_010f:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_77 = ___0_source;
		NullCheck(L_77);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_78;
		L_78 = FsmVariables_get_BoolVariables_mDBF6EFCBF4C3B454D690E831F6F2F5CA35C5DC47(L_77, NULL);
		int32_t L_79 = V_8;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_81);
		String_t* L_82;
		L_82 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_81, NULL);
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_83;
		L_83 = FsmVariables_FindFsmBool_m45256EFFEB6938AF8D0B3F16D2F30EF78AF0C558(__this, L_82, NULL);
		V_9 = L_83;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_84 = V_9;
		if (!L_84)
		{
			goto IL_013e;
		}
	}
	{
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_85 = V_9;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_86 = ___0_source;
		NullCheck(L_86);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_87;
		L_87 = FsmVariables_get_BoolVariables_mDBF6EFCBF4C3B454D690E831F6F2F5CA35C5DC47(L_86, NULL);
		int32_t L_88 = V_8;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		NullCheck(L_90);
		bool L_91;
		L_91 = FsmBool_get_Value_m2A36605407DC0F27ED37A095942A05DB93AC9BFC(L_90, NULL);
		NullCheck(L_85);
		FsmBool_set_Value_m8050208AF94EB950D663485E5D134DA34F3C95F4_inline(L_85, L_91, NULL);
	}

IL_013e:
	{
		int32_t L_92 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_92, 1));
	}

IL_0144:
	{
		int32_t L_93 = V_8;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_94 = ___0_source;
		NullCheck(L_94);
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_95;
		L_95 = FsmVariables_get_ColorVariables_m0FC4DA49A05A0C1ABE826B730AC958261DE55D8D(L_94, NULL);
		NullCheck(L_95);
		if ((((int32_t)L_93) < ((int32_t)((int32_t)(((RuntimeArray*)L_95)->max_length)))))
		{
			goto IL_010f;
		}
	}
	{
		V_10 = 0;
		goto IL_018a;
	}

IL_0155:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_96 = ___0_source;
		NullCheck(L_96);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_97;
		L_97 = FsmVariables_get_BoolVariables_mDBF6EFCBF4C3B454D690E831F6F2F5CA35C5DC47(L_96, NULL);
		int32_t L_98 = V_10;
		NullCheck(L_97);
		int32_t L_99 = L_98;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_100 = (L_97)->GetAt(static_cast<il2cpp_array_size_t>(L_99));
		NullCheck(L_100);
		String_t* L_101;
		L_101 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_100, NULL);
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_102;
		L_102 = FsmVariables_FindFsmBool_m45256EFFEB6938AF8D0B3F16D2F30EF78AF0C558(__this, L_101, NULL);
		V_11 = L_102;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_103 = V_11;
		if (!L_103)
		{
			goto IL_0184;
		}
	}
	{
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_104 = V_11;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_105 = ___0_source;
		NullCheck(L_105);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_106;
		L_106 = FsmVariables_get_BoolVariables_mDBF6EFCBF4C3B454D690E831F6F2F5CA35C5DC47(L_105, NULL);
		int32_t L_107 = V_10;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_109 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		NullCheck(L_109);
		bool L_110;
		L_110 = FsmBool_get_Value_m2A36605407DC0F27ED37A095942A05DB93AC9BFC(L_109, NULL);
		NullCheck(L_104);
		FsmBool_set_Value_m8050208AF94EB950D663485E5D134DA34F3C95F4_inline(L_104, L_110, NULL);
	}

IL_0184:
	{
		int32_t L_111 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_111, 1));
	}

IL_018a:
	{
		int32_t L_112 = V_10;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_113 = ___0_source;
		NullCheck(L_113);
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_114;
		L_114 = FsmVariables_get_Vector2Variables_m85DE6DDC7EF8890624AFC5167AA5C9A98EBB540A(L_113, NULL);
		NullCheck(L_114);
		if ((((int32_t)L_112) < ((int32_t)((int32_t)(((RuntimeArray*)L_114)->max_length)))))
		{
			goto IL_0155;
		}
	}
	{
		V_12 = 0;
		goto IL_01d0;
	}

IL_019b:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_115 = ___0_source;
		NullCheck(L_115);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_116;
		L_116 = FsmVariables_get_BoolVariables_mDBF6EFCBF4C3B454D690E831F6F2F5CA35C5DC47(L_115, NULL);
		int32_t L_117 = V_12;
		NullCheck(L_116);
		int32_t L_118 = L_117;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_119 = (L_116)->GetAt(static_cast<il2cpp_array_size_t>(L_118));
		NullCheck(L_119);
		String_t* L_120;
		L_120 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_119, NULL);
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_121;
		L_121 = FsmVariables_FindFsmBool_m45256EFFEB6938AF8D0B3F16D2F30EF78AF0C558(__this, L_120, NULL);
		V_13 = L_121;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_122 = V_13;
		if (!L_122)
		{
			goto IL_01ca;
		}
	}
	{
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_123 = V_13;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_124 = ___0_source;
		NullCheck(L_124);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_125;
		L_125 = FsmVariables_get_BoolVariables_mDBF6EFCBF4C3B454D690E831F6F2F5CA35C5DC47(L_124, NULL);
		int32_t L_126 = V_12;
		NullCheck(L_125);
		int32_t L_127 = L_126;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_128 = (L_125)->GetAt(static_cast<il2cpp_array_size_t>(L_127));
		NullCheck(L_128);
		bool L_129;
		L_129 = FsmBool_get_Value_m2A36605407DC0F27ED37A095942A05DB93AC9BFC(L_128, NULL);
		NullCheck(L_123);
		FsmBool_set_Value_m8050208AF94EB950D663485E5D134DA34F3C95F4_inline(L_123, L_129, NULL);
	}

IL_01ca:
	{
		int32_t L_130 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_130, 1));
	}

IL_01d0:
	{
		int32_t L_131 = V_12;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_132 = ___0_source;
		NullCheck(L_132);
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_133;
		L_133 = FsmVariables_get_Vector3Variables_m6FD7B81514AA51C95E67601F4DFB443D467F2F0D(L_132, NULL);
		NullCheck(L_133);
		if ((((int32_t)L_131) < ((int32_t)((int32_t)(((RuntimeArray*)L_133)->max_length)))))
		{
			goto IL_019b;
		}
	}
	{
		V_14 = 0;
		goto IL_0216;
	}

IL_01e1:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_134 = ___0_source;
		NullCheck(L_134);
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_135;
		L_135 = FsmVariables_get_RectVariables_m3E08BC600245031E6DDBAE797871B11E5F593E2F(L_134, NULL);
		int32_t L_136 = V_14;
		NullCheck(L_135);
		int32_t L_137 = L_136;
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_138 = (L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		NullCheck(L_138);
		String_t* L_139;
		L_139 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_138, NULL);
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_140;
		L_140 = FsmVariables_FindFsmRect_m2D87EF64539F0F006D1A26AD2201A463EFE68B96(__this, L_139, NULL);
		V_15 = L_140;
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_141 = V_15;
		if (!L_141)
		{
			goto IL_0210;
		}
	}
	{
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_142 = V_15;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_143 = ___0_source;
		NullCheck(L_143);
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_144;
		L_144 = FsmVariables_get_RectVariables_m3E08BC600245031E6DDBAE797871B11E5F593E2F(L_143, NULL);
		int32_t L_145 = V_14;
		NullCheck(L_144);
		int32_t L_146 = L_145;
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_147 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		NullCheck(L_147);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_148;
		L_148 = FsmRect_get_Value_mC0A513D684FA20436438E8287209D6DD702DD6B2_inline(L_147, NULL);
		NullCheck(L_142);
		FsmRect_set_Value_m04CFC74B987B305B26E1B13CAB03D616FDADD141_inline(L_142, L_148, NULL);
	}

IL_0210:
	{
		int32_t L_149 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_149, 1));
	}

IL_0216:
	{
		int32_t L_150 = V_14;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_151 = ___0_source;
		NullCheck(L_151);
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_152;
		L_152 = FsmVariables_get_RectVariables_m3E08BC600245031E6DDBAE797871B11E5F593E2F(L_151, NULL);
		NullCheck(L_152);
		if ((((int32_t)L_150) < ((int32_t)((int32_t)(((RuntimeArray*)L_152)->max_length)))))
		{
			goto IL_01e1;
		}
	}
	{
		V_16 = 0;
		goto IL_025c;
	}

IL_0227:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_153 = ___0_source;
		NullCheck(L_153);
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_154;
		L_154 = FsmVariables_get_QuaternionVariables_m08898919CA4145C676808BE9D301F669B5FAFE78(L_153, NULL);
		int32_t L_155 = V_16;
		NullCheck(L_154);
		int32_t L_156 = L_155;
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_157 = (L_154)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		NullCheck(L_157);
		String_t* L_158;
		L_158 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_157, NULL);
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_159;
		L_159 = FsmVariables_FindFsmQuaternion_m495B300BDF3CB74225C5D7700D7C028A7DB872E8(__this, L_158, NULL);
		V_17 = L_159;
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_160 = V_17;
		if (!L_160)
		{
			goto IL_0256;
		}
	}
	{
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_161 = V_17;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_162 = ___0_source;
		NullCheck(L_162);
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_163;
		L_163 = FsmVariables_get_QuaternionVariables_m08898919CA4145C676808BE9D301F669B5FAFE78(L_162, NULL);
		int32_t L_164 = V_16;
		NullCheck(L_163);
		int32_t L_165 = L_164;
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_166 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		NullCheck(L_166);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_167;
		L_167 = FsmQuaternion_get_Value_m9B99B77E8A84133DBA0114F1E705FA731DF4011E_inline(L_166, NULL);
		NullCheck(L_161);
		FsmQuaternion_set_Value_m9CC98C1DEB6EB81CAED46789D0D0891E78990FBD_inline(L_161, L_167, NULL);
	}

IL_0256:
	{
		int32_t L_168 = V_16;
		V_16 = ((int32_t)il2cpp_codegen_add(L_168, 1));
	}

IL_025c:
	{
		int32_t L_169 = V_16;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_170 = ___0_source;
		NullCheck(L_170);
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_171;
		L_171 = FsmVariables_get_QuaternionVariables_m08898919CA4145C676808BE9D301F669B5FAFE78(L_170, NULL);
		NullCheck(L_171);
		if ((((int32_t)L_169) < ((int32_t)((int32_t)(((RuntimeArray*)L_171)->max_length)))))
		{
			goto IL_0227;
		}
	}
	{
		V_18 = 0;
		goto IL_02a2;
	}

IL_026d:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_172 = ___0_source;
		NullCheck(L_172);
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_173;
		L_173 = FsmVariables_get_ObjectVariables_mA98B0586520A729234994B2F0FC6DCC67F5C9051(L_172, NULL);
		int32_t L_174 = V_18;
		NullCheck(L_173);
		int32_t L_175 = L_174;
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_176 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_175));
		NullCheck(L_176);
		String_t* L_177;
		L_177 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_176, NULL);
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_178;
		L_178 = FsmVariables_FindFsmObject_m67F2BC2FCE589D93E69F51DEAB3E535B18C006B0(__this, L_177, NULL);
		V_19 = L_178;
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_179 = V_19;
		if (!L_179)
		{
			goto IL_029c;
		}
	}
	{
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_180 = V_19;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_181 = ___0_source;
		NullCheck(L_181);
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_182;
		L_182 = FsmVariables_get_ObjectVariables_mA98B0586520A729234994B2F0FC6DCC67F5C9051(L_181, NULL);
		int32_t L_183 = V_18;
		NullCheck(L_182);
		int32_t L_184 = L_183;
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_185 = (L_182)->GetAt(static_cast<il2cpp_array_size_t>(L_184));
		NullCheck(L_185);
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_186;
		L_186 = FsmObject_get_Value_m4BAC2DC7BD28A61FF42057608B5E6BA213974891(L_185, NULL);
		NullCheck(L_180);
		FsmObject_set_Value_m80FD7143C40FE8CB2C0642B134E12A6BE5972C73_inline(L_180, L_186, NULL);
	}

IL_029c:
	{
		int32_t L_187 = V_18;
		V_18 = ((int32_t)il2cpp_codegen_add(L_187, 1));
	}

IL_02a2:
	{
		int32_t L_188 = V_18;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_189 = ___0_source;
		NullCheck(L_189);
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_190;
		L_190 = FsmVariables_get_ObjectVariables_mA98B0586520A729234994B2F0FC6DCC67F5C9051(L_189, NULL);
		NullCheck(L_190);
		if ((((int32_t)L_188) < ((int32_t)((int32_t)(((RuntimeArray*)L_190)->max_length)))))
		{
			goto IL_026d;
		}
	}
	{
		V_20 = 0;
		goto IL_02e8;
	}

IL_02b3:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_191 = ___0_source;
		NullCheck(L_191);
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_192;
		L_192 = FsmVariables_get_MaterialVariables_m4665A8E211BBCEAEC19F72D593AFBD462D40EBA2(L_191, NULL);
		int32_t L_193 = V_20;
		NullCheck(L_192);
		int32_t L_194 = L_193;
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_195 = (L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_194));
		NullCheck(L_195);
		String_t* L_196;
		L_196 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_195, NULL);
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_197;
		L_197 = FsmVariables_FindFsmMaterial_m5AD86F94E0DB8CE8D036BBCAB6067656A76DEBC4(__this, L_196, NULL);
		V_21 = L_197;
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_198 = V_21;
		if (!L_198)
		{
			goto IL_02e2;
		}
	}
	{
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_199 = V_21;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_200 = ___0_source;
		NullCheck(L_200);
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_201;
		L_201 = FsmVariables_get_MaterialVariables_m4665A8E211BBCEAEC19F72D593AFBD462D40EBA2(L_200, NULL);
		int32_t L_202 = V_20;
		NullCheck(L_201);
		int32_t L_203 = L_202;
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_204 = (L_201)->GetAt(static_cast<il2cpp_array_size_t>(L_203));
		NullCheck(L_204);
		Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* L_205;
		L_205 = FsmMaterial_get_Value_mE9BFCA868C19B112CCB1CD051BE7A8C2EF6DD375(L_204, NULL);
		NullCheck(L_199);
		FsmMaterial_set_Value_m3ED44866449C25D2F771677FD76A4C8A028C149E(L_199, L_205, NULL);
	}

IL_02e2:
	{
		int32_t L_206 = V_20;
		V_20 = ((int32_t)il2cpp_codegen_add(L_206, 1));
	}

IL_02e8:
	{
		int32_t L_207 = V_20;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_208 = ___0_source;
		NullCheck(L_208);
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_209;
		L_209 = FsmVariables_get_MaterialVariables_m4665A8E211BBCEAEC19F72D593AFBD462D40EBA2(L_208, NULL);
		NullCheck(L_209);
		if ((((int32_t)L_207) < ((int32_t)((int32_t)(((RuntimeArray*)L_209)->max_length)))))
		{
			goto IL_02b3;
		}
	}
	{
		V_22 = 0;
		goto IL_032e;
	}

IL_02f9:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_210 = ___0_source;
		NullCheck(L_210);
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_211;
		L_211 = FsmVariables_get_TextureVariables_mD2BD3864F92E7EE5310239F5E59A5C826DF3949F(L_210, NULL);
		int32_t L_212 = V_22;
		NullCheck(L_211);
		int32_t L_213 = L_212;
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_214 = (L_211)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		NullCheck(L_214);
		String_t* L_215;
		L_215 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_214, NULL);
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_216;
		L_216 = FsmVariables_FindFsmTexture_m4D3FF1252BE006F15E6B719DAC96FF55BDF56878(__this, L_215, NULL);
		V_23 = L_216;
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_217 = V_23;
		if (!L_217)
		{
			goto IL_0328;
		}
	}
	{
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_218 = V_23;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_219 = ___0_source;
		NullCheck(L_219);
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_220;
		L_220 = FsmVariables_get_TextureVariables_mD2BD3864F92E7EE5310239F5E59A5C826DF3949F(L_219, NULL);
		int32_t L_221 = V_22;
		NullCheck(L_220);
		int32_t L_222 = L_221;
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_223 = (L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		NullCheck(L_223);
		Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700* L_224;
		L_224 = FsmTexture_get_Value_m9E10A59BCAF70582841D5A8DCAFFCAD26569B295(L_223, NULL);
		NullCheck(L_218);
		FsmTexture_set_Value_m6CADBCAFD1C435C999656F18D4A995EFADCBD200(L_218, L_224, NULL);
	}

IL_0328:
	{
		int32_t L_225 = V_22;
		V_22 = ((int32_t)il2cpp_codegen_add(L_225, 1));
	}

IL_032e:
	{
		int32_t L_226 = V_22;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_227 = ___0_source;
		NullCheck(L_227);
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_228;
		L_228 = FsmVariables_get_TextureVariables_mD2BD3864F92E7EE5310239F5E59A5C826DF3949F(L_227, NULL);
		NullCheck(L_228);
		if ((((int32_t)L_226) < ((int32_t)((int32_t)(((RuntimeArray*)L_228)->max_length)))))
		{
			goto IL_02f9;
		}
	}
	{
		V_24 = 0;
		goto IL_0374;
	}

IL_033f:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_229 = ___0_source;
		NullCheck(L_229);
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_230;
		L_230 = FsmVariables_get_StringVariables_mF73342631D1B5FF92B028EDD5CE82CD82F235AB9(L_229, NULL);
		int32_t L_231 = V_24;
		NullCheck(L_230);
		int32_t L_232 = L_231;
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_233 = (L_230)->GetAt(static_cast<il2cpp_array_size_t>(L_232));
		NullCheck(L_233);
		String_t* L_234;
		L_234 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_233, NULL);
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_235;
		L_235 = FsmVariables_FindFsmString_mCFEA267A6A552D0B2923CF043BED35E3E8FE21B8(__this, L_234, NULL);
		V_25 = L_235;
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_236 = V_25;
		if (!L_236)
		{
			goto IL_036e;
		}
	}
	{
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_237 = V_25;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_238 = ___0_source;
		NullCheck(L_238);
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_239;
		L_239 = FsmVariables_get_StringVariables_mF73342631D1B5FF92B028EDD5CE82CD82F235AB9(L_238, NULL);
		int32_t L_240 = V_24;
		NullCheck(L_239);
		int32_t L_241 = L_240;
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_242 = (L_239)->GetAt(static_cast<il2cpp_array_size_t>(L_241));
		NullCheck(L_242);
		String_t* L_243;
		L_243 = FsmString_get_Value_mF43802ADDAA73622CA6CE25425C712BD9B15916D(L_242, NULL);
		NullCheck(L_237);
		FsmString_set_Value_m73BB296E0E78080EA98402FA2CCDD3779781C8B0_inline(L_237, L_243, NULL);
	}

IL_036e:
	{
		int32_t L_244 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_244, 1));
	}

IL_0374:
	{
		int32_t L_245 = V_24;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_246 = ___0_source;
		NullCheck(L_246);
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_247;
		L_247 = FsmVariables_get_StringVariables_mF73342631D1B5FF92B028EDD5CE82CD82F235AB9(L_246, NULL);
		NullCheck(L_247);
		if ((((int32_t)L_245) < ((int32_t)((int32_t)(((RuntimeArray*)L_247)->max_length)))))
		{
			goto IL_033f;
		}
	}
	{
		V_26 = 0;
		goto IL_03ba;
	}

IL_0385:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_248 = ___0_source;
		NullCheck(L_248);
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_249;
		L_249 = FsmVariables_get_EnumVariables_m364A01B95D92703E3FCD6516D1AC7DEB4C6F9E54(L_248, NULL);
		int32_t L_250 = V_26;
		NullCheck(L_249);
		int32_t L_251 = L_250;
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_252 = (L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_251));
		NullCheck(L_252);
		String_t* L_253;
		L_253 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_252, NULL);
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_254;
		L_254 = FsmVariables_FindFsmEnum_m9DB15E92C420BA8BC401A01D82694D645DE7D52F(__this, L_253, NULL);
		V_27 = L_254;
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_255 = V_27;
		if (!L_255)
		{
			goto IL_03b4;
		}
	}
	{
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_256 = V_27;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_257 = ___0_source;
		NullCheck(L_257);
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_258;
		L_258 = FsmVariables_get_EnumVariables_m364A01B95D92703E3FCD6516D1AC7DEB4C6F9E54(L_257, NULL);
		int32_t L_259 = V_26;
		NullCheck(L_258);
		int32_t L_260 = L_259;
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_261 = (L_258)->GetAt(static_cast<il2cpp_array_size_t>(L_260));
		NullCheck(L_261);
		Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2* L_262;
		L_262 = FsmEnum_get_Value_m4C7241940B767D14DC79184A4A614179BFF3759E(L_261, NULL);
		NullCheck(L_256);
		FsmEnum_set_Value_mFE5419E5BB8B68321A7C40861F923781D9DE4996(L_256, L_262, NULL);
	}

IL_03b4:
	{
		int32_t L_263 = V_26;
		V_26 = ((int32_t)il2cpp_codegen_add(L_263, 1));
	}

IL_03ba:
	{
		int32_t L_264 = V_26;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_265 = ___0_source;
		NullCheck(L_265);
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_266;
		L_266 = FsmVariables_get_EnumVariables_m364A01B95D92703E3FCD6516D1AC7DEB4C6F9E54(L_265, NULL);
		NullCheck(L_266);
		if ((((int32_t)L_264) < ((int32_t)((int32_t)(((RuntimeArray*)L_266)->max_length)))))
		{
			goto IL_0385;
		}
	}
	{
		V_28 = 0;
		goto IL_03fb;
	}

IL_03cb:
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_267 = ___0_source;
		NullCheck(L_267);
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_268;
		L_268 = FsmVariables_get_ArrayVariables_mCFF234537EEAC04D255AE69428931227E22864D6(L_267, NULL);
		int32_t L_269 = V_28;
		NullCheck(L_268);
		int32_t L_270 = L_269;
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_271 = (L_268)->GetAt(static_cast<il2cpp_array_size_t>(L_270));
		NullCheck(L_271);
		String_t* L_272;
		L_272 = NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline(L_271, NULL);
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_273;
		L_273 = FsmVariables_FindFsmArray_m2F2D8DFA48495CF75758E0C6B1F9D31544FD617D(__this, L_272, NULL);
		V_29 = L_273;
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_274 = V_29;
		if (!L_274)
		{
			goto IL_03f5;
		}
	}
	{
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_275 = V_29;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_276 = ___0_source;
		NullCheck(L_276);
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_277 = L_276->___arrayVariables_17;
		int32_t L_278 = V_28;
		NullCheck(L_277);
		int32_t L_279 = L_278;
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_280 = (L_277)->GetAt(static_cast<il2cpp_array_size_t>(L_279));
		NullCheck(L_275);
		FsmArray_CopyValues_m83347A5D76DE64DE66EF756205DDECADD85D295D(L_275, L_280, NULL);
	}

IL_03f5:
	{
		int32_t L_281 = V_28;
		V_28 = ((int32_t)il2cpp_codegen_add(L_281, 1));
	}

IL_03fb:
	{
		int32_t L_282 = V_28;
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_283 = ___0_source;
		NullCheck(L_283);
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_284;
		L_284 = FsmVariables_get_ArrayVariables_mCFF234537EEAC04D255AE69428931227E22864D6(L_283, NULL);
		NullCheck(L_284);
		if ((((int32_t)L_282) < ((int32_t)((int32_t)(((RuntimeArray*)L_284)->max_length)))))
		{
			goto IL_03cb;
		}
	}
	{
		return;
	}
}
// HutongGames.PlayMaker.FsmFloat[] HutongGames.PlayMaker.FsmVariables::get_FloatVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* FsmVariables_get_FloatVariables_m9A554326DE2BAF295D19FA0FA87240D871D2DC3D (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_1_t9B6A160B6308F886B1EC3103AD19E56D10333EA3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* G_B2_0 = NULL;
	FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* G_B1_0 = NULL;
	{
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_0 = __this->___floatVariables_4;
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Arrays_1_t9B6A160B6308F886B1EC3103AD19E56D10333EA3_il2cpp_TypeInfo_var);
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_2 = ((Arrays_1_t9B6A160B6308F886B1EC3103AD19E56D10333EA3_StaticFields*)il2cpp_codegen_static_fields_for(Arrays_1_t9B6A160B6308F886B1EC3103AD19E56D10333EA3_il2cpp_TypeInfo_var))->___Empty_0;
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::set_FloatVariables(HutongGames.PlayMaker.FsmFloat[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_set_FloatVariables_m635937529E76C77431DEC9A787D67B560E746CD4 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* ___0_value, const RuntimeMethod* method) 
{
	{
		FsmFloatU5BU5D_t849F26855C91B992C4C7BB0F66746FBE2AAB8B5D* L_0 = ___0_value;
		__this->___floatVariables_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___floatVariables_4), (void*)L_0);
		return;
	}
}
// HutongGames.PlayMaker.FsmInt[] HutongGames.PlayMaker.FsmVariables::get_IntVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* FsmVariables_get_IntVariables_m4F3D72E17E63EBBCBC603DF133129010C62E6042 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_1_tF2CF7A35C1A9F756F85D0ABE2F07B9374A14E733_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* G_B2_0 = NULL;
	FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* G_B1_0 = NULL;
	{
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_0 = __this->___intVariables_5;
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Arrays_1_tF2CF7A35C1A9F756F85D0ABE2F07B9374A14E733_il2cpp_TypeInfo_var);
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_2 = ((Arrays_1_tF2CF7A35C1A9F756F85D0ABE2F07B9374A14E733_StaticFields*)il2cpp_codegen_static_fields_for(Arrays_1_tF2CF7A35C1A9F756F85D0ABE2F07B9374A14E733_il2cpp_TypeInfo_var))->___Empty_0;
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::set_IntVariables(HutongGames.PlayMaker.FsmInt[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_set_IntVariables_mB0D30971C6468A00540C154EB4D5C3145784A649 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* ___0_value, const RuntimeMethod* method) 
{
	{
		FsmIntU5BU5D_t0422A5EC2815D9B91AD3BB6101CE5E2E80A56A0A* L_0 = ___0_value;
		__this->___intVariables_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___intVariables_5), (void*)L_0);
		return;
	}
}
// HutongGames.PlayMaker.FsmBool[] HutongGames.PlayMaker.FsmVariables::get_BoolVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* FsmVariables_get_BoolVariables_mDBF6EFCBF4C3B454D690E831F6F2F5CA35C5DC47 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_1_tEE1A6D08D39A8B6A734CA43135677C42B63BCFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* G_B2_0 = NULL;
	FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* G_B1_0 = NULL;
	{
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_0 = __this->___boolVariables_6;
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Arrays_1_tEE1A6D08D39A8B6A734CA43135677C42B63BCFED_il2cpp_TypeInfo_var);
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_2 = ((Arrays_1_tEE1A6D08D39A8B6A734CA43135677C42B63BCFED_StaticFields*)il2cpp_codegen_static_fields_for(Arrays_1_tEE1A6D08D39A8B6A734CA43135677C42B63BCFED_il2cpp_TypeInfo_var))->___Empty_0;
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::set_BoolVariables(HutongGames.PlayMaker.FsmBool[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_set_BoolVariables_m357064B10422D8AEFF564ED130A2AB172240649E (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* ___0_value, const RuntimeMethod* method) 
{
	{
		FsmBoolU5BU5D_t27F8D9ED0967F9DCF4B0298A59D557201AD9CA26* L_0 = ___0_value;
		__this->___boolVariables_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___boolVariables_6), (void*)L_0);
		return;
	}
}
// HutongGames.PlayMaker.FsmString[] HutongGames.PlayMaker.FsmVariables::get_StringVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* FsmVariables_get_StringVariables_mF73342631D1B5FF92B028EDD5CE82CD82F235AB9 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_1_tB123AF4BF4E8C211CA4956AD9CCEBD99192C57CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* G_B2_0 = NULL;
	FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* G_B1_0 = NULL;
	{
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_0 = __this->___stringVariables_7;
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Arrays_1_tB123AF4BF4E8C211CA4956AD9CCEBD99192C57CB_il2cpp_TypeInfo_var);
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_2 = ((Arrays_1_tB123AF4BF4E8C211CA4956AD9CCEBD99192C57CB_StaticFields*)il2cpp_codegen_static_fields_for(Arrays_1_tB123AF4BF4E8C211CA4956AD9CCEBD99192C57CB_il2cpp_TypeInfo_var))->___Empty_0;
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::set_StringVariables(HutongGames.PlayMaker.FsmString[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_set_StringVariables_mBA30E17F749D0624C79973F15D43943241B5CD7F (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* ___0_value, const RuntimeMethod* method) 
{
	{
		FsmStringU5BU5D_tDABBBABC8D58DBDD2E802EFCCC177F89DD1CC05A* L_0 = ___0_value;
		__this->___stringVariables_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stringVariables_7), (void*)L_0);
		return;
	}
}
// HutongGames.PlayMaker.FsmVector2[] HutongGames.PlayMaker.FsmVariables::get_Vector2Variables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* FsmVariables_get_Vector2Variables_m85DE6DDC7EF8890624AFC5167AA5C9A98EBB540A (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_1_tFF363C7069008868CB1321E2C44BE6A903668B38_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* G_B2_0 = NULL;
	FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* G_B1_0 = NULL;
	{
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_0 = __this->___vector2Variables_8;
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Arrays_1_tFF363C7069008868CB1321E2C44BE6A903668B38_il2cpp_TypeInfo_var);
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_2 = ((Arrays_1_tFF363C7069008868CB1321E2C44BE6A903668B38_StaticFields*)il2cpp_codegen_static_fields_for(Arrays_1_tFF363C7069008868CB1321E2C44BE6A903668B38_il2cpp_TypeInfo_var))->___Empty_0;
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::set_Vector2Variables(HutongGames.PlayMaker.FsmVector2[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_set_Vector2Variables_mBF7AAE52AE6F669BD46D7377D5C03FC1991959FC (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* ___0_value, const RuntimeMethod* method) 
{
	{
		FsmVector2U5BU5D_t153D454A82AA3509F7B9C5A13388D7982E2E257F* L_0 = ___0_value;
		__this->___vector2Variables_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vector2Variables_8), (void*)L_0);
		return;
	}
}
// HutongGames.PlayMaker.FsmVector3[] HutongGames.PlayMaker.FsmVariables::get_Vector3Variables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* FsmVariables_get_Vector3Variables_m6FD7B81514AA51C95E67601F4DFB443D467F2F0D (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_1_t6154EE22C9F0744AB088A2CA6B72446C93C9730C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* G_B2_0 = NULL;
	FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* G_B1_0 = NULL;
	{
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_0 = __this->___vector3Variables_9;
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Arrays_1_t6154EE22C9F0744AB088A2CA6B72446C93C9730C_il2cpp_TypeInfo_var);
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_2 = ((Arrays_1_t6154EE22C9F0744AB088A2CA6B72446C93C9730C_StaticFields*)il2cpp_codegen_static_fields_for(Arrays_1_t6154EE22C9F0744AB088A2CA6B72446C93C9730C_il2cpp_TypeInfo_var))->___Empty_0;
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::set_Vector3Variables(HutongGames.PlayMaker.FsmVector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_set_Vector3Variables_m6A18A528569FC6EC8320F5F9539E09A32B8AED3E (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* ___0_value, const RuntimeMethod* method) 
{
	{
		FsmVector3U5BU5D_tB7D13B1A9D1C188D0CD75032337A7000AC4D7B47* L_0 = ___0_value;
		__this->___vector3Variables_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vector3Variables_9), (void*)L_0);
		return;
	}
}
// HutongGames.PlayMaker.FsmRect[] HutongGames.PlayMaker.FsmVariables::get_RectVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* FsmVariables_get_RectVariables_m3E08BC600245031E6DDBAE797871B11E5F593E2F (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_1_tB7D2648C1A8DC3399F678D91DFDBD8DAAA678AE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* G_B2_0 = NULL;
	FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* G_B1_0 = NULL;
	{
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_0 = __this->___rectVariables_11;
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Arrays_1_tB7D2648C1A8DC3399F678D91DFDBD8DAAA678AE8_il2cpp_TypeInfo_var);
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_2 = ((Arrays_1_tB7D2648C1A8DC3399F678D91DFDBD8DAAA678AE8_StaticFields*)il2cpp_codegen_static_fields_for(Arrays_1_tB7D2648C1A8DC3399F678D91DFDBD8DAAA678AE8_il2cpp_TypeInfo_var))->___Empty_0;
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::set_RectVariables(HutongGames.PlayMaker.FsmRect[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_set_RectVariables_mB6987721CDEB1777B6251C9AB892772720C23514 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* ___0_value, const RuntimeMethod* method) 
{
	{
		FsmRectU5BU5D_t1B8A46A1030E344202B211F445A5127FEAFBF636* L_0 = ___0_value;
		__this->___rectVariables_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___rectVariables_11), (void*)L_0);
		return;
	}
}
// HutongGames.PlayMaker.FsmQuaternion[] HutongGames.PlayMaker.FsmVariables::get_QuaternionVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* FsmVariables_get_QuaternionVariables_m08898919CA4145C676808BE9D301F669B5FAFE78 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_1_tAD44B9BD27FBE4A1D73AA2424426096DF485541D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* G_B2_0 = NULL;
	FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* G_B1_0 = NULL;
	{
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_0 = __this->___quaternionVariables_12;
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Arrays_1_tAD44B9BD27FBE4A1D73AA2424426096DF485541D_il2cpp_TypeInfo_var);
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_2 = ((Arrays_1_tAD44B9BD27FBE4A1D73AA2424426096DF485541D_StaticFields*)il2cpp_codegen_static_fields_for(Arrays_1_tAD44B9BD27FBE4A1D73AA2424426096DF485541D_il2cpp_TypeInfo_var))->___Empty_0;
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::set_QuaternionVariables(HutongGames.PlayMaker.FsmQuaternion[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_set_QuaternionVariables_m02F264DAF67A3A0C83935488C05A1A720243CDE5 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* ___0_value, const RuntimeMethod* method) 
{
	{
		FsmQuaternionU5BU5D_t05683098778C567D78E97B6E630E10C232C9F95F* L_0 = ___0_value;
		__this->___quaternionVariables_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___quaternionVariables_12), (void*)L_0);
		return;
	}
}
// HutongGames.PlayMaker.FsmColor[] HutongGames.PlayMaker.FsmVariables::get_ColorVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* FsmVariables_get_ColorVariables_m0FC4DA49A05A0C1ABE826B730AC958261DE55D8D (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_1_tCECF75C828E86621EB0B4824FA8429CEA6CE49DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* G_B2_0 = NULL;
	FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* G_B1_0 = NULL;
	{
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_0 = __this->___colorVariables_10;
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Arrays_1_tCECF75C828E86621EB0B4824FA8429CEA6CE49DE_il2cpp_TypeInfo_var);
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_2 = ((Arrays_1_tCECF75C828E86621EB0B4824FA8429CEA6CE49DE_StaticFields*)il2cpp_codegen_static_fields_for(Arrays_1_tCECF75C828E86621EB0B4824FA8429CEA6CE49DE_il2cpp_TypeInfo_var))->___Empty_0;
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::set_ColorVariables(HutongGames.PlayMaker.FsmColor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_set_ColorVariables_mC566F28B3F3397AD646DF96271FBBC625D06F69A (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* ___0_value, const RuntimeMethod* method) 
{
	{
		FsmColorU5BU5D_t79DCC3C1A2793A40F0C00D3873EDAD127C7C82AD* L_0 = ___0_value;
		__this->___colorVariables_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___colorVariables_10), (void*)L_0);
		return;
	}
}
// HutongGames.PlayMaker.FsmGameObject[] HutongGames.PlayMaker.FsmVariables::get_GameObjectVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* FsmVariables_get_GameObjectVariables_m12954A97685FECDF37ED76A95821A1C50160651B (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_1_t56C7614D0E07CDE8BA0836E746CD60E403F6D898_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* G_B2_0 = NULL;
	FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* G_B1_0 = NULL;
	{
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_0 = __this->___gameObjectVariables_13;
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Arrays_1_t56C7614D0E07CDE8BA0836E746CD60E403F6D898_il2cpp_TypeInfo_var);
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_2 = ((Arrays_1_t56C7614D0E07CDE8BA0836E746CD60E403F6D898_StaticFields*)il2cpp_codegen_static_fields_for(Arrays_1_t56C7614D0E07CDE8BA0836E746CD60E403F6D898_il2cpp_TypeInfo_var))->___Empty_0;
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::set_GameObjectVariables(HutongGames.PlayMaker.FsmGameObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_set_GameObjectVariables_m5339DCFD1B44CBF8702B827F07FD93394DC09602 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* ___0_value, const RuntimeMethod* method) 
{
	{
		FsmGameObjectU5BU5D_t6490DEEE344335DDDC713443253E636EDC9D0999* L_0 = ___0_value;
		__this->___gameObjectVariables_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameObjectVariables_13), (void*)L_0);
		return;
	}
}
// HutongGames.PlayMaker.FsmArray[] HutongGames.PlayMaker.FsmVariables::get_ArrayVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* FsmVariables_get_ArrayVariables_mCFF234537EEAC04D255AE69428931227E22864D6 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_1_t725C931CB337C9080A3631518A1E9BD4902A5D01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* G_B2_0 = NULL;
	FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* G_B1_0 = NULL;
	{
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_0 = __this->___arrayVariables_17;
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Arrays_1_t725C931CB337C9080A3631518A1E9BD4902A5D01_il2cpp_TypeInfo_var);
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_2 = ((Arrays_1_t725C931CB337C9080A3631518A1E9BD4902A5D01_StaticFields*)il2cpp_codegen_static_fields_for(Arrays_1_t725C931CB337C9080A3631518A1E9BD4902A5D01_il2cpp_TypeInfo_var))->___Empty_0;
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::set_ArrayVariables(HutongGames.PlayMaker.FsmArray[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_set_ArrayVariables_mFD0F48889060DB764A73691180173DFDD40F2077 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* ___0_value, const RuntimeMethod* method) 
{
	{
		FsmArrayU5BU5D_t73F2D4BD2FF53986B2955139E8BB3BB3A7D1BD1F* L_0 = ___0_value;
		__this->___arrayVariables_17 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrayVariables_17), (void*)L_0);
		return;
	}
}
// HutongGames.PlayMaker.FsmEnum[] HutongGames.PlayMaker.FsmVariables::get_EnumVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* FsmVariables_get_EnumVariables_m364A01B95D92703E3FCD6516D1AC7DEB4C6F9E54 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_1_t06235C8C320CE45724915E9B9054B2DFDDEC88BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* G_B2_0 = NULL;
	FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* G_B1_0 = NULL;
	{
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_0 = __this->___enumVariables_18;
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Arrays_1_t06235C8C320CE45724915E9B9054B2DFDDEC88BB_il2cpp_TypeInfo_var);
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_2 = ((Arrays_1_t06235C8C320CE45724915E9B9054B2DFDDEC88BB_StaticFields*)il2cpp_codegen_static_fields_for(Arrays_1_t06235C8C320CE45724915E9B9054B2DFDDEC88BB_il2cpp_TypeInfo_var))->___Empty_0;
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::set_EnumVariables(HutongGames.PlayMaker.FsmEnum[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_set_EnumVariables_mC3BEB922F69BB9EA0F7E7A15D0EDC45B920EEE73 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* ___0_value, const RuntimeMethod* method) 
{
	{
		FsmEnumU5BU5D_tC4AEF3DF954C97B3C597AAF8A3127F964DB3D0B6* L_0 = ___0_value;
		__this->___enumVariables_18 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumVariables_18), (void*)L_0);
		return;
	}
}
// HutongGames.PlayMaker.FsmObject[] HutongGames.PlayMaker.FsmVariables::get_ObjectVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* FsmVariables_get_ObjectVariables_mA98B0586520A729234994B2F0FC6DCC67F5C9051 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_1_t5BFCE75DD262DB03BF593D106501A42F3362FE24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* G_B2_0 = NULL;
	FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* G_B1_0 = NULL;
	{
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_0 = __this->___objectVariables_14;
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Arrays_1_t5BFCE75DD262DB03BF593D106501A42F3362FE24_il2cpp_TypeInfo_var);
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_2 = ((Arrays_1_t5BFCE75DD262DB03BF593D106501A42F3362FE24_StaticFields*)il2cpp_codegen_static_fields_for(Arrays_1_t5BFCE75DD262DB03BF593D106501A42F3362FE24_il2cpp_TypeInfo_var))->___Empty_0;
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::set_ObjectVariables(HutongGames.PlayMaker.FsmObject[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_set_ObjectVariables_mFD6EC9CAC647BD031A04337E808F822B3DF77762 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* ___0_value, const RuntimeMethod* method) 
{
	{
		FsmObjectU5BU5D_t3095B5337030C2530FF394A06975AAA7D4B3669F* L_0 = ___0_value;
		__this->___objectVariables_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___objectVariables_14), (void*)L_0);
		return;
	}
}
// HutongGames.PlayMaker.FsmMaterial[] HutongGames.PlayMaker.FsmVariables::get_MaterialVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* FsmVariables_get_MaterialVariables_m4665A8E211BBCEAEC19F72D593AFBD462D40EBA2 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_1_t7C331138E3CCE9AD644C6BE62D7CE8DAA877A1D0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* G_B2_0 = NULL;
	FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* G_B1_0 = NULL;
	{
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_0 = __this->___materialVariables_15;
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Arrays_1_t7C331138E3CCE9AD644C6BE62D7CE8DAA877A1D0_il2cpp_TypeInfo_var);
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_2 = ((Arrays_1_t7C331138E3CCE9AD644C6BE62D7CE8DAA877A1D0_StaticFields*)il2cpp_codegen_static_fields_for(Arrays_1_t7C331138E3CCE9AD644C6BE62D7CE8DAA877A1D0_il2cpp_TypeInfo_var))->___Empty_0;
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::set_MaterialVariables(HutongGames.PlayMaker.FsmMaterial[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_set_MaterialVariables_mD008B52B23A398F7A22ACEF6E2F7F15072C0057A (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* ___0_value, const RuntimeMethod* method) 
{
	{
		FsmMaterialU5BU5D_t851C120E950BF44EEFF3EB8F36F8F56240368422* L_0 = ___0_value;
		__this->___materialVariables_15 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___materialVariables_15), (void*)L_0);
		return;
	}
}
// HutongGames.PlayMaker.FsmTexture[] HutongGames.PlayMaker.FsmVariables::get_TextureVariables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* FsmVariables_get_TextureVariables_mD2BD3864F92E7EE5310239F5E59A5C826DF3949F (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Arrays_1_tC9626D4A94CEA028A25D3A7AB673DF974D36ADB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* G_B2_0 = NULL;
	FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* G_B1_0 = NULL;
	{
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_0 = __this->___textureVariables_16;
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Arrays_1_tC9626D4A94CEA028A25D3A7AB673DF974D36ADB6_il2cpp_TypeInfo_var);
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_2 = ((Arrays_1_tC9626D4A94CEA028A25D3A7AB673DF974D36ADB6_StaticFields*)il2cpp_codegen_static_fields_for(Arrays_1_tC9626D4A94CEA028A25D3A7AB673DF974D36ADB6_il2cpp_TypeInfo_var))->___Empty_0;
		G_B2_0 = L_2;
	}

IL_000f:
	{
		return G_B2_0;
	}
}
// System.Void HutongGames.PlayMaker.FsmVariables::set_TextureVariables(HutongGames.PlayMaker.FsmTexture[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmVariables_set_TextureVariables_m0813683AFC7C3C2C192D7BD1CF16D2AF719DA869 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* ___0_value, const RuntimeMethod* method) 
{
	{
		FsmTextureU5BU5D_t2FE1FECAD9309884DBAB44BA7022246C9E14EC61* L_0 = ___0_value;
		__this->___textureVariables_16 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___textureVariables_16), (void*)L_0);
		return;
	}
}
// HutongGames.PlayMaker.NamedVariable HutongGames.PlayMaker.FsmVariables::GetVariable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE4A90E4608E8ACEF12F9723153046F50E88608AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* V_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6*)NULL;
	}

IL_000a:
	{
		Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* L_2;
		L_2 = FsmVariables_get_variableLookup_mA279487E9D8EB7DF14B70A00A04FC2F82C691D32(__this, NULL);
		String_t* L_3 = ___0_name;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mE4A90E4608E8ACEF12F9723153046F50E88608AA(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_mE4A90E4608E8ACEF12F9723153046F50E88608AA_RuntimeMethod_var);
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_5 = V_0;
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_6;
		L_6 = FsmVariables_get_GlobalVariables_m229AA5DAFB0CFC9B9C6D8DA280DA3479F32568D0(NULL);
		String_t* L_7 = ___0_name;
		NullCheck(L_6);
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_8;
		L_8 = FsmVariables_FindVariable_m20B820ED7D93578DB8FAA754575D195471088BF9(L_6, L_7, NULL);
		V_0 = L_8;
	}

IL_0028:
	{
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_9 = V_0;
		if (!L_9)
		{
			goto IL_0039;
		}
	}
	{
		bool L_10;
		L_10 = PlayMakerGlobals_get_IsPlaying_mB87FAAD797E64E9C2069469D2F90A73843726562_inline(NULL);
		if (L_10)
		{
			goto IL_0039;
		}
	}
	{
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_11 = V_0;
		NullCheck(L_11);
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_12;
		L_12 = NamedVariable_Copy_mDE0983ADFF0A8901E74CF28B8835EC05BDE7E47B(L_11, NULL);
		return L_12;
	}

IL_0039:
	{
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_13 = V_0;
		return L_13;
	}
}
// HutongGames.PlayMaker.NamedVariable HutongGames.PlayMaker.FsmVariables::GetVariable(HutongGames.PlayMaker.VariableType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* FsmVariables_GetVariable_m3E60C2C17691FE9C03DC4E0550DCCCA46919CE21 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, int32_t ___0_variableType, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmFloat_t99C088B49A35579867184120212107B5FB177420_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmObject_t69096525269982576D57D563C4659F408D7A2A6D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* V_0 = NULL;
	{
		String_t* L_0 = ___1_name;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6*)NULL;
	}

IL_000a:
	{
		String_t* L_2 = ___1_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_3;
		L_3 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_2, NULL);
		V_0 = L_3;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_4 = V_0;
		if (L_4)
		{
			goto IL_0017;
		}
	}
	{
		return (NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6*)NULL;
	}

IL_0017:
	{
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* HutongGames.PlayMaker.VariableType HutongGames.PlayMaker.NamedVariable::get_VariableType() */, L_5);
		int32_t L_7 = ___0_variableType;
		if ((!(((uint32_t)L_6) == ((uint32_t)L_7))))
		{
			goto IL_0022;
		}
	}
	{
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_8 = V_0;
		return L_8;
	}

IL_0022:
	{
		int32_t L_9 = ___0_variableType;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_9, (-1))))
		{
			case 0:
			{
				goto IL_0173;
			}
			case 1:
			{
				goto IL_006f;
			}
			case 2:
			{
				goto IL_0083;
			}
			case 3:
			{
				goto IL_0097;
			}
			case 4:
			{
				goto IL_00ab;
			}
			case 5:
			{
				goto IL_00bf;
			}
			case 6:
			{
				goto IL_00d3;
			}
			case 7:
			{
				goto IL_00e7;
			}
			case 8:
			{
				goto IL_00fb;
			}
			case 9:
			{
				goto IL_010f;
			}
			case 10:
			{
				goto IL_0123;
			}
			case 11:
			{
				goto IL_0137;
			}
			case 12:
			{
				goto IL_014b;
			}
			case 13:
			{
				goto IL_015f;
			}
			case 14:
			{
				goto IL_0175;
			}
			case 15:
			{
				goto IL_0189;
			}
		}
	}
	{
		goto IL_019d;
	}

IL_006f:
	{
		String_t* L_10 = ___1_name;
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_11 = (FsmFloat_t99C088B49A35579867184120212107B5FB177420*)il2cpp_codegen_object_new(FsmFloat_t99C088B49A35579867184120212107B5FB177420_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		FsmFloat__ctor_m3C6268535EF4B3D9E582ADB4D38E329E157C5C31(L_11, L_10, NULL);
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_12 = L_11;
		String_t* L_13 = ___1_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_14;
		L_14 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_13, NULL);
		NullCheck(L_12);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_12, L_14, NULL);
		return L_12;
	}

IL_0083:
	{
		String_t* L_15 = ___1_name;
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_16 = (FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667*)il2cpp_codegen_object_new(FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		FsmInt__ctor_m048BCE07523D678A286C114A05718087F6ED690D(L_16, L_15, NULL);
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_17 = L_16;
		String_t* L_18 = ___1_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_19;
		L_19 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_18, NULL);
		NullCheck(L_17);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_17, L_19, NULL);
		return L_17;
	}

IL_0097:
	{
		String_t* L_20 = ___1_name;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_21 = (FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D*)il2cpp_codegen_object_new(FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		FsmBool__ctor_mA26E07BF8C5190FC8B2137CEB77033580ED56F33(L_21, L_20, NULL);
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_22 = L_21;
		String_t* L_23 = ___1_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_24;
		L_24 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_23, NULL);
		NullCheck(L_22);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_22, L_24, NULL);
		return L_22;
	}

IL_00ab:
	{
		String_t* L_25 = ___1_name;
		FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* L_26 = (FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68*)il2cpp_codegen_object_new(FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		FsmGameObject__ctor_mBE0B5D73F529A3C162AC9D26AB8E67030352C55C(L_26, L_25, NULL);
		FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* L_27 = L_26;
		String_t* L_28 = ___1_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_29;
		L_29 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_28, NULL);
		NullCheck(L_27);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_27, L_29, NULL);
		return L_27;
	}

IL_00bf:
	{
		String_t* L_30 = ___1_name;
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_31 = (FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4*)il2cpp_codegen_object_new(FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4_il2cpp_TypeInfo_var);
		NullCheck(L_31);
		FsmString__ctor_m9545C6856B9901BFB252CFC464128EACBF2EACC2(L_31, L_30, NULL);
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_32 = L_31;
		String_t* L_33 = ___1_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_34;
		L_34 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_33, NULL);
		NullCheck(L_32);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_32, L_34, NULL);
		return L_32;
	}

IL_00d3:
	{
		String_t* L_35 = ___1_name;
		FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* L_36 = (FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2*)il2cpp_codegen_object_new(FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		FsmVector2__ctor_mA11561CD2792FF3F797F3B1329F1AF0F9B2676B3(L_36, L_35, NULL);
		FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* L_37 = L_36;
		String_t* L_38 = ___1_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_39;
		L_39 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_38, NULL);
		NullCheck(L_37);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_37, L_39, NULL);
		return L_37;
	}

IL_00e7:
	{
		String_t* L_40 = ___1_name;
		FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* L_41 = (FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8*)il2cpp_codegen_object_new(FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8_il2cpp_TypeInfo_var);
		NullCheck(L_41);
		FsmVector3__ctor_m2C71240F9D79054F1660CB4B313F31A201C5AC6C(L_41, L_40, NULL);
		FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* L_42 = L_41;
		String_t* L_43 = ___1_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_44;
		L_44 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_43, NULL);
		NullCheck(L_42);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_42, L_44, NULL);
		return L_42;
	}

IL_00fb:
	{
		String_t* L_45 = ___1_name;
		FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* L_46 = (FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242*)il2cpp_codegen_object_new(FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		FsmColor__ctor_mBCFA90C99494EDB1C21304DEB03ECB8CC53B4B80(L_46, L_45, NULL);
		FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* L_47 = L_46;
		String_t* L_48 = ___1_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_49;
		L_49 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_48, NULL);
		NullCheck(L_47);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_47, L_49, NULL);
		return L_47;
	}

IL_010f:
	{
		String_t* L_50 = ___1_name;
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_51 = (FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051*)il2cpp_codegen_object_new(FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051_il2cpp_TypeInfo_var);
		NullCheck(L_51);
		FsmRect__ctor_m0A91EDC10CEE50B16E1079A9D14AFDE713162CAD(L_51, L_50, NULL);
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_52 = L_51;
		String_t* L_53 = ___1_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_54;
		L_54 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_53, NULL);
		NullCheck(L_52);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_52, L_54, NULL);
		return L_52;
	}

IL_0123:
	{
		String_t* L_55 = ___1_name;
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_56 = (FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564*)il2cpp_codegen_object_new(FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		FsmMaterial__ctor_mBEC459F1D620427DE3408D464BFDB75F6500ACD9(L_56, L_55, NULL);
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_57 = L_56;
		String_t* L_58 = ___1_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_59;
		L_59 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_58, NULL);
		NullCheck(L_57);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_57, L_59, NULL);
		return L_57;
	}

IL_0137:
	{
		String_t* L_60 = ___1_name;
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_61 = (FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96*)il2cpp_codegen_object_new(FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		FsmTexture__ctor_m70A2C3A989927FC2199DE8F8D0B9D2EF05FEAF77(L_61, L_60, NULL);
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_62 = L_61;
		String_t* L_63 = ___1_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_64;
		L_64 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_63, NULL);
		NullCheck(L_62);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_62, L_64, NULL);
		return L_62;
	}

IL_014b:
	{
		String_t* L_65 = ___1_name;
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_66 = (FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85*)il2cpp_codegen_object_new(FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85_il2cpp_TypeInfo_var);
		NullCheck(L_66);
		FsmQuaternion__ctor_m2ABF4653AFE71AE804A23E544A5AFC34DE790B09(L_66, L_65, NULL);
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_67 = L_66;
		String_t* L_68 = ___1_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_69;
		L_69 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_68, NULL);
		NullCheck(L_67);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_67, L_69, NULL);
		return L_67;
	}

IL_015f:
	{
		String_t* L_70 = ___1_name;
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_71 = (FsmObject_t69096525269982576D57D563C4659F408D7A2A6D*)il2cpp_codegen_object_new(FsmObject_t69096525269982576D57D563C4659F408D7A2A6D_il2cpp_TypeInfo_var);
		NullCheck(L_71);
		FsmObject__ctor_m5B8BA5463236DC29D82D17282CD783D48574D3E1(L_71, L_70, NULL);
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_72 = L_71;
		String_t* L_73 = ___1_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_74;
		L_74 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_73, NULL);
		NullCheck(L_72);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_72, L_74, NULL);
		return L_72;
	}

IL_0173:
	{
		return (NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6*)NULL;
	}

IL_0175:
	{
		String_t* L_75 = ___1_name;
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_76 = (FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082*)il2cpp_codegen_object_new(FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082_il2cpp_TypeInfo_var);
		NullCheck(L_76);
		FsmArray__ctor_mC577A860B640E75FED30BE6C72D33FAB898728F3(L_76, L_75, NULL);
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_77 = L_76;
		String_t* L_78 = ___1_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_79;
		L_79 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_78, NULL);
		NullCheck(L_77);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_77, L_79, NULL);
		return L_77;
	}

IL_0189:
	{
		String_t* L_80 = ___1_name;
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_81 = (FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7*)il2cpp_codegen_object_new(FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7_il2cpp_TypeInfo_var);
		NullCheck(L_81);
		FsmEnum__ctor_m7EB718CEA41DD1A74050A9574CD7DEEFB47E8741(L_81, L_80, NULL);
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_82 = L_81;
		String_t* L_83 = ___1_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_84;
		L_84 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_83, NULL);
		NullCheck(L_82);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_82, L_84, NULL);
		return L_82;
	}

IL_019d:
	{
		int32_t L_85 = ___0_variableType;
		int32_t L_86 = L_85;
		RuntimeObject* L_87 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VariableType_t3484FCB961D5F506EA13CC398D85765FA491AE08_il2cpp_TypeInfo_var)), &L_86);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_88 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_88);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_88, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral345E250C4292980D57A811120BC2C22E6D59D0E2)), L_87, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_88, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FsmVariables_GetVariable_m3E60C2C17691FE9C03DC4E0550DCCCA46919CE21_RuntimeMethod_var)));
	}
}
// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.FsmVariables::GetFsmFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmFloat_t99C088B49A35579867184120212107B5FB177420* FsmVariables_GetFsmFloat_m5BB7315A243A3EEFB57E3544851604124DBA1156 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmFloat_t99C088B49A35579867184120212107B5FB177420_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmFloat_t99C088B49A35579867184120212107B5FB177420* G_B2_0 = NULL;
	FsmFloat_t99C088B49A35579867184120212107B5FB177420* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_0, NULL);
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_2 = ((FsmFloat_t99C088B49A35579867184120212107B5FB177420*)IsInstClass((RuntimeObject*)L_1, FsmFloat_t99C088B49A35579867184120212107B5FB177420_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0023;
		}
	}
	{
		String_t* L_3 = ___0_name;
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_4 = (FsmFloat_t99C088B49A35579867184120212107B5FB177420*)il2cpp_codegen_object_new(FsmFloat_t99C088B49A35579867184120212107B5FB177420_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FsmFloat__ctor_m3C6268535EF4B3D9E582ADB4D38E329E157C5C31(L_4, L_3, NULL);
		FsmFloat_t99C088B49A35579867184120212107B5FB177420* L_5 = L_4;
		String_t* L_6 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_7;
		L_7 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_6, NULL);
		NullCheck(L_5);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_5, L_7, NULL);
		G_B2_0 = L_5;
	}

IL_0023:
	{
		return G_B2_0;
	}
}
// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.FsmVariables::GetFsmObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* FsmVariables_GetFsmObject_m14839655D2F046BF1E5ABC3FCD50BEE2FD94B19A (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmObject_t69096525269982576D57D563C4659F408D7A2A6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* G_B2_0 = NULL;
	FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_0, NULL);
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_2 = ((FsmObject_t69096525269982576D57D563C4659F408D7A2A6D*)IsInstClass((RuntimeObject*)L_1, FsmObject_t69096525269982576D57D563C4659F408D7A2A6D_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0023;
		}
	}
	{
		String_t* L_3 = ___0_name;
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_4 = (FsmObject_t69096525269982576D57D563C4659F408D7A2A6D*)il2cpp_codegen_object_new(FsmObject_t69096525269982576D57D563C4659F408D7A2A6D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FsmObject__ctor_m5B8BA5463236DC29D82D17282CD783D48574D3E1(L_4, L_3, NULL);
		FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* L_5 = L_4;
		String_t* L_6 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_7;
		L_7 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_6, NULL);
		NullCheck(L_5);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_5, L_7, NULL);
		G_B2_0 = L_5;
	}

IL_0023:
	{
		return G_B2_0;
	}
}
// HutongGames.PlayMaker.FsmMaterial HutongGames.PlayMaker.FsmVariables::GetFsmMaterial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* FsmVariables_GetFsmMaterial_m675F47C0A392E7B4669CCC9D7D1878FD1ED16461 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* G_B2_0 = NULL;
	FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_0, NULL);
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_2 = ((FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564*)IsInstClass((RuntimeObject*)L_1, FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0023;
		}
	}
	{
		String_t* L_3 = ___0_name;
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_4 = (FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564*)il2cpp_codegen_object_new(FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FsmMaterial__ctor_mBEC459F1D620427DE3408D464BFDB75F6500ACD9(L_4, L_3, NULL);
		FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* L_5 = L_4;
		String_t* L_6 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_7;
		L_7 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_6, NULL);
		NullCheck(L_5);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_5, L_7, NULL);
		G_B2_0 = L_5;
	}

IL_0023:
	{
		return G_B2_0;
	}
}
// HutongGames.PlayMaker.FsmTexture HutongGames.PlayMaker.FsmVariables::GetFsmTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* FsmVariables_GetFsmTexture_m3AA9DAE27D2A512FE0CF45045067A11244C06B71 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* G_B2_0 = NULL;
	FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_0, NULL);
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_2 = ((FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96*)IsInstClass((RuntimeObject*)L_1, FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0023;
		}
	}
	{
		String_t* L_3 = ___0_name;
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_4 = (FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96*)il2cpp_codegen_object_new(FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FsmTexture__ctor_m70A2C3A989927FC2199DE8F8D0B9D2EF05FEAF77(L_4, L_3, NULL);
		FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* L_5 = L_4;
		String_t* L_6 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_7;
		L_7 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_6, NULL);
		NullCheck(L_5);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_5, L_7, NULL);
		G_B2_0 = L_5;
	}

IL_0023:
	{
		return G_B2_0;
	}
}
// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.FsmVariables::GetFsmInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* FsmVariables_GetFsmInt_m7927F211639FB983FBF400E1F6CEC989907F40CA (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* G_B2_0 = NULL;
	FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_0, NULL);
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_2 = ((FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667*)IsInstClass((RuntimeObject*)L_1, FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0023;
		}
	}
	{
		String_t* L_3 = ___0_name;
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_4 = (FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667*)il2cpp_codegen_object_new(FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FsmInt__ctor_m048BCE07523D678A286C114A05718087F6ED690D(L_4, L_3, NULL);
		FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* L_5 = L_4;
		String_t* L_6 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_7;
		L_7 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_6, NULL);
		NullCheck(L_5);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_5, L_7, NULL);
		G_B2_0 = L_5;
	}

IL_0023:
	{
		return G_B2_0;
	}
}
// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.FsmVariables::GetFsmBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* FsmVariables_GetFsmBool_m727EE473E35D1128D3145E96217FD0A3B3FF44D3 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* G_B2_0 = NULL;
	FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_0, NULL);
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_2 = ((FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D*)IsInstClass((RuntimeObject*)L_1, FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0023;
		}
	}
	{
		String_t* L_3 = ___0_name;
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_4 = (FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D*)il2cpp_codegen_object_new(FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FsmBool__ctor_mA26E07BF8C5190FC8B2137CEB77033580ED56F33(L_4, L_3, NULL);
		FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* L_5 = L_4;
		String_t* L_6 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_7;
		L_7 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_6, NULL);
		NullCheck(L_5);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_5, L_7, NULL);
		G_B2_0 = L_5;
	}

IL_0023:
	{
		return G_B2_0;
	}
}
// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.FsmVariables::GetFsmString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* FsmVariables_GetFsmString_mE2EFE646F8B6D2A63DF644466714114E3CFE9BC9 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* G_B2_0 = NULL;
	FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_0, NULL);
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_2 = ((FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4*)IsInstClass((RuntimeObject*)L_1, FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0023;
		}
	}
	{
		String_t* L_3 = ___0_name;
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_4 = (FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4*)il2cpp_codegen_object_new(FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FsmString__ctor_m9545C6856B9901BFB252CFC464128EACBF2EACC2(L_4, L_3, NULL);
		FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* L_5 = L_4;
		String_t* L_6 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_7;
		L_7 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_6, NULL);
		NullCheck(L_5);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_5, L_7, NULL);
		G_B2_0 = L_5;
	}

IL_0023:
	{
		return G_B2_0;
	}
}
// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.FsmVariables::GetFsmVector2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* FsmVariables_GetFsmVector2_mD9B6D7F83A8976A6973E81CD553DFC6C16739A05 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* G_B2_0 = NULL;
	FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_0, NULL);
		FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* L_2 = ((FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2*)IsInstClass((RuntimeObject*)L_1, FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = ___0_name;
		FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* L_4 = (FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2*)il2cpp_codegen_object_new(FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FsmVector2__ctor_mA11561CD2792FF3F797F3B1329F1AF0F9B2676B3(L_4, L_3, NULL);
		G_B2_0 = L_4;
	}

IL_0016:
	{
		return G_B2_0;
	}
}
// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.FsmVariables::GetFsmVector3(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* FsmVariables_GetFsmVector3_m7A88A6E868CAF1557B0AA0992BD8F727C6FE92BE (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* G_B2_0 = NULL;
	FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_0, NULL);
		FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* L_2 = ((FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8*)IsInstClass((RuntimeObject*)L_1, FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0023;
		}
	}
	{
		String_t* L_3 = ___0_name;
		FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* L_4 = (FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8*)il2cpp_codegen_object_new(FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FsmVector3__ctor_m2C71240F9D79054F1660CB4B313F31A201C5AC6C(L_4, L_3, NULL);
		FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* L_5 = L_4;
		String_t* L_6 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_7;
		L_7 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_6, NULL);
		NullCheck(L_5);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_5, L_7, NULL);
		G_B2_0 = L_5;
	}

IL_0023:
	{
		return G_B2_0;
	}
}
// HutongGames.PlayMaker.FsmRect HutongGames.PlayMaker.FsmVariables::GetFsmRect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* FsmVariables_GetFsmRect_mE6B44020F522CEB693477789D9F969CA010AF51A (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* G_B2_0 = NULL;
	FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_0, NULL);
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_2 = ((FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051*)IsInstClass((RuntimeObject*)L_1, FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = ___0_name;
		FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* L_4 = (FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051*)il2cpp_codegen_object_new(FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FsmRect__ctor_m0A91EDC10CEE50B16E1079A9D14AFDE713162CAD(L_4, L_3, NULL);
		G_B2_0 = L_4;
	}

IL_0016:
	{
		return G_B2_0;
	}
}
// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.FsmVariables::GetFsmQuaternion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* FsmVariables_GetFsmQuaternion_m29E69214A0FE70C3057462EE7793DDF21119ADE5 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* G_B2_0 = NULL;
	FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_0, NULL);
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_2 = ((FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85*)IsInstClass((RuntimeObject*)L_1, FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = ___0_name;
		FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* L_4 = (FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85*)il2cpp_codegen_object_new(FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FsmQuaternion__ctor_m2ABF4653AFE71AE804A23E544A5AFC34DE790B09(L_4, L_3, NULL);
		G_B2_0 = L_4;
	}

IL_0016:
	{
		return G_B2_0;
	}
}
// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.FsmVariables::GetFsmColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* FsmVariables_GetFsmColor_m4B90F16078BE4DFB2ED750EA558D0D7ECE96A346 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* G_B2_0 = NULL;
	FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_0, NULL);
		FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* L_2 = ((FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242*)IsInstClass((RuntimeObject*)L_1, FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = ___0_name;
		FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* L_4 = (FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242*)il2cpp_codegen_object_new(FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FsmColor__ctor_mBCFA90C99494EDB1C21304DEB03ECB8CC53B4B80(L_4, L_3, NULL);
		G_B2_0 = L_4;
	}

IL_0016:
	{
		return G_B2_0;
	}
}
// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.FsmVariables::GetFsmGameObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* FsmVariables_GetFsmGameObject_m2066F78BEB50CE2423846F0060FB171949F8E687 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* G_B2_0 = NULL;
	FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_0, NULL);
		FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* L_2 = ((FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68*)IsInstClass((RuntimeObject*)L_1, FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0023;
		}
	}
	{
		String_t* L_3 = ___0_name;
		FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* L_4 = (FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68*)il2cpp_codegen_object_new(FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FsmGameObject__ctor_mBE0B5D73F529A3C162AC9D26AB8E67030352C55C(L_4, L_3, NULL);
		FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* L_5 = L_4;
		String_t* L_6 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_7;
		L_7 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_6, NULL);
		NullCheck(L_5);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_5, L_7, NULL);
		G_B2_0 = L_5;
	}

IL_0023:
	{
		return G_B2_0;
	}
}
// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.FsmVariables::GetFsmArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* FsmVariables_GetFsmArray_mD4DF6F8D4D9EEDB96D3847C1D38DD49D5EAC2C65 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* G_B2_0 = NULL;
	FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_0, NULL);
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_2 = ((FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082*)IsInstClass((RuntimeObject*)L_1, FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0016;
		}
	}
	{
		String_t* L_3 = ___0_name;
		FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* L_4 = (FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082*)il2cpp_codegen_object_new(FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FsmArray__ctor_mC577A860B640E75FED30BE6C72D33FAB898728F3(L_4, L_3, NULL);
		G_B2_0 = L_4;
	}

IL_0016:
	{
		return G_B2_0;
	}
}
// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.FsmVariables::GetFsmEnum(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* FsmVariables_GetFsmEnum_m5E21F7EF69F26AB8B92B1B411CE6BF7BDC4BCC51 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* G_B2_0 = NULL;
	FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_0, NULL);
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_2 = ((FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7*)IsInstClass((RuntimeObject*)L_1, FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7_il2cpp_TypeInfo_var));
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0023;
		}
	}
	{
		String_t* L_3 = ___0_name;
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_4 = (FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7*)il2cpp_codegen_object_new(FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FsmEnum__ctor_m7EB718CEA41DD1A74050A9574CD7DEEFB47E8741(L_4, L_3, NULL);
		FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* L_5 = L_4;
		String_t* L_6 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_7;
		L_7 = FsmVariables_GetVariable_mCD253A99F40441D486972E6DDD0E1A61C5FB90F0(__this, L_6, NULL);
		NullCheck(L_5);
		NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline(L_5, L_7, NULL);
		G_B2_0 = L_5;
	}

IL_0023:
	{
		return G_B2_0;
	}
}
// HutongGames.PlayMaker.NamedVariable HutongGames.PlayMaker.FsmVariables::FindVariable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* FsmVariables_FindVariable_m20B820ED7D93578DB8FAA754575D195471088BF9 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE4A90E4608E8ACEF12F9723153046F50E88608AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* V_0 = NULL;
	{
		Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* L_0;
		L_0 = FsmVariables_get_variableLookup_mA279487E9D8EB7DF14B70A00A04FC2F82C691D32(__this, NULL);
		String_t* L_1 = ___0_name;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mE4A90E4608E8ACEF12F9723153046F50E88608AA(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mE4A90E4608E8ACEF12F9723153046F50E88608AA_RuntimeMethod_var);
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_3 = V_0;
		return L_3;
	}
}
// HutongGames.PlayMaker.NamedVariable HutongGames.PlayMaker.FsmVariables::LoadGlobalVariable(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* FsmVariables_LoadGlobalVariable_m3451CACA04ED82A73D75E18ED5F430CB65E8CDE5 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE4A90E4608E8ACEF12F9723153046F50E88608AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* V_0 = NULL;
	{
		Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* L_0;
		L_0 = FsmVariables_get_variableLookup_mA279487E9D8EB7DF14B70A00A04FC2F82C691D32(__this, NULL);
		String_t* L_1 = ___0_name;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mE4A90E4608E8ACEF12F9723153046F50E88608AA(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mE4A90E4608E8ACEF12F9723153046F50E88608AA_RuntimeMethod_var);
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		bool L_4;
		L_4 = PlayMakerGlobals_get_IsPlaying_mB87FAAD797E64E9C2069469D2F90A73843726562_inline(NULL);
		if (L_4)
		{
			goto IL_0020;
		}
	}
	{
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_5 = V_0;
		NullCheck(L_5);
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_6;
		L_6 = NamedVariable_Copy_mDE0983ADFF0A8901E74CF28B8835EC05BDE7E47B(L_5, NULL);
		return L_6;
	}

IL_0020:
	{
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_7 = V_0;
		return L_7;
	}
}
// HutongGames.PlayMaker.NamedVariable HutongGames.PlayMaker.FsmVariables::FindVariable(HutongGames.PlayMaker.VariableType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* FsmVariables_FindVariable_mEE0E90C8FE9CBF932F404D07721C528BA86A1293 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, int32_t ___0_type, String_t* ___1_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE4A90E4608E8ACEF12F9723153046F50E88608AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* V_0 = NULL;
	{
		Dictionary_2_tC95D00BF9E1487BF6AB430F855A9A449CB64B8AA* L_0;
		L_0 = FsmVariables_get_variableLookup_mA279487E9D8EB7DF14B70A00A04FC2F82C691D32(__this, NULL);
		String_t* L_1 = ___1_name;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mE4A90E4608E8ACEF12F9723153046F50E88608AA(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mE4A90E4608E8ACEF12F9723153046F50E88608AA_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(23 /* HutongGames.PlayMaker.VariableType HutongGames.PlayMaker.NamedVariable::get_VariableType() */, L_3);
		int32_t L_5 = ___0_type;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_001b;
		}
	}
	{
		return (NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6*)NULL;
	}

IL_001b:
	{
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_6 = V_0;
		return L_6;
	}

IL_001d:
	{
		return (NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6*)NULL;
	}
}
// HutongGames.PlayMaker.FsmFloat HutongGames.PlayMaker.FsmVariables::FindFsmFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmFloat_t99C088B49A35579867184120212107B5FB177420* FsmVariables_FindFsmFloat_m3E3A17DB596D726E5B6901F46A7033C3B7C417B4 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmFloat_t99C088B49A35579867184120212107B5FB177420_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_FindVariable_mEE0E90C8FE9CBF932F404D07721C528BA86A1293(__this, 0, L_0, NULL);
		return ((FsmFloat_t99C088B49A35579867184120212107B5FB177420*)IsInstClass((RuntimeObject*)L_1, FsmFloat_t99C088B49A35579867184120212107B5FB177420_il2cpp_TypeInfo_var));
	}
}
// HutongGames.PlayMaker.FsmObject HutongGames.PlayMaker.FsmVariables::FindFsmObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* FsmVariables_FindFsmObject_m67F2BC2FCE589D93E69F51DEAB3E535B18C006B0 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmObject_t69096525269982576D57D563C4659F408D7A2A6D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_FindVariable_mEE0E90C8FE9CBF932F404D07721C528BA86A1293(__this, ((int32_t)12), L_0, NULL);
		return ((FsmObject_t69096525269982576D57D563C4659F408D7A2A6D*)IsInstClass((RuntimeObject*)L_1, FsmObject_t69096525269982576D57D563C4659F408D7A2A6D_il2cpp_TypeInfo_var));
	}
}
// HutongGames.PlayMaker.FsmMaterial HutongGames.PlayMaker.FsmVariables::FindFsmMaterial(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564* FsmVariables_FindFsmMaterial_m5AD86F94E0DB8CE8D036BBCAB6067656A76DEBC4 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_FindVariable_mEE0E90C8FE9CBF932F404D07721C528BA86A1293(__this, ((int32_t)9), L_0, NULL);
		return ((FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564*)IsInstClass((RuntimeObject*)L_1, FsmMaterial_tFD8230374BA5F2695209461EABD03EE5BD777564_il2cpp_TypeInfo_var));
	}
}
// HutongGames.PlayMaker.FsmTexture HutongGames.PlayMaker.FsmVariables::FindFsmTexture(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96* FsmVariables_FindFsmTexture_m4D3FF1252BE006F15E6B719DAC96FF55BDF56878 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_FindVariable_mEE0E90C8FE9CBF932F404D07721C528BA86A1293(__this, ((int32_t)10), L_0, NULL);
		return ((FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96*)IsInstClass((RuntimeObject*)L_1, FsmTexture_t75909188E86A05D1FB974880EBE0549C41713D96_il2cpp_TypeInfo_var));
	}
}
// HutongGames.PlayMaker.FsmInt HutongGames.PlayMaker.FsmVariables::FindFsmInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* FsmVariables_FindFsmInt_mABEFD65A7515E55EEAEDA168B398F97F9F59FAFE (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_FindVariable_mEE0E90C8FE9CBF932F404D07721C528BA86A1293(__this, 1, L_0, NULL);
		return ((FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667*)IsInstClass((RuntimeObject*)L_1, FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667_il2cpp_TypeInfo_var));
	}
}
// HutongGames.PlayMaker.FsmBool HutongGames.PlayMaker.FsmVariables::FindFsmBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* FsmVariables_FindFsmBool_m45256EFFEB6938AF8D0B3F16D2F30EF78AF0C558 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_FindVariable_mEE0E90C8FE9CBF932F404D07721C528BA86A1293(__this, 2, L_0, NULL);
		return ((FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D*)IsInstClass((RuntimeObject*)L_1, FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D_il2cpp_TypeInfo_var));
	}
}
// HutongGames.PlayMaker.FsmString HutongGames.PlayMaker.FsmVariables::FindFsmString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* FsmVariables_FindFsmString_mCFEA267A6A552D0B2923CF043BED35E3E8FE21B8 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_FindVariable_mEE0E90C8FE9CBF932F404D07721C528BA86A1293(__this, 4, L_0, NULL);
		return ((FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4*)IsInstClass((RuntimeObject*)L_1, FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4_il2cpp_TypeInfo_var));
	}
}
// HutongGames.PlayMaker.FsmVector2 HutongGames.PlayMaker.FsmVariables::FindFsmVector2(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* FsmVariables_FindFsmVector2_mA589F477C67E31222B4F15A13DEEA150222C753E (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_FindVariable_mEE0E90C8FE9CBF932F404D07721C528BA86A1293(__this, 5, L_0, NULL);
		return ((FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2*)IsInstClass((RuntimeObject*)L_1, FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2_il2cpp_TypeInfo_var));
	}
}
// HutongGames.PlayMaker.FsmVector3 HutongGames.PlayMaker.FsmVariables::FindFsmVector3(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* FsmVariables_FindFsmVector3_m3D8A70A054B2C1E4768CB6E1EDBAA9C29AC8E1DB (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_FindVariable_mEE0E90C8FE9CBF932F404D07721C528BA86A1293(__this, 6, L_0, NULL);
		return ((FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8*)IsInstClass((RuntimeObject*)L_1, FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8_il2cpp_TypeInfo_var));
	}
}
// HutongGames.PlayMaker.FsmRect HutongGames.PlayMaker.FsmVariables::FindFsmRect(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* FsmVariables_FindFsmRect_m2D87EF64539F0F006D1A26AD2201A463EFE68B96 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_FindVariable_mEE0E90C8FE9CBF932F404D07721C528BA86A1293(__this, 8, L_0, NULL);
		return ((FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051*)IsInstClass((RuntimeObject*)L_1, FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051_il2cpp_TypeInfo_var));
	}
}
// HutongGames.PlayMaker.FsmQuaternion HutongGames.PlayMaker.FsmVariables::FindFsmQuaternion(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* FsmVariables_FindFsmQuaternion_m495B300BDF3CB74225C5D7700D7C028A7DB872E8 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_FindVariable_mEE0E90C8FE9CBF932F404D07721C528BA86A1293(__this, ((int32_t)11), L_0, NULL);
		return ((FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85*)IsInstClass((RuntimeObject*)L_1, FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85_il2cpp_TypeInfo_var));
	}
}
// HutongGames.PlayMaker.FsmColor HutongGames.PlayMaker.FsmVariables::FindFsmColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* FsmVariables_FindFsmColor_m1D69D9312FFCB351CD05011329E757916D5432BA (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_FindVariable_mEE0E90C8FE9CBF932F404D07721C528BA86A1293(__this, 7, L_0, NULL);
		return ((FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242*)IsInstClass((RuntimeObject*)L_1, FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242_il2cpp_TypeInfo_var));
	}
}
// HutongGames.PlayMaker.FsmGameObject HutongGames.PlayMaker.FsmVariables::FindFsmGameObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68* FsmVariables_FindFsmGameObject_mED5BBBBF205A3146B2869B020AB7426DD51AEDE9 (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_FindVariable_mEE0E90C8FE9CBF932F404D07721C528BA86A1293(__this, 3, L_0, NULL);
		return ((FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68*)IsInstClass((RuntimeObject*)L_1, FsmGameObject_t3C11BE7C89BE425029E3D9A05E77AADE3CEF4F68_il2cpp_TypeInfo_var));
	}
}
// HutongGames.PlayMaker.FsmEnum HutongGames.PlayMaker.FsmVariables::FindFsmEnum(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7* FsmVariables_FindFsmEnum_m9DB15E92C420BA8BC401A01D82694D645DE7D52F (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_FindVariable_mEE0E90C8FE9CBF932F404D07721C528BA86A1293(__this, ((int32_t)14), L_0, NULL);
		return ((FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7*)IsInstClass((RuntimeObject*)L_1, FsmEnum_t3FDE1EB18A6ED38015FCEEC4F8583FA36FEEA9B7_il2cpp_TypeInfo_var));
	}
}
// HutongGames.PlayMaker.FsmArray HutongGames.PlayMaker.FsmVariables::FindFsmArray(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082* FsmVariables_FindFsmArray_m2F2D8DFA48495CF75758E0C6B1F9D31544FD617D (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_name;
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_1;
		L_1 = FsmVariables_FindVariable_mEE0E90C8FE9CBF932F404D07721C528BA86A1293(__this, ((int32_t)13), L_0, NULL);
		return ((FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082*)IsInstClass((RuntimeObject*)L_1, FsmArray_t3DDD4A8A420CD8CB425397475D12F84D1D3C1082_il2cpp_TypeInfo_var));
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Reflection.Assembly[] HutongGames.PlayMaker.ReflectionUtils::GetLoadedAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* ReflectionUtils_GetLoadedAssemblies_mA82E37E7D9BA3541BA989746370DF7DA6A3FBB82 (const RuntimeMethod* method) 
{
	{
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_0;
		L_0 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		NullCheck(L_0);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_1;
		L_1 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_0, NULL);
		return L_1;
	}
}
// System.Type HutongGames.PlayMaker.ReflectionUtils::GetGlobalType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ReflectionUtils_GetGlobalType_mAB4517C0987F76C01BEEAB001195FB29461E0727 (String_t* ___0_typeName, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m73DDAC151CCC5E06EF7533528A1505EA2AA440B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mABB0055F51D71AEB872FC7C3C1726FBF9371E402_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_GetGlobalType_mAB4517C0987F76C01BEEAB001195FB29461E0727_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D232809F1236D1590A5D679586ABAC38218EBE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11962912FC511FA2B6243A82F7361F5348C01B16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A4A50A8F9F79CAD2838F0A73081A76EDC3D1A3A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD1D4B97C701302B2E89FF5DD38E43BA1F4D0950);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFEF3227A766442073C70EFE7DC19B6BA9C63006);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFBE9C0DF412B8A68FF1CF9FE71E7EC163023A342);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* V_1 = NULL;
	int32_t V_2 = 0;
	Assembly_t* V_3 = NULL;
	Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 V_4;
	memset((&V_4), 0, sizeof(V_4));
	String_t* V_5 = NULL;
	int32_t V_6 = 0;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* V_7 = NULL;
	int32_t V_8 = 0;
	Type_t* V_9 = NULL;
	Exception_t* V_10 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Type_t* G_B6_0 = NULL;
	Type_t* G_B5_0 = NULL;
	Type_t* G_B9_0 = NULL;
	Type_t* G_B8_0 = NULL;
	{
		String_t* L_0 = ___0_typeName;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (Type_t*)NULL;
	}

IL_000a:
	{
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var);
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_2 = ((ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var))->___typeLookup_2;
		String_t* L_3 = ___0_typeName;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mABB0055F51D71AEB872FC7C3C1726FBF9371E402(L_2, L_3, (&V_0), Dictionary_2_TryGetValue_mABB0055F51D71AEB872FC7C3C1726FBF9371E402_RuntimeMethod_var);
		Type_t* L_5 = V_0;
		if (!L_5)
		{
			goto IL_001d;
		}
	}
	{
		Type_t* L_6 = V_0;
		return L_6;
	}

IL_001d:
	{
		String_t* L_7 = ___0_typeName;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_7, _stringLiteralFBE9C0DF412B8A68FF1CF9FE71E7EC163023A342, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = il2cpp_codegen_get_type(L_8, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, ReflectionUtils_GetGlobalType_mAB4517C0987F76C01BEEAB001195FB29461E0727_RuntimeMethod_var);
		Type_t* L_10 = L_9;
		G_B5_0 = L_10;
		if (L_10)
		{
			G_B6_0 = L_10;
			goto IL_0041;
		}
	}
	{
		String_t* L_11 = ___0_typeName;
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteral11962912FC511FA2B6243A82F7361F5348C01B16, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = il2cpp_codegen_get_type(L_12, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, ReflectionUtils_GetGlobalType_mAB4517C0987F76C01BEEAB001195FB29461E0727_RuntimeMethod_var);
		G_B6_0 = L_13;
	}

IL_0041:
	{
		V_0 = G_B6_0;
		Type_t* L_14 = V_0;
		if (L_14)
		{
			goto IL_0060;
		}
	}
	{
		String_t* L_15 = ___0_typeName;
		String_t* L_16;
		L_16 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_15, _stringLiteral8A4A50A8F9F79CAD2838F0A73081A76EDC3D1A3A, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_17;
		L_17 = il2cpp_codegen_get_type(L_16, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, ReflectionUtils_GetGlobalType_mAB4517C0987F76C01BEEAB001195FB29461E0727_RuntimeMethod_var);
		Type_t* L_18 = L_17;
		G_B8_0 = L_18;
		if (L_18)
		{
			G_B9_0 = L_18;
			goto IL_005f;
		}
	}
	{
		String_t* L_19 = ___0_typeName;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = il2cpp_codegen_get_type(L_19, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, ReflectionUtils_GetGlobalType_mAB4517C0987F76C01BEEAB001195FB29461E0727_RuntimeMethod_var);
		G_B9_0 = L_20;
	}

IL_005f:
	{
		V_0 = G_B9_0;
	}

IL_0060:
	{
		Type_t* L_21 = V_0;
		if (L_21)
		{
			goto IL_01d4;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_22 = ((ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var))->___assemblyNames_0;
		if (L_22)
		{
			goto IL_00ae;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_23 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_23, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var);
		((ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var))->___assemblyNames_0 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var))->___assemblyNames_0), (void*)L_23);
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_24;
		L_24 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		NullCheck(L_24);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_25;
		L_25 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_24, NULL);
		((ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var))->___loadedAssemblies_1 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&((ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var))->___loadedAssemblies_1), (void*)L_25);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_26 = ((ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var))->___loadedAssemblies_1;
		V_1 = L_26;
		V_2 = 0;
		goto IL_00a8;
	}

IL_0090:
	{
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_27 = V_1;
		int32_t L_28 = V_2;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Assembly_t* L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_3 = L_30;
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_31 = ((ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var))->___assemblyNames_0;
		Assembly_t* L_32 = V_3;
		NullCheck(L_32);
		String_t* L_33;
		L_33 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Assembly::get_FullName() */, L_32);
		NullCheck(L_31);
		List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_31, L_33, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_00a8:
	{
		int32_t L_35 = V_2;
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_36 = V_1;
		NullCheck(L_36);
		if ((((int32_t)L_35) < ((int32_t)((int32_t)(((RuntimeArray*)L_36)->max_length)))))
		{
			goto IL_0090;
		}
	}

IL_00ae:
	{
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_37 = ((ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var))->___assemblyNames_0;
		NullCheck(L_37);
		Enumerator_tA7A4B718FE1ED1D87565680D8C8195EC8AEAB3D1 L_38;
		L_38 = List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D(L_37, List_1_GetEnumerator_m7692B5F182858B7D5C72C920D09AD48738D1E70D_RuntimeMethod_var);
		V_4 = L_38;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00e8:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7((&V_4), Enumerator_Dispose_m592BCCE7B7933454DED2130C810F059F8D85B1D7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00dd_1;
			}

IL_00bc_1:
			{
				String_t* L_39;
				L_39 = Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_inline((&V_4), Enumerator_get_Current_m143541DD8FBCD313E7554EA738FA813B8F4DB11A_RuntimeMethod_var);
				V_5 = L_39;
				String_t* L_40 = ___0_typeName;
				String_t* L_41 = V_5;
				String_t* L_42;
				L_42 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_40, _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_41, NULL);
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_43;
				L_43 = il2cpp_codegen_get_type(L_42, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, ReflectionUtils_GetGlobalType_mAB4517C0987F76C01BEEAB001195FB29461E0727_RuntimeMethod_var);
				V_0 = L_43;
				Type_t* L_44 = V_0;
				if (!L_44)
				{
					goto IL_00dd_1;
				}
			}
			{
				goto IL_00f6;
			}

IL_00dd_1:
			{
				bool L_45;
				L_45 = Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED((&V_4), Enumerator_MoveNext_mDB47EEC4531D33B9C33FD2E70BA15E1535A0F3ED_RuntimeMethod_var);
				if (L_45)
				{
					goto IL_00bc_1;
				}
			}
			{
				goto IL_00f6;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f6:
	{
		Type_t* L_46 = V_0;
		if (L_46)
		{
			goto IL_01d4;
		}
	}
	{
		V_6 = 0;
		goto IL_01c6;
	}

IL_0104:
	{
	}
	try
	{// begin try (depth: 1)
		{
			il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var);
			AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_47 = ((ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var))->___loadedAssemblies_1;
			int32_t L_48 = V_6;
			NullCheck(L_47);
			int32_t L_49 = L_48;
			Assembly_t* L_50 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
			NullCheck(L_50);
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_51;
			L_51 = VirtualFuncInvoker0< TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(14 /* System.Type[] System.Reflection.Assembly::GetTypes() */, L_50);
			V_7 = L_51;
			V_8 = 0;
			goto IL_018a_1;
		}

IL_0119_1:
		{
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_52 = V_7;
			int32_t L_53 = V_8;
			NullCheck(L_52);
			int32_t L_54 = L_53;
			Type_t* L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
			NullCheck(L_55);
			String_t* L_56;
			L_56 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_55);
			String_t* L_57 = ___0_typeName;
			bool L_58;
			L_58 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_56, L_57, NULL);
			if (!L_58)
			{
				goto IL_0184_1;
			}
		}
		{
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_59 = V_7;
			int32_t L_60 = V_8;
			NullCheck(L_59);
			int32_t L_61 = L_60;
			Type_t* L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
			NullCheck(L_62);
			String_t* L_63;
			L_63 = VirtualFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Type::get_Namespace() */, L_62);
			bool L_64;
			L_64 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_63, _stringLiteralCFEF3227A766442073C70EFE7DC19B6BA9C63006, NULL);
			if (L_64)
			{
				goto IL_016d_1;
			}
		}
		{
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_65 = V_7;
			int32_t L_66 = V_8;
			NullCheck(L_65);
			int32_t L_67 = L_66;
			Type_t* L_68 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
			NullCheck(L_68);
			String_t* L_69;
			L_69 = VirtualFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Type::get_Namespace() */, L_68);
			bool L_70;
			L_70 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_69, _stringLiteralAD1D4B97C701302B2E89FF5DD38E43BA1F4D0950, NULL);
			if (L_70)
			{
				goto IL_016d_1;
			}
		}
		{
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_71 = V_7;
			int32_t L_72 = V_8;
			NullCheck(L_71);
			int32_t L_73 = L_72;
			Type_t* L_74 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_73));
			NullCheck(L_74);
			String_t* L_75;
			L_75 = VirtualFuncInvoker0< String_t* >::Invoke(23 /* System.String System.Type::get_Namespace() */, L_74);
			bool L_76;
			L_76 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_75, _stringLiteral0D232809F1236D1590A5D679586ABAC38218EBE9, NULL);
			if (!L_76)
			{
				goto IL_0184_1;
			}
		}

IL_016d_1:
		{
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_77 = V_7;
			int32_t L_78 = V_8;
			NullCheck(L_77);
			int32_t L_79 = L_78;
			Type_t* L_80 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
			V_0 = L_80;
			il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var);
			Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_81 = ((ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var))->___typeLookup_2;
			String_t* L_82 = ___0_typeName;
			Type_t* L_83 = V_0;
			NullCheck(L_81);
			Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38(L_81, L_82, L_83, Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var);
			Type_t* L_84 = V_0;
			V_9 = L_84;
			goto IL_01ee;
		}

IL_0184_1:
		{
			int32_t L_85 = V_8;
			V_8 = ((int32_t)il2cpp_codegen_add(L_85, 1));
		}

IL_018a_1:
		{
			int32_t L_86 = V_8;
			TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_87 = V_7;
			NullCheck(L_87);
			if ((((int32_t)L_86) < ((int32_t)((int32_t)(((RuntimeArray*)L_87)->max_length)))))
			{
				goto IL_0119_1;
			}
		}
		{
			goto IL_01c0;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0194;
		}
		throw e;
	}

CATCH_0194:
	{// begin catch(System.Exception)
		Exception_t* L_88 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
		V_10 = L_88;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var)));
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_89 = ((ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var))))->___loadedAssemblies_1;
		int32_t L_90 = V_6;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		Assembly_t* L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		NullCheck(L_92);
		String_t* L_93;
		L_93 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.Assembly::get_FullName() */, L_92);
		Exception_t* L_94 = V_10;
		NullCheck(L_94);
		String_t* L_95;
		L_95 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_94);
		String_t* L_96;
		L_96 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2C582085B7F925D3465BB62C03F975D41BE66E3F)), L_93, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD)), L_95, NULL);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_96, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_01c0;
	}// end catch (depth: 1)

IL_01c0:
	{
		int32_t L_97 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_01c6:
	{
		int32_t L_98 = V_6;
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_99 = ((ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var))->___loadedAssemblies_1;
		NullCheck(L_99);
		if ((((int32_t)L_98) < ((int32_t)((int32_t)(((RuntimeArray*)L_99)->max_length)))))
		{
			goto IL_0104;
		}
	}

IL_01d4:
	{
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var);
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_100 = ((ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var))->___typeLookup_2;
		String_t* L_101 = ___0_typeName;
		NullCheck(L_100);
		bool L_102;
		L_102 = Dictionary_2_Remove_m73DDAC151CCC5E06EF7533528A1505EA2AA440B0(L_100, L_101, Dictionary_2_Remove_m73DDAC151CCC5E06EF7533528A1505EA2AA440B0_RuntimeMethod_var);
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_103 = ((ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var))->___typeLookup_2;
		String_t* L_104 = ___0_typeName;
		Type_t* L_105 = V_0;
		NullCheck(L_103);
		Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38(L_103, L_104, L_105, Dictionary_2_set_Item_mD50E387D30F70E1F0A66F0230DE70CA791753F38_RuntimeMethod_var);
		Type_t* L_106 = V_0;
		return L_106;
	}

IL_01ee:
	{
		Type_t* L_107 = V_9;
		return L_107;
	}
}
// System.Type HutongGames.PlayMaker.ReflectionUtils::GetPropertyType(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ReflectionUtils_GetPropertyType_mC6956618233748BF7A267B2571E4F58317B18847 (Type_t* ___0_type, String_t* ___1_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	PropertyInfo_t* V_3 = NULL;
	FieldInfo_t* V_4 = NULL;
	{
		String_t* L_0 = ___1_path;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_0, L_2, NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_004d;
	}

IL_0016:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_2 = L_7;
		Type_t* L_8 = ___0_type;
		String_t* L_9 = V_2;
		NullCheck(L_8);
		PropertyInfo_t* L_10;
		L_10 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_8, L_9, NULL);
		V_3 = L_10;
		PropertyInfo_t* L_11 = V_3;
		if (!L_11)
		{
			goto IL_002f;
		}
	}
	{
		PropertyInfo_t* L_12 = V_3;
		NullCheck(L_12);
		Type_t* L_13;
		L_13 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_12);
		___0_type = L_13;
		goto IL_0049;
	}

IL_002f:
	{
		Type_t* L_14 = ___0_type;
		String_t* L_15 = V_2;
		NullCheck(L_14);
		FieldInfo_t* L_16;
		L_16 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_14, L_15, NULL);
		V_4 = L_16;
		FieldInfo_t* L_17 = V_4;
		if (!L_17)
		{
			goto IL_0047;
		}
	}
	{
		FieldInfo_t* L_18 = V_4;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_18);
		___0_type = L_19;
		goto IL_0049;
	}

IL_0047:
	{
		return (Type_t*)NULL;
	}

IL_0049:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_004d:
	{
		int32_t L_21 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_22 = V_0;
		NullCheck(L_22);
		if ((((int32_t)L_21) < ((int32_t)((int32_t)(((RuntimeArray*)L_22)->max_length)))))
		{
			goto IL_0016;
		}
	}
	{
		Type_t* L_23 = ___0_type;
		return L_23;
	}
}
// System.Reflection.MemberInfo[] HutongGames.PlayMaker.ReflectionUtils::GetMemberInfo(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* ReflectionUtils_GetMemberInfo_mA32C8966F3F83D8886BB52F4482AC1637E2A7876 (Type_t* ___0_type, String_t* ___1_path, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_0 = NULL;
	MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	PropertyInfo_t* V_4 = NULL;
	FieldInfo_t* V_5 = NULL;
	{
		Type_t* L_0 = ___0_type;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*)NULL;
	}

IL_0005:
	{
		String_t* L_1 = ___1_path;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		NullCheck(L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_1, L_3, NULL);
		V_0 = L_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_0;
		NullCheck(L_5);
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_6 = (MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*)(MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*)SZArrayNew(MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
		V_1 = L_6;
		V_2 = 0;
		goto IL_0068;
	}

IL_0024:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		String_t* L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_3 = L_10;
		Type_t* L_11 = ___0_type;
		String_t* L_12 = V_3;
		NullCheck(L_11);
		PropertyInfo_t* L_13;
		L_13 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_11, L_12, NULL);
		V_4 = L_13;
		PropertyInfo_t* L_14 = V_4;
		if (!L_14)
		{
			goto IL_0045;
		}
	}
	{
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_15 = V_1;
		int32_t L_16 = V_2;
		PropertyInfo_t* L_17 = V_4;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_17);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(L_16), (MemberInfo_t*)L_17);
		PropertyInfo_t* L_18 = V_4;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, L_18);
		___0_type = L_19;
		goto IL_0064;
	}

IL_0045:
	{
		Type_t* L_20 = ___0_type;
		String_t* L_21 = V_3;
		NullCheck(L_20);
		FieldInfo_t* L_22;
		L_22 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_20, L_21, NULL);
		V_5 = L_22;
		FieldInfo_t* L_23 = V_5;
		if (!L_23)
		{
			goto IL_0062;
		}
	}
	{
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_24 = V_1;
		int32_t L_25 = V_2;
		FieldInfo_t* L_26 = V_5;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_26);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (MemberInfo_t*)L_26);
		FieldInfo_t* L_27 = V_5;
		NullCheck(L_27);
		Type_t* L_28;
		L_28 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_27);
		___0_type = L_28;
		goto IL_0064;
	}

IL_0062:
	{
		return (MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053*)NULL;
	}

IL_0064:
	{
		int32_t L_29 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_0068:
	{
		int32_t L_30 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = V_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length)))))
		{
			goto IL_0024;
		}
	}
	{
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_32 = V_1;
		return L_32;
	}
}
// System.Boolean HutongGames.PlayMaker.ReflectionUtils::CanReadMemberValue(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_CanReadMemberValue_m8BE32F3855A3FD249E3481B712A0ADF534731B3F (MemberInfo_t* ___0_member, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		MemberInfo_t* L_0 = ___0_member;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)16))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0012:
	{
		return (bool)1;
	}

IL_0014:
	{
		MemberInfo_t* L_4 = ___0_member;
		NullCheck(((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, ((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_5;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Boolean HutongGames.PlayMaker.ReflectionUtils::CanSetMemberValue(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_CanSetMemberValue_mAF197A57E979F32508D162CBF8800F8DAD1B94DE (MemberInfo_t* ___0_member, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		MemberInfo_t* L_0 = ___0_member;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)16))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0012:
	{
		return (bool)1;
	}

IL_0014:
	{
		MemberInfo_t* L_4 = ___0_member;
		NullCheck(((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(18 /* System.Boolean System.Reflection.PropertyInfo::get_CanWrite() */, ((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_5;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Boolean HutongGames.PlayMaker.ReflectionUtils::CanGetMemberValue(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_CanGetMemberValue_m9F3D7E47FC5545F5BC617F20D8951058E4CD3D79 (MemberInfo_t* ___0_member, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		MemberInfo_t* L_0 = ___0_member;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)16))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0020;
	}

IL_0012:
	{
		return (bool)1;
	}

IL_0014:
	{
		MemberInfo_t* L_4 = ___0_member;
		NullCheck(((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		bool L_5;
		L_5 = VirtualFuncInvoker0< bool >::Invoke(17 /* System.Boolean System.Reflection.PropertyInfo::get_CanRead() */, ((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_4, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_5;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Type HutongGames.PlayMaker.ReflectionUtils::GetMemberUnderlyingType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* ReflectionUtils_GetMemberUnderlyingType_mACB0FC87FF306C3F5072245071AF5D8BF7732BE1 (MemberInfo_t* ___0_member, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		MemberInfo_t* L_0 = ___0_member;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)4)))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)16))))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_003a;
	}

IL_0016:
	{
		MemberInfo_t* L_5 = ___0_member;
		NullCheck(((FieldInfo_t*)CastclassClass((RuntimeObject*)L_5, FieldInfo_t_il2cpp_TypeInfo_var)));
		Type_t* L_6;
		L_6 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, ((FieldInfo_t*)CastclassClass((RuntimeObject*)L_5, FieldInfo_t_il2cpp_TypeInfo_var)));
		return L_6;
	}

IL_0022:
	{
		MemberInfo_t* L_7 = ___0_member;
		NullCheck(((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_7, PropertyInfo_t_il2cpp_TypeInfo_var)));
		Type_t* L_8;
		L_8 = VirtualFuncInvoker0< Type_t* >::Invoke(15 /* System.Type System.Reflection.PropertyInfo::get_PropertyType() */, ((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_7, PropertyInfo_t_il2cpp_TypeInfo_var)));
		return L_8;
	}

IL_002e:
	{
		MemberInfo_t* L_9 = ___0_member;
		NullCheck(((EventInfo_t*)CastclassClass((RuntimeObject*)L_9, EventInfo_t_il2cpp_TypeInfo_var)));
		Type_t* L_10;
		L_10 = VirtualFuncInvoker0< Type_t* >::Invoke(18 /* System.Type System.Reflection.EventInfo::get_EventHandlerType() */, ((EventInfo_t*)CastclassClass((RuntimeObject*)L_9, EventInfo_t_il2cpp_TypeInfo_var)));
		return L_10;
	}

IL_003a:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_11 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBD2075E7648A36778D4C437A3963D77FEEE1C0EE)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4784CA4E159D86F8767CCC55143536AF34801074)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionUtils_GetMemberUnderlyingType_mACB0FC87FF306C3F5072245071AF5D8BF7732BE1_RuntimeMethod_var)));
	}
}
// System.Object HutongGames.PlayMaker.ReflectionUtils::GetMemberValue(System.Reflection.MemberInfo[],System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetMemberValue_mC3562C2DB8B55F92045A7851BF7BD0565E120030 (MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* ___0_memberInfo, RuntimeObject* ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		goto IL_0013;
	}

IL_0004:
	{
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_0 = ___0_memberInfo;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		MemberInfo_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		RuntimeObject* L_4 = ___1_target;
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = ReflectionUtils_GetMemberValue_m22D7B2208CCC9B9C1A69158B636CCC67BFF82CFA(L_3, L_4, NULL);
		___1_target = L_5;
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0013:
	{
		int32_t L_7 = V_0;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_8 = ___0_memberInfo;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_0004;
		}
	}
	{
		RuntimeObject* L_9 = ___1_target;
		return L_9;
	}
}
// System.Object HutongGames.PlayMaker.ReflectionUtils::GetMemberValue(System.Reflection.MemberInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReflectionUtils_GetMemberValue_m22D7B2208CCC9B9C1A69158B636CCC67BFF82CFA (MemberInfo_t* ___0_member, RuntimeObject* ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	TargetParameterCountException_t06AE62DE58A6F9CAC9E33DBEFA5B224F08293859* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		MemberInfo_t* L_0 = ___0_member;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)16))))
		{
			goto IL_001f;
		}
	}
	{
		goto IL_0042;
	}

IL_0012:
	{
		MemberInfo_t* L_4 = ___0_member;
		RuntimeObject* L_5 = ___1_target;
		NullCheck(((FieldInfo_t*)CastclassClass((RuntimeObject*)L_4, FieldInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(23 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, ((FieldInfo_t*)CastclassClass((RuntimeObject*)L_4, FieldInfo_t_il2cpp_TypeInfo_var)), L_5);
		return L_6;
	}

IL_001f:
	{
	}
	try
	{// begin try (depth: 1)
		MemberInfo_t* L_7 = ___0_member;
		RuntimeObject* L_8 = ___1_target;
		NullCheck(((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_7, PropertyInfo_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(21 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, ((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_7, PropertyInfo_t_il2cpp_TypeInfo_var)), L_8, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		V_1 = L_9;
		goto IL_0052;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TargetParameterCountException_t06AE62DE58A6F9CAC9E33DBEFA5B224F08293859_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0030;
		}
		throw e;
	}

CATCH_0030:
	{// begin catch(System.Reflection.TargetParameterCountException)
		TargetParameterCountException_t06AE62DE58A6F9CAC9E33DBEFA5B224F08293859* L_10 = ((TargetParameterCountException_t06AE62DE58A6F9CAC9E33DBEFA5B224F08293859*)IL2CPP_GET_ACTIVE_EXCEPTION(TargetParameterCountException_t06AE62DE58A6F9CAC9E33DBEFA5B224F08293859*));;
		V_2 = L_10;
		TargetParameterCountException_t06AE62DE58A6F9CAC9E33DBEFA5B224F08293859* L_11 = V_2;
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_12 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentException__ctor_m790F28810569425B0503056EF1A9CDDF9AFBB3F0(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBC6CF9F6D1A2B396B7B59FC54CCA37099045AF41)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4784CA4E159D86F8767CCC55143536AF34801074)), L_11, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionUtils_GetMemberValue_m22D7B2208CCC9B9C1A69158B636CCC67BFF82CFA_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0042:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_13 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_13);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_13, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral40EF83410F81D39C3FFBE7335B0FC9B79B1354F4)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4784CA4E159D86F8767CCC55143536AF34801074)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionUtils_GetMemberValue_m22D7B2208CCC9B9C1A69158B636CCC67BFF82CFA_RuntimeMethod_var)));
	}

IL_0052:
	{
		RuntimeObject* L_14 = V_1;
		return L_14;
	}
}
// System.Void HutongGames.PlayMaker.ReflectionUtils::SetMemberValue(System.Reflection.MemberInfo,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtils_SetMemberValue_mFDA444E488ACCA726087463BC659BC678FAD7B6D (MemberInfo_t* ___0_member, RuntimeObject* ___1_target, RuntimeObject* ___2_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldInfo_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyInfo_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		MemberInfo_t* L_0 = ___0_member;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)16))))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_002f;
	}

IL_0012:
	{
		MemberInfo_t* L_4 = ___0_member;
		RuntimeObject* L_5 = ___1_target;
		RuntimeObject* L_6 = ___2_value;
		NullCheck(((FieldInfo_t*)CastclassClass((RuntimeObject*)L_4, FieldInfo_t_il2cpp_TypeInfo_var)));
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(((FieldInfo_t*)CastclassClass((RuntimeObject*)L_4, FieldInfo_t_il2cpp_TypeInfo_var)), L_5, L_6, NULL);
		return;
	}

IL_0020:
	{
		MemberInfo_t* L_7 = ___0_member;
		RuntimeObject* L_8 = ___1_target;
		RuntimeObject* L_9 = ___2_value;
		NullCheck(((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_7, PropertyInfo_t_il2cpp_TypeInfo_var)));
		VirtualActionInvoker3< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(23 /* System.Void System.Reflection.PropertyInfo::SetValue(System.Object,System.Object,System.Object[]) */, ((PropertyInfo_t*)CastclassClass((RuntimeObject*)L_7, PropertyInfo_t_il2cpp_TypeInfo_var)), L_8, L_9, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		return;
	}

IL_002f:
	{
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_10 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF2A76AA542882CF4F9F11156EBAEC225212118C1)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4784CA4E159D86F8767CCC55143536AF34801074)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReflectionUtils_SetMemberValue_mFDA444E488ACCA726087463BC659BC678FAD7B6D_RuntimeMethod_var)));
	}
}
// System.Void HutongGames.PlayMaker.ReflectionUtils::SetMemberValue(System.Reflection.MemberInfo[],System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtils_SetMemberValue_m7F36323B335DA03D0CC539B42AC2213C16A63835 (MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* ___0_memberInfo, RuntimeObject* ___1_target, RuntimeObject* ___2_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	MemberInfo_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		V_0 = NULL;
		V_1 = (MemberInfo_t*)NULL;
		V_2 = 0;
		goto IL_001d;
	}

IL_0008:
	{
		RuntimeObject* L_0 = ___1_target;
		V_0 = L_0;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_1 = ___0_memberInfo;
		int32_t L_2 = V_2;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		MemberInfo_t* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_1 = L_4;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_5 = ___0_memberInfo;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		MemberInfo_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		RuntimeObject* L_9 = ___1_target;
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var);
		RuntimeObject* L_10;
		L_10 = ReflectionUtils_GetMemberValue_m22D7B2208CCC9B9C1A69158B636CCC67BFF82CFA(L_8, L_9, NULL);
		___1_target = L_10;
		int32_t L_11 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_001d:
	{
		int32_t L_12 = V_2;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_13 = ___0_memberInfo;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), 1)))))
		{
			goto IL_0008;
		}
	}
	{
		RuntimeObject* L_14 = ___1_target;
		NullCheck(L_14);
		Type_t* L_15;
		L_15 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_14, NULL);
		NullCheck(L_15);
		bool L_16;
		L_16 = Type_get_IsValueType_m59AE2E0439DC06347B8D6B38548F3CBA54D38318(L_15, NULL);
		if (!L_16)
		{
			goto IL_0043;
		}
	}
	{
		RuntimeObject* L_17 = V_0;
		MemberInfo_t* L_18 = V_1;
		RuntimeObject* L_19 = ___1_target;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_20 = ___0_memberInfo;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_21 = ___0_memberInfo;
		NullCheck(L_21);
		NullCheck(L_20);
		int32_t L_22 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_21)->max_length)), 1));
		MemberInfo_t* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		RuntimeObject* L_24 = ___2_value;
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var);
		ReflectionUtils_SetBoxedMemberValue_mDEF70DAD451816F08D773735292225BCAC47B20E(L_17, L_18, L_19, L_23, L_24, NULL);
		return;
	}

IL_0043:
	{
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_25 = ___0_memberInfo;
		MemberInfoU5BU5D_t4CB6970BB166E8E1CFB06152B2A2284971873053* L_26 = ___0_memberInfo;
		NullCheck(L_26);
		NullCheck(L_25);
		int32_t L_27 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_26)->max_length)), 1));
		MemberInfo_t* L_28 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		RuntimeObject* L_29 = ___1_target;
		RuntimeObject* L_30 = ___2_value;
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var);
		ReflectionUtils_SetMemberValue_mFDA444E488ACCA726087463BC659BC678FAD7B6D(L_28, L_29, L_30, NULL);
		return;
	}
}
// System.Void HutongGames.PlayMaker.ReflectionUtils::SetBoxedMemberValue(System.Object,System.Reflection.MemberInfo,System.Object,System.Reflection.MemberInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtils_SetBoxedMemberValue_mDEF70DAD451816F08D773735292225BCAC47B20E (RuntimeObject* ___0_parent, MemberInfo_t* ___1_targetInfo, RuntimeObject* ___2_target, MemberInfo_t* ___3_propertyInfo, RuntimeObject* ___4_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___2_target;
		V_0 = L_0;
		MemberInfo_t* L_1 = ___3_propertyInfo;
		RuntimeObject* L_2 = V_0;
		RuntimeObject* L_3 = ___4_value;
		il2cpp_codegen_runtime_class_init_inline(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var);
		ReflectionUtils_SetMemberValue_mFDA444E488ACCA726087463BC659BC678FAD7B6D(L_1, L_2, L_3, NULL);
		MemberInfo_t* L_4 = ___1_targetInfo;
		RuntimeObject* L_5 = ___0_parent;
		RuntimeObject* L_6 = V_0;
		ReflectionUtils_SetMemberValue_mFDA444E488ACCA726087463BC659BC678FAD7B6D(L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Collections.Generic.List`1<System.Reflection.MemberInfo> HutongGames.PlayMaker.ReflectionUtils::GetFieldsAndProperties(System.Type,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4* ReflectionUtils_GetFieldsAndProperties_mA3B0BB2834899EBB9600CA592F6D94AB0A2395BB (Type_t* ___0_type, int32_t ___1_bindingAttr, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mFDD370E143C78AA5DA55A6DD602C5B96A81B5341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1ECCAADF7DB1972688A2B429816CF4E0581D4E2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4* L_0 = (List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4*)il2cpp_codegen_object_new(List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m1ECCAADF7DB1972688A2B429816CF4E0581D4E2A(L_0, List_1__ctor_m1ECCAADF7DB1972688A2B429816CF4E0581D4E2A_RuntimeMethod_var);
		List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4* L_1 = L_0;
		Type_t* L_2 = ___0_type;
		int32_t L_3 = ___1_bindingAttr;
		NullCheck(L_2);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_4;
		L_4 = VirtualFuncInvoker1< FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, int32_t >::Invoke(84 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_2, L_3);
		NullCheck(L_1);
		List_1_AddRange_mFDD370E143C78AA5DA55A6DD602C5B96A81B5341(L_1, (RuntimeObject*)L_4, List_1_AddRange_mFDD370E143C78AA5DA55A6DD602C5B96A81B5341_RuntimeMethod_var);
		List_1_t269913CE854C1793B808480C94E04A8DB19CD0A4* L_5 = L_1;
		Type_t* L_6 = ___0_type;
		int32_t L_7 = ___1_bindingAttr;
		NullCheck(L_6);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_8;
		L_8 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(106 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_6, L_7);
		NullCheck(L_5);
		List_1_AddRange_mFDD370E143C78AA5DA55A6DD602C5B96A81B5341(L_5, (RuntimeObject*)L_8, List_1_AddRange_mFDD370E143C78AA5DA55A6DD602C5B96A81B5341_RuntimeMethod_var);
		return L_5;
	}
}
// System.Reflection.FieldInfo[] HutongGames.PlayMaker.ReflectionUtils::GetPublicFields(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* ReflectionUtils_GetPublicFields_mA6109A18CE5DEC755B7723ED3DC804115AA0CDDC (Type_t* ___0_type, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_type;
		NullCheck(L_0);
		FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8* L_1;
		L_1 = VirtualFuncInvoker1< FieldInfoU5BU5D_t50D47CBECF1AEB152F555803E3329D9E34DBF8D8*, int32_t >::Invoke(84 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_0, ((int32_t)20));
		return L_1;
	}
}
// System.Reflection.PropertyInfo[] HutongGames.PlayMaker.ReflectionUtils::GetPublicProperties(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* ReflectionUtils_GetPublicProperties_mE2ABCBF1B49283581DA74D58325F7DA368F1C75F (Type_t* ___0_type, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_type;
		NullCheck(L_0);
		PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7* L_1;
		L_1 = VirtualFuncInvoker1< PropertyInfoU5BU5D_tD81C248B41D0C76207C42DB9C332DC79F490B1D7*, int32_t >::Invoke(106 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_0, ((int32_t)20));
		return L_1;
	}
}
// System.Boolean HutongGames.PlayMaker.ReflectionUtils::ImplementsMethod(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_ImplementsMethod_m0F2048E85CBDD257B6DA4AE24995C4E2C87CF882 (Type_t* ___0_type, String_t* ___1_methodName, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = ___0_type;
		String_t* L_1 = ___1_methodName;
		NullCheck(L_0);
		MethodInfo_t* L_2;
		L_2 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_0, L_1, NULL);
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = VirtualFuncInvoker0< Type_t* >::Invoke(8 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_2);
		Type_t* L_4 = ___0_type;
		return (bool)((((RuntimeObject*)(Type_t*)L_3) == ((RuntimeObject*)(Type_t*)L_4))? 1 : 0);
	}
}
// System.Void HutongGames.PlayMaker.ReflectionUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtils__cctor_m5D0768FCEE62BA9234E8B9C295B1C5FC63CAEFD9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A* L_0 = (Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A*)il2cpp_codegen_object_new(Dictionary_2_t0E98B58821A879161B744DA2602DA878A7E5C58A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428(L_0, Dictionary_2__ctor_m552A02EB796CECBF0D6B1D2F5BCA4434A2AC9428_RuntimeMethod_var);
		((ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var))->___typeLookup_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_StaticFields*)il2cpp_codegen_static_fields_for(ReflectionUtils_tF1C9B310066418AAB8B22D6BEF56D5BC6A915E81_il2cpp_TypeInfo_var))->___typeLookup_2), (void*)L_0);
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
// System.Void HutongGames.PlayMaker.Actions.MissingAction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingAction__ctor_mE994AB06F2629BF2744388076145591531981DBB (MissingAction_tE38C98B5ADB1ADE5392B673F8F43DB6D680EDE2B* __this, const RuntimeMethod* method) 
{
	{
		FsmStateAction__ctor_m51DB5C981D5BFE42887218FC4DC39FCAC5E1CADF(__this, NULL);
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
// System.Void HutongGames.PlayMaker.ActionsInternal.Header::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header_Reset_mFF5C8A1690877B248CF9A09FFB331CF11A7132E8 (Header_tB5B89661C6700A9D6D467F21FE12EF8EEA28E2F8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8F18DBC783B4BD35DEEB4760AB90F131D03C6A0);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___comment_15 = _stringLiteralA8F18DBC783B4BD35DEEB4760AB90F131D03C6A0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___comment_15), (void*)_stringLiteralA8F18DBC783B4BD35DEEB4760AB90F131D03C6A0);
		return;
	}
}
// System.Void HutongGames.PlayMaker.ActionsInternal.Header::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header_Awake_m5135E8BB66F496848BD149BF0B87A014F6C918B4 (Header_tB5B89661C6700A9D6D467F21FE12EF8EEA28E2F8* __this, const RuntimeMethod* method) 
{
	{
		FsmStateAction_set_Enabled_m4BD8D99D7B45E4AB710F048023AEC99D5CED647E_inline(__this, (bool)0, NULL);
		return;
	}
}
// System.Void HutongGames.PlayMaker.ActionsInternal.Header::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Header__ctor_m28C00C6AEBA3C9C9678D1E64779D458C184F7EA6 (Header_tB5B89661C6700A9D6D467F21FE12EF8EEA28E2F8* __this, const RuntimeMethod* method) 
{
	{
		FsmStateAction__ctor_m51DB5C981D5BFE42887218FC4DC39FCAC5E1CADF(__this, NULL);
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
// System.Boolean HutongGames.Utility.ColorUtils::Approximately(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorUtils_Approximately_mAB3498DB8A5D624B8268069D50036B3B28331766 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_color1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_color2, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_color1;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_color2;
		float L_3 = L_2.___r_0;
		bool L_4;
		L_4 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___0_color1;
		float L_6 = L_5.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = ___1_color2;
		float L_8 = L_7.___g_1;
		bool L_9;
		L_9 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_6, L_8, NULL);
		if (!L_9)
		{
			goto IL_004b;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___0_color1;
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___1_color2;
		float L_13 = L_12.___b_2;
		bool L_14;
		L_14 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_11, L_13, NULL);
		if (!L_14)
		{
			goto IL_004b;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = ___0_color1;
		float L_16 = L_15.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = ___1_color2;
		float L_18 = L_17.___a_3;
		bool L_19;
		L_19 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_16, L_18, NULL);
		return L_19;
	}

IL_004b:
	{
		return (bool)0;
	}
}
// UnityEngine.Color HutongGames.Utility.ColorUtils::FromIntRGBA(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ColorUtils_FromIntRGBA_m0B56F8A505B475FE6857D6768375DAB31F05C36D (int32_t ___0_r, int32_t ___1_g, int32_t ___2_b, int32_t ___3_a, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_r;
		int32_t L_1 = ___1_g;
		int32_t L_2 = ___2_b;
		int32_t L_3 = ___3_a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_4), ((float)(((float)L_0)/(255.0f))), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_2)/(255.0f))), ((float)(((float)L_3)/(255.0f))), /*hidden argument*/NULL);
		return L_4;
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
// System.String HutongGames.Utility.StringUtils::IncrementStringCounter(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_IncrementStringCounter_m576FE729EF5A4DE106E7CD346EC502B42B187CCA (String_t* ___0_s, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C5989C56421669F25837E7E76D0AE730BF908EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___0_s;
		bool L_1;
		L_1 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_0, NULL);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteralE91FE173F59B063D620A934CE1A010F2B114C1F3;
	}

IL_000e:
	{
		String_t* L_2 = ___0_s;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		NullCheck(L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5;
		L_5 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_2, L_4, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1));
		String_t* L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		String_t* L_9 = ___0_s;
		String_t* L_10 = ___0_s;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_10, NULL);
		String_t* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		NullCheck(L_9);
		String_t* L_14;
		L_14 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_9, 0, ((int32_t)il2cpp_codegen_subtract(L_11, L_13)), NULL);
		V_1 = L_14;
		String_t* L_15 = V_0;
		bool L_16;
		L_16 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_15, (&V_2), NULL);
		if (!L_16)
		{
			goto IL_0064;
		}
	}
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		String_t* L_18 = V_1;
		String_t* L_19 = V_0;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_19, NULL);
		String_t* L_21;
		L_21 = String_CreateString_mAA0705B41B390BDB42F67894B9B67C956814C71B(NULL, ((int32_t)48), L_20, NULL);
		String_t* L_22;
		L_22 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9((&V_2), L_21, NULL);
		String_t* L_23;
		L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_18, L_22, NULL);
		return L_23;
	}

IL_0064:
	{
		String_t* L_24 = ___0_s;
		String_t* L_25;
		L_25 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_24, _stringLiteral1C5989C56421669F25837E7E76D0AE730BF908EF, NULL);
		return L_25;
	}
}
// System.String HutongGames.Utility.StringUtils::StripHtml(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_StripHtml_m9B39E6D1DC8F0E63F67A72D56A0FE0F347EA7FA6 (String_t* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A8F1CBC9C6E5B7CC9E13A7E871CEDC4C60C124A);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_input;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Regex_Replace_m811FCA60D20059998EC547FC390F053C524D045D(L_0, _stringLiteral2A8F1CBC9C6E5B7CC9E13A7E871CEDC4C60C124A, L_1, NULL);
		return L_2;
	}
}
// System.String HutongGames.Utility.StringUtils::StripMarkdown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_StripMarkdown_mDF61E17C0AC7EFAD798122799114519B4C730918 (String_t* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8976338BA98D1A7F965D3DD286C668981EB3156C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB312C3A4F4437E7AEBBAD86EAAC890B12F60A64A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_input;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_0, _stringLiteralB312C3A4F4437E7AEBBAD86EAAC890B12F60A64A, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_1, _stringLiteral8976338BA98D1A7F965D3DD286C668981EB3156C, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		return L_2;
	}
}
// System.String HutongGames.Utility.StringUtils::StripHtmlAndMarkdown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_StripHtmlAndMarkdown_mD5F2003C04C8BF6AA7C7164F8AF0762183A0888B (String_t* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___0_input;
		il2cpp_codegen_runtime_class_init_inline(StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = StringUtils_StripHtml_m9B39E6D1DC8F0E63F67A72D56A0FE0F347EA7FA6(L_0, NULL);
		String_t* L_2;
		L_2 = StringUtils_StripMarkdown_mDF61E17C0AC7EFAD798122799114519B4C730918(L_1, NULL);
		return L_2;
	}
}
// System.Text.StringBuilder HutongGames.Utility.StringUtils::get_EscapeBuilder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringUtils_get_EscapeBuilder_mC4F86F0B36E201900294AF866BE9DE2C6F40A9DF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* G_B2_0 = NULL;
	StringBuilder_t* G_B1_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0 = ((StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877_il2cpp_TypeInfo_var))->___escapeBuilder_0;
		StringBuilder_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0014;
		}
	}
	{
		StringBuilder_t* L_2 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_2, NULL);
		StringBuilder_t* L_3 = L_2;
		il2cpp_codegen_runtime_class_init_inline(StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877_il2cpp_TypeInfo_var);
		((StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877_il2cpp_TypeInfo_var))->___escapeBuilder_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877_il2cpp_TypeInfo_var))->___escapeBuilder_0), (void*)L_3);
		G_B2_0 = L_3;
	}

IL_0014:
	{
		return G_B2_0;
	}
}
// System.String HutongGames.Utility.StringUtils::Escape(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_Escape_m1D20CC3B73CCD62B8D3D5669C892B5EA51204CEB (String_t* ___0_aText, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD68508B50CDE1B2E777400476044304CB8149311);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	Il2CppChar V_4 = 0x0;
	uint16_t V_5 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877_il2cpp_TypeInfo_var);
		StringBuilder_t* L_0;
		L_0 = StringUtils_get_EscapeBuilder_mC4F86F0B36E201900294AF866BE9DE2C6F40A9DF(NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_1, 0, NULL);
		StringBuilder_t* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = StringBuilder_get_Capacity_m9DBF3B3940BC0BB882CA26F0EDB53896A491AD1E(L_2, NULL);
		String_t* L_4 = ___0_aText;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		String_t* L_6 = ___0_aText;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		if ((((int32_t)L_3) >= ((int32_t)((int32_t)il2cpp_codegen_add(L_5, ((int32_t)(L_7/((int32_t)10))))))))
		{
			goto IL_003b;
		}
	}
	{
		StringBuilder_t* L_8 = V_0;
		String_t* L_9 = ___0_aText;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		String_t* L_11 = ___0_aText;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_11, NULL);
		NullCheck(L_8);
		StringBuilder_set_Capacity_m11BD24481D70C842320ADF7C959CC674D18AF574(L_8, ((int32_t)il2cpp_codegen_add(L_10, ((int32_t)(L_12/((int32_t)10))))), NULL);
	}

IL_003b:
	{
		String_t* L_13 = ___0_aText;
		V_2 = L_13;
		V_3 = 0;
		goto IL_0125;
	}

IL_0044:
	{
		String_t* L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		Il2CppChar L_16;
		L_16 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_14, L_15, NULL);
		V_4 = L_16;
		Il2CppChar L_17 = V_4;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_17, 8)))
		{
			case 0:
			{
				goto IL_00c6;
			}
			case 1:
			{
				goto IL_00b8;
			}
			case 2:
			{
				goto IL_009c;
			}
			case 3:
			{
				goto IL_00e2;
			}
			case 4:
			{
				goto IL_00d4;
			}
			case 5:
			{
				goto IL_00aa;
			}
		}
	}
	{
		Il2CppChar L_18 = V_4;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)34))))
		{
			goto IL_008b;
		}
	}
	{
		Il2CppChar L_19 = V_4;
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_00e2;
		}
	}
	{
		StringBuilder_t* L_20 = V_0;
		NullCheck(L_20);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, _stringLiteralF18840F490E42D3CE48CDCBF47229C1C240F8ABE, NULL);
		goto IL_0121;
	}

IL_008b:
	{
		StringBuilder_t* L_22 = V_0;
		NullCheck(L_22);
		StringBuilder_t* L_23;
		L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, _stringLiteral848E5ED630B3142F565DD995C6E8D30187ED33CD, NULL);
		goto IL_0121;
	}

IL_009c:
	{
		StringBuilder_t* L_24 = V_0;
		NullCheck(L_24);
		StringBuilder_t* L_25;
		L_25 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_24, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, NULL);
		goto IL_0121;
	}

IL_00aa:
	{
		StringBuilder_t* L_26 = V_0;
		NullCheck(L_26);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_26, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, NULL);
		goto IL_0121;
	}

IL_00b8:
	{
		StringBuilder_t* L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_28, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, NULL);
		goto IL_0121;
	}

IL_00c6:
	{
		StringBuilder_t* L_30 = V_0;
		NullCheck(L_30);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9, NULL);
		goto IL_0121;
	}

IL_00d4:
	{
		StringBuilder_t* L_32 = V_0;
		NullCheck(L_32);
		StringBuilder_t* L_33;
		L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122, NULL);
		goto IL_0121;
	}

IL_00e2:
	{
		Il2CppChar L_34 = V_4;
		if ((((int32_t)L_34) < ((int32_t)((int32_t)32))))
		{
			goto IL_00f5;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877_il2cpp_TypeInfo_var);
		bool L_35 = ((StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877_StaticFields*)il2cpp_codegen_static_fields_for(StringUtils_t8CBD8CD3F582F1CF699628DA628CABCDFEE2F877_il2cpp_TypeInfo_var))->___forceAscii_1;
		if (!L_35)
		{
			goto IL_0118;
		}
	}
	{
		Il2CppChar L_36 = V_4;
		if ((((int32_t)L_36) <= ((int32_t)((int32_t)127))))
		{
			goto IL_0118;
		}
	}

IL_00f5:
	{
		Il2CppChar L_37 = V_4;
		V_5 = L_37;
		StringBuilder_t* L_38 = V_0;
		NullCheck(L_38);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_38, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699, NULL);
		String_t* L_40;
		L_40 = UInt16_ToString_m75C61173B6A4DCF2D678D8A03EA713FEE29CC98C((&V_5), _stringLiteralD68508B50CDE1B2E777400476044304CB8149311, NULL);
		NullCheck(L_39);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_39, L_40, NULL);
		goto IL_0121;
	}

IL_0118:
	{
		StringBuilder_t* L_42 = V_0;
		Il2CppChar L_43 = V_4;
		NullCheck(L_42);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_42, L_43, NULL);
	}

IL_0121:
	{
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0125:
	{
		int32_t L_46 = V_3;
		String_t* L_47 = V_2;
		NullCheck(L_47);
		int32_t L_48;
		L_48 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_47, NULL);
		if ((((int32_t)L_46) < ((int32_t)L_48)))
		{
			goto IL_0044;
		}
	}
	{
		StringBuilder_t* L_49 = V_0;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_49);
		V_1 = L_50;
		StringBuilder_t* L_51 = V_0;
		NullCheck(L_51);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_51, 0, NULL);
		String_t* L_52 = V_1;
		return L_52;
	}
}
// System.Void HutongGames.Utility.StringUtils::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringUtils__cctor_m87C2B021CC225AA0D845853CDA16B701CFCC968F (const RuntimeMethod* method) 
{
	{
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
// System.String HutongGames.Extensions.RectExtensions::Debug(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RectExtensions_Debug_m677C920987B1B2929DF49871F39F236DB3273099 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)9));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)_stringLiteralA3DFC0C77ACADE0EE48DCC73E795A597D0270A73);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = L_1;
		float L_3;
		L_3 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___0_rect), NULL);
		int32_t L_4 = il2cpp_codegen_cast_double_to_int<int32_t>(L_3);
		RuntimeObject* L_5 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_4);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_2;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7 = L_6;
		float L_8;
		L_8 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___0_rect), NULL);
		int32_t L_9 = il2cpp_codegen_cast_double_to_int<int32_t>(L_8);
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_7;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		float L_13;
		L_13 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_rect), NULL);
		int32_t L_14 = il2cpp_codegen_cast_double_to_int<int32_t>(L_13);
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(6), (RuntimeObject*)_stringLiteral758733BDBED83CBFF4F635AC26CA92AAE477F75D);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		float L_18;
		L_18 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_rect), NULL);
		int32_t L_19 = il2cpp_codegen_cast_double_to_int<int32_t>(L_18);
		RuntimeObject* L_20 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(7), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(8), (RuntimeObject*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_22;
		L_22 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_21, NULL);
		return L_22;
	}
}
// UnityEngine.Rect HutongGames.Extensions.RectExtensions::BottomRight(UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtensions_BottomRight_m24331CD26D0E134258AAA9155A26A1A2E6AC3DFB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, float ___1_size, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___0_rect), NULL);
		float L_1 = ___1_size;
		float L_2;
		L_2 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___0_rect), NULL);
		float L_3 = ___1_size;
		float L_4 = ___1_size;
		float L_5 = ___1_size;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_6), ((float)il2cpp_codegen_subtract(L_0, L_1)), ((float)il2cpp_codegen_subtract(L_2, L_3)), L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Rect HutongGames.Extensions.RectExtensions::RoundToInt(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtensions_RoundToInt_m0F5D41C7A9105CB523E502D8ECEEF848CEBAF4B2 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___0_rect), NULL);
		float L_1;
		L_1 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___0_rect), NULL);
		float L_2;
		L_2 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_rect), NULL);
		float L_3;
		L_3 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_rect), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_4;
		memset((&L_4), 0, sizeof(L_4));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_4), ((float)il2cpp_codegen_cast_double_to_int<int32_t>(L_0)), ((float)il2cpp_codegen_cast_double_to_int<int32_t>(L_1)), ((float)il2cpp_codegen_cast_double_to_int<int32_t>(L_2)), ((float)il2cpp_codegen_cast_double_to_int<int32_t>(L_3)), /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean HutongGames.Extensions.RectExtensions::IsDifferent(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectExtensions_IsDifferent_mEA192CB75BCCC54CC48F6D8D2C852F8F05D96074 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect2, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___0_rect1), NULL);
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___1_rect2), NULL);
		bool L_2;
		L_2 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		return (bool)1;
	}

IL_0017:
	{
		float L_3;
		L_3 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___0_rect1), NULL);
		float L_4;
		L_4 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___1_rect2), NULL);
		bool L_5;
		L_5 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_002e;
		}
	}
	{
		return (bool)1;
	}

IL_002e:
	{
		float L_6;
		L_6 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_rect1), NULL);
		float L_7;
		L_7 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___1_rect2), NULL);
		bool L_8;
		L_8 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_0045;
		}
	}
	{
		return (bool)1;
	}

IL_0045:
	{
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_rect1), NULL);
		float L_10;
		L_10 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___1_rect2), NULL);
		bool L_11;
		L_11 = Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline(L_9, L_10, NULL);
		if (L_11)
		{
			goto IL_005c;
		}
	}
	{
		return (bool)1;
	}

IL_005c:
	{
		return (bool)0;
	}
}
// System.Boolean HutongGames.Extensions.RectExtensions::AreEqual(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectExtensions_AreEqual_m9BD133ED4E33F62B5DCD96D69C069703F032AD9D (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect2, const RuntimeMethod* method) 
{
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_rect1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1 = ___1_rect2;
		bool L_2;
		L_2 = RectExtensions_IsDifferent_mEA192CB75BCCC54CC48F6D8D2C852F8F05D96074(L_0, L_1, NULL);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean HutongGames.Extensions.RectExtensions::Contains(UnityEngine.Rect,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectExtensions_Contains_mD522E78A19E08B9342F723A44B7725067A8E15EA (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, float ___1_x, float ___2_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___1_x;
		float L_1;
		L_1 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___0_rect), NULL);
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_0029;
		}
	}
	{
		float L_2 = ___1_x;
		float L_3;
		L_3 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___0_rect), NULL);
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_0029;
		}
	}
	{
		float L_4 = ___2_y;
		float L_5;
		L_5 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___0_rect), NULL);
		if ((!(((float)L_4) > ((float)L_5))))
		{
			goto IL_0029;
		}
	}
	{
		float L_6 = ___2_y;
		float L_7;
		L_7 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___0_rect), NULL);
		return (bool)((((float)L_6) < ((float)L_7))? 1 : 0);
	}

IL_0029:
	{
		return (bool)0;
	}
}
// System.Boolean HutongGames.Extensions.RectExtensions::Contains(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectExtensions_Contains_m9DA50B619BFCB9A3283A2785007B1ECE8384FD71 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect2, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___0_rect1), NULL);
		float L_1;
		L_1 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___1_rect2), NULL);
		if ((!(((float)L_0) <= ((float)L_1))))
		{
			goto IL_0044;
		}
	}
	{
		float L_2;
		L_2 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___0_rect1), NULL);
		float L_3;
		L_3 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___1_rect2), NULL);
		if ((!(((float)L_2) <= ((float)L_3))))
		{
			goto IL_0044;
		}
	}
	{
		float L_4;
		L_4 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___0_rect1), NULL);
		float L_5;
		L_5 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___1_rect2), NULL);
		if ((!(((float)L_4) >= ((float)L_5))))
		{
			goto IL_0044;
		}
	}
	{
		float L_6;
		L_6 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___0_rect1), NULL);
		float L_7;
		L_7 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___1_rect2), NULL);
		return (bool)((((int32_t)((!(((float)L_6) >= ((float)L_7)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0044:
	{
		return (bool)0;
	}
}
// System.Boolean HutongGames.Extensions.RectExtensions::IntersectsWith(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectExtensions_IntersectsWith_m0414C26BCF38C0C28C6AE5CFDFD2AF81FABCC38B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect2, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___1_rect2), NULL);
		float L_1;
		L_1 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___0_rect1), NULL);
		if ((!(((float)L_0) <= ((float)L_1))))
		{
			goto IL_0044;
		}
	}
	{
		float L_2;
		L_2 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___1_rect2), NULL);
		float L_3;
		L_3 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___0_rect1), NULL);
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0044;
		}
	}
	{
		float L_4;
		L_4 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___1_rect2), NULL);
		float L_5;
		L_5 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___0_rect1), NULL);
		if ((!(((float)L_4) <= ((float)L_5))))
		{
			goto IL_0044;
		}
	}
	{
		float L_6;
		L_6 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___1_rect2), NULL);
		float L_7;
		L_7 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___0_rect1), NULL);
		return (bool)((((int32_t)((!(((float)L_6) >= ((float)L_7)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0044:
	{
		return (bool)0;
	}
}
// UnityEngine.Rect HutongGames.Extensions.RectExtensions::Union(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtensions_Union_mAD10B6B9D1EDC03B6F48A79F6512BF2B1CE7F913 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect1, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect2, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___0_rect1), NULL);
		float L_1;
		L_1 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___1_rect2), NULL);
		float L_2;
		L_2 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_0, L_1, NULL);
		float L_3;
		L_3 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___0_rect1), NULL);
		float L_4;
		L_4 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___1_rect2), NULL);
		float L_5;
		L_5 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_3, L_4, NULL);
		float L_6;
		L_6 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___0_rect1), NULL);
		float L_7;
		L_7 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___1_rect2), NULL);
		float L_8;
		L_8 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_6, L_7, NULL);
		float L_9;
		L_9 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___0_rect1), NULL);
		float L_10;
		L_10 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___1_rect2), NULL);
		float L_11;
		L_11 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_9, L_10, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_12;
		L_12 = Rect_MinMaxRect_m540D2DD8C255D276AD4AE06D9CCA2A667EFA39E5(L_2, L_5, L_8, L_11, NULL);
		return L_12;
	}
}
// UnityEngine.Rect HutongGames.Extensions.RectExtensions::Move(UnityEngine.Rect,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtensions_Move_m9B0E543C0AB036183603A9FD07B985FEFEC26D15 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, float ___1_x, float ___2_y, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___0_rect), NULL);
		float L_1 = ___1_x;
		float L_2;
		L_2 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___0_rect), NULL);
		float L_3 = ___2_y;
		float L_4;
		L_4 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_rect), NULL);
		float L_5;
		L_5 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_rect), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_6;
		memset((&L_6), 0, sizeof(L_6));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_6), ((float)il2cpp_codegen_add(L_0, L_1)), ((float)il2cpp_codegen_add(L_2, L_3)), L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// UnityEngine.Rect HutongGames.Extensions.RectExtensions::Move(UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtensions_Move_mD85F1E905CCE126470106ACDEBC90074EA6FDEBA (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_delta, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___0_rect), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_delta;
		float L_2 = L_1.___x_0;
		float L_3;
		L_3 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___0_rect), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___1_delta;
		float L_5 = L_4.___y_1;
		float L_6;
		L_6 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_rect), NULL);
		float L_7;
		L_7 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_rect), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_8), ((float)il2cpp_codegen_add(L_0, L_2)), ((float)il2cpp_codegen_add(L_3, L_5)), L_6, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Rect HutongGames.Extensions.RectExtensions::Scale(UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtensions_Scale_m0107A614E8485E6A265854DD1A42A4A31B186770 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, float ___1_scale, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___0_rect), NULL);
		float L_1 = ___1_scale;
		float L_2;
		L_2 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___0_rect), NULL);
		float L_3 = ___1_scale;
		float L_4;
		L_4 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_rect), NULL);
		float L_5 = ___1_scale;
		float L_6;
		L_6 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_rect), NULL);
		float L_7 = ___1_scale;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_8), ((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_6, L_7)), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Rect HutongGames.Extensions.RectExtensions::ScaleToInt(UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtensions_ScaleToInt_m5516011397436F66FAEDA1AD167BC6C5EFB8A82A (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, float ___1_scale, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___0_rect), NULL);
		float L_1 = ___1_scale;
		float L_2;
		L_2 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___0_rect), NULL);
		float L_3 = ___1_scale;
		float L_4;
		L_4 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_rect), NULL);
		float L_5 = ___1_scale;
		float L_6;
		L_6 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_rect), NULL);
		float L_7 = ___1_scale;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_8), ((float)il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_0, L_1)))), ((float)il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_4, L_5)))), ((float)il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_6, L_7)))), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Rect HutongGames.Extensions.RectExtensions::MinSize(UnityEngine.Rect,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtensions_MinSize_m8AE4E79FD53866BFD0A443ABF319605FBFCAD846 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, float ___1_minWidth, float ___2_minHeight, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___0_rect), NULL);
		float L_1;
		L_1 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___0_rect), NULL);
		float L_2;
		L_2 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_rect), NULL);
		float L_3 = ___1_minWidth;
		float L_4;
		L_4 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_2, L_3, NULL);
		float L_5;
		L_5 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_rect), NULL);
		float L_6 = ___2_minHeight;
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_5, L_6, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_8), L_0, L_1, L_4, L_7, /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Rect HutongGames.Extensions.RectExtensions::MinSize(UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtensions_MinSize_mC7C0893FBACF9053A00EC9FECDCE0393D0BB015B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_minSize, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___0_rect), NULL);
		float L_1;
		L_1 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___0_rect), NULL);
		float L_2;
		L_2 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_rect), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___1_minSize;
		float L_4 = L_3.___x_0;
		float L_5;
		L_5 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_2, L_4, NULL);
		float L_6;
		L_6 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_rect), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___1_minSize;
		float L_8 = L_7.___y_1;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_6, L_8, NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		memset((&L_10), 0, sizeof(L_10));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_10), L_0, L_1, L_5, L_9, /*hidden argument*/NULL);
		return L_10;
	}
}
// UnityEngine.Rect HutongGames.Extensions.RectExtensions::Expand(UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtensions_Expand_m6A0492423413EFB40C1E8044ED3FC7A06DAF04BB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, float ___1_amount, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___0_rect), NULL);
		float L_1 = ___1_amount;
		float L_2;
		L_2 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___0_rect), NULL);
		float L_3 = ___1_amount;
		float L_4;
		L_4 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_rect), NULL);
		float L_5 = ___1_amount;
		float L_6;
		L_6 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_rect), NULL);
		float L_7 = ___1_amount;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		memset((&L_8), 0, sizeof(L_8));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_8), ((float)il2cpp_codegen_subtract(L_0, L_1)), ((float)il2cpp_codegen_subtract(L_2, L_3)), ((float)il2cpp_codegen_add(L_4, ((float)il2cpp_codegen_multiply(L_5, (2.0f))))), ((float)il2cpp_codegen_add(L_6, ((float)il2cpp_codegen_multiply(L_7, (2.0f))))), /*hidden argument*/NULL);
		return L_8;
	}
}
// UnityEngine.Rect HutongGames.Extensions.RectExtensions::ExpandToFit(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtensions_ExpandToFit_mA7C5C5445F1162DE528BE955E27E1DD97EE93F78 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___1_rect2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___0_rect), NULL);
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___1_rect2), NULL);
		float L_2;
		L_2 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___0_rect), NULL);
		float L_4;
		L_4 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___1_rect2), NULL);
		float L_5;
		L_5 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_3, L_4, NULL);
		V_1 = L_5;
		float L_6;
		L_6 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___0_rect), NULL);
		float L_7 = V_0;
		float L_8;
		L_8 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F((&___1_rect2), NULL);
		float L_9 = V_0;
		float L_10;
		L_10 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(L_6, L_7)), ((float)il2cpp_codegen_subtract(L_8, L_9)), NULL);
		V_2 = L_10;
		float L_11;
		L_11 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___0_rect), NULL);
		float L_12 = V_1;
		float L_13;
		L_13 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E((&___1_rect2), NULL);
		float L_14 = V_1;
		float L_15;
		L_15 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_subtract(L_11, L_12)), ((float)il2cpp_codegen_subtract(L_13, L_14)), NULL);
		V_3 = L_15;
		float L_16 = V_0;
		float L_17 = V_1;
		float L_18 = V_2;
		float L_19 = V_3;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_20;
		memset((&L_20), 0, sizeof(L_20));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_20), L_16, L_17, L_18, L_19, /*hidden argument*/NULL);
		return L_20;
	}
}
// UnityEngine.Rect HutongGames.Extensions.RectExtensions::FitPoints(UnityEngine.Rect,UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtensions_FitPoints_m3048BECC7E5E7D234A7030C57FFED26CB0612B94 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___1_points, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* V_5 = NULL;
	int32_t V_6 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ___1_points;
		if (!L_0)
		{
			goto IL_0007;
		}
	}
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = ___1_points;
		NullCheck(L_1);
		if ((((RuntimeArray*)L_1)->max_length))
		{
			goto IL_0012;
		}
	}

IL_0007:
	{
		il2cpp_codegen_initobj((&V_4), sizeof(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2 = V_4;
		return L_2;
	}

IL_0012:
	{
		V_0 = (std::numeric_limits<float>::infinity());
		V_1 = (-std::numeric_limits<float>::infinity());
		V_2 = (std::numeric_limits<float>::infinity());
		V_3 = (-std::numeric_limits<float>::infinity());
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = ___1_points;
		V_5 = L_3;
		V_6 = 0;
		goto IL_007b;
	}

IL_0032:
	{
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = V_5;
		int32_t L_5 = V_6;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_7 = L_7;
		float L_8 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_7;
		float L_10 = L_9.___x_2;
		float L_11;
		L_11 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_8, L_10, NULL);
		V_0 = L_11;
		float L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_7;
		float L_14 = L_13.___x_2;
		float L_15;
		L_15 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_12, L_14, NULL);
		V_1 = L_15;
		float L_16 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_7;
		float L_18 = L_17.___y_3;
		float L_19;
		L_19 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(L_16, L_18, NULL);
		V_2 = L_19;
		float L_20 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = V_7;
		float L_22 = L_21.___y_3;
		float L_23;
		L_23 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_20, L_22, NULL);
		V_3 = L_23;
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_007b:
	{
		int32_t L_25 = V_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = V_5;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0032;
		}
	}
	{
		float L_27 = V_0;
		float L_28 = V_2;
		float L_29 = V_1;
		float L_30 = V_0;
		float L_31 = V_3;
		float L_32 = V_2;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_33;
		memset((&L_33), 0, sizeof(L_33));
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&L_33), L_27, L_28, ((float)il2cpp_codegen_subtract(L_29, L_30)), ((float)il2cpp_codegen_subtract(L_31, L_32)), /*hidden argument*/NULL);
		return L_33;
	}
}
// UnityEngine.Vector2 HutongGames.Extensions.RectExtensions::TopLeft(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectExtensions_TopLeft_m008DA8359E0D894327D5728335492FBFC14F690C (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D((&___0_rect), NULL);
		float L_1;
		L_1 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F((&___0_rect), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_2), L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// UnityEngine.Vector2 HutongGames.Extensions.RectExtensions::Center(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 RectExtensions_Center_m7206A0A60EFC42F678513F26AE57CBAEFA695AAA (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___0_rect), NULL);
		float L_1;
		L_1 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___0_rect), NULL);
		float L_2;
		L_2 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___0_rect), NULL);
		float L_3;
		L_3 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___0_rect), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), ((float)il2cpp_codegen_add(L_0, ((float)(L_1/(2.0f))))), ((float)il2cpp_codegen_add(L_2, ((float)(L_3/(2.0f))))), /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.Rect HutongGames.Extensions.RectExtensions::ScaleSizeBy(UnityEngine.Rect,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtensions_ScaleSizeBy_m75AAA3E90952F476BD96DD2C3028D026F05EDF11 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, float ___1_scale, const RuntimeMethod* method) 
{
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_rect;
		float L_1 = ___1_scale;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C((&___0_rect), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = RectExtensions_ScaleSizeBy_mEE827CFCE3A6565DD328D38D42F91780A287E352(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Rect HutongGames.Extensions.RectExtensions::ScaleSizeBy(UnityEngine.Rect,System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtensions_ScaleSizeBy_mEE827CFCE3A6565DD328D38D42F91780A287E352 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, float ___1_scale, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_pivotPoint, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_rect;
		V_0 = L_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_1 = (&V_0);
		float L_2;
		L_2 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___2_pivotPoint;
		float L_4 = L_3.___x_0;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_1, ((float)il2cpp_codegen_subtract(L_2, L_4)), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_5 = (&V_0);
		float L_6;
		L_6 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___2_pivotPoint;
		float L_8 = L_7.___y_1;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_5, ((float)il2cpp_codegen_subtract(L_6, L_8)), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_9 = (&V_0);
		float L_10;
		L_10 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D(L_9, NULL);
		float L_11 = ___1_scale;
		Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19(L_9, ((float)il2cpp_codegen_multiply(L_10, L_11)), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_12 = (&V_0);
		float L_13;
		L_13 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F(L_12, NULL);
		float L_14 = ___1_scale;
		Rect_set_xMax_m97C28D468455A6D19325D0D862E80A093240D49D(L_12, ((float)il2cpp_codegen_multiply(L_13, L_14)), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_15 = (&V_0);
		float L_16;
		L_16 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F(L_15, NULL);
		float L_17 = ___1_scale;
		Rect_set_yMin_m9F780E509B9215A9E5826178CF664BD0E486D4EE(L_15, ((float)il2cpp_codegen_multiply(L_16, L_17)), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_18 = (&V_0);
		float L_19;
		L_19 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E(L_18, NULL);
		float L_20 = ___1_scale;
		Rect_set_yMax_mCF452040E0068A4B3CB15994C0B4B6AD4D78E04B(L_18, ((float)il2cpp_codegen_multiply(L_19, L_20)), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_21 = (&V_0);
		float L_22;
		L_22 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_21, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = ___2_pivotPoint;
		float L_24 = L_23.___x_0;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_21, ((float)il2cpp_codegen_add(L_22, L_24)), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_25 = (&V_0);
		float L_26;
		L_26 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_25, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = ___2_pivotPoint;
		float L_28 = L_27.___y_1;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_25, ((float)il2cpp_codegen_add(L_26, L_28)), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_29 = V_0;
		return L_29;
	}
}
// UnityEngine.Rect HutongGames.Extensions.RectExtensions::ScaleSizeBy(UnityEngine.Rect,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtensions_ScaleSizeBy_mFF5DA12073991EB84E6013E0B1204FE6FC6728FE (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_scale, const RuntimeMethod* method) 
{
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_rect;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___1_scale;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rect_get_center_mAA9A2E1F058B2C9F58E13CC4822F789F42975E5C((&___0_rect), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_3;
		L_3 = RectExtensions_ScaleSizeBy_m8D572E573575457134D039308A76822D77EED77E(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// UnityEngine.Rect HutongGames.Extensions.RectExtensions::ScaleSizeBy(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectExtensions_ScaleSizeBy_m8D572E573575457134D039308A76822D77EED77E (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_rect, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_scale, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_pivotPoint, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_rect;
		V_0 = L_0;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_1 = (&V_0);
		float L_2;
		L_2 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_1, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___2_pivotPoint;
		float L_4 = L_3.___x_0;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_1, ((float)il2cpp_codegen_subtract(L_2, L_4)), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_5 = (&V_0);
		float L_6;
		L_6 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_5, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = ___2_pivotPoint;
		float L_8 = L_7.___y_1;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_5, ((float)il2cpp_codegen_subtract(L_6, L_8)), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_9 = (&V_0);
		float L_10;
		L_10 = Rect_get_xMin_mE89C40702926D016A633399E20DB9501E251630D(L_9, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11 = ___1_scale;
		float L_12 = L_11.___x_0;
		Rect_set_xMin_mA873FCFAF9EABA46A026B73CA045192DF1946F19(L_9, ((float)il2cpp_codegen_multiply(L_10, L_12)), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_13 = (&V_0);
		float L_14;
		L_14 = Rect_get_xMax_m2339C7D2FCDA98A9B007F815F6E2059BA6BE425F(L_13, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_15 = ___1_scale;
		float L_16 = L_15.___x_0;
		Rect_set_xMax_m97C28D468455A6D19325D0D862E80A093240D49D(L_13, ((float)il2cpp_codegen_multiply(L_14, L_16)), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_17 = (&V_0);
		float L_18;
		L_18 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F(L_17, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_19 = ___1_scale;
		float L_20 = L_19.___y_1;
		Rect_set_yMin_m9F780E509B9215A9E5826178CF664BD0E486D4EE(L_17, ((float)il2cpp_codegen_multiply(L_18, L_20)), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_21 = (&V_0);
		float L_22;
		L_22 = Rect_get_yMax_mBC37BEE1CD632AADD8B9EAF9FE3BA143F79CAF8E(L_21, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23 = ___1_scale;
		float L_24 = L_23.___y_1;
		Rect_set_yMax_mCF452040E0068A4B3CB15994C0B4B6AD4D78E04B(L_21, ((float)il2cpp_codegen_multiply(L_22, L_24)), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_25 = (&V_0);
		float L_26;
		L_26 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB(L_25, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = ___2_pivotPoint;
		float L_28 = L_27.___x_0;
		Rect_set_x_mAB91AB71898A20762BC66FD0723C4C739C4C3406(L_25, ((float)il2cpp_codegen_add(L_26, L_28)), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_29 = (&V_0);
		float L_30;
		L_30 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49(L_29, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31 = ___2_pivotPoint;
		float L_32 = L_31.___y_1;
		Rect_set_y_mDE91F4B98A6E8623EFB1250FF6526D5DB5855629(L_29, ((float)il2cpp_codegen_add(L_30, L_32)), NULL);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_33 = V_0;
		return L_33;
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
// System.Void HutongGames.Extensions.TextureExtensions::FloodFillArea(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureExtensions_FloodFillArea_m17BE31E2443148F186AE8F580433C493679DA8D7 (Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___0_aTex, int32_t ___1_aX, int32_t ___2_aY, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___3_aFillColor, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m2BCDF8354BB2421C637334345A684BDD65F16081_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mC2C3C175853EFA59303F121EC520A06CD89BA44A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m862485EFC609D55604F50E5DC9FEBF63567245EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mE39FB54CAE8903AC765EF23FFCDB8FA454521D20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* V_2 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_3;
	memset((&V_3), 0, sizeof(V_3));
	Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E* V_4 = NULL;
	Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_9;
	memset((&V_9), 0, sizeof(V_9));
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_0 = ___0_aTex;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 UnityEngine.Texture::get_width() */, L_0);
		V_0 = L_1;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_2 = ___0_aTex;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 UnityEngine.Texture::get_height() */, L_2);
		V_1 = L_3;
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_4 = ___0_aTex;
		NullCheck(L_4);
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_5;
		L_5 = Texture2D_GetPixels32_m48230192E7543765C1A517F251D1D9BFCFB58C3D(L_4, NULL);
		V_2 = L_5;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_6 = V_2;
		int32_t L_7 = ___1_aX;
		int32_t L_8 = ___2_aY;
		int32_t L_9 = V_0;
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add(L_7, ((int32_t)il2cpp_codegen_multiply(L_8, L_9))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		L_12 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_11, NULL);
		V_3 = L_12;
		Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E* L_13 = (Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E*)il2cpp_codegen_object_new(Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Queue_1__ctor_m862485EFC609D55604F50E5DC9FEBF63567245EC(L_13, Queue_1__ctor_m862485EFC609D55604F50E5DC9FEBF63567245EC_RuntimeMethod_var);
		V_4 = L_13;
		Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E* L_14 = V_4;
		int32_t L_15 = ___1_aX;
		int32_t L_16 = ___2_aY;
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_17;
		memset((&L_17), 0, sizeof(L_17));
		Point__ctor_mC13607EF25FC68F6AB06E7C9C650A5BC38C9DDF4((&L_17), L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Queue_1_Enqueue_mC2C3C175853EFA59303F121EC520A06CD89BA44A(L_14, L_17, Queue_1_Enqueue_mC2C3C175853EFA59303F121EC520A06CD89BA44A_RuntimeMethod_var);
		goto IL_0275;
	}

IL_0040:
	{
		Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E* L_18 = V_4;
		NullCheck(L_18);
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_19;
		L_19 = Queue_1_Dequeue_m2BCDF8354BB2421C637334345A684BDD65F16081(L_18, Queue_1_Dequeue_m2BCDF8354BB2421C637334345A684BDD65F16081_RuntimeMethod_var);
		V_5 = L_19;
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_20 = V_5;
		int16_t L_21 = L_20.___x_0;
		V_6 = L_21;
		goto IL_0156;
	}

IL_0057:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_22 = V_2;
		int32_t L_23 = V_6;
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_24 = V_5;
		int16_t L_25 = L_24.___y_1;
		int32_t L_26 = V_0;
		NullCheck(L_22);
		int32_t L_27 = ((int32_t)il2cpp_codegen_add(L_23, ((int32_t)il2cpp_codegen_multiply((int32_t)L_25, L_26))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_28 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
		L_29 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_28, NULL);
		V_7 = L_29;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30 = V_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_3;
		bool L_32;
		L_32 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_30, L_31, NULL);
		if (L_32)
		{
			goto IL_015e;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33 = V_7;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_34 = ___3_aFillColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_34, NULL);
		bool L_36;
		L_36 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_33, L_35, NULL);
		if (L_36)
		{
			goto IL_015e;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_37 = V_2;
		int32_t L_38 = V_6;
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_39 = V_5;
		int16_t L_40 = L_39.___y_1;
		int32_t L_41 = V_0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_42 = ___3_aFillColor;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_38, ((int32_t)il2cpp_codegen_multiply((int32_t)L_40, L_41))))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_42);
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_43 = V_5;
		int16_t L_44 = L_43.___y_1;
		int32_t L_45 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_44, 1))) >= ((int32_t)L_45)))
		{
			goto IL_00f9;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_46 = V_2;
		int32_t L_47 = V_6;
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_48 = V_5;
		int16_t L_49 = L_48.___y_1;
		int32_t L_50 = V_0;
		int32_t L_51 = V_0;
		NullCheck(L_46);
		int32_t L_52 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_47, ((int32_t)il2cpp_codegen_multiply((int32_t)L_49, L_50)))), L_51));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_53 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_54;
		L_54 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_53, NULL);
		V_7 = L_54;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_55 = V_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_56 = V_3;
		bool L_57;
		L_57 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_55, L_56, NULL);
		if (!L_57)
		{
			goto IL_00f9;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_58 = V_7;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_59 = ___3_aFillColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_60;
		L_60 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_59, NULL);
		bool L_61;
		L_61 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_58, L_60, NULL);
		if (!L_61)
		{
			goto IL_00f9;
		}
	}
	{
		Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E* L_62 = V_4;
		int32_t L_63 = V_6;
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_64 = V_5;
		int16_t L_65 = L_64.___y_1;
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_66;
		memset((&L_66), 0, sizeof(L_66));
		Point__ctor_mC13607EF25FC68F6AB06E7C9C650A5BC38C9DDF4((&L_66), L_63, ((int32_t)il2cpp_codegen_add((int32_t)L_65, 1)), /*hidden argument*/NULL);
		NullCheck(L_62);
		Queue_1_Enqueue_mC2C3C175853EFA59303F121EC520A06CD89BA44A(L_62, L_66, Queue_1_Enqueue_mC2C3C175853EFA59303F121EC520A06CD89BA44A_RuntimeMethod_var);
	}

IL_00f9:
	{
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_67 = V_5;
		int16_t L_68 = L_67.___y_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_68, 1))) < ((int32_t)0)))
		{
			goto IL_0150;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_69 = V_2;
		int32_t L_70 = V_6;
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_71 = V_5;
		int16_t L_72 = L_71.___y_1;
		int32_t L_73 = V_0;
		int32_t L_74 = V_0;
		NullCheck(L_69);
		int32_t L_75 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_70, ((int32_t)il2cpp_codegen_multiply((int32_t)L_72, L_73)))), L_74));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_76 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_75));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_77;
		L_77 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_76, NULL);
		V_7 = L_77;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_78 = V_7;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_79 = V_3;
		bool L_80;
		L_80 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_78, L_79, NULL);
		if (!L_80)
		{
			goto IL_0150;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_81 = V_7;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_82 = ___3_aFillColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_83;
		L_83 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_82, NULL);
		bool L_84;
		L_84 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_81, L_83, NULL);
		if (!L_84)
		{
			goto IL_0150;
		}
	}
	{
		Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E* L_85 = V_4;
		int32_t L_86 = V_6;
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_87 = V_5;
		int16_t L_88 = L_87.___y_1;
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_89;
		memset((&L_89), 0, sizeof(L_89));
		Point__ctor_mC13607EF25FC68F6AB06E7C9C650A5BC38C9DDF4((&L_89), L_86, ((int32_t)il2cpp_codegen_subtract((int32_t)L_88, 1)), /*hidden argument*/NULL);
		NullCheck(L_85);
		Queue_1_Enqueue_mC2C3C175853EFA59303F121EC520A06CD89BA44A(L_85, L_89, Queue_1_Enqueue_mC2C3C175853EFA59303F121EC520A06CD89BA44A_RuntimeMethod_var);
	}

IL_0150:
	{
		int32_t L_90 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_90, 1));
	}

IL_0156:
	{
		int32_t L_91 = V_6;
		int32_t L_92 = V_0;
		if ((((int32_t)L_91) < ((int32_t)L_92)))
		{
			goto IL_0057;
		}
	}

IL_015e:
	{
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_93 = V_5;
		int16_t L_94 = L_93.___x_0;
		V_8 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_94, 1));
		goto IL_026d;
	}

IL_016e:
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_95 = V_2;
		int32_t L_96 = V_8;
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_97 = V_5;
		int16_t L_98 = L_97.___y_1;
		int32_t L_99 = V_0;
		NullCheck(L_95);
		int32_t L_100 = ((int32_t)il2cpp_codegen_add(L_96, ((int32_t)il2cpp_codegen_multiply((int32_t)L_98, L_99))));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_101 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_102;
		L_102 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_101, NULL);
		V_9 = L_102;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_103 = V_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_104 = V_3;
		bool L_105;
		L_105 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_103, L_104, NULL);
		if (L_105)
		{
			goto IL_0275;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_106 = V_9;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_107 = ___3_aFillColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_108;
		L_108 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_107, NULL);
		bool L_109;
		L_109 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_106, L_108, NULL);
		if (L_109)
		{
			goto IL_0275;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_110 = V_2;
		int32_t L_111 = V_8;
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_112 = V_5;
		int16_t L_113 = L_112.___y_1;
		int32_t L_114 = V_0;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_115 = ___3_aFillColor;
		NullCheck(L_110);
		(L_110)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_111, ((int32_t)il2cpp_codegen_multiply((int32_t)L_113, L_114))))), (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B)L_115);
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_116 = V_5;
		int16_t L_117 = L_116.___y_1;
		int32_t L_118 = V_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_117, 1))) >= ((int32_t)L_118)))
		{
			goto IL_0210;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_119 = V_2;
		int32_t L_120 = V_8;
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_121 = V_5;
		int16_t L_122 = L_121.___y_1;
		int32_t L_123 = V_0;
		int32_t L_124 = V_0;
		NullCheck(L_119);
		int32_t L_125 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_120, ((int32_t)il2cpp_codegen_multiply((int32_t)L_122, L_123)))), L_124));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_126 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_127;
		L_127 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_126, NULL);
		V_9 = L_127;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_128 = V_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_129 = V_3;
		bool L_130;
		L_130 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_128, L_129, NULL);
		if (!L_130)
		{
			goto IL_0210;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_131 = V_9;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_132 = ___3_aFillColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_133;
		L_133 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_132, NULL);
		bool L_134;
		L_134 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_131, L_133, NULL);
		if (!L_134)
		{
			goto IL_0210;
		}
	}
	{
		Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E* L_135 = V_4;
		int32_t L_136 = V_8;
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_137 = V_5;
		int16_t L_138 = L_137.___y_1;
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_139;
		memset((&L_139), 0, sizeof(L_139));
		Point__ctor_mC13607EF25FC68F6AB06E7C9C650A5BC38C9DDF4((&L_139), L_136, ((int32_t)il2cpp_codegen_add((int32_t)L_138, 1)), /*hidden argument*/NULL);
		NullCheck(L_135);
		Queue_1_Enqueue_mC2C3C175853EFA59303F121EC520A06CD89BA44A(L_135, L_139, Queue_1_Enqueue_mC2C3C175853EFA59303F121EC520A06CD89BA44A_RuntimeMethod_var);
	}

IL_0210:
	{
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_140 = V_5;
		int16_t L_141 = L_140.___y_1;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_141, 1))) < ((int32_t)0)))
		{
			goto IL_0267;
		}
	}
	{
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_142 = V_2;
		int32_t L_143 = V_8;
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_144 = V_5;
		int16_t L_145 = L_144.___y_1;
		int32_t L_146 = V_0;
		int32_t L_147 = V_0;
		NullCheck(L_142);
		int32_t L_148 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_143, ((int32_t)il2cpp_codegen_multiply((int32_t)L_145, L_146)))), L_147));
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_149 = (L_142)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_150;
		L_150 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_149, NULL);
		V_9 = L_150;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_151 = V_9;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_152 = V_3;
		bool L_153;
		L_153 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_151, L_152, NULL);
		if (!L_153)
		{
			goto IL_0267;
		}
	}
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_154 = V_9;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_155 = ___3_aFillColor;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_156;
		L_156 = Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline(L_155, NULL);
		bool L_157;
		L_157 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_154, L_156, NULL);
		if (!L_157)
		{
			goto IL_0267;
		}
	}
	{
		Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E* L_158 = V_4;
		int32_t L_159 = V_8;
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_160 = V_5;
		int16_t L_161 = L_160.___y_1;
		Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1 L_162;
		memset((&L_162), 0, sizeof(L_162));
		Point__ctor_mC13607EF25FC68F6AB06E7C9C650A5BC38C9DDF4((&L_162), L_159, ((int32_t)il2cpp_codegen_subtract((int32_t)L_161, 1)), /*hidden argument*/NULL);
		NullCheck(L_158);
		Queue_1_Enqueue_mC2C3C175853EFA59303F121EC520A06CD89BA44A(L_158, L_162, Queue_1_Enqueue_mC2C3C175853EFA59303F121EC520A06CD89BA44A_RuntimeMethod_var);
	}

IL_0267:
	{
		int32_t L_163 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_subtract(L_163, 1));
	}

IL_026d:
	{
		int32_t L_164 = V_8;
		if ((((int32_t)L_164) >= ((int32_t)0)))
		{
			goto IL_016e;
		}
	}

IL_0275:
	{
		Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E* L_165 = V_4;
		NullCheck(L_165);
		int32_t L_166;
		L_166 = Queue_1_get_Count_mE39FB54CAE8903AC765EF23FFCDB8FA454521D20_inline(L_165, Queue_1_get_Count_mE39FB54CAE8903AC765EF23FFCDB8FA454521D20_RuntimeMethod_var);
		if ((((int32_t)L_166) > ((int32_t)0)))
		{
			goto IL_0040;
		}
	}
	{
		Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* L_167 = ___0_aTex;
		Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* L_168 = V_2;
		NullCheck(L_167);
		Texture2D_SetPixels32_m169F9873A21FB8DECA24DC1B8F06FB23D13BEE2A(L_167, L_168, NULL);
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
// System.Void HutongGames.Extensions.TextureExtensions/Point::.ctor(System.Int16,System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m6D556B563C2873006A45F066E416F9C7F92B42B6 (Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1* __this, int16_t ___0_aX, int16_t ___1_aY, const RuntimeMethod* method) 
{
	{
		int16_t L_0 = ___0_aX;
		__this->___x_0 = L_0;
		int16_t L_1 = ___1_aY;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void Point__ctor_m6D556B563C2873006A45F066E416F9C7F92B42B6_AdjustorThunk (RuntimeObject* __this, int16_t ___0_aX, int16_t ___1_aY, const RuntimeMethod* method)
{
	Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1*>(__this + _offset);
	Point__ctor_m6D556B563C2873006A45F066E416F9C7F92B42B6(_thisAdjusted, ___0_aX, ___1_aY, method);
}
// System.Void HutongGames.Extensions.TextureExtensions/Point::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_mC13607EF25FC68F6AB06E7C9C650A5BC38C9DDF4 (Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1* __this, int32_t ___0_aX, int32_t ___1_aY, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_aX;
		int32_t L_1 = ___1_aY;
		Point__ctor_m6D556B563C2873006A45F066E416F9C7F92B42B6(__this, ((int16_t)L_0), ((int16_t)L_1), NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void Point__ctor_mC13607EF25FC68F6AB06E7C9C650A5BC38C9DDF4_AdjustorThunk (RuntimeObject* __this, int32_t ___0_aX, int32_t ___1_aY, const RuntimeMethod* method)
{
	Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Point_t7523A7C8FA2467A655AD9C3379B5372D6EA3EDF1*>(__this + _offset);
	Point__ctor_mC13607EF25FC68F6AB06E7C9C650A5BC38C9DDF4(_thisAdjusted, ___0_aX, ___1_aY, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* PlayMakerGlobals_get_Variables_m70ED9FFD03D4C4E2B6E6E4C04CEB1AD4E74E7DA4_inline (PlayMakerGlobals_tBAC67870679A215F79CB30D3DCF2B2E2AC519861* __this, const RuntimeMethod* method) 
{
	{
		FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* L_0 = __this->___variables_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* FsmVariables_get_CategoryIDs_m983AF5B6EF89AB9CF32D32D6B185A363E10D5FD6_inline (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = __this->___variableCategoryIDs_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmVariables_set_CategoryIDs_m1590E726F467DC08B9D800953A2D230A4574A584_inline (FsmVariables_t642DF4003233E27ED290932AE8E6D81732A37597* __this, Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___0_value, const RuntimeMethod* method) 
{
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = ___0_value;
		__this->___variableCategoryIDs_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___variableCategoryIDs_20), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NamedVariable_get_Name_mEEEC0BF8012C2948F419749EAA1A528F458768F2_inline (NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NamedVariable_get_ShowInInspector_mDE3C8EE25E8E8A38901EBF8EBD38A9FD3DA7541A_inline (NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___showInInspector_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmFloat_set_Value_mF252A515BE1BF1C4A94E74F807987A6695F7D7C7_inline (FsmFloat_t99C088B49A35579867184120212107B5FB177420* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->___value_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmInt_set_Value_mB7EB98D36202229B329F024942F80A7EF793659E_inline (FsmInt_t07833314E28F53301B7407F3F78EC17EB3BE6667* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_value;
		__this->___value_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmBool_set_Value_m8050208AF94EB950D663485E5D134DA34F3C95F4_inline (FsmBool_t8A6FA70A48171731E5F9B4368E938D388621229D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___value_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F FsmColor_get_Value_mD11C7F67290AA84061E4D8EE055FE09CAC7115E2_inline (FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* __this, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___value_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmColor_set_Value_mB888645B6E49718FE4ECF613BF10083C5BF431DF_inline (FsmColor_t8A0305DC89DC4D0EB253C78731187A4F937EF242* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_value, const RuntimeMethod* method) 
{
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_value;
		__this->___value_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 FsmVector2_get_Value_mB7BE45F818D5B78246F185D66B592987DD3CCF55_inline (FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* __this, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___value_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmVector2_set_Value_m0EB667A0CF1C74FEC94FA97CC2215D74BD3ED904_inline (FsmVector2_t7E80D2004851CD11D0236DD5D0505AA67E07DFF2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_value;
		__this->___value_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmVector3_set_Value_m51DCF660E54F20CF74084C95C41C5D0D9CFDA7CC_inline (FsmVector3_t875B757E70E52C428EAB521EFD313A0DE4C6AAB8* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___value_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D FsmRect_get_Value_mC0A513D684FA20436438E8287209D6DD702DD6B2_inline (FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* __this, const RuntimeMethod* method) 
{
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = __this->___value_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmRect_set_Value_m04CFC74B987B305B26E1B13CAB03D616FDADD141_inline (FsmRect_t07061857AE191B69AE7BC80DE278B90A1589E051* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___0_value, const RuntimeMethod* method) 
{
	{
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_0 = ___0_value;
		__this->___value_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 FsmQuaternion_get_Value_m9B99B77E8A84133DBA0114F1E705FA731DF4011E_inline (FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* __this, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = __this->___value_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmQuaternion_set_Value_m9CC98C1DEB6EB81CAED46789D0D0891E78990FBD_inline (FsmQuaternion_t067402E7B0C885E236AFB897F7E91D9CCA665B85* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_value;
		__this->___value_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmObject_set_Value_m80FD7143C40FE8CB2C0642B134E12A6BE5972C73_inline (FsmObject_t69096525269982576D57D563C4659F408D7A2A6D* __this, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_value, const RuntimeMethod* method) 
{
	{
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_0 = ___0_value;
		__this->___value_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmString_set_Value_m73BB296E0E78080EA98402FA2CCDD3779781C8B0_inline (FsmString_t42882578FB075E765D8E753F75A676E6E9D8A3D4* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_value;
		__this->___value_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___value_6), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool PlayMakerGlobals_get_IsPlaying_mB87FAAD797E64E9C2069469D2F90A73843726562_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayMakerGlobals_tBAC67870679A215F79CB30D3DCF2B2E2AC519861_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ((PlayMakerGlobals_tBAC67870679A215F79CB30D3DCF2B2E2AC519861_StaticFields*)il2cpp_codegen_static_fields_for(PlayMakerGlobals_tBAC67870679A215F79CB30D3DCF2B2E2AC519861_il2cpp_TypeInfo_var))->___U3CIsPlayingU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NamedVariable_set_CastVariable_m2246E073CFE5EB31BC98213FA2A96C471EAE0BA4_inline (NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* __this, NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* ___0_value, const RuntimeMethod* method) 
{
	{
		NamedVariable_t2089C315FDE5193B2A1029C1B8814C82052526B6* L_0 = ___0_value;
		__this->___obj_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___obj_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FsmStateAction_set_Enabled_m4BD8D99D7B45E4AB710F048023AEC99D5CED647E_inline (FsmStateAction_t0804A0232CBB77766DD11F3CDBA380D7BDE3F01D* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___0_value;
		__this->___enabled_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Mathf_Approximately_m1DADD012A8FC82E11FB282501AE2EBBF9A77150B_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		float L_0 = ___1_b;
		float L_1 = ___0_a;
		float L_2;
		L_2 = fabsf(((float)il2cpp_codegen_subtract(L_0, L_1)));
		float L_3 = ___0_a;
		float L_4;
		L_4 = fabsf(L_3);
		float L_5 = ___1_b;
		float L_6;
		L_6 = fabsf(L_5);
		float L_7;
		L_7 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(L_4, L_6, NULL);
		float L_8 = ((Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_StaticFields*)il2cpp_codegen_static_fields_for(Mathf_tE284D016E3B297B72311AAD9EB8F0E643F6A4682_il2cpp_TypeInfo_var))->___Epsilon_0;
		float L_9;
		L_9 = Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline(((float)il2cpp_codegen_multiply((9.99999997E-07f), L_7)), ((float)il2cpp_codegen_multiply(L_8, (8.0f))), NULL);
		V_0 = (bool)((((float)L_2) < ((float)L_9))? 1 : 0);
		goto IL_0035;
	}

IL_0035:
	{
		bool L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mF5379E63D2BBAC76D090748695D833934F8AD051_inline (float ___0_a, float ___1_b, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m47CBB138122B400E0B1F4BFD7C30A6C2C00FCA3E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___0_c, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___0_c;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___0_c;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___0_c;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___0_c;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_lhs;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_rhs;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_lhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_rhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_mB407E755F3B4C51C54D24338D00A352E5B16E7F3_gshared_inline (Enumerator_t44124D16E0B2F7308FF4069BE06369B5A83896EB* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____currentValue_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_item, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = __this->____items_1;
		V_0 = L_1;
		int32_t L_2 = __this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___0_item;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mE39FB54CAE8903AC765EF23FFCDB8FA454521D20_gshared_inline (Queue_1_tAC76FE097136FD20706687FBD6674A7738554B7E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_c;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_c;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_c;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_c;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_lhs;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___1_rhs;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_lhs;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___1_rhs;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___0_lhs;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___1_rhs;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___0_lhs;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___1_rhs;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
