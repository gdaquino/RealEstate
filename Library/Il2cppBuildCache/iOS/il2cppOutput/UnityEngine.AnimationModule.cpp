#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040;
// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174;
// UnityEngine.AnimationState
struct AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AnimatorOverrideController
struct AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7;
// System.String
struct String_t;
// UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.Animation/Enumerator
struct Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530;
// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5;

IL2CPP_EXTERN_C RuntimeClass* AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HumanBodyBones_tA2A904890A05ABCFFAB7E119244E97C5EA9807E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00F97321929E0D7989E72D633D157BD761DD173A;
IL2CPP_EXTERN_C String_t* _stringLiteral4DEE968069F34C26613ADFCD69C41EFC29314286;
IL2CPP_EXTERN_C String_t* _stringLiteral860B9EA7CDAB02A8A4B38336805EAE2FBA31F09C;
IL2CPP_EXTERN_C String_t* _stringLiteral8DC2252638D84FAF2C30B95D54EC83F52FA6C630;
IL2CPP_EXTERN_C String_t* _stringLiteral98C704D69BD1A288ED31DEE4ED4E50097A2D7018;
IL2CPP_EXTERN_C String_t* _stringLiteralA3C8FF345EC45846B2EE6801F84DD49340F0A9E1;
IL2CPP_EXTERN_C String_t* _stringLiteralBF563F6FCC25CE41FFE0BF7590AF9F4475916665;
IL2CPP_EXTERN_C String_t* _stringLiteralD1DCB778EB9DF1B12AD26B829002FF8E78A1AFCE;
IL2CPP_EXTERN_C String_t* _stringLiteralD2435BFAEB0372E848D9BE812E3B06AB862CC3D1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE066D08B565F88D413FDACA14C42BFF008FF4EB9;
IL2CPP_EXTERN_C String_t* _stringLiteralF5510C45DDAD777CCB4893578D995C9739F990F2;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com;;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke;;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t8B36B9B16FF72CF5A0EBA03D2FA162E77C86534C 
{
};

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// UnityEngine.HumanTrait
struct HumanTrait_t4EF6FC8790C40BD5BC9D36765D43202A4FAF219C  : public RuntimeObject
{
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

// UnityEngine.Animation/Enumerator
struct Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530  : public RuntimeObject
{
	// UnityEngine.Animation UnityEngine.Animation/Enumerator::m_Outer
	Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___m_Outer_0;
	// System.Int32 UnityEngine.Animation/Enumerator::m_CurrentIndex
	int32_t ___m_CurrentIndex_1;
};

// UnityEngine.AnimatorClipInfo
struct AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 
{
	// System.Int32 UnityEngine.AnimatorClipInfo::m_ClipInstanceID
	int32_t ___m_ClipInstanceID_0;
	// System.Single UnityEngine.AnimatorClipInfo::m_Weight
	float ___m_Weight_1;
};

// UnityEngine.AnimatorStateInfo
struct AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 
{
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Name
	int32_t ___m_Name_0;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Path
	int32_t ___m_Path_1;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_FullPath
	int32_t ___m_FullPath_2;
	// System.Single UnityEngine.AnimatorStateInfo::m_NormalizedTime
	float ___m_NormalizedTime_3;
	// System.Single UnityEngine.AnimatorStateInfo::m_Length
	float ___m_Length_4;
	// System.Single UnityEngine.AnimatorStateInfo::m_Speed
	float ___m_Speed_5;
	// System.Single UnityEngine.AnimatorStateInfo::m_SpeedMultiplier
	float ___m_SpeedMultiplier_6;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Tag
	int32_t ___m_Tag_7;
	// System.Int32 UnityEngine.AnimatorStateInfo::m_Loop
	int32_t ___m_Loop_8;
};

// UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD 
{
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_FullPath
	int32_t ___m_FullPath_0;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_UserName
	int32_t ___m_UserName_1;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_Name
	int32_t ___m_Name_2;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_HasFixedDuration
	bool ___m_HasFixedDuration_3;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_Duration
	float ___m_Duration_4;
	// System.Single UnityEngine.AnimatorTransitionInfo::m_NormalizedTime
	float ___m_NormalizedTime_5;
	// System.Boolean UnityEngine.AnimatorTransitionInfo::m_AnyState
	bool ___m_AnyState_6;
	// System.Int32 UnityEngine.AnimatorTransitionInfo::m_TransitionType
	int32_t ___m_TransitionType_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};
// Native definition for COM marshalling of UnityEngine.AnimatorTransitionInfo
struct AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com
{
	int32_t ___m_FullPath_0;
	int32_t ___m_UserName_1;
	int32_t ___m_Name_2;
	int32_t ___m_HasFixedDuration_3;
	float ___m_Duration_4;
	float ___m_NormalizedTime_5;
	int32_t ___m_AnyState_6;
	int32_t ___m_TransitionType_7;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Animations.DiscreteEvaluationAttribute
struct DiscreteEvaluationAttribute_tF23FCB5AB01B394BF5BD84623364A965C90F8BB9  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
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

// UnityEngine.Animations.NotKeyableAttribute
struct NotKeyableAttribute_tDDB6B25B26F649E3CED893EE1E63B6DE66844483  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
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

// UnityEngine.SharedBetweenAnimatorsAttribute
struct SharedBetweenAnimatorsAttribute_t44FFD5D3B5AEBB394182D66E2198FA398087449C  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.AnimationBlendMode
struct AnimationBlendMode_tCCEF046F7098CA1E7E7B645DC4F190A1D4DFF034 
{
	// System.Int32 UnityEngine.AnimationBlendMode::value__
	int32_t ___value___2;
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.AnimationEventSource
struct AnimationEventSource_t48460212F6BC00064115B85C42B656262118685E 
{
	// System.Int32 UnityEngine.AnimationEventSource::value__
	int32_t ___value___2;
};

// UnityEngine.Animations.AnimationHumanStream
struct AnimationHumanStream_t31E8EAD3F7C2C29CAE7B4EFB87AA84ECC6DCC6EC 
{
	// System.IntPtr UnityEngine.Animations.AnimationHumanStream::stream
	intptr_t ___stream_0;
};

// UnityEngine.Animations.AnimationStream
struct AnimationStream_tA73510DCEE63720142DF4F8E15C337A48E47B94A 
{
	// System.UInt32 UnityEngine.Animations.AnimationStream::m_AnimatorBindingsVersion
	uint32_t ___m_AnimatorBindingsVersion_0;
	// System.IntPtr UnityEngine.Animations.AnimationStream::constant
	intptr_t ___constant_1;
	// System.IntPtr UnityEngine.Animations.AnimationStream::input
	intptr_t ___input_2;
	// System.IntPtr UnityEngine.Animations.AnimationStream::output
	intptr_t ___output_3;
	// System.IntPtr UnityEngine.Animations.AnimationStream::workspace
	intptr_t ___workspace_4;
	// System.IntPtr UnityEngine.Animations.AnimationStream::inputStreamAccessor
	intptr_t ___inputStreamAccessor_5;
	// System.IntPtr UnityEngine.Animations.AnimationStream::animationHandleBinder
	intptr_t ___animationHandleBinder_6;
};

// UnityEngine.AnimatorCullingMode
struct AnimatorCullingMode_t7B1AB318F80E15F15C5205212792CFE07986F45F 
{
	// System.Int32 UnityEngine.AnimatorCullingMode::value__
	int32_t ___value___2;
};

// UnityEngine.AvatarIKGoal
struct AvatarIKGoal_t85129D04ABC13A90A81A5FCF6C76DD178ACC27EE 
{
	// System.Int32 UnityEngine.AvatarIKGoal::value__
	int32_t ___value___2;
};

// UnityEngine.AvatarTarget
struct AvatarTarget_t10076F7CB4D67D2E23724EFEB64D7965E3F2F6CF 
{
	// System.Int32 UnityEngine.AvatarTarget::value__
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

// UnityEngine.HumanBodyBones
struct HumanBodyBones_tA2A904890A05ABCFFAB7E119244E97C5EA9807E6 
{
	// System.Int32 UnityEngine.HumanBodyBones::value__
	int32_t ___value___2;
};

// UnityEngine.HumanLimit
struct HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E 
{
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;
};

// UnityEngine.MatchTargetWeightMask
struct MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 
{
	// UnityEngine.Vector3 UnityEngine.MatchTargetWeightMask::m_PositionXYZWeight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_PositionXYZWeight_0;
	// System.Single UnityEngine.MatchTargetWeightMask::m_RotationWeight
	float ___m_RotationWeight_1;
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

// UnityEngine.PlayMode
struct PlayMode_t571019F3AFC34993F6D4BBE463D60017D4AED94C 
{
	// System.Int32 UnityEngine.PlayMode::value__
	int32_t ___value___2;
};

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 
{
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;
};

// UnityEngine.Playables.PlayableOutputHandle
struct PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 
{
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.SkeletonBone
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126 
{
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
};
// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___scale_4;
};

// UnityEngine.StateInfoIndex
struct StateInfoIndex_t72A94D59B6A539A646B4D4E53807FB8337CF3BAE 
{
	// System.Int32 UnityEngine.StateInfoIndex::value__
	int32_t ___value___2;
};

// UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2  : public RuntimeObject
{
	// System.IntPtr UnityEngine.TrackedReference::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.TrackedReference
struct TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.WrapMode
struct WrapMode_t6C6EABC32662DF078C3C977196618603C2F3A079 
{
	// System.Int32 UnityEngine.WrapMode::value__
	int32_t ___value___2;
};

// UnityEngine.Animations.AnimationClipPlayable
struct AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174  : public RuntimeObject
{
	// System.Single UnityEngine.AnimationEvent::m_Time
	float ___m_Time_0;
	// System.String UnityEngine.AnimationEvent::m_FunctionName
	String_t* ___m_FunctionName_1;
	// System.String UnityEngine.AnimationEvent::m_StringParameter
	String_t* ___m_StringParameter_2;
	// UnityEngine.Object UnityEngine.AnimationEvent::m_ObjectReferenceParameter
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___m_ObjectReferenceParameter_3;
	// System.Single UnityEngine.AnimationEvent::m_FloatParameter
	float ___m_FloatParameter_4;
	// System.Int32 UnityEngine.AnimationEvent::m_IntParameter
	int32_t ___m_IntParameter_5;
	// System.Int32 UnityEngine.AnimationEvent::m_MessageOptions
	int32_t ___m_MessageOptions_6;
	// UnityEngine.AnimationEventSource UnityEngine.AnimationEvent::m_Source
	int32_t ___m_Source_7;
	// UnityEngine.AnimationState UnityEngine.AnimationEvent::m_StateSender
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	// UnityEngine.AnimatorStateInfo UnityEngine.AnimationEvent::m_AnimatorStateInfo
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	// UnityEngine.AnimatorClipInfo UnityEngine.AnimationEvent::m_AnimatorClipInfo
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke
{
	float ___m_Time_0;
	char* ___m_FunctionName_1;
	char* ___m_StringParameter_2;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};
// Native definition for COM marshalling of UnityEngine.AnimationEvent
struct AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com
{
	float ___m_Time_0;
	Il2CppChar* ___m_FunctionName_1;
	Il2CppChar* ___m_StringParameter_2;
	Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com* ___m_ObjectReferenceParameter_3;
	float ___m_FloatParameter_4;
	int32_t ___m_IntParameter_5;
	int32_t ___m_MessageOptions_6;
	int32_t ___m_Source_7;
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* ___m_StateSender_8;
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___m_AnimatorStateInfo_9;
	AnimatorClipInfo_t0C913173594C893E36282602F54ABD06AC1CFA03 ___m_AnimatorClipInfo_10;
};

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationMixerPlayable
struct AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationOffsetPlayable
struct AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationPlayableOutput
struct AnimationPlayableOutput_t753AC95DC826789BC537D18449E93114777DDF4E 
{
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_tEB217645A8C0356A3AC6F964F283003B9740E883 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationPosePlayable
struct AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationRemoveScalePlayable
struct AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Animations.AnimationScriptPlayable
struct AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.AnimationState
struct AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE  : public TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2
{
};

// UnityEngine.Animations.AnimatorControllerPlayable
struct AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A 
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::m_Handle
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Handle_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.HumanBone
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8 
{
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E ___limit_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E ___limit_2;
};

// UnityEngine.Motion
struct Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.AnimationClip
struct AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712  : public Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC
{
};

// UnityEngine.AnimatorOverrideController
struct AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493  : public RuntimeAnimatorController_t6F7C753402B42EC23C163099CF935C5E0D7A7254
{
	// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback UnityEngine.AnimatorOverrideController::OnOverrideControllerDirty
	OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* ___OnOverrideControllerDirty_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.IndexOutOfRangeException
struct IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.StateMachineBehaviour
struct StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback
struct OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5  : public MulticastDelegate_t
{
};

// UnityEngine.Animation
struct Animation_t6593B06C39E3B139808B19F2C719C860F3F61040  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// <Module>

// <Module>

// UnityEngine.HumanTrait

// UnityEngine.HumanTrait

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// UnityEngine.Animation/Enumerator

// UnityEngine.Animation/Enumerator

// UnityEngine.AnimatorClipInfo

// UnityEngine.AnimatorClipInfo

// UnityEngine.AnimatorStateInfo

// UnityEngine.AnimatorStateInfo

// UnityEngine.AnimatorTransitionInfo

// UnityEngine.AnimatorTransitionInfo

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Animations.DiscreteEvaluationAttribute

// UnityEngine.Animations.DiscreteEvaluationAttribute

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};

// System.Enum

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.Animations.NotKeyableAttribute

// UnityEngine.Animations.NotKeyableAttribute

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// UnityEngine.SharedBetweenAnimatorsAttribute

// UnityEngine.SharedBetweenAnimatorsAttribute

// System.Single

// System.Single

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

// System.Void

// System.Void

// UnityEngine.AnimationBlendMode

// UnityEngine.AnimationBlendMode

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// UnityEngine.AnimationEventSource

// UnityEngine.AnimationEventSource

// UnityEngine.Animations.AnimationHumanStream

// UnityEngine.Animations.AnimationHumanStream

// UnityEngine.Animations.AnimationStream

// UnityEngine.Animations.AnimationStream

// UnityEngine.AnimatorCullingMode

// UnityEngine.AnimatorCullingMode

// UnityEngine.AvatarIKGoal

// UnityEngine.AvatarIKGoal

// UnityEngine.AvatarTarget

// UnityEngine.AvatarTarget

// System.Delegate

// System.Delegate

// UnityEngine.HumanBodyBones

// UnityEngine.HumanBodyBones

// UnityEngine.HumanLimit

// UnityEngine.HumanLimit

// UnityEngine.MatchTargetWeightMask

// UnityEngine.MatchTargetWeightMask

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.PlayMode

// UnityEngine.PlayMode

// UnityEngine.Playables.PlayableHandle
struct PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_StaticFields
{
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___m_Null_2;
};

// UnityEngine.Playables.PlayableHandle

// UnityEngine.SkeletonBone

// UnityEngine.SkeletonBone

// UnityEngine.StateInfoIndex

// UnityEngine.StateInfoIndex

// UnityEngine.TrackedReference

// UnityEngine.TrackedReference

// UnityEngine.WrapMode

// UnityEngine.WrapMode

// UnityEngine.Animations.AnimationClipPlayable

// UnityEngine.Animations.AnimationClipPlayable

// UnityEngine.AnimationEvent

// UnityEngine.AnimationEvent

// UnityEngine.Animations.AnimationLayerMixerPlayable
struct AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_StaticFields
{
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationLayerMixerPlayable

// UnityEngine.Animations.AnimationMixerPlayable
struct AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_StaticFields
{
	// UnityEngine.Animations.AnimationMixerPlayable UnityEngine.Animations.AnimationMixerPlayable::m_NullPlayable
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationMixerPlayable

// UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_StaticFields
{
	// UnityEngine.Animations.AnimationMotionXToDeltaPlayable UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_NullPlayable
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationMotionXToDeltaPlayable

// UnityEngine.Animations.AnimationOffsetPlayable
struct AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_StaticFields
{
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationOffsetPlayable

// UnityEngine.Animations.AnimationPlayableOutput

// UnityEngine.Animations.AnimationPlayableOutput

// UnityEngine.Animations.AnimationPosePlayable
struct AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_StaticFields
{
	// UnityEngine.Animations.AnimationPosePlayable UnityEngine.Animations.AnimationPosePlayable::m_NullPlayable
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationPosePlayable

// UnityEngine.Animations.AnimationRemoveScalePlayable
struct AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_StaticFields
{
	// UnityEngine.Animations.AnimationRemoveScalePlayable UnityEngine.Animations.AnimationRemoveScalePlayable::m_NullPlayable
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationRemoveScalePlayable

// UnityEngine.Animations.AnimationScriptPlayable
struct AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_StaticFields
{
	// UnityEngine.Animations.AnimationScriptPlayable UnityEngine.Animations.AnimationScriptPlayable::m_NullPlayable
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimationScriptPlayable

// UnityEngine.AnimationState

// UnityEngine.AnimationState

// UnityEngine.Animations.AnimatorControllerPlayable
struct AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_StaticFields
{
	// UnityEngine.Animations.AnimatorControllerPlayable UnityEngine.Animations.AnimatorControllerPlayable::m_NullPlayable
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___m_NullPlayable_1;
};

// UnityEngine.Animations.AnimatorControllerPlayable

// UnityEngine.HumanBone

// UnityEngine.HumanBone

// UnityEngine.Motion

// UnityEngine.Motion

// UnityEngine.RuntimeAnimatorController

// UnityEngine.RuntimeAnimatorController

// UnityEngine.ScriptableObject

// UnityEngine.ScriptableObject

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

// UnityEngine.AnimationClip

// UnityEngine.AnimationClip

// UnityEngine.AnimatorOverrideController

// UnityEngine.AnimatorOverrideController

// System.IndexOutOfRangeException

// System.IndexOutOfRangeException

// System.InvalidCastException

// System.InvalidCastException

// System.InvalidOperationException

// System.InvalidOperationException

// UnityEngine.StateMachineBehaviour

// UnityEngine.StateMachineBehaviour

// UnityEngine.Transform

// UnityEngine.Transform

// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback

// UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback

// UnityEngine.Animation

// UnityEngine.Animation

// UnityEngine.Animator

// UnityEngine.Animator
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

IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_pinvoke_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_back(const Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C& unmarshaled);
IL2CPP_EXTERN_C void Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshal_com_cleanup(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com& marshaled);

// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_gshared (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animation::StopNamed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_StopNamed_m3D7C41081019DCBF820B002CCC7368B34182AB5B (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animation::RewindNamed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_RewindNamed_mDE5F5DE24A291E3B8B385555C7F7954EB3DB2211 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* Animation_GetState_mFE0B2A4F4BD7F3DDE2CA699D6036607F0E7259FB (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m894966605BBBE66B5D4AEEB52688BAFD7DA7DAA3 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___0_animation, int32_t ___1_mode, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_AddClip_m0DBAB71E23EA248D6A18C705B8AF0EA140D2FFDF (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___0_clip, String_t* ___1_newName, int32_t ___2_firstFrame, int32_t ___3_lastFrame, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_AddClip_m87A5BE2BFAC7F12D7C0FE5D954E657FDB8B4A7F6 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___0_clip, String_t* ___1_newName, int32_t ___2_firstFrame, int32_t ___3_lastFrame, bool ___4_addLoopFrame, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF3FB66377864673B8DAF14A36DB6D069B98A92F4 (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___0_outer, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animation::GetStateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationState::AddMixingTransform(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_AddMixingTransform_m7F034D92A5317EB18D0A4B2B0AFC9767F0E151E5 (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_mix, bool ___1_recursive, const RuntimeMethod* method) ;
// System.Void UnityEngine.TrackedReference::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrackedReference__ctor_m0E498FD0AD5807B7B91CB0005170E522DAE3616A (TrackedReference_tF35FF4FB6E89ACD81C24469FAF0CA6FFF29262A2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Motion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Motion__ctor_mB6190858E566BFA1B80D2E94B65CD27920A49443 (Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___0_self, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A (String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_shortNameHash_mEE816B999C282A3BA95AFC64278B994E899B7004 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimatorStateInfo::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_length_m2FAE317264F7C796427207F8F28E550DB49F9541 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_tagHash_m3F4738079576820B7D5942854882B2B468CDD55A (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsTag_m9A3181AA167702263EB283AF27B21D08EAD895EF (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, String_t* ___0_tag, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_get_loop_m3DC728FC9AF0D4B27B3C28157395BB2F57CC3DA7 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_IsName_m6C0C8BBF7E241EFEE2199D5D97DC59958BFBE324 (AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_IsUserName_m91FDB1462C56FCDB3F9A209020D2014B06833DBE (AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_nameHash_m31EC38373C30F6A8BADA9AD27EBAB6BC5B9185CE (AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_userNameHash_mBAD5D1898CE34F1E0657D6BBEA18C4A35EC686EE (AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorTransitionInfo_get_normalizedTime_m0D107F16FB8351EBB0E8F8A4367A69916E260072 (AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MatchTargetWeightMask::set_positionXYZWeight(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchTargetWeightMask_set_positionXYZWeight_m59F98F90D7089D61AD3B375E788BEE5D78753E0B (MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.MatchTargetWeightMask::set_rotationWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchTargetWeightMask_set_rotationWeight_m6E9398D9F0017122E85576DE6482A17E2C8A15D2 (MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetFloatIDDamp(System.Int32,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatIDDamp_m013A6F5FD90DFA125C152BF42F299157AEE96330 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, float ___1_value, float ___2_dampTime, float ___3_deltaTime, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, bool ___1_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Animator::GetIntegerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveString_m8BDBA93917C92923DB297EBE8F141FA6C695AF61 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaPosition_Injected_mF37497B00055319EE54006C19AAEE221A99791F4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_deltaRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaRotation_Injected_mFEC802815227FE4B11491F80B281425A10E19ABD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_rootPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_rootPosition_Injected_m7F7BA9F18B8866C40649D61A36ADFF42EDF5B88D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_rootRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_rootRotation_Injected_m670A2B5E5EE664CA5ED9D711733C102E0BD72AFB (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::CheckIfInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animator::get_bodyPositionInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_bodyPositionInternal_m595442E15D03EA53B40C2760C99B4D52C536EF06 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_bodyPositionInternal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyPositionInternal_m6042D23A6CC550D438B4522C4755BD08692D2F1A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_bodyPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_bodyPositionInternal_Injected_m44C1D9729A292329E4B4A66B1DE583368ED9B2B3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_bodyPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyPositionInternal_Injected_m434A0C848EF277237CBAA68C4A94A1DD4A05DC75 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animator::get_bodyRotationInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_get_bodyRotationInternal_m62411259235851629AB914E29B04029A04D8F165 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_bodyRotationInternal(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyRotationInternal_mA381F771D03290AF383D3203071D9B04746BD2E6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_bodyRotationInternal_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_bodyRotationInternal_Injected_m60262D5C0C987E21A358FF7F67887C3B23FEDD5E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::set_bodyRotationInternal_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyRotationInternal_Injected_m0BDC67195DA58582AEFC3567906106BD96C1D173 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Animator::GetGoalPosition(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetGoalPosition_mE65C3AB94643D8036BF6C8014408CAB0F9BB5A98 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_m0811DE827A66638ECA79A2BAA6A59D9D21D7D5A2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_goalPosition, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_goalPosition, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Animator::GetGoalRotation(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_GetGoalRotation_mB7B67DE4EBA3C26D713754D1D76D4F529E783DB2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetGoalRotation_Injected_m76092248C853479A1E6178DA4AF19F69FF8C8F75 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_m1BFE2425DE75954B1233ABD96D6AB3682D42E5BA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_goalRotation, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_Injected_m93587602A0C43AC9B184D30B03F751C02E6BF045 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_goalRotation, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetGoalWeightPosition(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetGoalWeightPosition_m0E626A12D7B157A0B17D231D5E6175D062937E6A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, float ___1_value, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetGoalWeightRotation(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetGoalWeightRotation_m10C6574D1AF23568F737D0347F35A2B5BE670725 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetGoalWeightRotation(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightRotation_mA8A5BE4C22583CFB7C66EF59A1997E241A3001EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, float ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetLookAtPositionInternal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_m6A20F2667C36D8363BA0F38A961BAB941E2DDC1B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lookAtPosition, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetLookAtPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_Injected_mE50AFECADA7DC76D0E73C6B7131EBBD1CED5D59D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_lookAtPosition, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_weight, float ___1_bodyWeight, float ___2_headWeight, float ___3_eyesWeight, float ___4_clampWeight, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, int32_t ___1_stateInfoIndex, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* ___2_info, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32,UnityEngine.AnimatorTransitionInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorTransitionInfo_m933890D15E832719A2DBBAFCA587FEB4C7F1C6E9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* ___1_info, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_pivotPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_pivotPosition_Injected_m381B79F41C78BD14DC47FA49C3B20287E50A8EC6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::MatchTarget_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32,UnityEngine.MatchTargetWeightMask&,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_MatchTarget_Injected_m1B2CB01E3B71964EA09D70C42583F613641925C7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_matchPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_matchRotation, int32_t ___2_targetBodyPart, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25* ___3_weightMask, float ___4_startNormalizedTime, float ___5_targetNormalizedTime, bool ___6_completeMatch, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,UnityEngine.MatchTargetWeightMask,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_MatchTarget_mD1C55BE6B64912264BD1280498BFF938B8501596 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_matchPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_matchRotation, int32_t ___2_targetBodyPart, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 ___3_weightMask, float ___4_startNormalizedTime, float ___5_targetNormalizedTime, bool ___6_completeMatch, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_mA6769671098D9B30D68A27DF00D355CC5E28D56C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, float ___1_normalizedTransitionDuration, int32_t ___2_layer, float ___3_normalizedTimeOffset, float ___4_normalizedTransitionTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateHashName, float ___1_normalizedTransitionDuration, int32_t ___2_layer, float ___3_normalizedTimeOffset, float ___4_normalizedTransitionTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateNameHash, int32_t ___1_layer, float ___2_normalizedTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_targetPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_targetPosition_Injected_m7114A2CB2FE3A982E0967119BF3280258EEA4166 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::get_targetRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_targetRotation_Injected_m64CE93A396B9F5BF5F77EEE843484C38C5975F1C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ret, const RuntimeMethod* method) ;
// System.String System.Enum::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void System.IndexOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425 (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925 (int32_t ___0_humanId, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransformInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_humanBoneId, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetRecorderStartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetRecorderStartTime_mC9E51A2F33D7297124F3F93322E28FBFFCB392C4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Animator::GetRecorderStopTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetRecorderStopTime_m928EDD878985FD098B38DBC89AD7FC935FF95681 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::get_logWarnings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animator::IsInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_inline (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::op_Equality(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_x, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___1_y, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_gshared)(__this, method);
}
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetSingleLayerOptimizationInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_handle, bool ___1_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, bool ___1_singleLayerOptimization, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___0_other, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7 (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, const RuntimeMethod* method) ;
// System.Boolean System.ValueType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3 (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___0_other, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_gshared)(__this, method);
}
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::Equals(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___0_other, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) ;
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70 (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_gshared)(__this, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___0_other, const RuntimeMethod* method) ;
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
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_mB618EFE75A50CBAA3EE6471E64A3E2CA2A2C90FD (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_mC1A83A4F693AF3AB51BC592A0CE525CE4F320D6B (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_mC113F0B2F53847F9A6755B82D0AC53C971171CFD (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_m7229D5EFBA432665B9046FC3C21D463FFD281978 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_m310C17694D8D1B9D60D549259A39837F22FD3240 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_m0CEFF9E4946BFDC4F7066BEB4C961169DBC5073F (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, int32_t ___1_stateMachinePathHash, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_m384B808E3961C6C2C375DF7487EF2B49E44E6CD7 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, int32_t ___1_stateMachinePathHash, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateEnter(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateEnter_m491D81A9A64DE4AE02415A5909B74AE947EAE1B9 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___3_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateUpdate(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateUpdate_mF3130BE7BDD7C8B2470303FB1986A336E47CC98C (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___3_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateExit(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateExit_mD47A506ACE251A6341115CBE5607D05C01747127 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___3_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMove(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMove_m1A01C10E754426572C7BBA7AA13044FDA372FDFC (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___3_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateIK(UnityEngine.Animator,UnityEngine.AnimatorStateInfo,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateIK_mCE3B4C71868B564EE6BE4B8663535058705C3B72 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 ___1_stateInfo, int32_t ___2_layerIndex, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___3_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineEnter(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineEnter_m0399B12419A4F990F41BD589C833E2D2C0076762 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, int32_t ___1_stateMachinePathHash, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___2_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::OnStateMachineExit(UnityEngine.Animator,System.Int32,UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour_OnStateMachineExit_mF8BB1A8851B0699FC1D85F538E16EF12C08BBB93 (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___0_animator, int32_t ___1_stateMachinePathHash, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___2_controller, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void UnityEngine.StateMachineBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateMachineBehaviour__ctor_m9663A75D1016E16D7E3A48E2D4E6466A041A00AB (StateMachineBehaviour_t59C5685227B06222F5AF7027E2DA530AB99AFDF7* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void UnityEngine.Animation::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Stop_mE11F232FCFA0219EADD8080D7AD7CC626A536756 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) 
{
	typedef void (*Animation_Stop_mE11F232FCFA0219EADD8080D7AD7CC626A536756_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*);
	static Animation_Stop_mE11F232FCFA0219EADD8080D7AD7CC626A536756_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_Stop_mE11F232FCFA0219EADD8080D7AD7CC626A536756_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::Stop()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animation::Stop(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Stop_mC7063EBC09142C002FC225F5B16051FA8ABDAE65 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		Animation_StopNamed_m3D7C41081019DCBF820B002CCC7368B34182AB5B(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::StopNamed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_StopNamed_m3D7C41081019DCBF820B002CCC7368B34182AB5B (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef void (*Animation_StopNamed_m3D7C41081019DCBF820B002CCC7368B34182AB5B_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, String_t*);
	static Animation_StopNamed_m3D7C41081019DCBF820B002CCC7368B34182AB5B_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_StopNamed_m3D7C41081019DCBF820B002CCC7368B34182AB5B_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::StopNamed(System.String)");
	_il2cpp_icall_func(__this, ___0_name);
}
// System.Void UnityEngine.Animation::Rewind(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Rewind_m41BCBFFCED0B8FA122A6543FE2A7C7520847FC78 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		Animation_RewindNamed_mDE5F5DE24A291E3B8B385555C7F7954EB3DB2211(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::RewindNamed(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_RewindNamed_mDE5F5DE24A291E3B8B385555C7F7954EB3DB2211 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef void (*Animation_RewindNamed_mDE5F5DE24A291E3B8B385555C7F7954EB3DB2211_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, String_t*);
	static Animation_RewindNamed_mDE5F5DE24A291E3B8B385555C7F7954EB3DB2211_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_RewindNamed_mDE5F5DE24A291E3B8B385555C7F7954EB3DB2211_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::RewindNamed(System.String)");
	_il2cpp_icall_func(__this, ___0_name);
}
// UnityEngine.AnimationState UnityEngine.Animation::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* Animation_get_Item_m60997A8CDE7F415FC55FBB0D6D3F28339C4B32E8 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* V_0 = NULL;
	{
		String_t* L_0 = ___0_name;
		AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_1;
		L_1 = Animation_GetState_mFE0B2A4F4BD7F3DDE2CA699D6036607F0E7259FB(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m95CC43633DC2B587AB3A0D1FF5F93B863A5440D5 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___0_animation, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		String_t* L_0 = ___0_animation;
		bool L_1;
		L_1 = Animation_Play_m894966605BBBE66B5D4AEEB52688BAFD7DA7DAA3(__this, L_0, 0, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animation_Play_m894966605BBBE66B5D4AEEB52688BAFD7DA7DAA3 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___0_animation, int32_t ___1_mode, const RuntimeMethod* method) 
{
	typedef bool (*Animation_Play_m894966605BBBE66B5D4AEEB52688BAFD7DA7DAA3_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, String_t*, int32_t);
	static Animation_Play_m894966605BBBE66B5D4AEEB52688BAFD7DA7DAA3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_Play_m894966605BBBE66B5D4AEEB52688BAFD7DA7DAA3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::Play(System.String,UnityEngine.PlayMode)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_animation, ___1_mode);
	return icallRetVal;
}
// System.Void UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_CrossFade_mA2C79723F05536F1A418DF43A06E7BA9F5D07EC3 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___0_animation, float ___1_fadeLength, int32_t ___2_mode, const RuntimeMethod* method) 
{
	typedef void (*Animation_CrossFade_mA2C79723F05536F1A418DF43A06E7BA9F5D07EC3_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, String_t*, float, int32_t);
	static Animation_CrossFade_mA2C79723F05536F1A418DF43A06E7BA9F5D07EC3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_CrossFade_mA2C79723F05536F1A418DF43A06E7BA9F5D07EC3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::CrossFade(System.String,System.Single,UnityEngine.PlayMode)");
	_il2cpp_icall_func(__this, ___0_animation, ___1_fadeLength, ___2_mode);
}
// System.Void UnityEngine.Animation::Blend(System.String,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_Blend_mBC6733B3BFADCE9E55A4D9824A442B1AFB14F64E (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___0_animation, float ___1_targetWeight, float ___2_fadeLength, const RuntimeMethod* method) 
{
	typedef void (*Animation_Blend_mBC6733B3BFADCE9E55A4D9824A442B1AFB14F64E_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, String_t*, float, float);
	static Animation_Blend_mBC6733B3BFADCE9E55A4D9824A442B1AFB14F64E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_Blend_mBC6733B3BFADCE9E55A4D9824A442B1AFB14F64E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::Blend(System.String,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___0_animation, ___1_targetWeight, ___2_fadeLength);
}
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_AddClip_m10EDEAA1060E0356379BFE9AB24F97C9EBBED1A3 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___0_clip, String_t* ___1_newName, const RuntimeMethod* method) 
{
	{
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_0 = ___0_clip;
		String_t* L_1 = ___1_newName;
		Animation_AddClip_m0DBAB71E23EA248D6A18C705B8AF0EA140D2FFDF(__this, L_0, L_1, ((int32_t)-2147483648LL), ((int32_t)2147483647LL), NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_AddClip_m0DBAB71E23EA248D6A18C705B8AF0EA140D2FFDF (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___0_clip, String_t* ___1_newName, int32_t ___2_firstFrame, int32_t ___3_lastFrame, const RuntimeMethod* method) 
{
	{
		AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* L_0 = ___0_clip;
		String_t* L_1 = ___1_newName;
		int32_t L_2 = ___2_firstFrame;
		int32_t L_3 = ___3_lastFrame;
		Animation_AddClip_m87A5BE2BFAC7F12D7C0FE5D954E657FDB8B4A7F6(__this, L_0, L_1, L_2, L_3, (bool)0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animation_AddClip_m87A5BE2BFAC7F12D7C0FE5D954E657FDB8B4A7F6 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___0_clip, String_t* ___1_newName, int32_t ___2_firstFrame, int32_t ___3_lastFrame, bool ___4_addLoopFrame, const RuntimeMethod* method) 
{
	typedef void (*Animation_AddClip_m87A5BE2BFAC7F12D7C0FE5D954E657FDB8B4A7F6_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, String_t*, int32_t, int32_t, bool);
	static Animation_AddClip_m87A5BE2BFAC7F12D7C0FE5D954E657FDB8B4A7F6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_AddClip_m87A5BE2BFAC7F12D7C0FE5D954E657FDB8B4A7F6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::AddClip(UnityEngine.AnimationClip,System.String,System.Int32,System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___0_clip, ___1_newName, ___2_firstFrame, ___3_lastFrame, ___4_addLoopFrame);
}
// System.Collections.IEnumerator UnityEngine.Animation::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Animation_GetEnumerator_m247062F212D9C579DAE25D9BC86E4921DC5719E6 (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* L_0 = (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530*)il2cpp_codegen_object_new(Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Enumerator__ctor_mF3FB66377864673B8DAF14A36DB6D069B98A92F4(L_0, __this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.AnimationState UnityEngine.Animation::GetState(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* Animation_GetState_mFE0B2A4F4BD7F3DDE2CA699D6036607F0E7259FB (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* (*Animation_GetState_mFE0B2A4F4BD7F3DDE2CA699D6036607F0E7259FB_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, String_t*);
	static Animation_GetState_mFE0B2A4F4BD7F3DDE2CA699D6036607F0E7259FB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetState_mFE0B2A4F4BD7F3DDE2CA699D6036607F0E7259FB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetState(System.String)");
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* icallRetVal = _il2cpp_icall_func(__this, ___0_name);
	return icallRetVal;
}
// UnityEngine.AnimationState UnityEngine.Animation::GetStateAtIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	typedef AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* (*Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*, int32_t);
	static Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateAtIndex(System.Int32)");
	AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* icallRetVal = _il2cpp_icall_func(__this, ___0_index);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animation::GetStateCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE_ftn) (Animation_t6593B06C39E3B139808B19F2C719C860F3F61040*);
	static Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animation::GetStateCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animation/Enumerator::.ctor(UnityEngine.Animation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mF3FB66377864673B8DAF14A36DB6D069B98A92F4 (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* ___0_outer, const RuntimeMethod* method) 
{
	{
		__this->___m_CurrentIndex_1 = (-1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0 = ___0_outer;
		__this->___m_Outer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Outer_0), (void*)L_0);
		return;
	}
}
// System.Object UnityEngine.Animation/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m4A17FE0020D4C8856EFC8EF531B99723FFB2B9DF (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0 = __this->___m_Outer_0;
		int32_t L_1 = __this->___m_CurrentIndex_1;
		NullCheck(L_0);
		AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* L_2;
		L_2 = Animation_GetStateAtIndex_mA06564CBB11021A3ADA69EA0BCDCD820183E240F(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UnityEngine.Animation/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m82477C155D4F7CF98317C0EEC9F5070D196AA671 (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		Animation_t6593B06C39E3B139808B19F2C719C860F3F61040* L_0 = __this->___m_Outer_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Animation_GetStateCount_mB779E6750180C77CE5F2E81B78C9AFEE93FCB1FE(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = __this->___m_CurrentIndex_1;
		__this->___m_CurrentIndex_1 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		int32_t L_3 = __this->___m_CurrentIndex_1;
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void UnityEngine.Animation/Enumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m687381C45ECBBD052447FAC06ECE9760FF23DA63 (Enumerator_t81434F7D5603121F3D7BD6DB916FE1C755307530* __this, const RuntimeMethod* method) 
{
	{
		__this->___m_CurrentIndex_1 = (-1);
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
// System.Boolean UnityEngine.AnimationState::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationState_get_enabled_mF5CDE001664E72B2A0E3365E97E32850E81AC42A (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, const RuntimeMethod* method) 
{
	typedef bool (*AnimationState_get_enabled_mF5CDE001664E72B2A0E3365E97E32850E81AC42A_ftn) (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*);
	static AnimationState_get_enabled_mF5CDE001664E72B2A0E3365E97E32850E81AC42A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_enabled_mF5CDE001664E72B2A0E3365E97E32850E81AC42A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_enabled()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationState::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_enabled_mBB6FCF86704CDD80E4B3385231D4C9F400D7C6EB (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AnimationState_set_enabled_mBB6FCF86704CDD80E4B3385231D4C9F400D7C6EB_ftn) (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*, bool);
	static AnimationState_set_enabled_mBB6FCF86704CDD80E4B3385231D4C9F400D7C6EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_enabled_mBB6FCF86704CDD80E4B3385231D4C9F400D7C6EB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_enabled(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.AnimationState::set_weight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_weight_m9F93DB2215185BBB1CE1ECA43DE7DE7C756AC847 (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AnimationState_set_weight_m9F93DB2215185BBB1CE1ECA43DE7DE7C756AC847_ftn) (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*, float);
	static AnimationState_set_weight_m9F93DB2215185BBB1CE1ECA43DE7DE7C756AC847_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_weight_m9F93DB2215185BBB1CE1ECA43DE7DE7C756AC847_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_weight(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
// UnityEngine.WrapMode UnityEngine.AnimationState::get_wrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationState_get_wrapMode_mECE5D8F9742A051006658BAB4CA4ACD30F15AD79 (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*AnimationState_get_wrapMode_mECE5D8F9742A051006658BAB4CA4ACD30F15AD79_ftn) (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*);
	static AnimationState_get_wrapMode_mECE5D8F9742A051006658BAB4CA4ACD30F15AD79_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_wrapMode_mECE5D8F9742A051006658BAB4CA4ACD30F15AD79_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_wrapMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationState::set_wrapMode(UnityEngine.WrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_wrapMode_mBA7403836E770538E76C12676E18AC80D707F452 (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AnimationState_set_wrapMode_mBA7403836E770538E76C12676E18AC80D707F452_ftn) (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*, int32_t);
	static AnimationState_set_wrapMode_mBA7403836E770538E76C12676E18AC80D707F452_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_wrapMode_mBA7403836E770538E76C12676E18AC80D707F452_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_wrapMode(UnityEngine.WrapMode)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Single UnityEngine.AnimationState::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationState_get_time_m2EA9A93D1AF7457F6CBB96B4EC0B57E6AE58D20D (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, const RuntimeMethod* method) 
{
	typedef float (*AnimationState_get_time_m2EA9A93D1AF7457F6CBB96B4EC0B57E6AE58D20D_ftn) (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*);
	static AnimationState_get_time_m2EA9A93D1AF7457F6CBB96B4EC0B57E6AE58D20D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_time_m2EA9A93D1AF7457F6CBB96B4EC0B57E6AE58D20D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_time()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationState::set_time(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_time_m0310DBBC8065675B653D4A34019AD7CD748C4D74 (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AnimationState_set_time_m0310DBBC8065675B653D4A34019AD7CD748C4D74_ftn) (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*, float);
	static AnimationState_set_time_m0310DBBC8065675B653D4A34019AD7CD748C4D74_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_time_m0310DBBC8065675B653D4A34019AD7CD748C4D74_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_time(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.AnimationState::set_normalizedTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_normalizedTime_m80C40785819379D8B3DD64D22E88338921ED5085 (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AnimationState_set_normalizedTime_m80C40785819379D8B3DD64D22E88338921ED5085_ftn) (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*, float);
	static AnimationState_set_normalizedTime_m80C40785819379D8B3DD64D22E88338921ED5085_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_normalizedTime_m80C40785819379D8B3DD64D22E88338921ED5085_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_normalizedTime(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.AnimationState::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_speed_m9FADB34E8FA313E07ABF8F90B6F4179D2DAF9E7D (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AnimationState_set_speed_m9FADB34E8FA313E07ABF8F90B6F4179D2DAF9E7D_ftn) (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*, float);
	static AnimationState_set_speed_m9FADB34E8FA313E07ABF8F90B6F4179D2DAF9E7D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_speed_m9FADB34E8FA313E07ABF8F90B6F4179D2DAF9E7D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_speed(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Single UnityEngine.AnimationState::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationState_get_length_m67C34EA47A3715AE3B9B0B91816E31A87C8AE11C (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, const RuntimeMethod* method) 
{
	typedef float (*AnimationState_get_length_m67C34EA47A3715AE3B9B0B91816E31A87C8AE11C_ftn) (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*);
	static AnimationState_get_length_m67C34EA47A3715AE3B9B0B91816E31A87C8AE11C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_length_m67C34EA47A3715AE3B9B0B91816E31A87C8AE11C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_length()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationState::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_layer_mBB3CD27A27F255CE979B30FDF56E5FD0DCF9262C (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AnimationState_set_layer_mBB3CD27A27F255CE979B30FDF56E5FD0DCF9262C_ftn) (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*, int32_t);
	static AnimationState_set_layer_mBB3CD27A27F255CE979B30FDF56E5FD0DCF9262C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_layer_mBB3CD27A27F255CE979B30FDF56E5FD0DCF9262C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_layer(System.Int32)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.String UnityEngine.AnimationState::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AnimationState_get_name_m4A81461268F1D1011331B3B52340C306DEBA0FBC (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, const RuntimeMethod* method) 
{
	typedef String_t* (*AnimationState_get_name_m4A81461268F1D1011331B3B52340C306DEBA0FBC_ftn) (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*);
	static AnimationState_get_name_m4A81461268F1D1011331B3B52340C306DEBA0FBC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_get_name_m4A81461268F1D1011331B3B52340C306DEBA0FBC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::get_name()");
	String_t* icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.AnimationState::set_blendMode(UnityEngine.AnimationBlendMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_set_blendMode_mFC6DD1BB0FB6942A0C597DFE277587E10EB41311 (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*AnimationState_set_blendMode_mFC6DD1BB0FB6942A0C597DFE277587E10EB41311_ftn) (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*, int32_t);
	static AnimationState_set_blendMode_mFC6DD1BB0FB6942A0C597DFE277587E10EB41311_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_set_blendMode_mFC6DD1BB0FB6942A0C597DFE277587E10EB41311_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::set_blendMode(UnityEngine.AnimationBlendMode)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.AnimationState::AddMixingTransform(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_AddMixingTransform_m6ACC6579170595D781435A4B8BE32BB33C9BB4BC (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_mix, const RuntimeMethod* method) 
{
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = ___0_mix;
		AnimationState_AddMixingTransform_m7F034D92A5317EB18D0A4B2B0AFC9767F0E151E5(__this, L_0, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationState::AddMixingTransform(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_AddMixingTransform_m7F034D92A5317EB18D0A4B2B0AFC9767F0E151E5 (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___0_mix, bool ___1_recursive, const RuntimeMethod* method) 
{
	typedef void (*AnimationState_AddMixingTransform_m7F034D92A5317EB18D0A4B2B0AFC9767F0E151E5_ftn) (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, bool);
	static AnimationState_AddMixingTransform_m7F034D92A5317EB18D0A4B2B0AFC9767F0E151E5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationState_AddMixingTransform_m7F034D92A5317EB18D0A4B2B0AFC9767F0E151E5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationState::AddMixingTransform(UnityEngine.Transform,System.Boolean)");
	_il2cpp_icall_func(__this, ___0_mix, ___1_recursive);
}
// System.Void UnityEngine.AnimationState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState__ctor_mB18C82530ADA40EE3BC245AAB0673941D78B779E (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE* __this, const RuntimeMethod* method) 
{
	{
		TrackedReference__ctor_m0E498FD0AD5807B7B91CB0005170E522DAE3616A(__this, NULL);
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


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_back(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke& marshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_pinvoke_cleanup(AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_com(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com& marshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_com_back(const AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com& marshaled, AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174& unmarshaled)
{
	Exception_t* ___m_StateSender_8Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_StateSender' of type 'AnimationEvent': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_StateSender_8Exception, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimationEvent
IL2CPP_EXTERN_C void AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshal_com_cleanup(AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.AnimationEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationEvent__ctor_mBC954085B1D18B436D08E7ADE3458B91E208F3B2 (AnimationEvent_t77294DB2372A5C387B53EEA3EFDC550C75EC3174* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		__this->___m_Time_0 = (0.0f);
		__this->___m_FunctionName_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_FunctionName_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___m_StringParameter_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StringParameter_2), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___m_ObjectReferenceParameter_3 = (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ObjectReferenceParameter_3), (void*)(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL);
		__this->___m_FloatParameter_4 = (0.0f);
		__this->___m_IntParameter_5 = 0;
		__this->___m_MessageOptions_6 = 0;
		__this->___m_Source_7 = 0;
		__this->___m_StateSender_8 = (AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_StateSender_8), (void*)(AnimationState_tC704F25A20169025B6CFDC2F00DC84152B5B73CE*)NULL);
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
// System.Void UnityEngine.AnimationClip::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip__ctor_m3F9B3DE671547640479DB976423EEBC689D26F79 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, const RuntimeMethod* method) 
{
	{
		Motion__ctor_mB6190858E566BFA1B80D2E94B65CD27920A49443(__this, NULL);
		AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789(__this, NULL);
		return;
	}
}
// System.Void UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* ___0_self, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*);
	static AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_Internal_CreateAnimationClip_m1410C35D6386CEA1F068C9314751D0F6A7D34789_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::Internal_CreateAnimationClip(UnityEngine.AnimationClip)");
	_il2cpp_icall_func(___0_self);
}
// System.Void UnityEngine.AnimationClip::SetCurve(System.String,System.Type,System.String,UnityEngine.AnimationCurve)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555 (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712* __this, String_t* ___0_relativePath, Type_t* ___1_type, String_t* ___2_propertyName, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___3_curve, const RuntimeMethod* method) 
{
	typedef void (*AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555_ftn) (AnimationClip_t00BD2F131D308A4AD2C6B0BF66644FC25FECE712*, String_t*, Type_t*, String_t*, AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*);
	static AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationClip_SetCurve_mEAB88CD0C8F623EA0DEF312CF8D39DE9EB2E1555_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.AnimationClip::SetCurve(System.String,System.Type,System.String,UnityEngine.AnimationCurve)");
	_il2cpp_icall_func(__this, ___0_relativePath, ___1_type, ___2_propertyName, ___3_curve);
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
// System.Boolean UnityEngine.AnimatorStateInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		String_t* L_0 = ___0_name;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		int32_t L_3 = __this->___m_FullPath_2;
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___m_Name_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		int32_t L_6 = V_0;
		int32_t L_7 = __this->___m_Path_1;
		G_B4_0 = ((((int32_t)L_6) == ((int32_t)L_7))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B4_0 = 1;
	}

IL_0026:
	{
		V_1 = (bool)G_B4_0;
		goto IL_0029;
	}

IL_0029:
	{
		bool L_8 = V_1;
		return L_8;
	}
}
IL2CPP_EXTERN_C  bool AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, const RuntimeMethod* method)
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimatorStateInfo_IsName_mB936F493D6BDDB9372C8E9D813CE0416B002C4D0(_thisAdjusted, ___0_name, method);
	return _returnValue;
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_fullPathHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_FullPath_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AnimatorStateInfo_get_fullPathHash_m583FA8FAAC28BF65A65166D100949833E515210F(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_shortNameHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_shortNameHash_mEE816B999C282A3BA95AFC64278B994E899B7004 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Name_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t AnimatorStateInfo_get_shortNameHash_mEE816B999C282A3BA95AFC64278B994E899B7004_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AnimatorStateInfo_get_shortNameHash_mEE816B999C282A3BA95AFC64278B994E899B7004(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.AnimatorStateInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_NormalizedTime_3;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2*>(__this + _offset);
	float _returnValue;
	_returnValue = AnimatorStateInfo_get_normalizedTime_m087C7E5A72122ADF18EBB4AC8391103B9119CCC6(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.AnimatorStateInfo::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorStateInfo_get_length_m2FAE317264F7C796427207F8F28E550DB49F9541 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_Length_4;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float AnimatorStateInfo_get_length_m2FAE317264F7C796427207F8F28E550DB49F9541_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2*>(__this + _offset);
	float _returnValue;
	_returnValue = AnimatorStateInfo_get_length_m2FAE317264F7C796427207F8F28E550DB49F9541(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.AnimatorStateInfo::get_tagHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorStateInfo_get_tagHash_m3F4738079576820B7D5942854882B2B468CDD55A (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Tag_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t AnimatorStateInfo_get_tagHash_m3F4738079576820B7D5942854882B2B468CDD55A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AnimatorStateInfo_get_tagHash_m3F4738079576820B7D5942854882B2B468CDD55A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.AnimatorStateInfo::IsTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_IsTag_m9A3181AA167702263EB283AF27B21D08EAD895EF (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, String_t* ___0_tag, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		String_t* L_0 = ___0_tag;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		int32_t L_2 = __this->___m_Tag_7;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimatorStateInfo_IsTag_m9A3181AA167702263EB283AF27B21D08EAD895EF_AdjustorThunk (RuntimeObject* __this, String_t* ___0_tag, const RuntimeMethod* method)
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimatorStateInfo_IsTag_m9A3181AA167702263EB283AF27B21D08EAD895EF(_thisAdjusted, ___0_tag, method);
	return _returnValue;
}
// System.Boolean UnityEngine.AnimatorStateInfo::get_loop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorStateInfo_get_loop_m3DC728FC9AF0D4B27B3C28157395BB2F57CC3DA7 (AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->___m_Loop_8;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool AnimatorStateInfo_get_loop_m3DC728FC9AF0D4B27B3C28157395BB2F57CC3DA7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimatorStateInfo_get_loop_m3DC728FC9AF0D4B27B3C28157395BB2F57CC3DA7(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.___m_HasFixedDuration_3);
	marshaled.___m_Duration_4 = unmarshaled.___m_Duration_4;
	marshaled.___m_NormalizedTime_5 = unmarshaled.___m_NormalizedTime_5;
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.___m_AnyState_6);
	marshaled.___m_TransitionType_7 = unmarshaled.___m_TransitionType_7;
}
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_back(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke& marshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled)
{
	int32_t unmarshaledm_FullPath_temp_0 = 0;
	unmarshaledm_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_FullPath_0 = unmarshaledm_FullPath_temp_0;
	int32_t unmarshaledm_UserName_temp_1 = 0;
	unmarshaledm_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_UserName_1 = unmarshaledm_UserName_temp_1;
	int32_t unmarshaledm_Name_temp_2 = 0;
	unmarshaledm_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.___m_Name_2 = unmarshaledm_Name_temp_2;
	bool unmarshaledm_HasFixedDuration_temp_3 = false;
	unmarshaledm_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.___m_HasFixedDuration_3 = unmarshaledm_HasFixedDuration_temp_3;
	float unmarshaledm_Duration_temp_4 = 0.0f;
	unmarshaledm_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.___m_Duration_4 = unmarshaledm_Duration_temp_4;
	float unmarshaledm_NormalizedTime_temp_5 = 0.0f;
	unmarshaledm_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.___m_NormalizedTime_5 = unmarshaledm_NormalizedTime_temp_5;
	bool unmarshaledm_AnyState_temp_6 = false;
	unmarshaledm_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.___m_AnyState_6 = unmarshaledm_AnyState_temp_6;
	int32_t unmarshaledm_TransitionType_temp_7 = 0;
	unmarshaledm_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.___m_TransitionType_7 = unmarshaledm_TransitionType_temp_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_pinvoke_cleanup(AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_com(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com& marshaled)
{
	marshaled.___m_FullPath_0 = unmarshaled.___m_FullPath_0;
	marshaled.___m_UserName_1 = unmarshaled.___m_UserName_1;
	marshaled.___m_Name_2 = unmarshaled.___m_Name_2;
	marshaled.___m_HasFixedDuration_3 = static_cast<int32_t>(unmarshaled.___m_HasFixedDuration_3);
	marshaled.___m_Duration_4 = unmarshaled.___m_Duration_4;
	marshaled.___m_NormalizedTime_5 = unmarshaled.___m_NormalizedTime_5;
	marshaled.___m_AnyState_6 = static_cast<int32_t>(unmarshaled.___m_AnyState_6);
	marshaled.___m_TransitionType_7 = unmarshaled.___m_TransitionType_7;
}
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_com_back(const AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com& marshaled, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD& unmarshaled)
{
	int32_t unmarshaledm_FullPath_temp_0 = 0;
	unmarshaledm_FullPath_temp_0 = marshaled.___m_FullPath_0;
	unmarshaled.___m_FullPath_0 = unmarshaledm_FullPath_temp_0;
	int32_t unmarshaledm_UserName_temp_1 = 0;
	unmarshaledm_UserName_temp_1 = marshaled.___m_UserName_1;
	unmarshaled.___m_UserName_1 = unmarshaledm_UserName_temp_1;
	int32_t unmarshaledm_Name_temp_2 = 0;
	unmarshaledm_Name_temp_2 = marshaled.___m_Name_2;
	unmarshaled.___m_Name_2 = unmarshaledm_Name_temp_2;
	bool unmarshaledm_HasFixedDuration_temp_3 = false;
	unmarshaledm_HasFixedDuration_temp_3 = static_cast<bool>(marshaled.___m_HasFixedDuration_3);
	unmarshaled.___m_HasFixedDuration_3 = unmarshaledm_HasFixedDuration_temp_3;
	float unmarshaledm_Duration_temp_4 = 0.0f;
	unmarshaledm_Duration_temp_4 = marshaled.___m_Duration_4;
	unmarshaled.___m_Duration_4 = unmarshaledm_Duration_temp_4;
	float unmarshaledm_NormalizedTime_temp_5 = 0.0f;
	unmarshaledm_NormalizedTime_temp_5 = marshaled.___m_NormalizedTime_5;
	unmarshaled.___m_NormalizedTime_5 = unmarshaledm_NormalizedTime_temp_5;
	bool unmarshaledm_AnyState_temp_6 = false;
	unmarshaledm_AnyState_temp_6 = static_cast<bool>(marshaled.___m_AnyState_6);
	unmarshaled.___m_AnyState_6 = unmarshaledm_AnyState_temp_6;
	int32_t unmarshaledm_TransitionType_temp_7 = 0;
	unmarshaledm_TransitionType_temp_7 = marshaled.___m_TransitionType_7;
	unmarshaled.___m_TransitionType_7 = unmarshaledm_TransitionType_temp_7;
}
// Conversion method for clean up from marshalling of: UnityEngine.AnimatorTransitionInfo
IL2CPP_EXTERN_C void AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshal_com_cleanup(AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD_marshaled_com& marshaled)
{
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_IsName_m6C0C8BBF7E241EFEE2199D5D97DC59958BFBE324 (AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		String_t* L_0 = ___0_name;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		int32_t L_2 = __this->___m_Name_2;
		if ((((int32_t)L_1) == ((int32_t)L_2)))
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_3 = ___0_name;
		int32_t L_4;
		L_4 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_3, NULL);
		int32_t L_5 = __this->___m_FullPath_0;
		G_B3_0 = ((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0023;
	}

IL_0023:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
IL2CPP_EXTERN_C  bool AnimatorTransitionInfo_IsName_m6C0C8BBF7E241EFEE2199D5D97DC59958BFBE324_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimatorTransitionInfo_IsName_m6C0C8BBF7E241EFEE2199D5D97DC59958BFBE324(_thisAdjusted, ___0_name, method);
	return _returnValue;
}
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorTransitionInfo_IsUserName_m91FDB1462C56FCDB3F9A209020D2014B06833DBE (AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		String_t* L_0 = ___0_name;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		int32_t L_2 = __this->___m_UserName_1;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimatorTransitionInfo_IsUserName_m91FDB1462C56FCDB3F9A209020D2014B06833DBE_AdjustorThunk (RuntimeObject* __this, String_t* ___0_name, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimatorTransitionInfo_IsUserName_m91FDB1462C56FCDB3F9A209020D2014B06833DBE(_thisAdjusted, ___0_name, method);
	return _returnValue;
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_nameHash_m31EC38373C30F6A8BADA9AD27EBAB6BC5B9185CE (AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Name_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t AnimatorTransitionInfo_get_nameHash_m31EC38373C30F6A8BADA9AD27EBAB6BC5B9185CE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AnimatorTransitionInfo_get_nameHash_m31EC38373C30F6A8BADA9AD27EBAB6BC5B9185CE(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatorTransitionInfo_get_userNameHash_mBAD5D1898CE34F1E0657D6BBEA18C4A35EC686EE (AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_UserName_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t AnimatorTransitionInfo_get_userNameHash_mBAD5D1898CE34F1E0657D6BBEA18C4A35EC686EE_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = AnimatorTransitionInfo_get_userNameHash_mBAD5D1898CE34F1E0657D6BBEA18C4A35EC686EE(_thisAdjusted, method);
	return _returnValue;
}
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimatorTransitionInfo_get_normalizedTime_m0D107F16FB8351EBB0E8F8A4367A69916E260072 (AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___m_NormalizedTime_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float AnimatorTransitionInfo_get_normalizedTime_m0D107F16FB8351EBB0E8F8A4367A69916E260072_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD*>(__this + _offset);
	float _returnValue;
	_returnValue = AnimatorTransitionInfo_get_normalizedTime_m0D107F16FB8351EBB0E8F8A4367A69916E260072(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.MatchTargetWeightMask::set_positionXYZWeight(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchTargetWeightMask_set_positionXYZWeight_m59F98F90D7089D61AD3B375E788BEE5D78753E0B (MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		__this->___m_PositionXYZWeight_0 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MatchTargetWeightMask_set_positionXYZWeight_m59F98F90D7089D61AD3B375E788BEE5D78753E0B_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method)
{
	MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25*>(__this + _offset);
	MatchTargetWeightMask_set_positionXYZWeight_m59F98F90D7089D61AD3B375E788BEE5D78753E0B(_thisAdjusted, ___0_value, method);
}
// System.Void UnityEngine.MatchTargetWeightMask::set_rotationWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatchTargetWeightMask_set_rotationWeight_m6E9398D9F0017122E85576DE6482A17E2C8A15D2 (MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_value;
		__this->___m_RotationWeight_1 = L_0;
		return;
	}
}
IL2CPP_EXTERN_C  void MatchTargetWeightMask_set_rotationWeight_m6E9398D9F0017122E85576DE6482A17E2C8A15D2_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25*>(__this + _offset);
	MatchTargetWeightMask_set_rotationWeight_m6E9398D9F0017122E85576DE6482A17E2C8A15D2(_thisAdjusted, ___0_value, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.Animator::get_isHuman()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_isHuman_mE1154471F516DA8BB47B0605410640344028E2A0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_isHuman_mE1154471F516DA8BB47B0605410640344028E2A0_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_isHuman_mE1154471F516DA8BB47B0605410640344028E2A0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isHuman_mE1154471F516DA8BB47B0605410640344028E2A0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isHuman()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::get_humanScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_humanScale_m4E9B17E752307329C2F19BB1CFEDB6180976F7B6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_humanScale_m4E9B17E752307329C2F19BB1CFEDB6180976F7B6_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_humanScale_m4E9B17E752307329C2F19BB1CFEDB6180976F7B6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_humanScale_m4E9B17E752307329C2F19BB1CFEDB6180976F7B6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_humanScale()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::GetFloat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloat_mEFA968AD9EEB92E6A03AEEB968600798E61F9B1D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		int32_t L_0 = ___0_id;
		float L_1;
		L_1 = Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m2CDA219BBAB214F4069C9844780EBCE6CCF579F5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, float ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_id;
		float L_1 = ___1_value;
		Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetFloat(System.Int32,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_m3FFF291B541476DE7EB1D6432169ECDCBEC7FCD2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, float ___1_value, float ___2_dampTime, float ___3_deltaTime, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_id;
		float L_1 = ___1_value;
		float L_2 = ___2_dampTime;
		float L_3 = ___3_deltaTime;
		Animator_SetFloatIDDamp_m013A6F5FD90DFA125C152BF42F299157AEE96330(__this, L_0, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::GetBool(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBool_mFEC9C0565C52965FBD5D6A02084484F00F8ECE2C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		int32_t L_0 = ___0_id;
		bool L_1;
		L_1 = Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetBool(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m1DD34A313E6882B6FBF379A53DD8D52E4023F1D8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, bool ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_id;
		bool L_1 = ___1_value;
		Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Int32 UnityEngine.Animator::GetInteger(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetInteger_mF4E1564D3791C968FA8952954B5AAC4C4E2C8B91 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_id;
		int32_t L_1;
		L_1 = Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::SetInteger(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_mE823EC7492A7FB266FA723C168226D17085DF3E8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, int32_t ___1_value, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_id;
		int32_t L_1 = ___1_value;
		Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_mC9CD54D627C8843EF6E159E167449D216EF6EB30 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTrigger_m8DCA67D5A6B56702E3FAD4E18243E194B71297CC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868(__this, L_0, NULL);
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurve(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurve_mC65B475495D9A4B01BF5BD33E2899E87245375DE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		String_t* L_0 = ___0_name;
		bool L_1;
		L_1 = Animator_IsParameterControlledByCurveString_m8BDBA93917C92923DB297EBE8F141FA6C695AF61(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_000b;
	}

IL_000b:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_deltaPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_deltaPosition_m1759DB2D343FDAFAA7FE85ED66451D5210B0A606 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_deltaPosition_Injected_mF37497B00055319EE54006C19AAEE221A99791F4(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_deltaRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_get_deltaRotation_m54839D596F81D477E91E2746E4141AB389238FFD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_deltaRotation_Injected_mFEC802815227FE4B11491F80B281425A10E19ABD(__this, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_rootPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_rootPosition_m952907486F631E7E8E0384AE7CE86D92BB3C6E71 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_rootPosition_Injected_m7F7BA9F18B8866C40649D61A36ADFF42EDF5B88D(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_rootRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_get_rootRotation_mE913E618AC95BE36524C88A77D087E67579FAF46 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_rootRotation_Injected_m670A2B5E5EE664CA5ED9D711733C102E0BD72AFB(__this, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UnityEngine.Animator::get_applyRootMotion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_applyRootMotion_mC8C4D583F86A9E0B1BF395BBFFAACACD496EDBB8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_applyRootMotion_mC8C4D583F86A9E0B1BF395BBFFAACACD496EDBB8_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_applyRootMotion_mC8C4D583F86A9E0B1BF395BBFFAACACD496EDBB8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_applyRootMotion_mC8C4D583F86A9E0B1BF395BBFFAACACD496EDBB8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_applyRootMotion()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_applyRootMotion(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_applyRootMotion_mA0953B6AEE43D4AF0837365E7BFF60FCC74B0F98_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_applyRootMotion(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Single UnityEngine.Animator::get_gravityWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_gravityWeight_m5414ADEF41113A6B7C8FAE281578DA1DD607CB00 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_gravityWeight_m5414ADEF41113A6B7C8FAE281578DA1DD607CB00_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_gravityWeight_m5414ADEF41113A6B7C8FAE281578DA1DD607CB00_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_gravityWeight_m5414ADEF41113A6B7C8FAE281578DA1DD607CB00_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_gravityWeight()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Vector3 UnityEngine.Animator::get_bodyPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_bodyPosition_m0372578D2966019ED1CE5F3AEC1DE6F74DC6EADE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Animator_get_bodyPositionInternal_m595442E15D03EA53B40C2760C99B4D52C536EF06(__this, NULL);
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_bodyPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyPosition_m7CFDA1C974A11D5BFC52181879A25FA8AEAFFC61 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		Animator_set_bodyPositionInternal_m6042D23A6CC550D438B4522C4755BD08692D2F1A(__this, L_0, NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::get_bodyPositionInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_bodyPositionInternal_m595442E15D03EA53B40C2760C99B4D52C536EF06 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_bodyPositionInternal_Injected_m44C1D9729A292329E4B4A66B1DE583368ED9B2B3(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::set_bodyPositionInternal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyPositionInternal_m6042D23A6CC550D438B4522C4755BD08692D2F1A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	{
		Animator_set_bodyPositionInternal_Injected_m434A0C848EF277237CBAA68C4A94A1DD4A05DC75(__this, (&___0_value), NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_bodyRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_get_bodyRotation_mAC0517419CDE876795D7AD59253E3B4F8628091F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0;
		L_0 = Animator_get_bodyRotationInternal_m62411259235851629AB914E29B04029A04D8F165(__this, NULL);
		V_0 = L_0;
		goto IL_0011;
	}

IL_0011:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::set_bodyRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyRotation_m8763282BEFDD626963D985435E3BC3FE576E27BC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_value;
		Animator_set_bodyRotationInternal_mA381F771D03290AF383D3203071D9B04746BD2E6(__this, L_0, NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_bodyRotationInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_get_bodyRotationInternal_m62411259235851629AB914E29B04029A04D8F165 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_bodyRotationInternal_Injected_m60262D5C0C987E21A358FF7F67887C3B23FEDD5E(__this, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::set_bodyRotationInternal(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyRotationInternal_mA381F771D03290AF383D3203071D9B04746BD2E6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_value, const RuntimeMethod* method) 
{
	{
		Animator_set_bodyRotationInternal_Injected_m0BDC67195DA58582AEFC3567906106BD96C1D173(__this, (&___0_value), NULL);
		return;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::GetIKPosition(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetIKPosition_m626E887B0E039C8F79D0A942D469880B05A58962 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_goal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Animator_GetGoalPosition_mE65C3AB94643D8036BF6C8014408CAB0F9BB5A98(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Vector3 UnityEngine.Animator::GetGoalPosition(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_GetGoalPosition_mE65C3AB94643D8036BF6C8014408CAB0F9BB5A98 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_goal;
		Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE(__this, L_0, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetIKPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKPosition_mB7BE88C93990186D94AF75439E2F216D6ECBCDEE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_goalPosition, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_goal;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_goalPosition;
		Animator_SetGoalPosition_m0811DE827A66638ECA79A2BAA6A59D9D21D7D5A2(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalPosition(UnityEngine.AvatarIKGoal,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_m0811DE827A66638ECA79A2BAA6A59D9D21D7D5A2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_goalPosition, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_goal;
		Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707(__this, L_0, (&___1_goalPosition), NULL);
		return;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::GetIKRotation(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_GetIKRotation_mF2969E5FBD59C125EF95AB689A9B3AAB434F79FC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_goal;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Animator_GetGoalRotation_mB7B67DE4EBA3C26D713754D1D76D4F529E783DB2(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::GetGoalRotation(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_GetGoalRotation_mB7B67DE4EBA3C26D713754D1D76D4F529E783DB2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		int32_t L_0 = ___0_goal;
		Animator_GetGoalRotation_Injected_m76092248C853479A1E6178DA4AF19F69FF8C8F75(__this, L_0, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngine.Animator::SetIKRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKRotation_m328A64AD20922F0F2A1D0CD5DBB9F01FE7675DF6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_goalRotation, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_goal;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_goalRotation;
		Animator_SetGoalRotation_m1BFE2425DE75954B1233ABD96D6AB3682D42E5BA(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalRotation(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_m1BFE2425DE75954B1233ABD96D6AB3682D42E5BA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_goalRotation, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_goal;
		Animator_SetGoalRotation_Injected_m93587602A0C43AC9B184D30B03F751C02E6BF045(__this, L_0, (&___1_goalRotation), NULL);
		return;
	}
}
// System.Single UnityEngine.Animator::GetIKPositionWeight(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetIKPositionWeight_mA79A863ED8F5E8095FCC9545CCB55483328B3D99 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_goal;
		float L_1;
		L_1 = Animator_GetGoalWeightPosition_m0E626A12D7B157A0B17D231D5E6175D062937E6A(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Animator::GetGoalWeightPosition(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetGoalWeightPosition_m0E626A12D7B157A0B17D231D5E6175D062937E6A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetGoalWeightPosition_m0E626A12D7B157A0B17D231D5E6175D062937E6A_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetGoalWeightPosition_m0E626A12D7B157A0B17D231D5E6175D062937E6A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetGoalWeightPosition_m0E626A12D7B157A0B17D231D5E6175D062937E6A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetGoalWeightPosition(UnityEngine.AvatarIKGoal)");
	float icallRetVal = _il2cpp_icall_func(__this, ___0_goal);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetIKPositionWeight(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKPositionWeight_m8C707F505FFE2A6F36BE81ED12786B941D3B990C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, float ___1_value, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_goal;
		float L_1 = ___1_value;
		Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalWeightPosition_mBCC0ED516684541F6AD9B784ECCCA2D7C14DC75E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalWeightPosition(UnityEngine.AvatarIKGoal,System.Single)");
	_il2cpp_icall_func(__this, ___0_goal, ___1_value);
}
// System.Single UnityEngine.Animator::GetIKRotationWeight(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetIKRotationWeight_mC376AF1B02A0C1D15072AFE215B9D371B09D3059 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_goal;
		float L_1;
		L_1 = Animator_GetGoalWeightRotation_m10C6574D1AF23568F737D0347F35A2B5BE670725(__this, L_0, NULL);
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		float L_2 = V_0;
		return L_2;
	}
}
// System.Single UnityEngine.Animator::GetGoalWeightRotation(UnityEngine.AvatarIKGoal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetGoalWeightRotation_m10C6574D1AF23568F737D0347F35A2B5BE670725 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetGoalWeightRotation_m10C6574D1AF23568F737D0347F35A2B5BE670725_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetGoalWeightRotation_m10C6574D1AF23568F737D0347F35A2B5BE670725_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetGoalWeightRotation_m10C6574D1AF23568F737D0347F35A2B5BE670725_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetGoalWeightRotation(UnityEngine.AvatarIKGoal)");
	float icallRetVal = _il2cpp_icall_func(__this, ___0_goal);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetIKRotationWeight(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIKRotationWeight_m5F0F5BD5A9A85912EA1CDF32917FE483E849978D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, float ___1_value, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		int32_t L_0 = ___0_goal;
		float L_1 = ___1_value;
		Animator_SetGoalWeightRotation_mA8A5BE4C22583CFB7C66EF59A1997E241A3001EF(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetGoalWeightRotation(UnityEngine.AvatarIKGoal,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalWeightRotation_mA8A5BE4C22583CFB7C66EF59A1997E241A3001EF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetGoalWeightRotation_mA8A5BE4C22583CFB7C66EF59A1997E241A3001EF_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetGoalWeightRotation_mA8A5BE4C22583CFB7C66EF59A1997E241A3001EF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalWeightRotation_mA8A5BE4C22583CFB7C66EF59A1997E241A3001EF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalWeightRotation(UnityEngine.AvatarIKGoal,System.Single)");
	_il2cpp_icall_func(__this, ___0_goal, ___1_value);
}
// System.Void UnityEngine.Animator::SetLookAtPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPosition_m39A2C326BDE156360972C5EEDA1F9ACEBE34A8A6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lookAtPosition, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lookAtPosition;
		Animator_SetLookAtPositionInternal_m6A20F2667C36D8363BA0F38A961BAB941E2DDC1B(__this, L_0, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtPositionInternal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_m6A20F2667C36D8363BA0F38A961BAB941E2DDC1B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lookAtPosition, const RuntimeMethod* method) 
{
	{
		Animator_SetLookAtPositionInternal_Injected_mE50AFECADA7DC76D0E73C6B7131EBBD1CED5D59D(__this, (&___0_lookAtPosition), NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_mDCC8C8792E2E23C133AF3D91A96C49BEBC828F79 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_weight, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		float L_0 = ___0_weight;
		Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F(__this, L_0, (0.0f), (1.0f), (0.0f), (0.5f), NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_m0C4D297E270F7E852481EFBED321020E96EBD54D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_weight, float ___1_bodyWeight, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		float L_0 = ___0_weight;
		float L_1 = ___1_bodyWeight;
		Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F(__this, L_0, L_1, (1.0f), (0.0f), (0.5f), NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_mD0D92A24E3789891D709E0DCD84524FAE614F870 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_weight, float ___1_bodyWeight, float ___2_headWeight, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		float L_0 = ___0_weight;
		float L_1 = ___1_bodyWeight;
		float L_2 = ___2_headWeight;
		Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F(__this, L_0, L_1, L_2, (0.0f), (0.5f), NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_m31AE829F22900AD67FA4840D488E1FA9E0880FB2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_weight, float ___1_bodyWeight, float ___2_headWeight, float ___3_eyesWeight, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		float L_0 = ___0_weight;
		float L_1 = ___1_bodyWeight;
		float L_2 = ___2_headWeight;
		float L_3 = ___3_eyesWeight;
		Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F(__this, L_0, L_1, L_2, L_3, (0.5f), NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeight(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeight_m536B18C7EC83703CF0320924D9FE13CBD93CC752 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_weight, float ___1_bodyWeight, float ___2_headWeight, float ___3_eyesWeight, float ___4_clampWeight, const RuntimeMethod* method) 
{
	{
		Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF(__this, NULL);
		float L_0 = ___0_weight;
		float L_1 = ___1_bodyWeight;
		float L_2 = ___2_headWeight;
		float L_3 = ___3_eyesWeight;
		float L_4 = ___4_clampWeight;
		Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_weight, float ___1_bodyWeight, float ___2_headWeight, float ___3_eyesWeight, float ___4_clampWeight, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, float, float, float, float, float);
	static Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLookAtWeightInternal_m41D66B6DA78B1ACB7EE3E3B51A29904DEB05778F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLookAtWeightInternal(System.Single,System.Single,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___0_weight, ___1_bodyWeight, ___2_headWeight, ___3_eyesWeight, ___4_clampWeight);
}
// System.Void UnityEngine.Animator::set_stabilizeFeet(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_stabilizeFeet_m4877796D25F5D046BA6FEF8CFDFEB470620801A0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_stabilizeFeet_m4877796D25F5D046BA6FEF8CFDFEB470620801A0_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_stabilizeFeet_m4877796D25F5D046BA6FEF8CFDFEB470620801A0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_stabilizeFeet_m4877796D25F5D046BA6FEF8CFDFEB470620801A0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_stabilizeFeet(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Int32 UnityEngine.Animator::get_layerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_layerCount_m75C20E7284800DFA0E4AD7EC23910BDB6D62BDA8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_layerCount()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.String UnityEngine.Animator::GetLayerName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Animator_GetLayerName_m7458E91DE0B0769E79038DFEF32B750BE6801BA7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	typedef String_t* (*Animator_GetLayerName_m7458E91DE0B0769E79038DFEF32B750BE6801BA7_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetLayerName_m7458E91DE0B0769E79038DFEF32B750BE6801BA7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetLayerName_m7458E91DE0B0769E79038DFEF32B750BE6801BA7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetLayerName(System.Int32)");
	String_t* icallRetVal = _il2cpp_icall_func(__this, ___0_layerIndex);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::GetLayerWeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetLayerWeight_m24EB83CB3CFC724CB77461A26BB794E7DEE15BCA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetLayerWeight_m24EB83CB3CFC724CB77461A26BB794E7DEE15BCA_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetLayerWeight_m24EB83CB3CFC724CB77461A26BB794E7DEE15BCA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetLayerWeight_m24EB83CB3CFC724CB77461A26BB794E7DEE15BCA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetLayerWeight(System.Int32)");
	float icallRetVal = _il2cpp_icall_func(__this, ___0_layerIndex);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, float ___1_weight, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLayerWeight_m06ADC732F76F22B4B1424F25525E7CBB80E6230F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___0_layerIndex, ___1_weight);
}
// System.Void UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, int32_t ___1_stateInfoIndex, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2* ___2_info, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, int32_t, AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2*);
	static Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorStateInfo(System.Int32,UnityEngine.StateInfoIndex,UnityEngine.AnimatorStateInfo&)");
	_il2cpp_icall_func(__this, ___0_layerIndex, ___1_stateInfoIndex, ___2_info);
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetCurrentAnimatorStateInfo_mD5B526FA605F6CFBC31B7DE36740F6AD1E534CAD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_layerIndex;
		Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D(__this, L_0, 0, (&V_0), NULL);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1 = V_0;
		V_1 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_2 = V_1;
		return L_2;
	}
}
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetNextAnimatorStateInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 Animator_GetNextAnimatorStateInfo_m4661892C3F99329907EE3EE1C1FCB7974CDA2433 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_layerIndex;
		Animator_GetAnimatorStateInfo_mC6C046A539DE6E8D481E830D3DA1FBF96DFC367D(__this, L_0, 1, (&V_0), NULL);
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_1 = V_0;
		V_1 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		AnimatorStateInfo_t1F47379289C7CE7FD588FBC3BBD79A777243B6B2 L_2 = V_1;
		return L_2;
	}
}
// System.Void UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32,UnityEngine.AnimatorTransitionInfo&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetAnimatorTransitionInfo_m933890D15E832719A2DBBAFCA587FEB4C7F1C6E9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD* ___1_info, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetAnimatorTransitionInfo_m933890D15E832719A2DBBAFCA587FEB4C7F1C6E9_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD*);
	static Animator_GetAnimatorTransitionInfo_m933890D15E832719A2DBBAFCA587FEB4C7F1C6E9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetAnimatorTransitionInfo_m933890D15E832719A2DBBAFCA587FEB4C7F1C6E9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32,UnityEngine.AnimatorTransitionInfo&)");
	_il2cpp_icall_func(__this, ___0_layerIndex, ___1_info);
}
// UnityEngine.AnimatorTransitionInfo UnityEngine.Animator::GetAnimatorTransitionInfo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD Animator_GetAnimatorTransitionInfo_mAB532C0834DEF3685C6E16C82B7A93B8875FC542 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ___0_layerIndex;
		Animator_GetAnimatorTransitionInfo_m933890D15E832719A2DBBAFCA587FEB4C7F1C6E9(__this, L_0, (&V_0), NULL);
		AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD L_1 = V_0;
		V_1 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		AnimatorTransitionInfo_t44894D5EDEACB368CDBA07458F6EE5F01A1F34AD L_2 = V_1;
		return L_2;
	}
}
// System.Boolean UnityEngine.Animator::IsInTransition(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_layerIndex, const RuntimeMethod* method) 
{
	typedef bool (*Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsInTransition_mC2BD2CC7B7A11BAAA5396F1A2DAFD98D00AA2830_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsInTransition(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_layerIndex);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::get_feetPivotActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_feetPivotActive_m6905716868666F1A61574A07DB455482CBC7B6CF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_feetPivotActive_m6905716868666F1A61574A07DB455482CBC7B6CF_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_feetPivotActive_m6905716868666F1A61574A07DB455482CBC7B6CF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_feetPivotActive_m6905716868666F1A61574A07DB455482CBC7B6CF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_feetPivotActive()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_feetPivotActive(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_feetPivotActive_m0683AF2FD4B62EB9330B7BC347BE189A90809C19 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_feetPivotActive_m0683AF2FD4B62EB9330B7BC347BE189A90809C19_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, float);
	static Animator_set_feetPivotActive_m0683AF2FD4B62EB9330B7BC347BE189A90809C19_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_feetPivotActive_m0683AF2FD4B62EB9330B7BC347BE189A90809C19_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_feetPivotActive(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Single UnityEngine.Animator::get_pivotWeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_pivotWeight_mFFD3DF6F4506AA829E3E6D726F21EB62EC6A4652 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_pivotWeight_mFFD3DF6F4506AA829E3E6D726F21EB62EC6A4652_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_pivotWeight_mFFD3DF6F4506AA829E3E6D726F21EB62EC6A4652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_pivotWeight_mFFD3DF6F4506AA829E3E6D726F21EB62EC6A4652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_pivotWeight()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// UnityEngine.Vector3 UnityEngine.Animator::get_pivotPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_pivotPosition_m2A6E669BC43633E12BEDF96ED73AB86EAACBA11B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_pivotPosition_Injected_m381B79F41C78BD14DC47FA49C3B20287E50A8EC6(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,System.Int32,UnityEngine.MatchTargetWeightMask,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_MatchTarget_mD1C55BE6B64912264BD1280498BFF938B8501596 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_matchPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_matchRotation, int32_t ___2_targetBodyPart, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 ___3_weightMask, float ___4_startNormalizedTime, float ___5_targetNormalizedTime, bool ___6_completeMatch, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___2_targetBodyPart;
		float L_1 = ___4_startNormalizedTime;
		float L_2 = ___5_targetNormalizedTime;
		bool L_3 = ___6_completeMatch;
		Animator_MatchTarget_Injected_m1B2CB01E3B71964EA09D70C42583F613641925C7(__this, (&___0_matchPosition), (&___1_matchRotation), L_0, (&___3_weightMask), L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::MatchTarget(UnityEngine.Vector3,UnityEngine.Quaternion,UnityEngine.AvatarTarget,UnityEngine.MatchTargetWeightMask,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_MatchTarget_m717CF5422596B401395BE3EDC510FFD34F85D337 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_matchPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_matchRotation, int32_t ___2_targetBodyPart, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 ___3_weightMask, float ___4_startNormalizedTime, float ___5_targetNormalizedTime, const RuntimeMethod* method) 
{
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_matchPosition;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___1_matchRotation;
		int32_t L_2 = ___2_targetBodyPart;
		MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25 L_3 = ___3_weightMask;
		float L_4 = ___4_startNormalizedTime;
		float L_5 = ___5_targetNormalizedTime;
		Animator_MatchTarget_mD1C55BE6B64912264BD1280498BFF938B8501596(__this, L_0, L_1, L_2, L_3, L_4, L_5, (bool)1, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::InterruptMatchTarget(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_InterruptMatchTarget_m3BD713C829A921D66628C6B18F00E6F75EE327A7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_completeMatch, const RuntimeMethod* method) 
{
	typedef void (*Animator_InterruptMatchTarget_m3BD713C829A921D66628C6B18F00E6F75EE327A7_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_InterruptMatchTarget_m3BD713C829A921D66628C6B18F00E6F75EE327A7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_InterruptMatchTarget_m3BD713C829A921D66628C6B18F00E6F75EE327A7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::InterruptMatchTarget(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_completeMatch);
}
// System.Boolean UnityEngine.Animator::get_isMatchingTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_isMatchingTarget_m56CCA705025C2057D60F5BB9724F864C8B2223B0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_isMatchingTarget_m56CCA705025C2057D60F5BB9724F864C8B2223B0_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_isMatchingTarget_m56CCA705025C2057D60F5BB9724F864C8B2223B0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_isMatchingTarget_m56CCA705025C2057D60F5BB9724F864C8B2223B0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_isMatchingTarget()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::get_speed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_speed_m41AFD6B0AB3FF4FFF8855CCAF684813BA1148CD2 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_speed_m41AFD6B0AB3FF4FFF8855CCAF684813BA1148CD2_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_speed_m41AFD6B0AB3FF4FFF8855CCAF684813BA1148CD2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_speed_m41AFD6B0AB3FF4FFF8855CCAF684813BA1148CD2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_speed()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_speed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, float);
	static Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_speed_m933F4D6770122BC9D8A7FF82DE1CD33D514379FC_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_speed(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m2D91D6C458B15B186365EED0C13A178342789084 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, float ___1_normalizedTransitionDuration, int32_t ___2_layer, float ___3_normalizedTimeOffset, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		String_t* L_0 = ___0_stateName;
		float L_1 = ___1_normalizedTransitionDuration;
		int32_t L_2 = ___2_layer;
		float L_3 = ___3_normalizedTimeOffset;
		float L_4 = V_0;
		Animator_CrossFade_mA6769671098D9B30D68A27DF00D355CC5E28D56C(__this, L_0, L_1, L_2, L_3, L_4, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.String,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_mA6769671098D9B30D68A27DF00D355CC5E28D56C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, float ___1_normalizedTransitionDuration, int32_t ___2_layer, float ___3_normalizedTimeOffset, float ___4_normalizedTransitionTime, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_stateName;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		float L_2 = ___1_normalizedTransitionDuration;
		int32_t L_3 = ___2_layer;
		float L_4 = ___3_normalizedTimeOffset;
		float L_5 = ___4_normalizedTransitionTime;
		Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186(__this, L_1, L_2, L_3, L_4, L_5, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateHashName, float ___1_normalizedTransitionDuration, int32_t ___2_layer, float ___3_normalizedTimeOffset, float ___4_normalizedTransitionTime, const RuntimeMethod* method) 
{
	typedef void (*Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float, int32_t, float, float);
	static Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_CrossFade_m34D1F0B5D8E14FC3D685D91D412ACA3F69F16186_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::CrossFade(System.Int32,System.Single,System.Int32,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___0_stateHashName, ___1_normalizedTransitionDuration, ___2_layer, ___3_normalizedTimeOffset, ___4_normalizedTransitionTime);
}
// System.Void UnityEngine.Animator::Play(System.String,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m5565F093F0752D4DD9B451686F71C7A8F23F6744 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_stateName, int32_t ___1_layer, float ___2_normalizedTime, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_stateName;
		int32_t L_1;
		L_1 = Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A(L_0, NULL);
		int32_t L_2 = ___1_layer;
		float L_3 = ___2_normalizedTime;
		Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD(__this, L_1, L_2, L_3, NULL);
		return;
	}
}
// System.Void UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_stateNameHash, int32_t ___1_layer, float ___2_normalizedTime, const RuntimeMethod* method) 
{
	typedef void (*Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, int32_t, float);
	static Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_Play_m3011727F1A3F331EE7F5D7CF9B98EFEADE547BBD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::Play(System.Int32,System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___0_stateNameHash, ___1_layer, ___2_normalizedTime);
}
// System.Void UnityEngine.Animator::SetTarget(UnityEngine.AvatarTarget,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTarget_mCE0C0F703C38FF190E4F093B394C1D2AFA80A0F5 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_targetIndex, float ___1_targetNormalizedTime, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetTarget_mCE0C0F703C38FF190E4F093B394C1D2AFA80A0F5_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetTarget_mCE0C0F703C38FF190E4F093B394C1D2AFA80A0F5_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTarget_mCE0C0F703C38FF190E4F093B394C1D2AFA80A0F5_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTarget(UnityEngine.AvatarTarget,System.Single)");
	_il2cpp_icall_func(__this, ___0_targetIndex, ___1_targetNormalizedTime);
}
// UnityEngine.Vector3 UnityEngine.Animator::get_targetPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Animator_get_targetPosition_m6A682300C052714BB55F68E192B4AD778179B43D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_targetPosition_Injected_m7114A2CB2FE3A982E0967119BF3280258EEA4166(__this, (&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Quaternion UnityEngine.Animator::get_targetRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Animator_get_targetRotation_m313EC3BE0F811C7FB61C475298BABFFAA11DA1DC (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Animator_get_targetRotation_Injected_m64CE93A396B9F5BF5F77EEE843484C38C5975F1C(__this, (&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = V_0;
		return L_0;
	}
}
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransform(UnityEngine.HumanBodyBones)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_humanBoneId, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_2 = NULL;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_humanBoneId;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		int32_t L_1 = ___0_humanBoneId;
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)55)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_000f:
	{
		G_B3_0 = 1;
	}

IL_0010:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0034;
		}
	}
	{
		V_1 = ((int32_t)55);
		Il2CppFakeBox<int32_t> L_3(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HumanBodyBones_tA2A904890A05ABCFFAB7E119244E97C5EA9807E6_il2cpp_TypeInfo_var)), (&V_1));
		String_t* L_4;
		L_4 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_3), NULL);
		String_t* L_5;
		L_5 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00F97321929E0D7989E72D633D157BD761DD173A)), L_4, NULL);
		IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82* L_6 = (IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_t7ECB35264FB6CA8FAA516BD958F4B2ADC78E8A82_il2cpp_TypeInfo_var)));
		NullCheck(L_6);
		IndexOutOfRangeException__ctor_mFD06819F05B815BE2D6E826D4E04F4C449D0A425(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Animator_GetBoneTransform_m02042CB47C468D576C6EE436F4AA71D8C47AAF56_RuntimeMethod_var)));
	}

IL_0034:
	{
		int32_t L_7 = ___0_humanBoneId;
		int32_t L_8;
		L_8 = HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857(__this, L_8, NULL);
		V_2 = L_9;
		goto IL_0043;
	}

IL_0043:
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = V_2;
		return L_10;
	}
}
// UnityEngine.Transform UnityEngine.Animator::GetBoneTransformInternal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_humanBoneId, const RuntimeMethod* method) 
{
	typedef Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoneTransformInternal_m875DC36979BC9FB162D83E799421243AD3842857_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoneTransformInternal(System.Int32)");
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* icallRetVal = _il2cpp_icall_func(__this, ___0_humanBoneId);
	return icallRetVal;
}
// UnityEngine.AnimatorCullingMode UnityEngine.Animator::get_cullingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_cullingMode_m5C9C70B94075022FA6346E17CF1E9C0DEDB21605 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_get_cullingMode_m5C9C70B94075022FA6346E17CF1E9C0DEDB21605_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_cullingMode_m5C9C70B94075022FA6346E17CF1E9C0DEDB21605_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_cullingMode_m5C9C70B94075022FA6346E17CF1E9C0DEDB21605_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_cullingMode()");
	int32_t icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_cullingMode(UnityEngine.AnimatorCullingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_cullingMode_m7520115B5460495336C87393B58014F412B24209 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_cullingMode_m7520115B5460495336C87393B58014F412B24209_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_set_cullingMode_m7520115B5460495336C87393B58014F412B24209_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_cullingMode_m7520115B5460495336C87393B58014F412B24209_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_cullingMode(UnityEngine.AnimatorCullingMode)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.Animator::StartPlayback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_StartPlayback_m981AE4C0AAEADFE8484C9C001FDA17D5D255D500 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_StartPlayback_m981AE4C0AAEADFE8484C9C001FDA17D5D255D500_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_StartPlayback_m981AE4C0AAEADFE8484C9C001FDA17D5D255D500_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StartPlayback_m981AE4C0AAEADFE8484C9C001FDA17D5D255D500_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StartPlayback()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.Animator::StopPlayback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_StopPlayback_mCC18E6452A6FC5F7BA622F2A7619848CF875B8D0 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_StopPlayback_mCC18E6452A6FC5F7BA622F2A7619848CF875B8D0_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_StopPlayback_mCC18E6452A6FC5F7BA622F2A7619848CF875B8D0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StopPlayback_mCC18E6452A6FC5F7BA622F2A7619848CF875B8D0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StopPlayback()");
	_il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Animator::get_playbackTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_playbackTime_m11289709E35A3FF5D524FC92AF4CEA00B107BD3E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_playbackTime_m11289709E35A3FF5D524FC92AF4CEA00B107BD3E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_playbackTime_m11289709E35A3FF5D524FC92AF4CEA00B107BD3E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_playbackTime_m11289709E35A3FF5D524FC92AF4CEA00B107BD3E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_playbackTime()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_playbackTime(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_playbackTime_m223512B44026FAFDA2E25A321B6B0B6F57DB56FA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, float ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_playbackTime_m223512B44026FAFDA2E25A321B6B0B6F57DB56FA_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, float);
	static Animator_set_playbackTime_m223512B44026FAFDA2E25A321B6B0B6F57DB56FA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_playbackTime_m223512B44026FAFDA2E25A321B6B0B6F57DB56FA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_playbackTime(System.Single)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.Animator::StartRecording(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_StartRecording_mCCD8C24752A76B5487592BE766D57E6874CCC40E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_frameCount, const RuntimeMethod* method) 
{
	typedef void (*Animator_StartRecording_mCCD8C24752A76B5487592BE766D57E6874CCC40E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_StartRecording_mCCD8C24752A76B5487592BE766D57E6874CCC40E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StartRecording_mCCD8C24752A76B5487592BE766D57E6874CCC40E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StartRecording(System.Int32)");
	_il2cpp_icall_func(__this, ___0_frameCount);
}
// System.Void UnityEngine.Animator::StopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_StopRecording_mF8048A93508F6159B2377D61AF3589340A6B5256 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef void (*Animator_StopRecording_mF8048A93508F6159B2377D61AF3589340A6B5256_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_StopRecording_mF8048A93508F6159B2377D61AF3589340A6B5256_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StopRecording_mF8048A93508F6159B2377D61AF3589340A6B5256_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StopRecording()");
	_il2cpp_icall_func(__this);
}
// System.Single UnityEngine.Animator::get_recorderStartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_recorderStartTime_m9CB9520E347B1520B05052E31C4D8A701462E241 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = Animator_GetRecorderStartTime_mC9E51A2F33D7297124F3F93322E28FBFFCB392C4(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.Animator::GetRecorderStartTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetRecorderStartTime_mC9E51A2F33D7297124F3F93322E28FBFFCB392C4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetRecorderStartTime_mC9E51A2F33D7297124F3F93322E28FBFFCB392C4_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_GetRecorderStartTime_mC9E51A2F33D7297124F3F93322E28FBFFCB392C4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetRecorderStartTime_mC9E51A2F33D7297124F3F93322E28FBFFCB392C4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetRecorderStartTime()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::get_recorderStopTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_recorderStopTime_m675F4F5DC1AEDC41C456AAEE5F96F52AEA1E59A9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0;
		L_0 = Animator_GetRecorderStopTime_m928EDD878985FD098B38DBC89AD7FC935FF95681(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single UnityEngine.Animator::GetRecorderStopTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetRecorderStopTime_m928EDD878985FD098B38DBC89AD7FC935FF95681 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetRecorderStopTime_m928EDD878985FD098B38DBC89AD7FC935FF95681_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_GetRecorderStopTime_m928EDD878985FD098B38DBC89AD7FC935FF95681_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetRecorderStopTime_m928EDD878985FD098B38DBC89AD7FC935FF95681_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetRecorderStopTime()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_hasBoundPlayables()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_hasBoundPlayables_mA5A6132C03593851FE80D8E7490191E051E5A1C9_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_hasBoundPlayables()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A (String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A_ftn) (String_t*);
	static Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_StringToHash_mD67B872C411BE37641F49D7AA1DBD45B67F63E3A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::StringToHash(System.String)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_name);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::CheckIfInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_CheckIfInIKPass_mE7815990AFAD02738D0D5B4DA8DDB3E649D30CCF (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1DCB778EB9DF1B12AD26B829002FF8E78A1AFCE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		bool L_0;
		L_0 = Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		bool L_1;
		L_1 = Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F(__this, NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 0;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(_stringLiteralD1DCB778EB9DF1B12AD26B829002FF8E78A1AFCE, NULL);
	}

IL_0024:
	{
		return;
	}
}
// System.Boolean UnityEngine.Animator::IsInIKPass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsInIKPass_m35BF844B06D845BD0C6778F3B6E87B9C0B26BA5F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsInIKPass()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetFloatID(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, float ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float);
	static Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatID_m348942A23D4C734DDF4D04C7609E5CD9EBAB66AA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatID(System.Int32,System.Single)");
	_il2cpp_icall_func(__this, ___0_id, ___1_value);
}
// System.Single UnityEngine.Animator::GetFloatID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	typedef float (*Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetFloatID_m0300DB1901B65F007EA9E0E98ACB91E105FDD366_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetFloatID(System.Int32)");
	float icallRetVal = _il2cpp_icall_func(__this, ___0_id);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, bool);
	static Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetBoolID_mCDA31E47A1AA78E830D0B76394BE2FA7296E03BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetBoolID(System.Int32,System.Boolean)");
	_il2cpp_icall_func(__this, ___0_id, ___1_value);
}
// System.Boolean UnityEngine.Animator::GetBoolID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	typedef bool (*Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetBoolID_mD88CBA007AB7C968BF526B518E90F90E0935A9DD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetBoolID(System.Int32)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_id);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, int32_t ___1_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, int32_t);
	static Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetIntegerID_m08431A06E5905C62BA397B9BAB30F87E3C30569F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetIntegerID(System.Int32,System.Int32)");
	_il2cpp_icall_func(__this, ___0_id, ___1_value);
}
// System.Int32 UnityEngine.Animator::GetIntegerID(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, const RuntimeMethod* method) 
{
	typedef int32_t (*Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t);
	static Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetIntegerID_mCAC9F61639DAF52DD2DE8891DB8A2F7FE5C3DF4A_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetIntegerID(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(__this, ___0_id);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetTriggerString_m177C75DFBE070DE66FC08A3232444CCEA409C25E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___0_name);
}
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef void (*Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_ResetTriggerString_m78259348CED35F156148A64B95EBD73CE3951868_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::ResetTriggerString(System.String)");
	_il2cpp_icall_func(__this, ___0_name);
}
// System.Boolean UnityEngine.Animator::IsParameterControlledByCurveString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_IsParameterControlledByCurveString_m8BDBA93917C92923DB297EBE8F141FA6C695AF61 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	typedef bool (*Animator_IsParameterControlledByCurveString_m8BDBA93917C92923DB297EBE8F141FA6C695AF61_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, String_t*);
	static Animator_IsParameterControlledByCurveString_m8BDBA93917C92923DB297EBE8F141FA6C695AF61_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_IsParameterControlledByCurveString_m8BDBA93917C92923DB297EBE8F141FA6C695AF61_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::IsParameterControlledByCurveString(System.String)");
	bool icallRetVal = _il2cpp_icall_func(__this, ___0_name);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::SetFloatIDDamp(System.Int32,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloatIDDamp_m013A6F5FD90DFA125C152BF42F299157AEE96330 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_id, float ___1_value, float ___2_dampTime, float ___3_deltaTime, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetFloatIDDamp_m013A6F5FD90DFA125C152BF42F299157AEE96330_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, float, float, float);
	static Animator_SetFloatIDDamp_m013A6F5FD90DFA125C152BF42F299157AEE96330_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetFloatIDDamp_m013A6F5FD90DFA125C152BF42F299157AEE96330_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetFloatIDDamp(System.Int32,System.Single,System.Single,System.Single)");
	_il2cpp_icall_func(__this, ___0_id, ___1_value, ___2_dampTime, ___3_deltaTime);
}
// System.Boolean UnityEngine.Animator::get_layersAffectMassCenter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_layersAffectMassCenter_mB3DB124E8A0F57BE687F44A95986F5F0E3B999EB (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_layersAffectMassCenter_mB3DB124E8A0F57BE687F44A95986F5F0E3B999EB_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_layersAffectMassCenter_mB3DB124E8A0F57BE687F44A95986F5F0E3B999EB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_layersAffectMassCenter_mB3DB124E8A0F57BE687F44A95986F5F0E3B999EB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_layersAffectMassCenter()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::set_layersAffectMassCenter(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_layersAffectMassCenter_mED2748A798EB7DAFC9977710463E06931BA3E3AE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, bool ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_layersAffectMassCenter_mED2748A798EB7DAFC9977710463E06931BA3E3AE_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, bool);
	static Animator_set_layersAffectMassCenter_mED2748A798EB7DAFC9977710463E06931BA3E3AE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_layersAffectMassCenter_mED2748A798EB7DAFC9977710463E06931BA3E3AE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_layersAffectMassCenter(System.Boolean)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Single UnityEngine.Animator::get_leftFeetBottomHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_leftFeetBottomHeight_m5ECBAF5B6CCC20691ADA416B95AAE9192DF09C76 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_leftFeetBottomHeight_m5ECBAF5B6CCC20691ADA416B95AAE9192DF09C76_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_leftFeetBottomHeight_m5ECBAF5B6CCC20691ADA416B95AAE9192DF09C76_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_leftFeetBottomHeight_m5ECBAF5B6CCC20691ADA416B95AAE9192DF09C76_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_leftFeetBottomHeight()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Single UnityEngine.Animator::get_rightFeetBottomHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Animator_get_rightFeetBottomHeight_m0C68C9515FF2AD560D36357A134246DADB8A3544 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef float (*Animator_get_rightFeetBottomHeight_m0C68C9515FF2AD560D36357A134246DADB8A3544_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_rightFeetBottomHeight_m0C68C9515FF2AD560D36357A134246DADB8A3544_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_rightFeetBottomHeight_m0C68C9515FF2AD560D36357A134246DADB8A3544_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_rightFeetBottomHeight()");
	float icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Boolean UnityEngine.Animator::get_logWarnings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, const RuntimeMethod* method) 
{
	typedef bool (*Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*);
	static Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_logWarnings_m39949DA4A177E2D107023FB0BD89DC3D6F303652_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_logWarnings()");
	bool icallRetVal = _il2cpp_icall_func(__this);
	return icallRetVal;
}
// System.Void UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaPosition_Injected_mF37497B00055319EE54006C19AAEE221A99791F4 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_deltaPosition_Injected_mF37497B00055319EE54006C19AAEE221A99791F4_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_get_deltaPosition_Injected_mF37497B00055319EE54006C19AAEE221A99791F4_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_deltaPosition_Injected_mF37497B00055319EE54006C19AAEE221A99791F4_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_deltaPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Animator::get_deltaRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_deltaRotation_Injected_mFEC802815227FE4B11491F80B281425A10E19ABD (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_deltaRotation_Injected_mFEC802815227FE4B11491F80B281425A10E19ABD_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_get_deltaRotation_Injected_mFEC802815227FE4B11491F80B281425A10E19ABD_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_deltaRotation_Injected_mFEC802815227FE4B11491F80B281425A10E19ABD_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_deltaRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Animator::get_rootPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_rootPosition_Injected_m7F7BA9F18B8866C40649D61A36ADFF42EDF5B88D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_rootPosition_Injected_m7F7BA9F18B8866C40649D61A36ADFF42EDF5B88D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_get_rootPosition_Injected_m7F7BA9F18B8866C40649D61A36ADFF42EDF5B88D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_rootPosition_Injected_m7F7BA9F18B8866C40649D61A36ADFF42EDF5B88D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_rootPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Animator::get_rootRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_rootRotation_Injected_m670A2B5E5EE664CA5ED9D711733C102E0BD72AFB (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_rootRotation_Injected_m670A2B5E5EE664CA5ED9D711733C102E0BD72AFB_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_get_rootRotation_Injected_m670A2B5E5EE664CA5ED9D711733C102E0BD72AFB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_rootRotation_Injected_m670A2B5E5EE664CA5ED9D711733C102E0BD72AFB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_rootRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Animator::get_bodyPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_bodyPositionInternal_Injected_m44C1D9729A292329E4B4A66B1DE583368ED9B2B3 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_bodyPositionInternal_Injected_m44C1D9729A292329E4B4A66B1DE583368ED9B2B3_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_get_bodyPositionInternal_Injected_m44C1D9729A292329E4B4A66B1DE583368ED9B2B3_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_bodyPositionInternal_Injected_m44C1D9729A292329E4B4A66B1DE583368ED9B2B3_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_bodyPositionInternal_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Animator::set_bodyPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyPositionInternal_Injected_m434A0C848EF277237CBAA68C4A94A1DD4A05DC75 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_bodyPositionInternal_Injected_m434A0C848EF277237CBAA68C4A94A1DD4A05DC75_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_set_bodyPositionInternal_Injected_m434A0C848EF277237CBAA68C4A94A1DD4A05DC75_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_bodyPositionInternal_Injected_m434A0C848EF277237CBAA68C4A94A1DD4A05DC75_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_bodyPositionInternal_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.Animator::get_bodyRotationInternal_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_bodyRotationInternal_Injected_m60262D5C0C987E21A358FF7F67887C3B23FEDD5E (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_bodyRotationInternal_Injected_m60262D5C0C987E21A358FF7F67887C3B23FEDD5E_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_get_bodyRotationInternal_Injected_m60262D5C0C987E21A358FF7F67887C3B23FEDD5E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_bodyRotationInternal_Injected_m60262D5C0C987E21A358FF7F67887C3B23FEDD5E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_bodyRotationInternal_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Animator::set_bodyRotationInternal_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_set_bodyRotationInternal_Injected_m0BDC67195DA58582AEFC3567906106BD96C1D173 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_value, const RuntimeMethod* method) 
{
	typedef void (*Animator_set_bodyRotationInternal_Injected_m0BDC67195DA58582AEFC3567906106BD96C1D173_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_set_bodyRotationInternal_Injected_m0BDC67195DA58582AEFC3567906106BD96C1D173_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_set_bodyRotationInternal_Injected_m0BDC67195DA58582AEFC3567906106BD96C1D173_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::set_bodyRotationInternal_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_value);
}
// System.Void UnityEngine.Animator::GetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetGoalPosition_Injected_m7EF59EA5A53DEE902DA1AAACD32378A32B4D67BE_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_goal, ___1_ret);
}
// System.Void UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_goalPosition, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalPosition_Injected_mE03B76DB578A3B15ED91437071BEF70F61985707_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalPosition_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_goal, ___1_goalPosition);
}
// System.Void UnityEngine.Animator::GetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_GetGoalRotation_Injected_m76092248C853479A1E6178DA4AF19F69FF8C8F75 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_GetGoalRotation_Injected_m76092248C853479A1E6178DA4AF19F69FF8C8F75_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_GetGoalRotation_Injected_m76092248C853479A1E6178DA4AF19F69FF8C8F75_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_GetGoalRotation_Injected_m76092248C853479A1E6178DA4AF19F69FF8C8F75_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::GetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_goal, ___1_ret);
}
// System.Void UnityEngine.Animator::SetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetGoalRotation_Injected_m93587602A0C43AC9B184D30B03F751C02E6BF045 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, int32_t ___0_goal, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_goalRotation, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetGoalRotation_Injected_m93587602A0C43AC9B184D30B03F751C02E6BF045_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, int32_t, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_SetGoalRotation_Injected_m93587602A0C43AC9B184D30B03F751C02E6BF045_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetGoalRotation_Injected_m93587602A0C43AC9B184D30B03F751C02E6BF045_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetGoalRotation_Injected(UnityEngine.AvatarIKGoal,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_goal, ___1_goalRotation);
}
// System.Void UnityEngine.Animator::SetLookAtPositionInternal_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLookAtPositionInternal_Injected_mE50AFECADA7DC76D0E73C6B7131EBBD1CED5D59D (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_lookAtPosition, const RuntimeMethod* method) 
{
	typedef void (*Animator_SetLookAtPositionInternal_Injected_mE50AFECADA7DC76D0E73C6B7131EBBD1CED5D59D_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_SetLookAtPositionInternal_Injected_mE50AFECADA7DC76D0E73C6B7131EBBD1CED5D59D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_SetLookAtPositionInternal_Injected_mE50AFECADA7DC76D0E73C6B7131EBBD1CED5D59D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::SetLookAtPositionInternal_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_lookAtPosition);
}
// System.Void UnityEngine.Animator::get_pivotPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_pivotPosition_Injected_m381B79F41C78BD14DC47FA49C3B20287E50A8EC6 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_pivotPosition_Injected_m381B79F41C78BD14DC47FA49C3B20287E50A8EC6_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_get_pivotPosition_Injected_m381B79F41C78BD14DC47FA49C3B20287E50A8EC6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_pivotPosition_Injected_m381B79F41C78BD14DC47FA49C3B20287E50A8EC6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_pivotPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Animator::MatchTarget_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32,UnityEngine.MatchTargetWeightMask&,System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_MatchTarget_Injected_m1B2CB01E3B71964EA09D70C42583F613641925C7 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_matchPosition, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___1_matchRotation, int32_t ___2_targetBodyPart, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25* ___3_weightMask, float ___4_startNormalizedTime, float ___5_targetNormalizedTime, bool ___6_completeMatch, const RuntimeMethod* method) 
{
	typedef void (*Animator_MatchTarget_Injected_m1B2CB01E3B71964EA09D70C42583F613641925C7_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*, int32_t, MatchTargetWeightMask_tE641E0A4B26BD91F3226EC85DE46AE76DD652A25*, float, float, bool);
	static Animator_MatchTarget_Injected_m1B2CB01E3B71964EA09D70C42583F613641925C7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_MatchTarget_Injected_m1B2CB01E3B71964EA09D70C42583F613641925C7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::MatchTarget_Injected(UnityEngine.Vector3&,UnityEngine.Quaternion&,System.Int32,UnityEngine.MatchTargetWeightMask&,System.Single,System.Single,System.Boolean)");
	_il2cpp_icall_func(__this, ___0_matchPosition, ___1_matchRotation, ___2_targetBodyPart, ___3_weightMask, ___4_startNormalizedTime, ___5_targetNormalizedTime, ___6_completeMatch);
}
// System.Void UnityEngine.Animator::get_targetPosition_Injected(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_targetPosition_Injected_m7114A2CB2FE3A982E0967119BF3280258EEA4166 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_targetPosition_Injected_m7114A2CB2FE3A982E0967119BF3280258EEA4166_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*);
	static Animator_get_targetPosition_Injected_m7114A2CB2FE3A982E0967119BF3280258EEA4166_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_targetPosition_Injected_m7114A2CB2FE3A982E0967119BF3280258EEA4166_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_targetPosition_Injected(UnityEngine.Vector3&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
// System.Void UnityEngine.Animator::get_targetRotation_Injected(UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_get_targetRotation_Injected_m64CE93A396B9F5BF5F77EEE843484C38C5975F1C (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* ___0_ret, const RuntimeMethod* method) 
{
	typedef void (*Animator_get_targetRotation_Injected_m64CE93A396B9F5BF5F77EEE843484C38C5975F1C_ftn) (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883*, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*);
	static Animator_get_targetRotation_Injected_m64CE93A396B9F5BF5F77EEE843484C38C5975F1C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Animator_get_targetRotation_Injected_m64CE93A396B9F5BF5F77EEE843484C38C5975F1C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animator::get_targetRotation_Injected(UnityEngine.Quaternion&)");
	_il2cpp_icall_func(__this, ___0_ret);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.AnimatorOverrideController::OnInvalidateOverrideController(UnityEngine.AnimatorOverrideController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorOverrideController_OnInvalidateOverrideController_mA6B0AA977505FDEFDD6BCA2E941FD3A18AE1AD23 (AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* ___0_controller, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* L_0 = ___0_controller;
		NullCheck(L_0);
		OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* L_1 = L_0->___OnOverrideControllerDirty_4;
		V_0 = (bool)((!(((RuntimeObject*)(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5*)L_1) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		AnimatorOverrideController_tF78BD58B30BB0D767E7A96F8428EA66F2DFD5493* L_3 = ___0_controller;
		NullCheck(L_3);
		OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* L_4 = L_3->___OnOverrideControllerDirty_4;
		NullCheck(L_4);
		OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_inline(L_4, NULL);
	}

IL_001a:
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
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_Multicast(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* currentDelegate = reinterpret_cast<OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenInst(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStatic(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStaticInvoker(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL);
}
void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_ClosedStaticInvoker(OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke((Il2CppMethodPointer)__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5 (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback__ctor_mA49B11AF24CB49A9B764058DB73CE221AE54E106 (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = (intptr_t)il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_OpenStatic;
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
	__this->___extra_arg_5 = (intptr_t)&OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_Multicast;
}
// System.Void UnityEngine.AnimatorOverrideController/OnOverrideControllerDirtyCallback::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_string(unmarshaled.___name_0);
	marshaled.___parentName_1 = il2cpp_codegen_marshal_string(unmarshaled.___parentName_1);
	marshaled.___position_2 = unmarshaled.___position_2;
	marshaled.___rotation_3 = unmarshaled.___rotation_3;
	marshaled.___scale_4 = unmarshaled.___scale_4;
}
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_back(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_string_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___name_0));
	unmarshaled.___parentName_1 = il2cpp_codegen_marshal_string_result(marshaled.___parentName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___parentName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___parentName_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_2;
	memset((&unmarshaledposition_temp_2), 0, sizeof(unmarshaledposition_temp_2));
	unmarshaledposition_temp_2 = marshaled.___position_2;
	unmarshaled.___position_2 = unmarshaledposition_temp_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledrotation_temp_3;
	memset((&unmarshaledrotation_temp_3), 0, sizeof(unmarshaledrotation_temp_3));
	unmarshaledrotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.___rotation_3 = unmarshaledrotation_temp_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledscale_temp_4;
	memset((&unmarshaledscale_temp_4), 0, sizeof(unmarshaledscale_temp_4));
	unmarshaledscale_temp_4 = marshaled.___scale_4;
	unmarshaled.___scale_4 = unmarshaledscale_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_pinvoke_cleanup(SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled)
{
	marshaled.___name_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___name_0);
	marshaled.___parentName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___parentName_1);
	marshaled.___position_2 = unmarshaled.___position_2;
	marshaled.___rotation_3 = unmarshaled.___rotation_3;
	marshaled.___scale_4 = unmarshaled.___scale_4;
}
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_back(const SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled, SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126& unmarshaled)
{
	unmarshaled.___name_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___name_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___name_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___name_0));
	unmarshaled.___parentName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___parentName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___parentName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___parentName_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_2;
	memset((&unmarshaledposition_temp_2), 0, sizeof(unmarshaledposition_temp_2));
	unmarshaledposition_temp_2 = marshaled.___position_2;
	unmarshaled.___position_2 = unmarshaledposition_temp_2;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 unmarshaledrotation_temp_3;
	memset((&unmarshaledrotation_temp_3), 0, sizeof(unmarshaledrotation_temp_3));
	unmarshaledrotation_temp_3 = marshaled.___rotation_3;
	unmarshaled.___rotation_3 = unmarshaledrotation_temp_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledscale_temp_4;
	memset((&unmarshaledscale_temp_4), 0, sizeof(unmarshaledscale_temp_4));
	unmarshaledscale_temp_4 = marshaled.___scale_4;
	unmarshaled.___scale_4 = unmarshaledscale_temp_4;
}
// Conversion method for clean up from marshalling of: UnityEngine.SkeletonBone
IL2CPP_EXTERN_C void SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshal_com_cleanup(SkeletonBone_tA999028EED923DB65E286BB99F81541872F5B126_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___name_0);
	marshaled.___name_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___parentName_1);
	marshaled.___parentName_1 = NULL;
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
// Conversion methods for marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_back(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_BoneName_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_BoneName_0));
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_HumanName_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___m_HumanName_1));
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E unmarshaledlimit_temp_2;
	memset((&unmarshaledlimit_temp_2), 0, sizeof(unmarshaledlimit_temp_2));
	unmarshaledlimit_temp_2 = marshaled.___limit_2;
	unmarshaled.___limit_2 = unmarshaledlimit_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_pinvoke_cleanup(HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled)
{
	marshaled.___m_BoneName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_BoneName_0);
	marshaled.___m_HumanName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___m_HumanName_1);
	marshaled.___limit_2 = unmarshaled.___limit_2;
}
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_back(const HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled, HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8& unmarshaled)
{
	unmarshaled.___m_BoneName_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_BoneName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_BoneName_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_BoneName_0));
	unmarshaled.___m_HumanName_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___m_HumanName_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___m_HumanName_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___m_HumanName_1));
	HumanLimit_tE825F951DEE60E2641DD91F3C92C6B56A139A36E unmarshaledlimit_temp_2;
	memset((&unmarshaledlimit_temp_2), 0, sizeof(unmarshaledlimit_temp_2));
	unmarshaledlimit_temp_2 = marshaled.___limit_2;
	unmarshaled.___limit_2 = unmarshaledlimit_temp_2;
}
// Conversion method for clean up from marshalling of: UnityEngine.HumanBone
IL2CPP_EXTERN_C void HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshal_com_cleanup(HumanBone_t9A978BB2457E935D0B6FA64ADDE60562ADAE5FD8_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_BoneName_0);
	marshaled.___m_BoneName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___m_HumanName_1);
	marshaled.___m_HumanName_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925 (int32_t ___0_humanId, const RuntimeMethod* method) 
{
	typedef int32_t (*HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925_ftn) (int32_t);
	static HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HumanTrait_GetBoneIndexFromMono_mDE16E21275A55D263014CFD3307BEB7353AE6925_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.HumanTrait::GetBoneIndexFromMono(System.Int32)");
	int32_t icallRetVal = _il2cpp_icall_func(___0_humanId);
	return icallRetVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Motion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Motion__ctor_mB6190858E566BFA1B80D2E94B65CD27920A49443 (Motion_tBCD49FBF5608AD21FC03B63C8182FABCEF2707AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object__ctor_m2149FA40CEC8D82AC20D3508AB40C0D8EFEF68E6(__this, NULL);
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
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationClipPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationClipPlayable::Equals(UnityEngine.Animations.AnimationClipPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4 (AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* __this, AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationClipPlayable_GetHandle_mE775F2247901BA293DB01A8D384D3F9D02A25627((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4_AdjustorThunk (RuntimeObject* __this, AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969 ___0_other, const RuntimeMethod* method)
{
	AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationClipPlayable_t54CEA0DD315B1674C2BD49E681005C4271D73969*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationClipPlayable_Equals_mC5263BEA86C02CEDF93C5B14EAA168883E1DB5F4(_thisAdjusted, ___0_other, method);
	return _returnValue;
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
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, bool ___1_singleLayerOptimization, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0030;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_m23764EE36FE7A81A245C7146FF1E9DF6530DA321_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD2435BFAEB0372E848D9BE812E3B06AB862CC3D1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6_RuntimeMethod_var)));
	}

IL_0026:
	{
		bool L_5 = ___1_singleLayerOptimization;
		il2cpp_codegen_runtime_class_init_inline(AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB((&___0_handle), L_5, NULL);
	}

IL_0030:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_6 = ___0_handle;
		__this->___m_Handle_0 = L_6;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, bool ___1_singleLayerOptimization, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D*>(__this + _offset);
	AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6(_thisAdjusted, ___0_handle, ___1_singleLayerOptimization, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationLayerMixerPlayable::Equals(UnityEngine.Animations.AnimationLayerMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970 (AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* __this, AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationLayerMixerPlayable_GetHandle_m324A98D0B0BFC0441377D65CAE93C914F828721F((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970_AdjustorThunk (RuntimeObject* __this, AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D ___0_other, const RuntimeMethod* method)
{
	AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationLayerMixerPlayable_Equals_mA5D24E61E2DE1140B409F3B569DBA3C185751970(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::SetSingleLayerOptimizationInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* ___0_handle, bool ___1_value, const RuntimeMethod* method) 
{
	typedef void (*AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB_ftn) (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*, bool);
	static AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (AnimationLayerMixerPlayable_SetSingleLayerOptimizationInternal_mF1EC1B461F2CCB8D7E01799875DDB5FC8FE4BBDB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Animations.AnimationLayerMixerPlayable::SetSingleLayerOptimizationInternal(UnityEngine.Playables.PlayableHandle&,System.Boolean)");
	_il2cpp_icall_func(___0_handle, ___1_value);
}
// System.Void UnityEngine.Animations.AnimationLayerMixerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationLayerMixerPlayable__cctor_m27A78F2EB8840FFCC84901AB4E916ACCE8D8E49B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationLayerMixerPlayable__ctor_m28884B8B9F7E057DF947E3B43ED78EA107368BD6((&L_1), L_0, (bool)1, /*hidden argument*/NULL);
		((AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_StaticFields*)il2cpp_codegen_static_fields_for(AnimationLayerMixerPlayable_tAD8D28A1E2FB76567E9748CDD11699AEF0B4317D_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7 (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_m644E76378CB4DDC0CE669FE1DCE8A8917595D0ED_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4DEE968069F34C26613ADFCD69C41EFC29314286)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0*>(__this + _offset);
	AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationMixerPlayable::Equals(UnityEngine.Animations.AnimationMixerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E (AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* __this, AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationMixerPlayable_GetHandle_mBA6CEB1579A713A985D474E75BC282728318882F((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E_AdjustorThunk (RuntimeObject* __this, AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 ___0_other, const RuntimeMethod* method)
{
	AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationMixerPlayable_Equals_m6EBE215636EEEA3196A43F4D6C1FE6DD704AFA4E(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationMixerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMixerPlayable__cctor_m7D67E8E778387293AF1ACB1FDBE6ADA3E456A969 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationMixerPlayable__ctor_mBF84CC064549C2C00B2AE1174018335958EB7EA7((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMixerPlayable_t2984697B87B8719A34519FCF2130545D6D7AB6C0_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_mE6DAD58415B04EE79FD34641B365283758722ABF_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8DC2252638D84FAF2C30B95D54EC83F52FA6C630)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18*>(__this + _offset);
	AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2 (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationMotionXToDeltaPlayable::Equals(UnityEngine.Animations.AnimationMotionXToDeltaPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC (AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* __this, AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationMotionXToDeltaPlayable_GetHandle_m09F605E78AD7F0135C7F57EB048031091A50E3A2((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC_AdjustorThunk (RuntimeObject* __this, AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 ___0_other, const RuntimeMethod* method)
{
	AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationMotionXToDeltaPlayable_Equals_m7CBF3B7618EDBA4ECC2F3C2F54011248BC45CDCC(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationMotionXToDeltaPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMotionXToDeltaPlayable__cctor_m4FC582F607F00D5E2A6B97219D2D4150AFA42AF1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationMotionXToDeltaPlayable__ctor_mDE3C14B4B975AC693669D66B6E41BB6432AFA940((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_StaticFields*)il2cpp_codegen_static_fields_for(AnimationMotionXToDeltaPlayable_t3946605ADB0B4C054A27B3D65A59F8EB75B6BE18_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_mB35755A4D179F4DA51A96FCB3C4A8DF105C2BB12_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA3C8FF345EC45846B2EE6801F84DD49340F0A9E1)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4*>(__this + _offset);
	AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationOffsetPlayable::Equals(UnityEngine.Animations.AnimationOffsetPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270 (AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* __this, AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationOffsetPlayable_GetHandle_m769BEFF90379AEAB0C579F7800953458CE3EBA78((&___0_other), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = L_0;
		RuntimeObject* L_2 = Box(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var, &L_1);
		Il2CppFakeBox<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4> L_3(AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var, __this);
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_3), L_2, NULL);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270_AdjustorThunk (RuntimeObject* __this, AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 ___0_other, const RuntimeMethod* method)
{
	AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationOffsetPlayable_Equals_mEC28392ADD4E9639EB9228D106D93E21B3587270(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationOffsetPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationOffsetPlayable__cctor_m6F50D35CE1FAF52BD587DD3B440CBDE34A76B096 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationOffsetPlayable__ctor_mBF3AC6493556DAAEF608B359BEBE8FA6D9F8DBFD((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_StaticFields*)il2cpp_codegen_static_fields_for(AnimationOffsetPlayable_t39A1B1103995D63650F606BA2EA4ABDF9484AFB4_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimationPosePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_m61A79154B28DAE22A64165C871757F3E447822A6_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE066D08B565F88D413FDACA14C42BFF008FF4EB9)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C*>(__this + _offset);
	AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationPosePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationPosePlayable::Equals(UnityEngine.Animations.AnimationPosePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3 (AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* __this, AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationPosePlayable_GetHandle_m5DC7CA4CAF3CD525D454D99EBC3D12C3571B527B((&___0_other), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = L_0;
		RuntimeObject* L_2 = Box(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var, &L_1);
		Il2CppFakeBox<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C> L_3(AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var, __this);
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_3), L_2, NULL);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3_AdjustorThunk (RuntimeObject* __this, AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C ___0_other, const RuntimeMethod* method)
{
	AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationPosePlayable_Equals_m10F1E7DD7037B2AB3F7DAE3E01A1DC843EABD0A3(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationPosePlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationPosePlayable__cctor_mFA5FE84F06C8E9A89C07190055BC898525F897C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationPosePlayable__ctor_mC6C096785918358CA7EC12BABCDF4BBD47F7BA3F((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_StaticFields*)il2cpp_codegen_static_fields_for(AnimationPosePlayable_tBB5B82AC675A509F3808C8F825EA24943714CD5C_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_m961964786905D9B20B750AC27CB64EA48C4C5971_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral98C704D69BD1A288ED31DEE4ED4E50097A2D7018)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD*>(__this + _offset);
	AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationRemoveScalePlayable::Equals(UnityEngine.Animations.AnimationRemoveScalePlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327 (AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* __this, AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationRemoveScalePlayable_GetHandle_mFFA58B879F31327187A20ED30E1C814B7BEAA9C6((&___0_other), NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = L_0;
		RuntimeObject* L_2 = Box(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var, &L_1);
		Il2CppFakeBox<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD> L_3(AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var, __this);
		bool L_4;
		L_4 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_3), L_2, NULL);
		V_0 = L_4;
		goto IL_001c;
	}

IL_001c:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327_AdjustorThunk (RuntimeObject* __this, AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD ___0_other, const RuntimeMethod* method)
{
	AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationRemoveScalePlayable_Equals_m0ACDD59B80103591DA8E84CB387FB10778D8C327(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationRemoveScalePlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationRemoveScalePlayable__cctor_m42E614B0B33898D92DFE06CA6045698BE94DE633 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationRemoveScalePlayable__ctor_m4D6C7C4AB8E078050B0CC34C6732051CF043CFA2((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_StaticFields*)il2cpp_codegen_static_fields_for(AnimationRemoveScalePlayable_t915611F6D3CC150DDCAF56412AC3E5ACB518A9DD_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_m4F637AD893630043482383791FA7A0285EB16F6E_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_4 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral860B9EA7CDAB02A8A4B38336805EAE2FBA31F09C)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247_RuntimeMethod_var)));
	}

IL_0026:
	{
	}

IL_0027:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_5 = ___0_handle;
		__this->___m_Handle_0 = L_5;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127*>(__this + _offset);
	AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationScriptPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Animations.AnimationScriptPlayable::Equals(UnityEngine.Animations.AnimationScriptPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4 (AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* __this, AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimationScriptPlayable_GetHandle_m30355B6EE1AA3BA36D628251FB4291386D223646((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4_AdjustorThunk (RuntimeObject* __this, AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 ___0_other, const RuntimeMethod* method)
{
	AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimationScriptPlayable_Equals_mAD02E40704CBE4AB188DE0569052F8EA9864F4E4(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimationScriptPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationScriptPlayable__cctor_m5ED4D3FC06BC7A51D3A48B5611F759CB00F7CF54 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimationScriptPlayable__ctor_m6DEFD72735E79009FC1484AA2A7A82E6CE601247((&L_1), L_0, /*hidden argument*/NULL);
		((AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_StaticFields*)il2cpp_codegen_static_fields_for(AnimationScriptPlayable_t1326433F6848D93D7D90BC54B4AB6649A5D59127_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		__this->___m_Handle_0 = L_0;
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = ___0_handle;
		il2cpp_codegen_runtime_class_init_inline(AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_il2cpp_TypeInfo_var);
		AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4(__this, L_1, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE(_thisAdjusted, ___0_handle, method);
}
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimatorControllerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, const RuntimeMethod* method) 
{
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0 = __this->___m_Handle_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 _returnValue;
	_returnValue = AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::SetHandle(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4* L_0 = (PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4*)(&__this->___m_Handle_0);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF563F6FCC25CE41FFE0BF7590AF9F4475916665)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_RuntimeMethod_var)));
	}

IL_001b:
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = PlayableHandle_IsValid_m07631D12846BAAF2CC302E69A28A44BFE9EB5098((&___0_handle), NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0041;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70((&___0_handle), PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_m83ED61FDEBC627830082467B83BF64724C68CD70_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0040;
		}
	}
	{
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_8 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var)));
		NullCheck(L_8);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_8, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5510C45DDAD777CCB4893578D995C9739F990F2)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_RuntimeMethod_var)));
	}

IL_0040:
	{
	}

IL_0041:
	{
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_9 = ___0_handle;
		__this->___m_Handle_0 = L_9;
		return;
	}
}
IL2CPP_EXTERN_C  void AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4_AdjustorThunk (RuntimeObject* __this, PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 ___0_handle, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	AnimatorControllerPlayable_SetHandle_mD86A3C0D03453FAF21903F7A52A743AB2DA6DED4(_thisAdjusted, ___0_handle, method);
}
// System.Boolean UnityEngine.Animations.AnimatorControllerPlayable::Equals(UnityEngine.Animations.AnimatorControllerPlayable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180 (AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* __this, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___0_other, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C(__this, NULL);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_1;
		L_1 = AnimatorControllerPlayable_GetHandle_m718D9A4E0DB7AC62947B1D09E47DBCD25C27AF6C((&___0_other), NULL);
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = PlayableHandle_op_Equality_m0E6C48A28F75A870AC22ADE3BD42F7F70A43C99C(L_0, L_1, NULL);
		V_0 = L_2;
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180_AdjustorThunk (RuntimeObject* __this, AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A ___0_other, const RuntimeMethod* method)
{
	AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A*>(__this + _offset);
	bool _returnValue;
	_returnValue = AnimatorControllerPlayable_Equals_m14125BB4CCFCDFFD098223AF20E38501BA264180(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Void UnityEngine.Animations.AnimatorControllerPlayable::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatorControllerPlayable__cctor_m88506D1B15D609B818DFDC6B2BCFF42ABB41B090 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4_il2cpp_TypeInfo_var);
		PlayableHandle_t5D6A01EF94382EFEDC047202F71DF882769654D4 L_0;
		L_0 = PlayableHandle_get_Null_mF44FE0A71C67054D272F454C91F7E08CBF14A975(NULL);
		AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A L_1;
		memset((&L_1), 0, sizeof(L_1));
		AnimatorControllerPlayable__ctor_mBCB9475E2740BE1AEB94C08BAD14D51333258BFE((&L_1), L_0, /*hidden argument*/NULL);
		((AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_StaticFields*)il2cpp_codegen_static_fields_for(AnimatorControllerPlayable_tADDCB301674D6243EFE1BD032E7D118FD091210A_il2cpp_TypeInfo_var))->___m_NullPlayable_1 = L_1;
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void OnOverrideControllerDirtyCallback_Invoke_m538DCB0FFFE75495DC3977DBBF55A07C570F8B5A_inline (OnOverrideControllerDirtyCallback_tDC67F7661A27502AD804BDE0B696955AFD4A44D5* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
