#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
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

// UnityEngine.XR.ARCore.ArCameraConfigFilter
struct ArCameraConfigFilter_tF665AEAE3CDEB76E6485508096A093A9E0E0B607 
{
	// System.IntPtr UnityEngine.XR.ARCore.ArCameraConfigFilter::m_Self
	intptr_t ___m_Self_0;
};

// UnityEngine.XR.ARCore.ArConfig
struct ArConfig_tC991F7E3046E638B111BDBE5A2B25C4F363C4F1C 
{
	// System.IntPtr UnityEngine.XR.ARCore.ArConfig::m_Self
	intptr_t ___m_Self_0;
};

// UnityEngine.XR.ARCore.ArSession
struct ArSession_t5038012861AFE90255CCD3F97A7819940B50ECFF 
{
	// System.IntPtr UnityEngine.XR.ARCore.ArSession::m_Self
	intptr_t ___m_Self_0;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif

extern "C" void DEFAULT_CALL ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_mDBD419B094B2CFE933BB3F63886A5AB4E44D2DC0(Il2CppChar* ___language0);
extern "C" intptr_t CDECL ReversePInvokeWrapper_MemoryManager_Pin_mC721B2801048D2BEEBB814F55AEA5A6E170E59AC(uint32_t ___size0, uint32_t ___typeHint1, intptr_t ___state2);
extern "C" void CDECL ReversePInvokeWrapper_MemoryManager_Unpin_mFF16A759D8C4DDF5469295D42FD11B8BD95F92FC(intptr_t ___ptr0, intptr_t ___state1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mB85BF0265E239960FC963DCA74DC67EBCE9480AC(intptr_t ___arg0);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARCoreProvider_OnBeforeGetCameraConfiguration_m2C314F5FC174CB06131BFADE7B5C0378E530C70C(intptr_t ___providerHandle0, ArSession_t5038012861AFE90255CCD3F97A7819940B50ECFF ___session1, ArCameraConfigFilter_tF665AEAE3CDEB76E6485508096A093A9E0E0B607 ___filter2);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARCoreProvider_CameraPermissionRequestProvider_m52520DB26683512123C6B56B7E2A28269DF7C310(Il2CppMethodPointer ___callback0, intptr_t ___context1);
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_ARCoreProvider_SetConfigurationCallback_m21110C590C44E78936908B4D2198452803E2330B(ArSession_t5038012861AFE90255CCD3F97A7819940B50ECFF ___session0, ArConfig_tC991F7E3046E638B111BDBE5A2B25C4F363C4F1C ___config1, intptr_t ___context2);
extern "C" Guid_t DEFAULT_CALL ReversePInvokeWrapper_ARCoreProvider_GenerateGuid_m406A7A02F96253CB573818EA5FF3E5AF66B91CDC();


IL2CPP_EXTERN_C const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[];
const Il2CppMethodPointer g_ReversePInvokeWrapperPointers[8] = 
{
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_CultureInfo_OnCultureInfoChangedInAppX_mDBD419B094B2CFE933BB3F63886A5AB4E44D2DC0),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MemoryManager_Pin_mC721B2801048D2BEEBB814F55AEA5A6E170E59AC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_MemoryManager_Unpin_mFF16A759D8C4DDF5469295D42FD11B8BD95F92FC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_OSSpecificSynchronizationContext_InvocationEntry_mB85BF0265E239960FC963DCA74DC67EBCE9480AC),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ARCoreProvider_OnBeforeGetCameraConfiguration_m2C314F5FC174CB06131BFADE7B5C0378E530C70C),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ARCoreProvider_CameraPermissionRequestProvider_m52520DB26683512123C6B56B7E2A28269DF7C310),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ARCoreProvider_SetConfigurationCallback_m21110C590C44E78936908B4D2198452803E2330B),
	reinterpret_cast<Il2CppMethodPointer>(ReversePInvokeWrapper_ARCoreProvider_GenerateGuid_m406A7A02F96253CB573818EA5FF3E5AF66B91CDC),
};
