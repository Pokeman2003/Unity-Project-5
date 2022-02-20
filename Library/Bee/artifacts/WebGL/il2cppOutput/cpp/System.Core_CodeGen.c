#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m9157523765DB73FC9F7B984F2F740F2B5EDB7337 (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_mADF388C1E5EACA4BA8E0CDAAA0834C595544BFAF (void);
// 0x00000003 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000004 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x00000007 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000008 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(TSource[],System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x00000009 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000B System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000000C TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000000D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000000E System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000000F System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000010 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000012 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000013 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000014 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000015 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000016 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000017 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000018 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000019 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000001A System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000001B System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000001C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x0000001F System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000020 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Void System.Linq.EmptyPartition`1::.ctor()
// 0x00000022 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.EmptyPartition`1::GetEnumerator()
// 0x00000023 System.Collections.IEnumerator System.Linq.EmptyPartition`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000024 System.Boolean System.Linq.EmptyPartition`1::MoveNext()
// 0x00000025 TElement System.Linq.EmptyPartition`1::get_Current()
// 0x00000026 System.Object System.Linq.EmptyPartition`1::System.Collections.IEnumerator.get_Current()
// 0x00000027 System.Void System.Linq.EmptyPartition`1::System.IDisposable.Dispose()
// 0x00000028 System.Void System.Linq.EmptyPartition`1::.cctor()
// 0x00000029 System.Func`2<TSource,System.Boolean> System.Linq.Utilities::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x0000002A System.Void System.Linq.Utilities/<>c__DisplayClass1_0`1::.ctor()
// 0x0000002B System.Boolean System.Linq.Utilities/<>c__DisplayClass1_0`1::<CombinePredicates>b__0(TSource)
static Il2CppMethodPointer s_methodPointers[43] = 
{
	Error_ArgumentNull_m9157523765DB73FC9F7B984F2F740F2B5EDB7337,
	Error_MoreThanOneMatch_mADF388C1E5EACA4BA8E0CDAAA0834C595544BFAF,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[43] = 
{
	1373,
	1447,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[15] = 
{
	{ 0x02000004, { 89, 10 } },
	{ 0x02000005, { 99, 14 } },
	{ 0x02000006, { 113, 12 } },
	{ 0x02000007, { 125, 16 } },
	{ 0x02000009, { 141, 5 } },
	{ 0x0200000B, { 151, 4 } },
	{ 0x06000003, { 0, 3 } },
	{ 0x06000004, { 3, 7 } },
	{ 0x06000005, { 10, 7 } },
	{ 0x06000006, { 17, 6 } },
	{ 0x06000007, { 23, 22 } },
	{ 0x06000008, { 45, 12 } },
	{ 0x06000009, { 57, 18 } },
	{ 0x0600000A, { 75, 14 } },
	{ 0x06000029, { 146, 5 } },
};
extern const uint32_t g_rgctx_IEnumerable_1_t172656FB996B8C7E336AAC30919996CCF45053EC;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m710BA0C8DA9F68BF7D5119792FA401AC61A1875C;
extern const uint32_t g_rgctx_IEnumerator_1_t5290D6936B1D4D571793E4717B781F0C7FAB2871;
extern const uint32_t g_rgctx_IEnumerable_1_tB31E19935A0E3467E4E51AD773A9D5432B73B518;
extern const uint32_t g_rgctx_Func_2_t738FFE96DA24D4260B7C39DC33541473836A6630;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mA944AB0962D1DBEDDE52E6F419F650AC136C2897;
extern const uint32_t g_rgctx_IEnumerator_1_tC56F860588AE66C881B76D981EE6DE2C1E18EE35;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_mD0F557574B1C7EBE3FDA2BB6749399C5668BC2DB;
extern const uint32_t g_rgctx_TSource_t592CABD5DC9A0BBE89ED4DD34A3F23DF4B8022EE;
extern const uint32_t g_rgctx_Func_2_Invoke_m6020CD4EAC12A5FE9D3B4FB21F10F4FD03BED403;
extern const uint32_t g_rgctx_IEnumerable_1_t7CEC2B33E6DD3C1C3A6A172B3F8F543C1116982C;
extern const uint32_t g_rgctx_Func_2_tB4B09B48E6A2A7B32ABB0D39C54E835B17CCEE61;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_mCC4AB6E07BBF5914732D63186528794923285145;
extern const uint32_t g_rgctx_IEnumerator_1_tE2C6256C33037DCA358539D2812BAD8FA0E35704;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m272CB7E38BA46922E0937B29BEEA5D644DED9ADD;
extern const uint32_t g_rgctx_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0;
extern const uint32_t g_rgctx_Func_2_Invoke_m53A6358BFFA10B30C1CEC31578FC6C8B456A7566;
extern const uint32_t g_rgctx_IEnumerable_1_tB6338BFB39DD886D2225183C6363F88CAA1D8541;
extern const uint32_t g_rgctx_Func_2_t264D004D7F5375932B3944352CF8468C1063FA7E;
extern const uint32_t g_rgctx_Func_2_t64DFC50FE4A58B7BB47E16F52CAA7F07351E26D2;
extern const uint32_t g_rgctx_Enumerable_ToDictionary_TisTSource_t7F67F06748EBFC018CDABA4B3A7CD0B4EF30718A_TisTKey_tDD36C286A6586379BEE066237518A8C026543193_TisTElement_t34222D4D2113A9CDB7AB2AA7E61CF7B7D7528A25_m3C49A871A510BE404EFFEA9B46B4C99B35FAC85A;
extern const uint32_t g_rgctx_IEqualityComparer_1_tEA907B24CDC60A58DC687FD53871803D4E97E37A;
extern const uint32_t g_rgctx_Dictionary_2_t634AAD0EE1D1A96BB77BB69A8FC2BD3C08991DD4;
extern const uint32_t g_rgctx_IEnumerable_1_t3DE68BD4450FFC860A366C3AB84EEDD1B50776A5;
extern const uint32_t g_rgctx_Func_2_tCB920AB5F74B0D626CDA216B8D3A7C0C9D131E2C;
extern const uint32_t g_rgctx_Func_2_t7E922282A583224DADF863B3AB2E6AB9A524EE05;
extern const uint32_t g_rgctx_ICollection_1_tCD106B6184626642593436EAC778EF08CDE797A8;
extern const uint32_t g_rgctx_ICollection_1_get_Count_m9D0EAFA76649016D9E68CD678891EA6AAF7958CB;
extern const uint32_t g_rgctx_IEqualityComparer_1_tCB3314DC7613CFD33E8AF1DA645C203E33EC8D2C;
extern const uint32_t g_rgctx_Dictionary_2_t5303BEA2EBC6DA937589C18BD096BEB89A90AD0B;
extern const uint32_t g_rgctx_Dictionary_2__ctor_m5C0C6459F5392CC3B71A9247F384FA68F6D4434A;
extern const uint32_t g_rgctx_TSourceU5BU5D_t71B9F2DF5E66DC217D4C2658E01B11C57F1DCED3;
extern const uint32_t g_rgctx_Enumerable_ToDictionary_TisTSource_t8CD364F5F26EB6C4C305455E0868238B5782188A_TisTKey_tFF9A03C526F347E261D073D45AF3BBDB16C995AC_TisTElement_t7ED82472022AA62152C24E6833F9B444EE210781_mED2FC24B323EFA7B8487516F64343D46ACF9065C;
extern const uint32_t g_rgctx_List_1_t40E7931212141E7EE9D7D0D01C5CA10D033933DA;
extern const uint32_t g_rgctx_Enumerable_ToDictionary_TisTSource_t8CD364F5F26EB6C4C305455E0868238B5782188A_TisTKey_tFF9A03C526F347E261D073D45AF3BBDB16C995AC_TisTElement_t7ED82472022AA62152C24E6833F9B444EE210781_mFCCA81C5458B82B3C1817383FE3FEB3D436BBFA3;
extern const uint32_t g_rgctx_Dictionary_2__ctor_mC165BB47F00D52819C9CCD1724438B785CE10DEB;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m77BE12F92AA464E3C516079D9A7B00161BD50CF6;
extern const uint32_t g_rgctx_IEnumerator_1_t7311E55564AEDCCBCE700E7D0173F4A6208E816E;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_mF7F2652B57F0F7F0F0897D8BE39E84FD87811EA6;
extern const uint32_t g_rgctx_TSource_t8CD364F5F26EB6C4C305455E0868238B5782188A;
extern const uint32_t g_rgctx_Func_2_Invoke_mA73E15EFB4FCB7048767E333FF1964B4B4B16C63;
extern const uint32_t g_rgctx_TKey_tFF9A03C526F347E261D073D45AF3BBDB16C995AC;
extern const uint32_t g_rgctx_Func_2_Invoke_m91AAAC36C8B675FCA2C75DD4D53A181E4FB83CBC;
extern const uint32_t g_rgctx_TElement_t7ED82472022AA62152C24E6833F9B444EE210781;
extern const uint32_t g_rgctx_Dictionary_2_Add_m7BCD621F524344A6275C1BBA7FD0F79845B753C9;
extern const uint32_t g_rgctx_TSourceU5BU5D_tBF24C34CF94158660A5B1A228DAE6BA25693CCB2;
extern const uint32_t g_rgctx_IEqualityComparer_1_tA7B9BD0A44DC04F143438A288A618C6FE3932415;
extern const uint32_t g_rgctx_Dictionary_2_t813A34F7FA23D4CA721E8E6BD48C3C8D67EBEA3E;
extern const uint32_t g_rgctx_Dictionary_2__ctor_mE870D18774BB71E560C355D774B887E89DC87E14;
extern const uint32_t g_rgctx_Func_2_t28C530FDDB79BB059142EDB439AA8A14E7FA70BE;
extern const uint32_t g_rgctx_TSource_tF640162823512278F935DDA8638410C3DFC4856D;
extern const uint32_t g_rgctx_Func_2_Invoke_m910BD3000956A9A641F5ADA80A0C3704EF99AC97;
extern const uint32_t g_rgctx_TKey_t34D6F171F137DF9CEF5877B85EE3DE43875D7DF4;
extern const uint32_t g_rgctx_Func_2_tEF86658681C0750382DBCC6849D90B5CC284B93F;
extern const uint32_t g_rgctx_Func_2_Invoke_m26D4F5BA6A746642C34FC86D7B749305103E68D7;
extern const uint32_t g_rgctx_TElement_t31CD8216EE288780832B706E814FF96764A2D462;
extern const uint32_t g_rgctx_Dictionary_2_Add_m326755F46D377DDB6ED367ACE7C942491E424E1F;
extern const uint32_t g_rgctx_List_1_tD93CA8EC62023A3C3756D5FDAC8A14E75D3C0BC3;
extern const uint32_t g_rgctx_List_1_get_Count_mFD7B8A04E7403684B1E2239F76E85E656BD1E295;
extern const uint32_t g_rgctx_IEqualityComparer_1_t2B286BDB9FB5C9464B979BD6DD202276FD37BB99;
extern const uint32_t g_rgctx_Dictionary_2_tF53C0D4F7D6B2C6E80446F27C542F212A98B9026;
extern const uint32_t g_rgctx_Dictionary_2__ctor_m6054D38CF6AFC4788948F37CEA8BD4668760BC89;
extern const uint32_t g_rgctx_List_1_GetEnumerator_mDB63B2ED929B798D66C04FC2894DBA0B9E7641B0;
extern const uint32_t g_rgctx_Enumerator_tFDCFEB4EDEC55E0FC04E4F4B3E18CE64877C3381;
extern const uint32_t g_rgctx_Enumerator_get_Current_mDDAD91C0EC6ACAE1FE58A5313388FB671E6001D0;
extern const uint32_t g_rgctx_TSource_t00C37CAE87CBEC3927DAA7A224344E46567A423E;
extern const uint32_t g_rgctx_Func_2_t4BB304931147A8BAFE1CB7EFE911ABE1CDB756A1;
extern const uint32_t g_rgctx_Func_2_Invoke_m0E32CF0EA6CF14A6B09E36767840ABF24624633B;
extern const uint32_t g_rgctx_TKey_tCE4B8EA1FBF6562AD5000F8E13DE0F527CA09378;
extern const uint32_t g_rgctx_Func_2_t29EBAE0BB977C77FEDE068C71F97A676136CF31F;
extern const uint32_t g_rgctx_Func_2_Invoke_m2526DC919A8CBD217931D3F75C710EDC18F408AA;
extern const uint32_t g_rgctx_TElement_tDF670BAB223D9CD6FF56961180AEBFA9064F9B10;
extern const uint32_t g_rgctx_Dictionary_2_Add_m26A6BCFECE7D8A4B0405ED3C57FF9E653B959729;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m26EA0F5B005170A80D6495DC0A1D0F888C05EC4E;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_tFDCFEB4EDEC55E0FC04E4F4B3E18CE64877C3381_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_IEnumerable_1_t7AEE5935ECE18A383FD11919A51AE5602FC558A6;
extern const uint32_t g_rgctx_Func_2_tC8BDB859B1062ECC0A8239BEC7EFB8A8EA6D9980;
extern const uint32_t g_rgctx_Iterator_1_tCFAA62A6C9F96DE2CF39C6650ECDD90ABE2685EC;
extern const uint32_t g_rgctx_Iterator_1_Where_mA2F3F081E1BB8C080173197BF8B3BACB4D1265BD;
extern const uint32_t g_rgctx_TSourceU5BU5D_t3208AEE56FC08B9D8EF3EBC686C813285BEBCA88;
extern const uint32_t g_rgctx_WhereArrayIterator_1_t02B6565B81E6B3116FEB4E19018ECAEA32DBECFE;
extern const uint32_t g_rgctx_WhereArrayIterator_1__ctor_mA1F81211FAEEC31DDDE7FEB4597D827FD8173193;
extern const uint32_t g_rgctx_EmptyPartition_1_tE4B0836605107D48F93B84CD00CBB11E8768E901;
extern const uint32_t g_rgctx_EmptyPartition_1_tE4B0836605107D48F93B84CD00CBB11E8768E901;
extern const uint32_t g_rgctx_List_1_t7ECE6A3407ABA1B6A770EE42BC241FA0D5CA8E64;
extern const uint32_t g_rgctx_WhereListIterator_1_tAEF79AA48344AA5DE131BEE39C5D791F28C824AF;
extern const uint32_t g_rgctx_WhereListIterator_1__ctor_m58771D71B52CBC9B8BE8F30DD4C91AD2D03C28C3;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_t937E10A58702C981A92D398826CA6EB6022E26DE;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_mCC15F47FF48C410C2A5DEFECEB5A4BAD2023196D;
extern const uint32_t g_rgctx_Iterator_1_t8E009DFA0514DB4E4987BB392D13A5A8170ECCE4;
extern const uint32_t g_rgctx_TSource_tE11DAFD922BE8DFEB5489CBD1813EB0466BC3D79;
extern const uint32_t g_rgctx_Iterator_1_Clone_m06A7D1B0BDA308E69987DDED84FFC6B95859AA62;
extern const uint32_t g_rgctx_IEnumerator_1_t15692AE856D4F6CF8F91F15DC932B0FAFFF1B98C;
extern const uint32_t g_rgctx_Func_2_tA01CD1DFE0240EB95E4626BB7F28809146289218;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_t3C69AA048013291A451D24AE02A716BA74A1AC63;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_m5884B587F45619CEFAAD2236258CA1379EBD4331;
extern const uint32_t g_rgctx_IEnumerable_1_tCC285D3A6134E8A5D679710930EAF089B174AE55;
extern const uint32_t g_rgctx_Iterator_1_get_Current_m7CDFA0D6C9FE9C1400547F6BDB614EFD06F9BD91;
extern const uint32_t g_rgctx_Iterator_1_GetEnumerator_mF75249EC97644B0005490D15C69E49F7F9164A90;
extern const uint32_t g_rgctx_Iterator_1__ctor_m690C659CF11A74EED9E70752C5849F1628230AC8;
extern const uint32_t g_rgctx_Iterator_1_t15119AB906B4942B10DE36D501F127F0FF6DF281;
extern const uint32_t g_rgctx_IEnumerable_1_t6BB9BE6EEAECF4E66C19B7781D16F0E830520AC0;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1_t92EE9D2E5265D8B183ED697686240F506BCA8424;
extern const uint32_t g_rgctx_Func_2_tC86143735420E666A856DEA89A154669337AD033;
extern const uint32_t g_rgctx_WhereEnumerableIterator_1__ctor_m9C038F85EC321BD8F7AE403D683D0153D355F9CB;
extern const uint32_t g_rgctx_Iterator_1_t15119AB906B4942B10DE36D501F127F0FF6DF281;
extern const uint32_t g_rgctx_IEnumerator_1_t7057BF629F81E7DFB90FC10A9074D9A504C6971C;
extern const uint32_t g_rgctx_Iterator_1_Dispose_mF10F128ADF4C88061B584756801E3C39F4D04FA6;
extern const uint32_t g_rgctx_IEnumerable_1_GetEnumerator_m844DCC57B48252D74DFA627000935F7B4A4407F6;
extern const uint32_t g_rgctx_IEnumerator_1_get_Current_m07F9232B3524F24682301D1CF8573D7A1CB9C6ED;
extern const uint32_t g_rgctx_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB;
extern const uint32_t g_rgctx_Func_2_Invoke_m12DE18B02FB8945CB56D98F22BD68442081B02EC;
extern const uint32_t g_rgctx_Utilities_CombinePredicates_TisTSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB_mE810E690B778A75EC5C4F51AF3521DC1AEEAC70C;
extern const uint32_t g_rgctx_Iterator_1__ctor_mB182060F0BAD71C29739D1A67593C75D932D1F99;
extern const uint32_t g_rgctx_Iterator_1_t401B0AE4A7AE625421285FB386F87D7EB1213E82;
extern const uint32_t g_rgctx_TSourceU5BU5D_tF02636C637844512684A90462192D486199D9DDC;
extern const uint32_t g_rgctx_WhereArrayIterator_1_t3191C8D5170E56806A48BD846333ABBD99D3D3C7;
extern const uint32_t g_rgctx_Func_2_t9550E469110084BCEB11807FD34F94E9615475E5;
extern const uint32_t g_rgctx_WhereArrayIterator_1__ctor_m4D241BD7A7C7BF59DEFF9D7D34B8E23771934CFE;
extern const uint32_t g_rgctx_Iterator_1_t401B0AE4A7AE625421285FB386F87D7EB1213E82;
extern const uint32_t g_rgctx_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A;
extern const uint32_t g_rgctx_Func_2_Invoke_mCC45E416C5C54731DCA65FEFD545FDC5F4D10DA7;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m3973A9258B5A77E6B3F7DC3D004466E6296075A9;
extern const uint32_t g_rgctx_Utilities_CombinePredicates_TisTSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A_mC0FB3E46A0A447E64AEBBEA2EA517D2D13532D05;
extern const uint32_t g_rgctx_IEnumerable_1_t988FF724FA547066EC844CEC6A2D933A9656CFF0;
extern const uint32_t g_rgctx_Iterator_1__ctor_m474A63CD9FAA51728C0378997DDC4C8B5FE28303;
extern const uint32_t g_rgctx_Iterator_1_t4928FCA7FD6F8CA3BFB0698285A34D6BBDE1A112;
extern const uint32_t g_rgctx_List_1_t65D73AE3589A56A7B32F4BDFCD91269AD04DD4DF;
extern const uint32_t g_rgctx_WhereListIterator_1_t39045FEC3E9F1D32C0EA2780668C61E302992807;
extern const uint32_t g_rgctx_Func_2_tC858B64F5B124B5C1F30E774832D4E614DA18793;
extern const uint32_t g_rgctx_WhereListIterator_1__ctor_m172443247095E67B21AF11E2907D7B644EB793DE;
extern const uint32_t g_rgctx_Iterator_1_t4928FCA7FD6F8CA3BFB0698285A34D6BBDE1A112;
extern const uint32_t g_rgctx_List_1_GetEnumerator_m62042CED4A1CF9B02B5E17694405BBB8BEEDD38C;
extern const uint32_t g_rgctx_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E;
extern const uint32_t g_rgctx_Enumerator_get_Current_m21D84BB0301B459F1ADE9ABD50089FBBB8C63F97;
extern const uint32_t g_rgctx_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956;
extern const uint32_t g_rgctx_Func_2_Invoke_m1C2F1F284152F67D5FE0FD1BD2D71BD3E2DD280F;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m1A9C394EDBEE8ABF55FA1F44A260F79D813902E4;
extern const uint32_t g_rgctx_Iterator_1_Dispose_m84B51BBBD674EB42CD5E238D01DC427248C5043F;
extern const uint32_t g_rgctx_Utilities_CombinePredicates_TisTSource_t85B7C93A555823AE666813BFFC5FEC432E108956_mDF02B8078D655F9263EC3761DA42BA4D74021650;
extern const uint32_t g_rgctx_IEnumerable_1_tC15BD51C80FA8BBB44707A0414386F7091E0C5B1;
extern const uint32_t g_rgctx_IEnumerator_1_t73FB7DB8D400AE6910B872A1280C174A332537FC;
extern const uint32_t g_rgctx_TElement_t30B891D6EDD43364B6B4AC73FA4B369249067024;
extern const uint32_t g_rgctx_EmptyPartition_1_t65F0ADCB49DF81B93E43192F127EBFF7B9A8C063;
extern const uint32_t g_rgctx_EmptyPartition_1__ctor_mDA2E9A28B74210E72343F02BAB6526D90BEA15E2;
extern const uint32_t g_rgctx_EmptyPartition_1_t65F0ADCB49DF81B93E43192F127EBFF7B9A8C063;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass1_0_1_t316A9EEA30597CF0CD9FFA76141EC865C8223C90;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass1_0_1__ctor_mE1828897E9569CC9825960402460AEA9C57EA036;
extern const uint32_t g_rgctx_Func_2_t2A060D2670F937A26CB1978A300631DC450AD634;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass1_0_1_U3CCombinePredicatesU3Eb__0_m64683DC024BB6D2CE0BCDF7F08F5E6AD2E136FDA;
extern const uint32_t g_rgctx_Func_2__ctor_m4A4BC2F89C44E66FE289E74FAD9D448792DB7E4A;
extern const uint32_t g_rgctx_U3CU3Ec__DisplayClass1_0_1_t246502A3483C8AB8F3CAEAAF815894AB2363B112;
extern const uint32_t g_rgctx_Func_2_t3529404F2558CEC6C39306B3F30CBCAB80B632BF;
extern const uint32_t g_rgctx_TSource_t0E1377B1420AACEB0E4CFBB5AB7D6C49F7B84D17;
extern const uint32_t g_rgctx_Func_2_Invoke_m309A56A82353FF5F98BC046B8B2CDB957FBCCBD9;
static const Il2CppRGCTXDefinition s_rgctxValues[155] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t172656FB996B8C7E336AAC30919996CCF45053EC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m710BA0C8DA9F68BF7D5119792FA401AC61A1875C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t5290D6936B1D4D571793E4717B781F0C7FAB2871 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tB31E19935A0E3467E4E51AD773A9D5432B73B518 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t738FFE96DA24D4260B7C39DC33541473836A6630 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mA944AB0962D1DBEDDE52E6F419F650AC136C2897 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_tC56F860588AE66C881B76D981EE6DE2C1E18EE35 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_mD0F557574B1C7EBE3FDA2BB6749399C5668BC2DB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_t592CABD5DC9A0BBE89ED4DD34A3F23DF4B8022EE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m6020CD4EAC12A5FE9D3B4FB21F10F4FD03BED403 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t7CEC2B33E6DD3C1C3A6A172B3F8F543C1116982C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tB4B09B48E6A2A7B32ABB0D39C54E835B17CCEE61 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_mCC4AB6E07BBF5914732D63186528794923285145 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_tE2C6256C33037DCA358539D2812BAD8FA0E35704 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m272CB7E38BA46922E0937B29BEEA5D644DED9ADD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_t5AAE17D412D2F7FF3A5366C2DCC9DB0E0A0DA6B0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m53A6358BFFA10B30C1CEC31578FC6C8B456A7566 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tB6338BFB39DD886D2225183C6363F88CAA1D8541 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t264D004D7F5375932B3944352CF8468C1063FA7E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t64DFC50FE4A58B7BB47E16F52CAA7F07351E26D2 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_ToDictionary_TisTSource_t7F67F06748EBFC018CDABA4B3A7CD0B4EF30718A_TisTKey_tDD36C286A6586379BEE066237518A8C026543193_TisTElement_t34222D4D2113A9CDB7AB2AA7E61CF7B7D7528A25_m3C49A871A510BE404EFFEA9B46B4C99B35FAC85A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEqualityComparer_1_tEA907B24CDC60A58DC687FD53871803D4E97E37A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Dictionary_2_t634AAD0EE1D1A96BB77BB69A8FC2BD3C08991DD4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t3DE68BD4450FFC860A366C3AB84EEDD1B50776A5 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tCB920AB5F74B0D626CDA216B8D3A7C0C9D131E2C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t7E922282A583224DADF863B3AB2E6AB9A524EE05 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_ICollection_1_tCD106B6184626642593436EAC778EF08CDE797A8 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_ICollection_1_get_Count_m9D0EAFA76649016D9E68CD678891EA6AAF7958CB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEqualityComparer_1_tCB3314DC7613CFD33E8AF1DA645C203E33EC8D2C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Dictionary_2_t5303BEA2EBC6DA937589C18BD096BEB89A90AD0B },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2__ctor_m5C0C6459F5392CC3B71A9247F384FA68F6D4434A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSourceU5BU5D_t71B9F2DF5E66DC217D4C2658E01B11C57F1DCED3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_ToDictionary_TisTSource_t8CD364F5F26EB6C4C305455E0868238B5782188A_TisTKey_tFF9A03C526F347E261D073D45AF3BBDB16C995AC_TisTElement_t7ED82472022AA62152C24E6833F9B444EE210781_mED2FC24B323EFA7B8487516F64343D46ACF9065C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t40E7931212141E7EE9D7D0D01C5CA10D033933DA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerable_ToDictionary_TisTSource_t8CD364F5F26EB6C4C305455E0868238B5782188A_TisTKey_tFF9A03C526F347E261D073D45AF3BBDB16C995AC_TisTElement_t7ED82472022AA62152C24E6833F9B444EE210781_mFCCA81C5458B82B3C1817383FE3FEB3D436BBFA3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2__ctor_mC165BB47F00D52819C9CCD1724438B785CE10DEB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m77BE12F92AA464E3C516079D9A7B00161BD50CF6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t7311E55564AEDCCBCE700E7D0173F4A6208E816E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_mF7F2652B57F0F7F0F0897D8BE39E84FD87811EA6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_t8CD364F5F26EB6C4C305455E0868238B5782188A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mA73E15EFB4FCB7048767E333FF1964B4B4B16C63 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TKey_tFF9A03C526F347E261D073D45AF3BBDB16C995AC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m91AAAC36C8B675FCA2C75DD4D53A181E4FB83CBC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TElement_t7ED82472022AA62152C24E6833F9B444EE210781 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_Add_m7BCD621F524344A6275C1BBA7FD0F79845B753C9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSourceU5BU5D_tBF24C34CF94158660A5B1A228DAE6BA25693CCB2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEqualityComparer_1_tA7B9BD0A44DC04F143438A288A618C6FE3932415 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Dictionary_2_t813A34F7FA23D4CA721E8E6BD48C3C8D67EBEA3E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2__ctor_mE870D18774BB71E560C355D774B887E89DC87E14 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t28C530FDDB79BB059142EDB439AA8A14E7FA70BE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_tF640162823512278F935DDA8638410C3DFC4856D },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m910BD3000956A9A641F5ADA80A0C3704EF99AC97 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TKey_t34D6F171F137DF9CEF5877B85EE3DE43875D7DF4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tEF86658681C0750382DBCC6849D90B5CC284B93F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m26D4F5BA6A746642C34FC86D7B749305103E68D7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TElement_t31CD8216EE288780832B706E814FF96764A2D462 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_Add_m326755F46D377DDB6ED367ACE7C942491E424E1F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_tD93CA8EC62023A3C3756D5FDAC8A14E75D3C0BC3 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_get_Count_mFD7B8A04E7403684B1E2239F76E85E656BD1E295 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEqualityComparer_1_t2B286BDB9FB5C9464B979BD6DD202276FD37BB99 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Dictionary_2_tF53C0D4F7D6B2C6E80446F27C542F212A98B9026 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2__ctor_m6054D38CF6AFC4788948F37CEA8BD4668760BC89 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_GetEnumerator_mDB63B2ED929B798D66C04FC2894DBA0B9E7641B0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_tFDCFEB4EDEC55E0FC04E4F4B3E18CE64877C3381 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_mDDAD91C0EC6ACAE1FE58A5313388FB671E6001D0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_t00C37CAE87CBEC3927DAA7A224344E46567A423E },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t4BB304931147A8BAFE1CB7EFE911ABE1CDB756A1 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m0E32CF0EA6CF14A6B09E36767840ABF24624633B },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TKey_tCE4B8EA1FBF6562AD5000F8E13DE0F527CA09378 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t29EBAE0BB977C77FEDE068C71F97A676136CF31F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m2526DC919A8CBD217931D3F75C710EDC18F408AA },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TElement_tDF670BAB223D9CD6FF56961180AEBFA9064F9B10 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Dictionary_2_Add_m26A6BCFECE7D8A4B0405ED3C57FF9E653B959729 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_m26EA0F5B005170A80D6495DC0A1D0F888C05EC4E },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_tFDCFEB4EDEC55E0FC04E4F4B3E18CE64877C3381_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t7AEE5935ECE18A383FD11919A51AE5602FC558A6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tC8BDB859B1062ECC0A8239BEC7EFB8A8EA6D9980 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_tCFAA62A6C9F96DE2CF39C6650ECDD90ABE2685EC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Where_mA2F3F081E1BB8C080173197BF8B3BACB4D1265BD },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSourceU5BU5D_t3208AEE56FC08B9D8EF3EBC686C813285BEBCA88 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereArrayIterator_1_t02B6565B81E6B3116FEB4E19018ECAEA32DBECFE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereArrayIterator_1__ctor_mA1F81211FAEEC31DDDE7FEB4597D827FD8173193 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EmptyPartition_1_tE4B0836605107D48F93B84CD00CBB11E8768E901 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EmptyPartition_1_tE4B0836605107D48F93B84CD00CBB11E8768E901 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t7ECE6A3407ABA1B6A770EE42BC241FA0D5CA8E64 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereListIterator_1_tAEF79AA48344AA5DE131BEE39C5D791F28C824AF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereListIterator_1__ctor_m58771D71B52CBC9B8BE8F30DD4C91AD2D03C28C3 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereEnumerableIterator_1_t937E10A58702C981A92D398826CA6EB6022E26DE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereEnumerableIterator_1__ctor_mCC15F47FF48C410C2A5DEFECEB5A4BAD2023196D },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t8E009DFA0514DB4E4987BB392D13A5A8170ECCE4 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_tE11DAFD922BE8DFEB5489CBD1813EB0466BC3D79 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Clone_m06A7D1B0BDA308E69987DDED84FFC6B95859AA62 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t15692AE856D4F6CF8F91F15DC932B0FAFFF1B98C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tA01CD1DFE0240EB95E4626BB7F28809146289218 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereEnumerableIterator_1_t3C69AA048013291A451D24AE02A716BA74A1AC63 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereEnumerableIterator_1__ctor_m5884B587F45619CEFAAD2236258CA1379EBD4331 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tCC285D3A6134E8A5D679710930EAF089B174AE55 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_get_Current_m7CDFA0D6C9FE9C1400547F6BDB614EFD06F9BD91 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_GetEnumerator_mF75249EC97644B0005490D15C69E49F7F9164A90 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1__ctor_m690C659CF11A74EED9E70752C5849F1628230AC8 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t15119AB906B4942B10DE36D501F127F0FF6DF281 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t6BB9BE6EEAECF4E66C19B7781D16F0E830520AC0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereEnumerableIterator_1_t92EE9D2E5265D8B183ED697686240F506BCA8424 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tC86143735420E666A856DEA89A154669337AD033 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereEnumerableIterator_1__ctor_m9C038F85EC321BD8F7AE403D683D0153D355F9CB },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t15119AB906B4942B10DE36D501F127F0FF6DF281 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t7057BF629F81E7DFB90FC10A9074D9A504C6971C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Dispose_mF10F128ADF4C88061B584756801E3C39F4D04FA6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerable_1_GetEnumerator_m844DCC57B48252D74DFA627000935F7B4A4407F6 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IEnumerator_1_get_Current_m07F9232B3524F24682301D1CF8573D7A1CB9C6ED },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m12DE18B02FB8945CB56D98F22BD68442081B02EC },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Utilities_CombinePredicates_TisTSource_tC0EDCBB06D927E5200EDA4B413FCECB2FDD7AFEB_mE810E690B778A75EC5C4F51AF3521DC1AEEAC70C },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1__ctor_mB182060F0BAD71C29739D1A67593C75D932D1F99 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t401B0AE4A7AE625421285FB386F87D7EB1213E82 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSourceU5BU5D_tF02636C637844512684A90462192D486199D9DDC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereArrayIterator_1_t3191C8D5170E56806A48BD846333ABBD99D3D3C7 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t9550E469110084BCEB11807FD34F94E9615475E5 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereArrayIterator_1__ctor_m4D241BD7A7C7BF59DEFF9D7D34B8E23771934CFE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t401B0AE4A7AE625421285FB386F87D7EB1213E82 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_mCC45E416C5C54731DCA65FEFD545FDC5F4D10DA7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Dispose_m3973A9258B5A77E6B3F7DC3D004466E6296075A9 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Utilities_CombinePredicates_TisTSource_tA44A3A99F6F77148305A3C32D2C4DE1D4226338A_mC0FB3E46A0A447E64AEBBEA2EA517D2D13532D05 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_t988FF724FA547066EC844CEC6A2D933A9656CFF0 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1__ctor_m474A63CD9FAA51728C0378997DDC4C8B5FE28303 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t4928FCA7FD6F8CA3BFB0698285A34D6BBDE1A112 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_List_1_t65D73AE3589A56A7B32F4BDFCD91269AD04DD4DF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_WhereListIterator_1_t39045FEC3E9F1D32C0EA2780668C61E302992807 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_tC858B64F5B124B5C1F30E774832D4E614DA18793 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_WhereListIterator_1__ctor_m172443247095E67B21AF11E2907D7B644EB793DE },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Iterator_1_t4928FCA7FD6F8CA3BFB0698285A34D6BBDE1A112 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_List_1_GetEnumerator_m62042CED4A1CF9B02B5E17694405BBB8BEEDD38C },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_t8E62FE91E95BFC5D28A3B09EFA69C2A33120205E },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_m21D84BB0301B459F1ADE9ABD50089FBBB8C63F97 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_t85B7C93A555823AE666813BFFC5FEC432E108956 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m1C2F1F284152F67D5FE0FD1BD2D71BD3E2DD280F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_m1A9C394EDBEE8ABF55FA1F44A260F79D813902E4 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Iterator_1_Dispose_m84B51BBBD674EB42CD5E238D01DC427248C5043F },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Utilities_CombinePredicates_TisTSource_t85B7C93A555823AE666813BFFC5FEC432E108956_mDF02B8078D655F9263EC3761DA42BA4D74021650 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerable_1_tC15BD51C80FA8BBB44707A0414386F7091E0C5B1 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_IEnumerator_1_t73FB7DB8D400AE6910B872A1280C174A332537FC },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TElement_t30B891D6EDD43364B6B4AC73FA4B369249067024 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EmptyPartition_1_t65F0ADCB49DF81B93E43192F127EBFF7B9A8C063 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_EmptyPartition_1__ctor_mDA2E9A28B74210E72343F02BAB6526D90BEA15E2 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_EmptyPartition_1_t65F0ADCB49DF81B93E43192F127EBFF7B9A8C063 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass1_0_1_t316A9EEA30597CF0CD9FFA76141EC865C8223C90 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass1_0_1__ctor_mE1828897E9569CC9825960402460AEA9C57EA036 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t2A060D2670F937A26CB1978A300631DC450AD634 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_U3CU3Ec__DisplayClass1_0_1_U3CCombinePredicatesU3Eb__0_m64683DC024BB6D2CE0BCDF7F08F5E6AD2E136FDA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2__ctor_m4A4BC2F89C44E66FE289E74FAD9D448792DB7E4A },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_U3CU3Ec__DisplayClass1_0_1_t246502A3483C8AB8F3CAEAAF815894AB2363B112 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Func_2_t3529404F2558CEC6C39306B3F30CBCAB80B632BF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TSource_t0E1377B1420AACEB0E4CFBB5AB7D6C49F7B84D17 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Func_2_Invoke_m309A56A82353FF5F98BC046B8B2CDB957FBCCBD9 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	43,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	15,
	s_rgctxIndices,
	155,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
