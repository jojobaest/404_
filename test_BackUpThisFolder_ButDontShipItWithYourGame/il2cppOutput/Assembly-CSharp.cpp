#include "pch-cpp.hpp"





template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
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

struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
struct List_1_t3A076A19AF26E22A128C32B5C19804DDD2877607;
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
struct SecondarySpriteTextureU5BU5D_tC322D73EA4B9A8B747013A3584DEFEAFC0D87192;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
struct SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4;
struct TextProcessingElementU5BU5D_tC3E97D1672C8DB6E1F91DB2C0987D0ED9A2E7113;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
struct PokerHandInfoUpdater_t5E0990542389E579EAAF05B53A4EC310140F7433;
struct PokerOptimalMoveUpdater_t6C731BDF4F616212D840506B4F1C68DDCE828338;
struct ProcessPokerDisplay_t6A93010478181678508FE7131E3E5C0400424820;
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB;
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
struct SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF;
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct String_t;
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E;
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401;
struct MissingCharacterEventCallback_t955241181324E0FEF9A9BDBA400E8780F8979DE6;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____8C207227B4C36AE4D4D8F8E9B27C57FCB6D5A6FC4DAA77F0A51AA74AA7CAFFD2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____B1BA9F52C5545A1B5E23881DACAA10F846C886713E4EA1F37A8161A5F4A2D072_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07241F76FA6DEDAC2420FF3FADC0491EC6788182;
IL2CPP_EXTERN_C String_t* _stringLiteral3D10210DE5E0903A01DB049E30754E1514318709;
IL2CPP_EXTERN_C String_t* _stringLiteral42C6FE4C52176F41514A1ABE9C699FC8C686ADB1;
IL2CPP_EXTERN_C String_t* _stringLiteral4D63650286A1E1FD31796F6AE418A16D3A0C143B;
IL2CPP_EXTERN_C String_t* _stringLiteral818434DF25491EF283A19E21CD7147719EF22F8C;
IL2CPP_EXTERN_C String_t* _stringLiteral8D593402CCA6ACC55AF9D86F83E9BF79C5A9C557;
IL2CPP_EXTERN_C String_t* _stringLiteral8E528B3D59F4DF44EA6F2EFBE4003B6BBE14CAB2;
IL2CPP_EXTERN_C String_t* _stringLiteral9627DE004C50289403B343006AE8C59FE1F4F3D3;
IL2CPP_EXTERN_C String_t* _stringLiteral9E9976302FE82DAB07A3856FC6C2BA6F459D0762;
IL2CPP_EXTERN_C String_t* _stringLiteralC5380AA17CB3280FFBF990B448A35074603B454E;
IL2CPP_EXTERN_C String_t* _stringLiteralCFC6902881A0B566DE46AD6887071D29F1BB8A37;
IL2CPP_EXTERN_C String_t* _stringLiteralE5B0C3908843D567C811EA959FAA15EEAE943043;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};
struct ProcessPokerDisplay_t6A93010478181678508FE7131E3E5C0400424820  : public RuntimeObject
{
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___playerNameText;
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___playerAvatarImage;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___playerChipsText;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___playerBetText;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401  : public RuntimeObject
{
	String_t* ___heading;
	String_t* ___text;
	String_t* ___linkText;
	String_t* ___url;
};
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack;
	int32_t ___index;
	float ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack;
	int32_t ___index;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	float ___r;
	float ___g;
	float ___b;
	float ___a;
};
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___rgba;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___r;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_OffsetPadding[1];
			uint8_t ___g;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_OffsetPadding[2];
			uint8_t ___b;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_OffsetPadding[3];
			uint8_t ___a;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_forAlignmentOnly;
		};
	};
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	bool ___isDefaultMaterial;
	bool ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___isDefaultMaterial;
	int32_t ___isFallbackMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial;
	float ___padding;
	int32_t ___referenceCount;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	uint8_t ___bold;
	uint8_t ___italic;
	uint8_t ___underline;
	uint8_t ___strikethrough;
	uint8_t ___highlight;
	uint8_t ___superscript;
	uint8_t ___subscript;
	uint8_t ___uppercase;
	uint8_t ___lowercase;
	uint8_t ___smallcaps;
};
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	float ___m_Left;
	float ___m_Right;
	float ___m_Top;
	float ___m_Bottom;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
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
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D128_tF4DC60A802E7EAF26084A16B33B2CDCC817796AB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_tF4DC60A802E7EAF26084A16B33B2CDCC817796AB__padding[128];
	};
};
#pragma pack(pop, tp)
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D227_tDF7FD3E61BAAD869188FD887FBA8CB4C486EC9D1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D227_tDF7FD3E61BAAD869188FD887FBA8CB4C486EC9D1__padding[227];
	};
};
#pragma pack(pop, tp)
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialIndex;
};
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialIndex;
};
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material;
	int32_t ___materialIndex;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array;
	int32_t ___m_Index;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray* ___m_Array;
	int32_t ___m_Index;
};
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray* ___m_Array;
	int32_t ___m_Index;
};
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___FilePathsData;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	bool ___IsEditorOnly;
};
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com
{
	Il2CppSafeArray* ___FilePathsData;
	Il2CppSafeArray* ___TypesData;
	int32_t ___TotalTypes;
	int32_t ___TotalFiles;
	int32_t ___IsEditorOnly;
};
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack;
	int32_t ___index;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack;
	int32_t ___index;
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct ColorMode_tA7A815AAB9F175EFBA0AE0814E55728432A880BF 
{
	int32_t ___value__;
};
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max;
};
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	int32_t ___value__;
};
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	int32_t ___value__;
};
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color;
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding;
};
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	int32_t ___value__;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	intptr_t ___m_Ptr;
};
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	intptr_t ___value;
};
struct TMP_TextElementType_t51EE6662436732F22C6B599F5757B7F35F706342 
{
	int32_t ___value__;
};
struct TextAlignmentOptions_tF3FA9020F7E2AF1A48660044540254009A22EF01 
{
	int32_t ___value__;
};
struct TextOverflowModes_t7DCCD00C16E3223CE50CDDCC53F785C0405BE203 
{
	int32_t ___value__;
};
struct TextRenderFlags_tE023FF398ECFE57A1DBC6FD2A1AF4AE9620F6E1C 
{
	int32_t ___value__;
};
struct TextWrappingModes_t982BC65D6DA703E73C04B99286285ECD3DDF207E 
{
	int32_t ___value__;
};
struct TextureMappingOptions_t0E1A47C529DEB45A875486256E7026E97C940DAE 
{
	int32_t ___value__;
};
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight;
};
struct VertexSortingOrder_t95B7AEDBDCAACC3459B6476E5CCC594A6422FFA8 
{
	int32_t ___value__;
};
struct VerticalAlignmentOptions_tCEF70AF60282B71AEEE14D51253CE6A61E72D855 
{
	int32_t ___value__;
};
struct FillMethod_t36837ED12068DF1582CC20489D571B0BCAA7AD19 
{
	int32_t ___value__;
};
struct Type_t81D6F138C2FC745112D5247CD91BD483EDFFC041 
{
	int32_t ___value__;
};
struct TextInputSources_t41387D6C9CB16E60390F47A15AEB8185BE966D26 
{
	int32_t ___value__;
};
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack;
	int32_t ___index;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack;
	int32_t ___index;
	int32_t ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	int32_t ___controlCharacterCount;
	int32_t ___characterCount;
	int32_t ___visibleCharacterCount;
	int32_t ___spaceCount;
	int32_t ___visibleSpaceCount;
	int32_t ___wordCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharacterIndex;
	float ___length;
	float ___lineHeight;
	float ___ascender;
	float ___baseline;
	float ___descender;
	float ___maxAdvance;
	float ___width;
	float ___marginLeft;
	float ___marginRight;
	int32_t ___alignment;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents;
};
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___icon;
	String_t* ___title;
	SectionU5BU5D_t9D3017555FFF42E71BE91904A2486EAF429F24C4* ___sections;
	bool ___loadedLayout;
};
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___renderedWidth;
	float ___renderedHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	bool ___isDrivenLineSpacing;
	int32_t ___lastBaseGlyphIndex;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	bool ___tagNoParsing;
	bool ___isNonBreakingSpace;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___renderedWidth;
	float ___renderedHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	int32_t ___isDrivenLineSpacing;
	int32_t ___lastBaseGlyphIndex;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
};
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak;
	int32_t ___total_CharacterCount;
	int32_t ___visible_CharacterCount;
	int32_t ___visibleSpaceCount;
	int32_t ___visible_SpriteCount;
	int32_t ___visible_LinkCount;
	int32_t ___firstCharacterIndex;
	int32_t ___firstVisibleCharacterIndex;
	int32_t ___lastCharacterIndex;
	int32_t ___lastVisibleCharIndex;
	int32_t ___lineNumber;
	float ___maxCapHeight;
	float ___maxAscender;
	float ___maxDescender;
	float ___startOfLineAscender;
	float ___maxLineAscender;
	float ___maxLineDescender;
	float ___pageAscender;
	int32_t ___horizontalAlignment;
	float ___marginLeft;
	float ___marginRight;
	float ___xAdvance;
	float ___preferredWidth;
	float ___preferredHeight;
	float ___renderedWidth;
	float ___renderedHeight;
	float ___previousLineScale;
	int32_t ___wordCount;
	int32_t ___fontStyle;
	int32_t ___italicAngle;
	float ___fontScaleMultiplier;
	float ___currentFontSize;
	float ___baselineOffset;
	float ___lineOffset;
	int32_t ___isDrivenLineSpacing;
	int32_t ___lastBaseGlyphIndex;
	float ___cSpace;
	float ___mSpace;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack;
	int32_t ___spriteAnimationID;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial;
	int32_t ___currentMaterialIndex;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents;
	int32_t ___tagNoParsing;
	int32_t ___isNonBreakingSpace;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___fxRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fxScale;
};
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack;
	int32_t ___index;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem;
	int32_t ___m_Capacity;
	int32_t ___m_RolloverSize;
	int32_t ___m_Count;
};
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ___m_CancellationTokenSource;
};
struct PokerHandInfoUpdater_t5E0990542389E579EAAF05B53A4EC310140F7433  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___measurementText;
	float ___updateInterval;
	float ___timer;
	String_t* ___originalTemplate;
};
struct PokerOptimalMoveUpdater_t6C731BDF4F616212D840506B4F1C68DDCE828338  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___actionText;
	float ___updateInterval;
	float ___timer;
	String_t* ___originalTemplate;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___pokerActions;
};
struct SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color;
	bool ___m_SkipLayoutUpdate;
	bool ___m_SkipMaterialUpdate;
	bool ___m_RaycastTarget;
	bool ___m_RaycastTargetCache;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform;
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas;
	bool ___m_VertsDirty;
	bool ___m_MaterialDirty;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs;
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner;
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField;
};
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	bool ___m_ShouldRecalculateStencil;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial;
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask;
	bool ___m_Maskable;
	bool ___m_IsMaskingGraphic;
	bool ___m_IncludeForMasking;
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged;
	bool ___m_ShouldRecalculate;
	int32_t ___m_StencilValue;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners;
};
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite;
	int32_t ___m_Type;
	bool ___m_PreserveAspect;
	bool ___m_FillCenter;
	int32_t ___m_FillMethod;
	float ___m_FillAmount;
	bool ___m_FillClockwise;
	int32_t ___m_FillOrigin;
	float ___m_AlphaHitTestMinimumThreshold;
	bool ___m_Tracked;
	bool ___m_UseSpriteMesh;
	float ___m_PixelsPerUnitMultiplier;
	float ___m_CachedReferencePixelsPerUnit;
	SecondarySpriteTextureU5BU5D_tC322D73EA4B9A8B747013A3584DEFEAFC0D87192* ___m_SecondaryTextures;
};
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	String_t* ___m_text;
	bool ___m_IsTextBackingStringDirty;
	RuntimeObject* ___m_TextPreprocessor;
	bool ___m_isRightToLeft;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset;
	bool ___m_isSDFShader;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial;
	int32_t ___m_currentMaterialIndex;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial;
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials;
	bool ___m_isMaterialDirty;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_HighlightState;
	bool ___m_ConvertToLinearSpace;
	bool ___m_enableVertexGradient;
	int32_t ___m_colorMode;
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset;
	bool ___m_tintAllSprites;
	bool ___m_tintSprite;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor;
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet;
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle;
	int32_t ___m_TextStyleHashCode;
	bool ___m_overrideHtmlColors;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor;
	float ___m_outlineWidth;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_currentEnvMapRotation;
	bool ___m_hasEnvMapProperty;
	float ___m_fontSize;
	float ___m_currentFontSize;
	float ___m_fontSizeBase;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack;
	int32_t ___m_fontWeight;
	int32_t ___m_FontWeightInternal;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack;
	bool ___m_enableAutoSizing;
	float ___m_maxFontSize;
	float ___m_minFontSize;
	int32_t ___m_AutoSizeIterationCount;
	int32_t ___m_AutoSizeMaxIterationCount;
	bool ___m_IsAutoSizePointSizeSet;
	float ___m_fontSizeMin;
	float ___m_fontSizeMax;
	int32_t ___m_fontStyle;
	int32_t ___m_FontStyleInternal;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack;
	bool ___m_isUsingBold;
	int32_t ___m_HorizontalAlignment;
	int32_t ___m_VerticalAlignment;
	int32_t ___m_textAlignment;
	int32_t ___m_lineJustification;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners;
	float ___m_characterSpacing;
	float ___m_cSpacing;
	float ___m_monoSpacing;
	bool ___m_duoSpace;
	float ___m_wordSpacing;
	float ___m_lineSpacing;
	float ___m_lineSpacingDelta;
	float ___m_lineHeight;
	bool ___m_IsDrivenLineSpacing;
	float ___m_lineSpacingMax;
	float ___m_paragraphSpacing;
	float ___m_charWidthMaxAdj;
	float ___m_charWidthAdjDelta;
	int32_t ___m_TextWrappingMode;
	bool ___m_isCharacterWrappingEnabled;
	bool ___m_isNonBreakingSpace;
	bool ___m_isIgnoringAlignment;
	float ___m_wordWrappingRatios;
	int32_t ___m_overflowMode;
	int32_t ___m_firstOverflowCharacterIndex;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent;
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent;
	bool ___m_isTextTruncated;
	bool ___m_enableKerning;
	int32_t ___m_LastBaseGlyphIndex;
	List_1_t3A076A19AF26E22A128C32B5C19804DDD2877607* ___m_ActiveFontFeatures;
	bool ___m_enableExtraPadding;
	bool ___checkPaddingRequired;
	bool ___m_isRichText;
	bool ___m_EmojiFallbackSupport;
	bool ___m_parseCtrlCharacters;
	bool ___m_isOverlay;
	bool ___m_isOrthographic;
	bool ___m_isCullingEnabled;
	bool ___m_isMaskingEnabled;
	bool ___isMaskUpdateRequired;
	bool ___m_ignoreCulling;
	int32_t ___m_horizontalMapping;
	int32_t ___m_verticalMapping;
	float ___m_uvLineOffset;
	int32_t ___m_renderMode;
	int32_t ___m_geometrySortingOrder;
	bool ___m_IsTextObjectScaleStatic;
	bool ___m_VertexBufferAutoSizeReduction;
	int32_t ___m_firstVisibleCharacter;
	int32_t ___m_maxVisibleCharacters;
	int32_t ___m_maxVisibleWords;
	int32_t ___m_maxVisibleLines;
	bool ___m_useMaxVisibleDescender;
	int32_t ___m_pageToDisplay;
	bool ___m_isNewPage;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin;
	float ___m_marginLeft;
	float ___m_marginRight;
	float ___m_marginWidth;
	float ___m_marginHeight;
	float ___m_width;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo;
	bool ___m_havePropertiesChanged;
	bool ___m_isUsingLegacyAnimationComponent;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition;
	bool ___U3CautoSizeTextContainerU3Ek__BackingField;
	bool ___m_autoSizeTextContainer;
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh;
	bool ___m_isVolumetricText;
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText;
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator;
	float ___m_flexibleHeight;
	float ___m_flexibleWidth;
	float ___m_minWidth;
	float ___m_minHeight;
	float ___m_maxWidth;
	float ___m_maxHeight;
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement;
	float ___m_preferredWidth;
	float ___m_RenderedWidth;
	bool ___m_isPreferredWidthDirty;
	float ___m_preferredHeight;
	float ___m_RenderedHeight;
	bool ___m_isPreferredHeightDirty;
	bool ___m_isCalculatingPreferredValues;
	int32_t ___m_layoutPriority;
	bool ___m_isLayoutDirty;
	bool ___m_isAwake;
	bool ___m_isWaitingOnResourceLoad;
	int32_t ___m_inputSource;
	float ___m_fontScaleMultiplier;
	float ___tag_LineIndent;
	float ___tag_Indent;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack;
	bool ___tag_NoParsing;
	bool ___m_isTextLayoutPhase;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___m_FXRotation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_FXScale;
	TextProcessingElementU5BU5D_tC3E97D1672C8DB6E1F91DB2C0987D0ED9A2E7113* ___m_TextProcessingArray;
	int32_t ___m_InternalTextProcessingArraySize;
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo;
	int32_t ___m_totalCharacterCount;
	int32_t ___m_characterCount;
	int32_t ___m_firstCharacterOfLine;
	int32_t ___m_firstVisibleCharacterOfLine;
	int32_t ___m_lastCharacterOfLine;
	int32_t ___m_lastVisibleCharacterOfLine;
	int32_t ___m_lineNumber;
	int32_t ___m_lineVisibleCharacterCount;
	int32_t ___m_lineVisibleSpaceCount;
	int32_t ___m_pageNumber;
	float ___m_PageAscender;
	float ___m_maxTextAscender;
	float ___m_maxCapHeight;
	float ___m_ElementAscender;
	float ___m_ElementDescender;
	float ___m_maxLineAscender;
	float ___m_maxLineDescender;
	float ___m_startOfLineAscender;
	float ___m_startOfLineDescender;
	float ___m_lineOffset;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack;
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack;
	bool ___m_colorGradientPresetIsTinted;
	float ___m_tabSpacing;
	float ___m_spacing;
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks;
	int32_t ___m_TextStyleStackDepth;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack;
	int32_t ___m_ItalicAngle;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack;
	float ___m_padding;
	float ___m_baselineOffset;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack;
	float ___m_xAdvance;
	int32_t ___m_textElementType;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement;
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis;
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset;
	int32_t ___m_spriteCount;
	int32_t ___m_spriteIndex;
	int32_t ___m_spriteAnimationID;
	bool ___m_ignoreActiveState;
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray;
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power;
};
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	bool ___m_isRebuildingLayout;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild;
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild;
	bool ___m_ShouldUpdateCulling;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect;
	bool ___m_ValidRect;
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText;
	bool ___m_hasFontAssetChanged;
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects;
	float ___m_previousLossyScaleY;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners;
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas;
	float ___m_CanvasScaleFactor;
	bool ___m_isFirstAllocation;
	int32_t ___m_max_characters;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial;
	bool ___m_isScrollRegionSet;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix;
	bool ___m_isRegisteredForEvents;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___materialIndexPairs;
};
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	__StaticArrayInitTypeSizeU3D227_tDF7FD3E61BAAD869188FD887FBA8CB4C486EC9D1 ___8C207227B4C36AE4D4D8F8E9B27C57FCB6D5A6FC4DAA77F0A51AA74AA7CAFFD2;
	__StaticArrayInitTypeSizeU3D128_tF4DC60A802E7EAF26084A16B33B2CDCC817796AB ___B1BA9F52C5545A1B5E23881DACAA10F846C886713E4EA1F37A8161A5F4A2D072;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject;
};
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI;
	SecondarySpriteTextureU5BU5D_tC322D73EA4B9A8B747013A3584DEFEAFC0D87192* ___s_TempNewSecondaryTextures;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch;
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy;
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv;
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages;
	bool ___s_Initialized;
};
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences;
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite;
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest;
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest;
	MissingCharacterEventCallback_t955241181324E0FEF9A9BDBA400E8780F8979DE6* ___OnMissingCharacter;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag;
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState;
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState;
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2;
	float ___k_LargePositiveFloat;
	float ___k_LargeNegativeFloat;
	int32_t ___k_LargePositiveInt;
	int32_t ___k_LargeNegativeInt;
};
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveTextExtentMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker;
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
inline TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___0_minInclusive, int32_t ___1_maxExclusive, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___0_oldValue, String_t* ___1_newValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___0_n, const RuntimeMethod* method) ;
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E (String_t* ___0_sceneName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___0_array, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___1_fldHandle, const RuntimeMethod* method) ;
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
// Method Definition Index: 132833
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PokerHandInfoUpdater_Start_m529FCA7A3F3D5C5431B79716DD7E1A7E3D964A1E (PokerHandInfoUpdater_t5E0990542389E579EAAF05B53A4EC310140F7433* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerHandInfoUpdater.cs:14>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___measurementText;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerHandInfoUpdater.cs:15>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2;
		L_2 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(__this, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		__this->___measurementText = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___measurementText), (void*)L_2);
	}

IL_001a:
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerHandInfoUpdater.cs:18>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = __this->___measurementText;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(65, L_3);
		__this->___originalTemplate = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalTemplate), (void*)L_4);
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerHandInfoUpdater.cs:19>
		return;
	}
}
// Method Definition Index: 132834
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PokerHandInfoUpdater_Update_m8A3C3ABFE4273EE678AA33E1EAC60E812B516C35 (PokerHandInfoUpdater_t5E0990542389E579EAAF05B53A4EC310140F7433* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E9976302FE82DAB07A3856FC6C2BA6F459D0762);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerHandInfoUpdater.cs:23>
		float L_0 = __this->___timer;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer = ((float)il2cpp_codegen_add(L_0, L_1));
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerHandInfoUpdater.cs:24>
		float L_2 = __this->___timer;
		float L_3 = __this->___updateInterval;
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_0058;
		}
	}
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerHandInfoUpdater.cs:26>
		__this->___timer = (0.0f);
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerHandInfoUpdater.cs:29>
		int32_t L_4;
		L_4 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)100), NULL);
		V_0 = L_4;
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerHandInfoUpdater.cs:32>
		String_t* L_5 = __this->___originalTemplate;
		String_t* L_6;
		L_6 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_5);
		String_t* L_7;
		L_7 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_5, _stringLiteral9E9976302FE82DAB07A3856FC6C2BA6F459D0762, L_6, NULL);
		V_1 = L_7;
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerHandInfoUpdater.cs:35>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_8 = __this->___measurementText;
		String_t* L_9 = V_1;
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(66, L_8, L_9);
	}

IL_0058:
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerHandInfoUpdater.cs:37>
		return;
	}
}
// Method Definition Index: 132835
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PokerHandInfoUpdater__ctor_m07E2150887B7E669B28677858E4489C29E5F25AD (PokerHandInfoUpdater_t5E0990542389E579EAAF05B53A4EC310140F7433* __this, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerHandInfoUpdater.cs:7>
		__this->___updateInterval = (1.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Method Definition Index: 132836
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PokerOptimalMoveUpdater_Start_m407BCC926D95140CD56BAFCC15328E2743F78A13 (PokerOptimalMoveUpdater_t6C731BDF4F616212D840506B4F1C68DDCE828338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerOptimalMoveUpdater.cs:17>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_0 = __this->___actionText;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerOptimalMoveUpdater.cs:18>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_2;
		L_2 = Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5(__this, Component_GetComponent_TisTMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_m0C4C5268B54C7097888C6B109527A680772EBCB5_RuntimeMethod_var);
		__this->___actionText = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actionText), (void*)L_2);
	}

IL_001a:
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerOptimalMoveUpdater.cs:21>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_3 = __this->___actionText;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(65, L_3);
		__this->___originalTemplate = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalTemplate), (void*)L_4);
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerOptimalMoveUpdater.cs:22>
		return;
	}
}
// Method Definition Index: 132837
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PokerOptimalMoveUpdater_Update_m41EE226B6515DAECB675F34C787062B306AA1DA9 (PokerOptimalMoveUpdater_t6C731BDF4F616212D840506B4F1C68DDCE828338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E9976302FE82DAB07A3856FC6C2BA6F459D0762);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerOptimalMoveUpdater.cs:26>
		float L_0 = __this->___timer;
		float L_1;
		L_1 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___timer = ((float)il2cpp_codegen_add(L_0, L_1));
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerOptimalMoveUpdater.cs:27>
		float L_2 = __this->___timer;
		float L_3 = __this->___updateInterval;
		if ((!(((float)L_2) >= ((float)L_3))))
		{
			goto IL_005f;
		}
	}
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerOptimalMoveUpdater.cs:29>
		__this->___timer = (0.0f);
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerOptimalMoveUpdater.cs:32>
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = __this->___pokerActions;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = __this->___pokerActions;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(0, ((int32_t)(((RuntimeArray*)L_5)->max_length)), NULL);
		NullCheck(L_4);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_0 = L_8;
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerOptimalMoveUpdater.cs:35>
		String_t* L_9 = __this->___originalTemplate;
		String_t* L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_9, _stringLiteral9E9976302FE82DAB07A3856FC6C2BA6F459D0762, L_10, NULL);
		V_1 = L_11;
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerOptimalMoveUpdater.cs:38>
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_12 = __this->___actionText;
		String_t* L_13 = V_1;
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(66, L_12, L_13);
	}

IL_005f:
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerOptimalMoveUpdater.cs:40>
		return;
	}
}
// Method Definition Index: 132838
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PokerOptimalMoveUpdater__ctor_m65308771C603799B689A36027CFF675B18D1F94F (PokerOptimalMoveUpdater_t6C731BDF4F616212D840506B4F1C68DDCE828338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D63650286A1E1FD31796F6AE418A16D3A0C143B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral818434DF25491EF283A19E21CD7147719EF22F8C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E528B3D59F4DF44EA6F2EFBE4003B6BBE14CAB2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5B0C3908843D567C811EA959FAA15EEAE943043);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerOptimalMoveUpdater.cs:7>
		__this->___updateInterval = (1.5f);
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/PokerOptimalMoveUpdater.cs:13>
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralE5B0C3908843D567C811EA959FAA15EEAE943043);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral8E528B3D59F4DF44EA6F2EFBE4003B6BBE14CAB2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral818434DF25491EF283A19E21CD7147719EF22F8C);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral4D63650286A1E1FD31796F6AE418A16D3A0C143B);
		__this->___pokerActions = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pokerActions), (void*)L_4);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Method Definition Index: 132839
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessPokerDisplay__ctor_m6945FB2D6FEA03F8F5F58817156302571147D47D (ProcessPokerDisplay_t6A93010478181678508FE7131E3E5C0400424820* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___0_playerDisplay, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07241F76FA6DEDAC2420FF3FADC0491EC6788182);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3D10210DE5E0903A01DB049E30754E1514318709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D593402CCA6ACC55AF9D86F83E9BF79C5A9C557);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9627DE004C50289403B343006AE8C59FE1F4F3D3);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/ProcessPokerDisplay.cs:12>
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/ProcessPokerDisplay.cs:14>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___0_playerDisplay;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		NullCheck(L_1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_1, _stringLiteral8D593402CCA6ACC55AF9D86F83E9BF79C5A9C557, NULL);
		NullCheck(L_2);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3;
		L_3 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(L_2, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___playerNameText = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerNameText), (void*)L_3);
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/ProcessPokerDisplay.cs:15>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = ___0_playerDisplay;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_5, _stringLiteral9627DE004C50289403B343006AE8C59FE1F4F3D3, NULL);
		NullCheck(L_6);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_7;
		L_7 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_6, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___playerAvatarImage = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerAvatarImage), (void*)L_7);
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/ProcessPokerDisplay.cs:16>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = ___0_playerDisplay;
		NullCheck(L_8);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_8, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_9, _stringLiteral07241F76FA6DEDAC2420FF3FADC0491EC6788182, NULL);
		NullCheck(L_10);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11;
		L_11 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(L_10, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___playerChipsText = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerChipsText), (void*)L_11);
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/ProcessPokerDisplay.cs:17>
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = ___0_playerDisplay;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_13, _stringLiteral3D10210DE5E0903A01DB049E30754E1514318709, NULL);
		NullCheck(L_14);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_15;
		L_15 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(L_14, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___playerBetText = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___playerBetText), (void*)L_15);
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/ProcessPokerDisplay.cs:18>
		return;
	}
}
// Method Definition Index: 132840
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessPokerDisplay_UpdatePlayerName_mF05D0C48D4E7A3AE245D023A47ADAF5616E1F8CB (ProcessPokerDisplay_t6A93010478181678508FE7131E3E5C0400424820* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/ProcessPokerDisplay.cs:22>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___playerNameText;
		String_t* L_1 = ___0_name;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66, L_0, L_1);
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/ProcessPokerDisplay.cs:23>
		return;
	}
}
// Method Definition Index: 132841
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessPokerDisplay_UpdatePlayerAvatar_mAECAC68C6594001B322EF86CB17594BC657CBA67 (ProcessPokerDisplay_t6A93010478181678508FE7131E3E5C0400424820* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_avatar, const RuntimeMethod* method) 
{
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/ProcessPokerDisplay.cs:27>
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0 = __this->___playerAvatarImage;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___0_avatar;
		NullCheck(L_0);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_0, L_1, NULL);
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/ProcessPokerDisplay.cs:28>
		return;
	}
}
// Method Definition Index: 132842
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessPokerDisplay_UpdatePlayerChips_m4DE5CB6688FF13868CDC03CD9753B131DA7BF74D (ProcessPokerDisplay_t6A93010478181678508FE7131E3E5C0400424820* __this, int32_t ___0_chips, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFC6902881A0B566DE46AD6887071D29F1BB8A37);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/ProcessPokerDisplay.cs:32>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___playerChipsText;
		int32_t L_1 = ___0_chips;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralCFC6902881A0B566DE46AD6887071D29F1BB8A37, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66, L_0, L_4);
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/ProcessPokerDisplay.cs:33>
		return;
	}
}
// Method Definition Index: 132843
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProcessPokerDisplay_UpdatePlayerBet_m1596627B4C93433EAAA27D109C7AD56BD0A65E39 (ProcessPokerDisplay_t6A93010478181678508FE7131E3E5C0400424820* __this, int32_t ___0_bet, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5380AA17CB3280FFBF990B448A35074603B454E);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/ProcessPokerDisplay.cs:37>
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___playerBetText;
		int32_t L_1 = ___0_bet;
		int32_t L_2 = L_1;
		RuntimeObject* L_3 = Box(il2cpp_defaults.int32_class, &L_2);
		String_t* L_4;
		L_4 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC5380AA17CB3280FFBF990B448A35074603B454E, L_3, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(66, L_0, L_4);
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/ProcessPokerDisplay.cs:38>
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
// Method Definition Index: 132844
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader_Load_m83DDB9410395E4EFA2F1815D9796719A20D41488 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42C6FE4C52176F41514A1ABE9C699FC8C686ADB1);
		s_Il2CppMethodInitialized = true;
	}
	{
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/SceneLoader.cs:11>
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_mBB3DBC1601A21F8F4E8A5D68FED30EA9412F218E(_stringLiteral42C6FE4C52176F41514A1ABE9C699FC8C686ADB1, NULL);
		//<source_info:/Users/dom05/Documents/Poker Overlay App/Assets/Scripts/SceneLoader.cs:12>
		return;
	}
}
// Method Definition Index: 132845
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneLoader__ctor_m2248766DF38AF07562AD31501C7275B8DF1B7D29 (SceneLoader_t96010F6DCE0AD6BEB011B72A85110D4801F5CCCF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Method Definition Index: 132846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Readme__ctor_m69C325C4C171DCB0312B646A9034AA91EA8C39C6 (Readme_tE17B99201D0F52BD5727638AD3F41072A65B3BBB* __this, const RuntimeMethod* method) 
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
// Method Definition Index: 132847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m5F732533E4DFC0167D965E5F5DB332E46055399B (Section_t50C894D0A717C2368EBAAE5477D4E8626D0B5401* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Method Definition Index: 132848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E UnitySourceGeneratedAssemblyMonoScriptTypes_v1_Get_mBEB95BEB954BB63E9710BBC7AD5E78C4CB0A0033 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____8C207227B4C36AE4D4D8F8E9B27C57FCB6D5A6FC4DAA77F0A51AA74AA7CAFFD2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____B1BA9F52C5545A1B5E23881DACAA10F846C886713E4EA1F37A8161A5F4A2D072_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)227));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____8C207227B4C36AE4D4D8F8E9B27C57FCB6D5A6FC4DAA77F0A51AA74AA7CAFFD2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		(&V_0)->___FilePathsData = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___FilePathsData), (void*)L_1);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)((int32_t)128));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = L_3;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_5 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA____B1BA9F52C5545A1B5E23881DACAA10F846C886713E4EA1F37A8161A5F4A2D072_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_4, L_5, NULL);
		(&V_0)->___TypesData = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___TypesData), (void*)L_4);
		(&V_0)->___TotalFiles = 5;
		(&V_0)->___TotalTypes = 6;
		(&V_0)->___IsEditorOnly = (bool)0;
		MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E L_6 = V_0;
		return L_6;
	}
}
// Method Definition Index: 132849
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySourceGeneratedAssemblyMonoScriptTypes_v1__ctor_mE70FB23ACC1EA12ABC948AA22C2E78B2D0AA39B1 (UnitySourceGeneratedAssemblyMonoScriptTypes_v1_tC95F24D0C6E6B77389433852BB389F39C692926E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke_back(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_pinvoke_cleanup(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled)
{
	marshaled.___FilePathsData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___FilePathsData);
	marshaled.___TypesData = il2cpp_codegen_com_marshal_safe_array(IL2CPP_VT_I1, unmarshaled.___TypesData);
	marshaled.___TotalTypes = unmarshaled.___TotalTypes;
	marshaled.___TotalFiles = unmarshaled.___TotalFiles;
	marshaled.___IsEditorOnly = static_cast<int32_t>(unmarshaled.___IsEditorOnly);
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com_back(const MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled, MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E& unmarshaled)
{
	unmarshaled.___FilePathsData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___FilePathsData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___FilePathsData));
	unmarshaled.___TypesData = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___TypesData), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cpp_codegen_com_marshal_safe_array_result(IL2CPP_VT_I1, il2cpp_defaults.byte_class, marshaled.___TypesData));
	int32_t unmarshaledTotalTypes_temp_2 = 0;
	unmarshaledTotalTypes_temp_2 = marshaled.___TotalTypes;
	unmarshaled.___TotalTypes = unmarshaledTotalTypes_temp_2;
	int32_t unmarshaledTotalFiles_temp_3 = 0;
	unmarshaledTotalFiles_temp_3 = marshaled.___TotalFiles;
	unmarshaled.___TotalFiles = unmarshaledTotalFiles_temp_3;
	bool unmarshaledIsEditorOnly_temp_4 = false;
	unmarshaledIsEditorOnly_temp_4 = static_cast<bool>(marshaled.___IsEditorOnly);
	unmarshaled.___IsEditorOnly = unmarshaledIsEditorOnly_temp_4;
}
IL2CPP_EXTERN_C void MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshal_com_cleanup(MonoScriptData_t8F50E352855B96FFFC1D9CB07EACC90C99D73A3E_marshaled_com& marshaled)
{
	il2cpp_codegen_com_destroy_safe_array(marshaled.___FilePathsData);
	marshaled.___FilePathsData = NULL;
	il2cpp_codegen_com_destroy_safe_array(marshaled.___TypesData);
	marshaled.___TypesData = NULL;
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
