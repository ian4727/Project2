#define ICALL_TABLE_corlib 1

static int corlib_icall_indexes [] = {
191,
200,
201,
202,
203,
204,
205,
206,
208,
209,
275,
276,
277,
306,
307,
308,
328,
329,
330,
331,
448,
449,
450,
453,
488,
489,
491,
493,
495,
497,
502,
510,
511,
512,
513,
514,
515,
516,
517,
518,
612,
613,
678,
684,
687,
689,
694,
695,
697,
698,
702,
703,
705,
707,
708,
711,
712,
713,
716,
718,
721,
723,
725,
734,
799,
801,
803,
813,
814,
815,
817,
823,
824,
825,
826,
827,
835,
836,
837,
841,
842,
844,
846,
1038,
1214,
1215,
6707,
6708,
6710,
6711,
6712,
6713,
6714,
6716,
6718,
6720,
6730,
6732,
6737,
6739,
6741,
6743,
6794,
6795,
6797,
6798,
6799,
6800,
6801,
6803,
6805,
7769,
7773,
7775,
7776,
7777,
7778,
8027,
8028,
8029,
8030,
8048,
8049,
8050,
8052,
8091,
8149,
8151,
8153,
8162,
8163,
8164,
8165,
8550,
8555,
8556,
8583,
8601,
8608,
8615,
8626,
8629,
8649,
8722,
8724,
8733,
8735,
8736,
8743,
8757,
8777,
8778,
8786,
8788,
8795,
8796,
8799,
8801,
8806,
8812,
8813,
8820,
8822,
8834,
8837,
8838,
8839,
8850,
8859,
8865,
8866,
8867,
8869,
8870,
8887,
8889,
8903,
8920,
8947,
8974,
8975,
9456,
9548,
9549,
9749,
9750,
9757,
9758,
9759,
9764,
9838,
10213,
10214,
10431,
10441,
11096,
11117,
11119,
11121,
};
void ves_icall_System_Array_InternalCreate (int,int,int,int,int);
int ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal (int);
int ves_icall_System_Array_CanChangePrimitive (int,int,int);
int ves_icall_System_Array_FastCopy (int,int,int,int,int);
int ves_icall_System_Array_GetLengthInternal_raw (int,int,int);
int ves_icall_System_Array_GetLowerBoundInternal_raw (int,int,int);
void ves_icall_System_Array_GetGenericValue_icall (int,int,int);
void ves_icall_System_Array_GetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueImpl_raw (int,int,int,int);
void ves_icall_System_Array_SetValueRelaxedImpl_raw (int,int,int,int);
void ves_icall_System_Runtime_RuntimeImports_ZeroMemory (int,int);
void ves_icall_System_Runtime_RuntimeImports_Memmove (int,int,int);
void ves_icall_System_Buffer_BulkMoveWithWriteBarrier (int,int,int,int);
int ves_icall_System_Delegate_AllocDelegateLike_internal_raw (int,int);
int ves_icall_System_Delegate_CreateDelegate_internal_raw (int,int,int,int,int);
int ves_icall_System_Delegate_GetVirtualMethod_internal_raw (int,int);
void ves_icall_System_Enum_GetEnumValuesAndNames_raw (int,int,int,int);
void ves_icall_System_Enum_InternalBoxEnum_raw (int,int,int64_t,int);
int ves_icall_System_Enum_InternalGetCorElementType (int);
void ves_icall_System_Enum_InternalGetUnderlyingType_raw (int,int,int);
int ves_icall_System_Environment_get_ProcessorCount ();
int ves_icall_System_Environment_get_TickCount ();
int64_t ves_icall_System_Environment_get_TickCount64 ();
void ves_icall_System_Environment_FailFast_raw (int,int,int,int);
void ves_icall_System_GC_register_ephemeron_array_raw (int,int);
int ves_icall_System_GC_get_ephemeron_tombstone_raw (int);
void ves_icall_System_GC_SuppressFinalize_raw (int,int);
void ves_icall_System_GC_ReRegisterForFinalize_raw (int,int);
void ves_icall_System_GC_GetGCMemoryInfo (int,int,int,int,int,int);
int ves_icall_System_GC_AllocPinnedArray_raw (int,int,int);
int ves_icall_System_Object_MemberwiseClone_raw (int,int);
double ves_icall_System_Math_Ceiling (double);
double ves_icall_System_Math_Cos (double);
double ves_icall_System_Math_Floor (double);
double ves_icall_System_Math_Log10 (double);
double ves_icall_System_Math_Pow (double,double);
double ves_icall_System_Math_Sin (double);
double ves_icall_System_Math_Sqrt (double);
double ves_icall_System_Math_Tan (double);
double ves_icall_System_Math_ModF (double,int);
void ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw (int,int,int);
void ves_icall_RuntimeMethodHandle_ReboxToNullable_raw (int,int,int,int);
int ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw (int,int,int);
void ves_icall_RuntimeType_make_array_type_raw (int,int,int,int);
void ves_icall_RuntimeType_make_byref_type_raw (int,int,int);
void ves_icall_RuntimeType_make_pointer_type_raw (int,int,int);
void ves_icall_RuntimeType_MakeGenericType_raw (int,int,int,int);
int ves_icall_RuntimeType_GetMethodsByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetPropertiesByName_native_raw (int,int,int,int,int);
int ves_icall_RuntimeType_GetConstructors_native_raw (int,int,int);
int ves_icall_System_RuntimeType_CreateInstanceInternal_raw (int,int);
void ves_icall_System_RuntimeType_AllocateValueType_raw (int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringMethod_raw (int,int,int);
void ves_icall_System_RuntimeType_getFullName_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetGenericArgumentsInternal_raw (int,int,int,int);
int ves_icall_RuntimeType_GetGenericParameterPosition (int);
int ves_icall_RuntimeType_GetEvents_native_raw (int,int,int,int);
int ves_icall_RuntimeType_GetFields_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetInterfaces_raw (int,int,int);
int ves_icall_RuntimeType_GetNestedTypes_native_raw (int,int,int,int,int);
void ves_icall_RuntimeType_GetDeclaringType_raw (int,int,int);
void ves_icall_RuntimeType_GetName_raw (int,int,int);
void ves_icall_RuntimeType_GetNamespace_raw (int,int,int);
int ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetAttributes (int);
int ves_icall_RuntimeTypeHandle_GetMetadataToken_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_GetCorElementType (int);
int ves_icall_RuntimeTypeHandle_HasInstantiation (int);
int ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_HasReferences_raw (int,int);
int ves_icall_RuntimeTypeHandle_GetArrayRank_raw (int,int);
void ves_icall_RuntimeTypeHandle_GetAssembly_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetElementType_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetModule_raw (int,int,int);
void ves_icall_RuntimeTypeHandle_GetBaseType_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition (int);
int ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw (int,int);
int ves_icall_RuntimeTypeHandle_is_subclass_of_raw (int,int,int);
int ves_icall_RuntimeTypeHandle_IsByRefLike_raw (int,int);
void ves_icall_System_RuntimeTypeHandle_internal_from_name_raw (int,int,int,int,int,int);
int ves_icall_System_String_FastAllocateString_raw (int,int);
int ves_icall_System_Type_internal_from_handle_raw (int,int);
int ves_icall_System_ValueType_InternalGetHashCode_raw (int,int,int);
int ves_icall_System_ValueType_Equals_raw (int,int,int,int);
int ves_icall_System_Threading_Interlocked_CompareExchange_Int (int,int,int);
void ves_icall_System_Threading_Interlocked_CompareExchange_Object (int,int,int,int);
int ves_icall_System_Threading_Interlocked_Decrement_Int (int);
int ves_icall_System_Threading_Interlocked_Increment_Int (int);
int64_t ves_icall_System_Threading_Interlocked_Increment_Long (int);
int ves_icall_System_Threading_Interlocked_Exchange_Int (int,int);
void ves_icall_System_Threading_Interlocked_Exchange_Object (int,int,int);
int64_t ves_icall_System_Threading_Interlocked_CompareExchange_Long (int,int64_t,int64_t);
int64_t ves_icall_System_Threading_Interlocked_Exchange_Long (int,int64_t);
int ves_icall_System_Threading_Interlocked_Add_Int (int,int);
void ves_icall_System_Threading_Monitor_Monitor_Enter_raw (int,int);
void mono_monitor_exit_icall_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_raw (int,int);
void ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw (int,int);
int ves_icall_System_Threading_Monitor_Monitor_wait_raw (int,int,int,int);
void ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw (int,int,int,int,int);
void ves_icall_System_Threading_Thread_InitInternal_raw (int,int);
int ves_icall_System_Threading_Thread_GetCurrentThread ();
void ves_icall_System_Threading_InternalThread_Thread_free_internal_raw (int,int);
int ves_icall_System_Threading_Thread_GetState_raw (int,int);
void ves_icall_System_Threading_Thread_SetState_raw (int,int,int);
void ves_icall_System_Threading_Thread_ClrState_raw (int,int,int);
void ves_icall_System_Threading_Thread_SetName_icall_raw (int,int,int,int);
int ves_icall_System_Threading_Thread_YieldInternal ();
void ves_icall_System_Threading_Thread_SetPriority_raw (int,int,int);
void ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw (int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw (int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw (int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw (int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw (int);
int ves_icall_System_GCHandle_InternalAlloc_raw (int,int,int);
void ves_icall_System_GCHandle_InternalFree_raw (int,int);
int ves_icall_System_GCHandle_InternalGet_raw (int,int);
void ves_icall_System_GCHandle_InternalSet_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError ();
void ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError (int);
void ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw (int,int,int,int);
int ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw (int,int,int);
int ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw (int,int,int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw (int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw (int,int);
void ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw (int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw (int,int,int,int);
int ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack ();
int ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw (int);
int ves_icall_System_Reflection_Assembly_InternalLoad_raw (int,int,int,int);
int ves_icall_System_Reflection_Assembly_InternalGetType_raw (int,int,int,int,int,int);
int ves_icall_System_Reflection_AssemblyName_GetNativeName (int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw (int,int,int,int);
int ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw (int,int);
int ves_icall_MonoCustomAttrs_IsDefinedInternal_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw (int,int);
int ves_icall_System_Reflection_LoaderAllocatorScout_Destroy (int);
void ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw (int,int,int,int);
int ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw (int,int,int,int,int);
void ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw (int,int,int);
void ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw (int,int,int,int,int,int,int);
void ves_icall_RuntimeEventInfo_get_event_info_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_ResolveType_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetParentType_raw (int,int,int);
int ves_icall_RuntimeFieldInfo_GetFieldOffset_raw (int,int);
int ves_icall_RuntimeFieldInfo_GetValueInternal_raw (int,int,int);
void ves_icall_RuntimeFieldInfo_SetValueInternal_raw (int,int,int,int);
int ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw (int,int);
int ves_icall_reflection_get_token_raw (int,int);
void ves_icall_get_method_info_raw (int,int,int);
int ves_icall_get_method_attributes (int);
int ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw (int,int,int);
int ves_icall_System_MonoMethodInfo_get_retval_marshal_raw (int,int);
int ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw (int,int,int,int);
int ves_icall_RuntimeMethodInfo_get_name_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_base_method_raw (int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
void ves_icall_RuntimeMethodInfo_GetPInvoke_raw (int,int,int,int,int);
int ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw (int,int,int);
int ves_icall_RuntimeMethodInfo_GetGenericArguments_raw (int,int);
int ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw (int,int);
int ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw (int,int);
void ves_icall_InvokeClassConstructor_raw (int,int);
int ves_icall_InternalInvoke_raw (int,int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw (int,int,int,int,int,int);
void ves_icall_RuntimePropertyInfo_get_property_info_raw (int,int,int,int);
int ves_icall_reflection_get_token_raw (int,int);
int ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw (int,int,int);
void ves_icall_DynamicMethod_create_dynamic_method_raw (int,int,int,int,int);
void ves_icall_AssemblyBuilder_basic_init_raw (int,int);
void ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw (int,int);
void ves_icall_ModuleBuilder_basic_init_raw (int,int);
void ves_icall_ModuleBuilder_set_wrappers_type_raw (int,int,int);
int ves_icall_ModuleBuilder_getUSIndex_raw (int,int,int);
int ves_icall_ModuleBuilder_getToken_raw (int,int,int,int);
int ves_icall_ModuleBuilder_getMethodToken_raw (int,int,int,int);
void ves_icall_ModuleBuilder_RegisterToken_raw (int,int,int,int);
int ves_icall_TypeBuilder_create_runtime_class_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw (int,int);
int ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw (int,int);
int ves_icall_System_Diagnostics_StackFrame_GetFrameInfo (int,int,int,int,int,int,int,int);
void ves_icall_System_Diagnostics_StackTrace_GetTrace (int,int,int,int);
int ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass (int);
void ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree (int);
int ves_icall_Mono_SafeStringMarshal_StringToUtf8 (int);
void ves_icall_Mono_SafeStringMarshal_GFree (int);
static void *corlib_icall_funcs [] = {
// token 191,
ves_icall_System_Array_InternalCreate,
// token 200,
ves_icall_System_Array_GetCorElementTypeOfElementTypeInternal,
// token 201,
ves_icall_System_Array_CanChangePrimitive,
// token 202,
ves_icall_System_Array_FastCopy,
// token 203,
ves_icall_System_Array_GetLengthInternal_raw,
// token 204,
ves_icall_System_Array_GetLowerBoundInternal_raw,
// token 205,
ves_icall_System_Array_GetGenericValue_icall,
// token 206,
ves_icall_System_Array_GetValueImpl_raw,
// token 208,
ves_icall_System_Array_SetValueImpl_raw,
// token 209,
ves_icall_System_Array_SetValueRelaxedImpl_raw,
// token 275,
ves_icall_System_Runtime_RuntimeImports_ZeroMemory,
// token 276,
ves_icall_System_Runtime_RuntimeImports_Memmove,
// token 277,
ves_icall_System_Buffer_BulkMoveWithWriteBarrier,
// token 306,
ves_icall_System_Delegate_AllocDelegateLike_internal_raw,
// token 307,
ves_icall_System_Delegate_CreateDelegate_internal_raw,
// token 308,
ves_icall_System_Delegate_GetVirtualMethod_internal_raw,
// token 328,
ves_icall_System_Enum_GetEnumValuesAndNames_raw,
// token 329,
ves_icall_System_Enum_InternalBoxEnum_raw,
// token 330,
ves_icall_System_Enum_InternalGetCorElementType,
// token 331,
ves_icall_System_Enum_InternalGetUnderlyingType_raw,
// token 448,
ves_icall_System_Environment_get_ProcessorCount,
// token 449,
ves_icall_System_Environment_get_TickCount,
// token 450,
ves_icall_System_Environment_get_TickCount64,
// token 453,
ves_icall_System_Environment_FailFast_raw,
// token 488,
ves_icall_System_GC_register_ephemeron_array_raw,
// token 489,
ves_icall_System_GC_get_ephemeron_tombstone_raw,
// token 491,
ves_icall_System_GC_SuppressFinalize_raw,
// token 493,
ves_icall_System_GC_ReRegisterForFinalize_raw,
// token 495,
ves_icall_System_GC_GetGCMemoryInfo,
// token 497,
ves_icall_System_GC_AllocPinnedArray_raw,
// token 502,
ves_icall_System_Object_MemberwiseClone_raw,
// token 510,
ves_icall_System_Math_Ceiling,
// token 511,
ves_icall_System_Math_Cos,
// token 512,
ves_icall_System_Math_Floor,
// token 513,
ves_icall_System_Math_Log10,
// token 514,
ves_icall_System_Math_Pow,
// token 515,
ves_icall_System_Math_Sin,
// token 516,
ves_icall_System_Math_Sqrt,
// token 517,
ves_icall_System_Math_Tan,
// token 518,
ves_icall_System_Math_ModF,
// token 612,
ves_icall_RuntimeMethodHandle_ReboxFromNullable_raw,
// token 613,
ves_icall_RuntimeMethodHandle_ReboxToNullable_raw,
// token 678,
ves_icall_RuntimeType_GetCorrespondingInflatedMethod_raw,
// token 684,
ves_icall_RuntimeType_make_array_type_raw,
// token 687,
ves_icall_RuntimeType_make_byref_type_raw,
// token 689,
ves_icall_RuntimeType_make_pointer_type_raw,
// token 694,
ves_icall_RuntimeType_MakeGenericType_raw,
// token 695,
ves_icall_RuntimeType_GetMethodsByName_native_raw,
// token 697,
ves_icall_RuntimeType_GetPropertiesByName_native_raw,
// token 698,
ves_icall_RuntimeType_GetConstructors_native_raw,
// token 702,
ves_icall_System_RuntimeType_CreateInstanceInternal_raw,
// token 703,
ves_icall_System_RuntimeType_AllocateValueType_raw,
// token 705,
ves_icall_RuntimeType_GetDeclaringMethod_raw,
// token 707,
ves_icall_System_RuntimeType_getFullName_raw,
// token 708,
ves_icall_RuntimeType_GetGenericArgumentsInternal_raw,
// token 711,
ves_icall_RuntimeType_GetGenericParameterPosition,
// token 712,
ves_icall_RuntimeType_GetEvents_native_raw,
// token 713,
ves_icall_RuntimeType_GetFields_native_raw,
// token 716,
ves_icall_RuntimeType_GetInterfaces_raw,
// token 718,
ves_icall_RuntimeType_GetNestedTypes_native_raw,
// token 721,
ves_icall_RuntimeType_GetDeclaringType_raw,
// token 723,
ves_icall_RuntimeType_GetName_raw,
// token 725,
ves_icall_RuntimeType_GetNamespace_raw,
// token 734,
ves_icall_RuntimeType_FunctionPointerReturnAndParameterTypes_raw,
// token 799,
ves_icall_RuntimeTypeHandle_GetAttributes,
// token 801,
ves_icall_RuntimeTypeHandle_GetMetadataToken_raw,
// token 803,
ves_icall_RuntimeTypeHandle_GetGenericTypeDefinition_impl_raw,
// token 813,
ves_icall_RuntimeTypeHandle_GetCorElementType,
// token 814,
ves_icall_RuntimeTypeHandle_HasInstantiation,
// token 815,
ves_icall_RuntimeTypeHandle_IsInstanceOfType_raw,
// token 817,
ves_icall_RuntimeTypeHandle_HasReferences_raw,
// token 823,
ves_icall_RuntimeTypeHandle_GetArrayRank_raw,
// token 824,
ves_icall_RuntimeTypeHandle_GetAssembly_raw,
// token 825,
ves_icall_RuntimeTypeHandle_GetElementType_raw,
// token 826,
ves_icall_RuntimeTypeHandle_GetModule_raw,
// token 827,
ves_icall_RuntimeTypeHandle_GetBaseType_raw,
// token 835,
ves_icall_RuntimeTypeHandle_type_is_assignable_from_raw,
// token 836,
ves_icall_RuntimeTypeHandle_IsGenericTypeDefinition,
// token 837,
ves_icall_RuntimeTypeHandle_GetGenericParameterInfo_raw,
// token 841,
ves_icall_RuntimeTypeHandle_is_subclass_of_raw,
// token 842,
ves_icall_RuntimeTypeHandle_IsByRefLike_raw,
// token 844,
ves_icall_System_RuntimeTypeHandle_internal_from_name_raw,
// token 846,
ves_icall_System_String_FastAllocateString_raw,
// token 1038,
ves_icall_System_Type_internal_from_handle_raw,
// token 1214,
ves_icall_System_ValueType_InternalGetHashCode_raw,
// token 1215,
ves_icall_System_ValueType_Equals_raw,
// token 6707,
ves_icall_System_Threading_Interlocked_CompareExchange_Int,
// token 6708,
ves_icall_System_Threading_Interlocked_CompareExchange_Object,
// token 6710,
ves_icall_System_Threading_Interlocked_Decrement_Int,
// token 6711,
ves_icall_System_Threading_Interlocked_Increment_Int,
// token 6712,
ves_icall_System_Threading_Interlocked_Increment_Long,
// token 6713,
ves_icall_System_Threading_Interlocked_Exchange_Int,
// token 6714,
ves_icall_System_Threading_Interlocked_Exchange_Object,
// token 6716,
ves_icall_System_Threading_Interlocked_CompareExchange_Long,
// token 6718,
ves_icall_System_Threading_Interlocked_Exchange_Long,
// token 6720,
ves_icall_System_Threading_Interlocked_Add_Int,
// token 6730,
ves_icall_System_Threading_Monitor_Monitor_Enter_raw,
// token 6732,
mono_monitor_exit_icall_raw,
// token 6737,
ves_icall_System_Threading_Monitor_Monitor_pulse_raw,
// token 6739,
ves_icall_System_Threading_Monitor_Monitor_pulse_all_raw,
// token 6741,
ves_icall_System_Threading_Monitor_Monitor_wait_raw,
// token 6743,
ves_icall_System_Threading_Monitor_Monitor_try_enter_with_atomic_var_raw,
// token 6794,
ves_icall_System_Threading_Thread_InitInternal_raw,
// token 6795,
ves_icall_System_Threading_Thread_GetCurrentThread,
// token 6797,
ves_icall_System_Threading_InternalThread_Thread_free_internal_raw,
// token 6798,
ves_icall_System_Threading_Thread_GetState_raw,
// token 6799,
ves_icall_System_Threading_Thread_SetState_raw,
// token 6800,
ves_icall_System_Threading_Thread_ClrState_raw,
// token 6801,
ves_icall_System_Threading_Thread_SetName_icall_raw,
// token 6803,
ves_icall_System_Threading_Thread_YieldInternal,
// token 6805,
ves_icall_System_Threading_Thread_SetPriority_raw,
// token 7769,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_PrepareForAssemblyLoadContextRelease_raw,
// token 7773,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_GetLoadContextForAssembly_raw,
// token 7775,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFile_raw,
// token 7776,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalInitializeNativeALC_raw,
// token 7777,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalLoadFromStream_raw,
// token 7778,
ves_icall_System_Runtime_Loader_AssemblyLoadContext_InternalGetLoadedAssemblies_raw,
// token 8027,
ves_icall_System_GCHandle_InternalAlloc_raw,
// token 8028,
ves_icall_System_GCHandle_InternalFree_raw,
// token 8029,
ves_icall_System_GCHandle_InternalGet_raw,
// token 8030,
ves_icall_System_GCHandle_InternalSet_raw,
// token 8048,
ves_icall_System_Runtime_InteropServices_Marshal_GetLastPInvokeError,
// token 8049,
ves_icall_System_Runtime_InteropServices_Marshal_SetLastPInvokeError,
// token 8050,
ves_icall_System_Runtime_InteropServices_Marshal_StructureToPtr_raw,
// token 8052,
ves_icall_System_Runtime_InteropServices_Marshal_SizeOfHelper_raw,
// token 8091,
ves_icall_System_Runtime_InteropServices_NativeLibrary_LoadByName_raw,
// token 8149,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalGetHashCode_raw,
// token 8151,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InternalTryGetHashCode_raw,
// token 8153,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetObjectValue_raw,
// token 8162,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetUninitializedObjectInternal_raw,
// token 8163,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_InitializeArray_raw,
// token 8164,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_GetSpanDataFrom_raw,
// token 8165,
ves_icall_System_Runtime_CompilerServices_RuntimeHelpers_SufficientExecutionStack,
// token 8550,
ves_icall_System_Reflection_Assembly_GetEntryAssembly_raw,
// token 8555,
ves_icall_System_Reflection_Assembly_InternalLoad_raw,
// token 8556,
ves_icall_System_Reflection_Assembly_InternalGetType_raw,
// token 8583,
ves_icall_System_Reflection_AssemblyName_GetNativeName,
// token 8601,
ves_icall_MonoCustomAttrs_GetCustomAttributesInternal_raw,
// token 8608,
ves_icall_MonoCustomAttrs_GetCustomAttributesDataInternal_raw,
// token 8615,
ves_icall_MonoCustomAttrs_IsDefinedInternal_raw,
// token 8626,
ves_icall_System_Reflection_FieldInfo_internal_from_handle_type_raw,
// token 8629,
ves_icall_System_Reflection_FieldInfo_get_marshal_info_raw,
// token 8649,
ves_icall_System_Reflection_LoaderAllocatorScout_Destroy,
// token 8722,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceNames_raw,
// token 8724,
ves_icall_System_Reflection_RuntimeAssembly_GetExportedTypes_raw,
// token 8733,
ves_icall_System_Reflection_RuntimeAssembly_GetInfo_raw,
// token 8735,
ves_icall_System_Reflection_RuntimeAssembly_GetManifestResourceInternal_raw,
// token 8736,
ves_icall_System_Reflection_Assembly_GetManifestModuleInternal_raw,
// token 8743,
ves_icall_System_Reflection_RuntimeCustomAttributeData_ResolveArgumentsInternal_raw,
// token 8757,
ves_icall_RuntimeEventInfo_get_event_info_raw,
// token 8777,
ves_icall_reflection_get_token_raw,
// token 8778,
ves_icall_System_Reflection_EventInfo_internal_from_handle_type_raw,
// token 8786,
ves_icall_RuntimeFieldInfo_ResolveType_raw,
// token 8788,
ves_icall_RuntimeFieldInfo_GetParentType_raw,
// token 8795,
ves_icall_RuntimeFieldInfo_GetFieldOffset_raw,
// token 8796,
ves_icall_RuntimeFieldInfo_GetValueInternal_raw,
// token 8799,
ves_icall_RuntimeFieldInfo_SetValueInternal_raw,
// token 8801,
ves_icall_RuntimeFieldInfo_GetRawConstantValue_raw,
// token 8806,
ves_icall_reflection_get_token_raw,
// token 8812,
ves_icall_get_method_info_raw,
// token 8813,
ves_icall_get_method_attributes,
// token 8820,
ves_icall_System_Reflection_MonoMethodInfo_get_parameter_info_raw,
// token 8822,
ves_icall_System_MonoMethodInfo_get_retval_marshal_raw,
// token 8834,
ves_icall_System_Reflection_RuntimeMethodInfo_GetMethodFromHandleInternalType_native_raw,
// token 8837,
ves_icall_RuntimeMethodInfo_get_name_raw,
// token 8838,
ves_icall_RuntimeMethodInfo_get_base_method_raw,
// token 8839,
ves_icall_reflection_get_token_raw,
// token 8850,
ves_icall_InternalInvoke_raw,
// token 8859,
ves_icall_RuntimeMethodInfo_GetPInvoke_raw,
// token 8865,
ves_icall_RuntimeMethodInfo_MakeGenericMethod_impl_raw,
// token 8866,
ves_icall_RuntimeMethodInfo_GetGenericArguments_raw,
// token 8867,
ves_icall_RuntimeMethodInfo_GetGenericMethodDefinition_raw,
// token 8869,
ves_icall_RuntimeMethodInfo_get_IsGenericMethodDefinition_raw,
// token 8870,
ves_icall_RuntimeMethodInfo_get_IsGenericMethod_raw,
// token 8887,
ves_icall_InvokeClassConstructor_raw,
// token 8889,
ves_icall_InternalInvoke_raw,
// token 8903,
ves_icall_reflection_get_token_raw,
// token 8920,
ves_icall_System_Reflection_RuntimeModule_ResolveMethodToken_raw,
// token 8947,
ves_icall_RuntimePropertyInfo_get_property_info_raw,
// token 8974,
ves_icall_reflection_get_token_raw,
// token 8975,
ves_icall_System_Reflection_RuntimePropertyInfo_internal_from_handle_type_raw,
// token 9456,
ves_icall_DynamicMethod_create_dynamic_method_raw,
// token 9548,
ves_icall_AssemblyBuilder_basic_init_raw,
// token 9549,
ves_icall_AssemblyBuilder_UpdateNativeCustomAttributes_raw,
// token 9749,
ves_icall_ModuleBuilder_basic_init_raw,
// token 9750,
ves_icall_ModuleBuilder_set_wrappers_type_raw,
// token 9757,
ves_icall_ModuleBuilder_getUSIndex_raw,
// token 9758,
ves_icall_ModuleBuilder_getToken_raw,
// token 9759,
ves_icall_ModuleBuilder_getMethodToken_raw,
// token 9764,
ves_icall_ModuleBuilder_RegisterToken_raw,
// token 9838,
ves_icall_TypeBuilder_create_runtime_class_raw,
// token 10213,
ves_icall_System_IO_Stream_HasOverriddenBeginEndRead_raw,
// token 10214,
ves_icall_System_IO_Stream_HasOverriddenBeginEndWrite_raw,
// token 10431,
ves_icall_System_Diagnostics_StackFrame_GetFrameInfo,
// token 10441,
ves_icall_System_Diagnostics_StackTrace_GetTrace,
// token 11096,
ves_icall_Mono_RuntimeClassHandle_GetTypeFromClass,
// token 11117,
ves_icall_Mono_RuntimeGPtrArrayHandle_GPtrArrayFree,
// token 11119,
ves_icall_Mono_SafeStringMarshal_StringToUtf8,
// token 11121,
ves_icall_Mono_SafeStringMarshal_GFree,
};
static uint8_t corlib_icall_flags [] = {
0,
0,
0,
0,
4,
4,
0,
4,
4,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
0,
0,
0,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
0,
0,
0,
0,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
0,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
4,
0,
0,
0,
0,
0,
0,
};
