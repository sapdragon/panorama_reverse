

struct CPanoramaSymbol
{
    char pad[0x2]; // 2 bytes
};
class IUIPanel;
class IUIPanelStyle;
class CUtlAbstractDelegate;
class IUIEvent;
class IUIJSObject;
class CJSONWebAPIParams;
class CUIEngine // or panorama::CUIEngineSource2. Its VTable
{
    public:
    virtual void Unknown1(); // 0x0
    virtual void Unknown2(); // 0x4
    virtual void Unknown3(); // 0x8
    virtual void Unknown4(); // 0xC
    virtual void Unknown5(); // 0x10
    virtual void Unknown6(); // 0x14
    virtual void RunFrame(); // 0x18
    virtual void Unknown7(); // 0x1C
    virtual void Unknown7(); // 0x20
    virtual void Unknown8(); // 0x24
    virtual void Unknown9(); // 0x28
    virtual void Unknown10(); // 0x2C
    virtual void Unknown11(); // 0x30
    virtual void PureVirtual1() = 0; // 0x34
    virtual void PureVirtual2() = 0; // 0x38
    virtual void PureVirtual3() = 0; // 0x3C
    virtual void PureVirtual4() = 0; // 0x40
    virtual void PureVirtual5() = 0; // 0x44
    virtual void Unknown12(); // 0x48
    virtual void Unknown13(); // 0x4C
    virtual void Unknown14(); // 0x50
    virtual void Unknown15(); // 0x54
    virtual void Unknown16(); // 0x58
    virtual void Unknown17(); // 0x5C
    virtual void Unknown18(); // 0x60
    virtual void Unknown19(); // 0x64
    virtual void Unknown20(); // 0x68
    virtual void Unknown21(); // 0x6C
    virtual void Unknown22(); // 0x70
    virtual void PureVirtual6() = 0; // 0x74
    virtual void Unknown23(); // 0x78
    virtual void Unknown24(); // 0x7C
    virtual void Unknown25(); // 0x80
    virtual void Unknown26(); // 0x84
    virtual void Unknown27(); // 0x88
    virtual void Unknown28(); // 0x8C
    virtual void Unknown29(); // 0x90
    virtual void Unknown30(); // 0x94
    virtual void Unknown31(); // 0x98
    virtual void Unknown32(); // 0x9C
    virtual void Unknown33(); // 0xA0
    virtual void Unknown34(); // 0xA4
    virtual void Unknown35(); // 0xA8
    virtual RegisterEventHandler(CPanoramaSymbol, IUIPanel*, CUtlAbstractDelegate); // 0xAC
    virtual void Unknown36(); // 0xB0
    virtual void UnregisterEventHandler(CPanoramaSymbol, IUIPanel*, CUtlAbstractDelegate); // 0xB4
    virtual void Unknown37(); // 0xB8
    virtual void RegisterForUnhandledEvent(CPanoramaSymbol, CUtlAbstractDelegate); // 0xBC
    virtual void UnregisterForUnhandledEvent(CPanoramaSymbol, CUtlAbstractDelegate); // 0xC0
    virtual void Unknown38(); // 0xC4
    virtual void Unknown39(); // 0xC8
    virtual void Unknown40(); // 0xCC
    virtual void DispatchEvent(CIUIEvent*); // 0xD0
    virtual void Unknown41(); // 0xD4
    virtual void Unknown42(); // 0xD8
    virtual void Unknown43(); // 0xDC
    virtual void Unknown44(); // 0xE0
    virtual void RegisterEventFilter(CUtlAbstractDelegate); // 0xE4
    virtual void UnregisterEventFilter(CUtlAbstractDelegate); // 0xE8
    virtual void PaintWindows(); // 0xEC
    virtual void Unknown45(); // 0xF0
    virtual void Unkwown46(); // 0xF4
    virtual void Unknown47(); // 0xF8
    virtual void Unknown48(); // 0xFC
    virtual void Unknown49(); // 0x100
    virtual void Unknown50(); // 0x104
    virtual void Unknown51(); // 0x108
    virtual void Unknown52(); // 0x10C
    virtual void Unknown53(); // 0x110
    virtual void Unknown54(); // 0x114
    virtual void Unknown55(); // 0x118
    virtual void Unknown56(); // 0x11C
    virtual void Unknown57(); // 0x120
    virtual void Unknown58(); // 0x124
    virtual void Unknown59(); // 0x128
    virtual void Unknown60(); // 0x12C
    virtual void Unknown61(); // 0x130
    virtual void Unknown62(); // 0x134
    virtual void Unknown63(); // 0x138
    virtual void Unknown64(); // 0x13C
    virtual void PureVirtual7(); // 0x140
    virtual void Unknown65(); // 0x144
    virtual void Unknown66(); // 0x148
    virtual void Unknown67(); // 0x14C
    virtual void Unknown68(); // 0x150
    virtual void Unknown69(); // 0x154
    virtual void Unknown70(); // 0x158
    virtual void Unknown71(); // 0x15C
    virtual void Unknown72(); // 0x160
    virtual void Unknown73(); // 0x164
    virtual void Unknown74(); // 0x168
    virtual void Unknown75(); // 0x16C
    virtual void Unknown76(); // 0x170
    virtual void Unknown77(); // 0x174
    virtual void Unknown78(); // 0x178
    virtual void Unknown79(); // 0x17C
    virtual void PureVirtual8(); // 0x180
    virtual void PureVirtual9(); // 0x184
    virtual void PureVirtual10(); // 0x188
    virtual void Unknown80(); // 0x18C
    virtual void Unknown81(); // 0x190
    virtual void Unknown82(); // 0x194
    virtual void Unknown83(); // 0x198
    virtual void PureVirtual10(); // 0x19C
    virtual void Unknown84(); // 0x1A0
    virtual void Unknown85(); // 0x1A4
    virtual void Unknown86(); // 0x1A8
    virtual void Unknown87(); // 0x1AC
    virtual void Unknown88(); // 0x1B0
    virtual void Unknown89(); // 0x1B4
    virtual void Unknown90(); // 0x1B8
    virtual void Unknown91(); // 0x1BC
    virtual void Unknown92(); // 0x1C0
    virtual void CompileAndRunScript(IUIPanel*, const char*, const char*, int, int, bool); // 0x1C4
    virtual void ExposeObjectTypeToJavaScript(const char*, CUtlDelegate&); // 0x1C8
    virtual void Unknown94(); // 0x1CC
    virtual void ExposeGlobalObjectToJavaScript(const char*, void*, const char*, bool); // 0x1D0
    virtual void Unknown96(); // 0x1D4
    virtual void Unknown97(); // 0x1D8
    virtual void Unknown98(); // 0x1DC
    virtual void Unknown99(); // 0x1E0
    virtual void OutputJSExceptionToConsole( void* pTryCatch, IUIPanel*); // 0x1E4
    virtual void AddGlobalV8FunctionTemplate(const char*, void* pFunctionTemplateHandle, bool); // v8::Handle<v8::FunctionTemplate> * | 0x1E8
    virtual void Unknown100(); // 0x1EC
    virtual void Unknown101(); // 0x1F0
    virtual void GetCurrentV8ObjectTemplateToSetup( int ); // 0x1F4
    virtual void Unknown102(); // 0x1F8
    virtual void Unknown103(); // 0x1FC
    virtual void Unknown104(); // 0x200
    virtual void* GetIsolate(); // 0x204
    virtual int RunFunction(IUIPanel*, void* pPersistent, void* pNonCopyablePersistentTraits, bool) // 0x208 panorama::CUIEngine::RunFunction(panorama::IUIPanel *,v8::Persistent<v8::Function,v8::NonCopyablePersistentTraits<v8::Function>> *,bool)
    virtual int RunFunction2(); // 0x20C | Not reversed
    virtual void* CreateV8PanelInstance(IUIPanel*); // 0x210 panorama::CUIEngine::CreateV8PanelInstance(panorama::IUIPanel *)
    virtual void* CreateV8PanelStyleInstance( IUIPanelStyle*); // 0x214
    virtual void* CreateV8ObjectInstance( const char*, void*, IUIJSObject*) // 0x218 panorama::CUIEngine::CreateV8ObjectInstance(char const *,void *,panorama::IUIJSObject *)
    virtual void Unknown105(); // 0x21C
    virtual int  InitiateAsyncJSONWebAPIRequest(int, int /* CUtlString*/, IUIPanel*, void*, CJSONWebAPIParams*, unsigned int); // 0x220 panorama::CUIEngine::InitiateAsyncJSONWebAPIRequest(EHTTPMethod,CUtlString,panorama::IUIPanel *,void *,panorama::CJSONWebAPIParams *,uint)
    virtual void InitiateAsyncJSONWebAPIRequest2(int, void*, void*, IUIPanel*, void*, CJSONWebAPIParams*, unsigned int) // 0x224 panorama::CUIEngine::InitiateAsyncJSONWebAPIRequest(EHTTPMethod,CUtlString,CUtlDelegate<void ()(ulong long,KeyValues *,void *)>,void *,panorama::CJSONWebAPIParams *,uint)
    virtual void CancelAsyncJSONWebAPIRequest( unsigned int); // 0x228
    virtual void Unknown106(); // 0x22C
    virtual void Unknown107(); // 0x230
    virtual void Unknown108(); // 0x234
    virtual void Unknown109(); // 0x238
    virtual void Unknown110(); // 0x23C
    virtual void Unknown111(); // 0x240
    virtual void Unknown112(); // 0x244
    virtual void Unknown113(); // 0x248
    virtual void Unknown114(); // 0x24C
    virtual void Unknown115(); // 0x250
    virtual void Unknown116(); // 0x254
    virtual void Unknown117(); // 0x258
    virtual int RegisterScheduledDelegate(); // 0x25C
    virtual void Unknown118(); // 0x260
    virtual void Unknown119(); // 0x264
    virtual void Unknown120(); // 0x268
    virtual void Unknown121(); // 0x26C
    virtual void Unknown122(); // 0x270
    virtual void Unknown123(); // 0x274
    virtual bool InvokeJSGenericCallback(int, int, void*, void*) // 0x278 panorama::CUIEngine::InvokeJSGenericCallback(int,int,v8::Handle<v8::Value> *,v8::Handle<v8::Value> *)
    virtual void Unknown124(); // 0x27C
    virtual void Unknown125(); // 0x280
    virtual void Unknown126(); // 0x284
    virtual void Unknown127(); // 0x288
    virtual void Unknown128(); // 0x28C
    virtual void StartRegisterJSScope(const char*, const char*); // 0x290
    virtual void EndRegisterJSScope(); // 0x294
    virtual void RegisterNewJSFunction(); // 0x298
    virtual void RegisterParamsJSFunction(); // 0x29C
    virtual void Unknown133(); // 0x2A0
    virtual void Unknown134(); // 0x2A4
    virtual void Unknown135(); // 0x2A8
    virtual void Unknown136(); // 0x2AC
    virtual void Unknown137(); // 0x2B0
    virtual void Unknown138(); // 0x2B4
    virtual void Unknown139(); // 0x2B8
    virtual void Unknown140(); // 0x2BC
    virtual void Unknown141(); // 0x2C0
    virtual void PureVirtual11(); // 0x2C4
    virtual void PureVirtual12(); // 0x2C8
    virtual void Unknown142(); // 0x2CC
    virtual void Unknown143(); // 0x2D0
    virtual void Unknown144(); // 0x2D4
    virtual void Unknown145(); // 0x2D8
}