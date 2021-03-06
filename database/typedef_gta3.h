/*
   This file has been generated by IDA.
   It contains local type definitions from
   the type library 'gta3_1.0(kenking)'
*/

typedef struct RwStream RwStream;
typedef struct RwCamera RwCamera;
typedef struct RwObjectHasFrame RwObjectHasFrame;
typedef struct RtAnimAnimation RtAnimAnimation;
typedef struct RpAtomic RpAtomic;
typedef struct RwFrame RwFrame;
typedef struct RpGeometry RpGeometry;
typedef struct RwObject RwObject;
typedef struct RwTexture RwTexture;
typedef struct RwTexDictionary RwTexDictionary;
typedef struct RpLight RpLight;
typedef struct RtAnimInterpolator RtAnimInterpolator;
typedef struct RwV3d RwV3d;
typedef struct RtQuat RtQuat;
typedef struct RpWorldSector RpWorldSector;
typedef struct RpMesh RpMesh;
typedef struct RpMaterial RpMaterial;
typedef struct RxPipelineNode RxPipelineNode;
typedef struct RxPipeline RxPipeline;
typedef struct RxCamSpace3DVertex RxCamSpace3DVertex;
typedef struct RxObjSpace3DVertex RxObjSpace3DVertex;
typedef struct RwImage RwImage;
typedef struct RwD3D8Vertex RwD3D8Vertex;
typedef struct RwMatrix RwMatrix;
typedef struct RpTriStripMesh RpTriStripMesh;
typedef struct RwRaster RwRaster;
typedef struct RxD3D8InstanceData RxD3D8InstanceData;
typedef struct RwResEntry RwResEntry;
typedef struct RwRGBA RwRGBA;
typedef struct RpBuildMesh RpBuildMesh;
typedef struct RpClumpChunkInfo RpClumpChunkInfo;
typedef struct RpClumpChunkInfo33000 RpClumpChunkInfo33000;
typedef struct RpPlaneSectorChunkInfo RpPlaneSectorChunkInfo;
typedef struct RwFreeList RwFreeList;
typedef struct RpTriStripPolygon RpTriStripPolygon;
typedef struct RpWorldChunkInfoSector RpWorldChunkInfoSector;
typedef struct RxNodeDefinition RxNodeDefinition;
typedef struct RxPipelineNodeParam RxPipelineNodeParam;
typedef enum RwRenderState RwRenderState;
typedef enum RsEventStatus RsEventStatus;
typedef enum RwDebugType RwDebugType;
typedef enum RsEvent RsEvent;
typedef enum RwPrimitiveType RwPrimitiveType;
typedef unsigned __int32 DWORD;
typedef _FILETIME FILETIME;
typedef unsigned __int8 CHAR;
typedef unsigned __int16 WORD;
typedef __int32 LONG;
typedef _LARGE_INTEGER LARGE_INTEGER;
typedef __int64 LONGLONG;
typedef _GUID GUID;
typedef GUID IID;
typedef unsigned __int32 ULONG_PTR;
typedef ULONG_PTR SIZE_T;
typedef tagWINDOWPLACEMENT WINDOWPLACEMENT;
typedef unsigned int UINT;
typedef tagPOINT POINT;
typedef tagRECT RECT;
typedef HWND__ *HWND;
typedef unsigned int UINT_PTR;
typedef UINT_PTR WPARAM;
typedef __int32 LONG_PTR;
typedef LONG_PTR LPARAM;
typedef _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;
typedef void *HANDLE;
typedef _LIST_ENTRY LIST_ENTRY;
typedef CHAR *LPSTR;
typedef unsigned __int8 BYTE;
typedef BYTE *LPBYTE;
typedef unsigned __int16 wchar_t;
typedef wchar_t WCHAR;
typedef _SYSTEMTIME SYSTEMTIME;
typedef unsigned __int8 RwUInt8;
typedef __int32 RwInt32;
typedef __int16 RwInt16;
typedef RwObjectHasFrame *(__cdecl *RwObjectHasFrameSyncFunction)(RwObjectHasFrame *object);
typedef RwCamera *(__cdecl *RwCameraBeginUpdateFunc)(RwCamera *camera);
typedef RwCamera *(__cdecl *RwCameraEndUpdateFunc)(RwCamera *camera);
typedef float RwReal;
typedef unsigned __int16 RwUInt16;
typedef void (__cdecl *RtAnimKeyFrameApplyCallBack)(void *result, void *voidIFrame);
typedef void (__cdecl *RtAnimKeyFrameBlendCallBack)(void *voidOut, void *voidIn1, void *voidIn2, RwReal alpha);
typedef void (__cdecl *RtAnimKeyFrameInterpolateCallBack)(void *voidOut, void *voidIn1, void *voidIn2, RwReal time);
typedef void (__cdecl *RtAnimKeyFrameAddCallBack)(void *voidOut, void *voidIn1, void *voidIn2);
typedef void (__cdecl *RtAnimKeyFrameMulRecipCallBack)(void *voidFrame, void *voidStart);
typedef RtAnimAnimation *(__cdecl *RtAnimKeyFrameStreamReadCallBack)(RwStream *stream, RtAnimAnimation *animation);
typedef RwInt32 RwBool;
typedef RwBool (__cdecl *RtAnimKeyFrameStreamWriteCallBack)(RtAnimAnimation *animation, RwStream *stream);
typedef RwInt32 (__cdecl *RtAnimKeyFrameStreamGetSizeCallBack)(RtAnimAnimation *animation);
typedef unsigned __int32 RwUInt32;
typedef char RwChar;
typedef RpAtomic *(__cdecl *RpAtomicCallBackRender)(RpAtomic *atomic);
typedef RpWorldSector *(__cdecl *RpWorldSectorCallBackRender)(RpWorldSector *worldSector);
typedef void *LPVOID;
typedef RpClump *(__cdecl *RpClumpCallBack)(RpClump *clump, void *data);
typedef RwBool (__cdecl *RwSystemFunc)(RwInt32 nOption, void *pOut, void *pInOut, RwInt32 nIn);
typedef RwBool (__cdecl *RwRenderStateSetFunction)(RwRenderState nState, void *pParam);
typedef RwBool (__cdecl *RwRenderStateGetFunction)(RwRenderState nState, void *pParam);
typedef RwD3D8Vertex RwIm2DVertex;
typedef RwBool (__cdecl *RwIm2DRenderLineFunction)(RwIm2DVertex *vertices, RwInt32 numVertices, RwInt32 vert1, RwInt32 vert2);
typedef RwBool (__cdecl *RwIm2DRenderTriangleFunction)(RwIm2DVertex *vertices, RwInt32 numVertices, RwInt32 vert1, RwInt32 vert2, RwInt32 vert3);
typedef RwBool (__cdecl *RwIm2DRenderPrimitiveFunction)(RwPrimitiveType primType, RwIm2DVertex *vertices, RwInt32 numVertices);
typedef RwUInt16 RxVertexIndex;
typedef RxVertexIndex RwImVertexIndex;
typedef RwBool (__cdecl *RwIm2DRenderIndexedPrimitiveFunction)(RwPrimitiveType primType, RwIm2DVertex *vertices, RwInt32 numVertices, RwImVertexIndex *indices, RwInt32 numIndices);
typedef RwBool (__cdecl *RwIm3DRenderLineFunction)(RwInt32 vert1, RwInt32 vert2);
typedef RwBool (__cdecl *RwIm3DRenderTriangleFunction)(RwInt32 vert1, RwInt32 vert2, RwInt32 vert3);
typedef RwBool (__cdecl *RwIm3DRenderPrimitiveFunction)(RwPrimitiveType primType);
typedef unsigned int (__cdecl *RwIm3DRenderIndexedPrimitiveFunction)(RwPrimitiveType primtype, unsigned __int16 *indices, int numIndices);
typedef RwBool (__cdecl *RwStandardFunc)(void *pOut, void *pInOut, RwInt32 nI);
typedef RwBool (__cdecl *rwFnFexist)(const RwChar *name);
typedef void *(__cdecl *rwFnFopen)(const char *name, const char *mode);
typedef int (__cdecl *rwFnFclose)(void *fptr);
typedef size_t (__cdecl *rwFnFread)(void *addr, size_t size, size_t count, void *fptr);
typedef size_t (__cdecl *rwFnFwrite)(const void *addr, size_t size, size_t count, void *fptr);
typedef RwChar *(__cdecl *rwFnFgets)(RwChar *buffer, int maxLen, void *fptr);
typedef int (__cdecl *rwFnFputs)(const char *buffer, void *fptr);
typedef int (__cdecl *rwFnFeof)(void *fptr);
typedef int (__cdecl *rwFnFseek)(void *fptr, __int32 offset, int origin);
typedef int (__cdecl *rwFnFflush)(void *fptr);
typedef int (__cdecl *rwFnFtell)(void *fptr);
typedef int (*vecSprintfFunc)(char *buffer, const char *format, ...);
typedef int (__cdecl *vecVsprintfFunc)(char *buffer, const char *format, va_list argptr);
typedef RwChar *(__cdecl *vecStrcpyFunc)(RwChar *dest, const RwChar *srce);
typedef RwChar *(__cdecl *vecStrncpyFunc)(RwChar *dest, const RwChar *srce, size_t size);
typedef RwChar *(__cdecl *vecStrcatFunc)(RwChar *dest, const RwChar *srce);
typedef RwChar *(__cdecl *vecStrncatFunc)(RwChar *dest, const RwChar *srce, size_t size);
typedef RwChar *(__cdecl *vecStrrchrFunc)(const RwChar *string, int findThis);
typedef RwChar *(__cdecl *vecStrchrFunc)(const RwChar *string, int findThis);
typedef RwChar *(__cdecl *vecStrstrFunc)(const RwChar *string, const RwChar *findThis);
typedef int (__cdecl *vecStrcmpFunc)(const char *string1, const char *string2);
typedef int (__cdecl *vecStricmpFunc)(const char *string1, const char *string2);
typedef size_t (__cdecl *vecStrlenFunc)(const char *string);
typedef RwChar *(__cdecl *vecStruprFunc)(RwChar *string);
typedef RwChar *(__cdecl *vecStrlwrFunc)(RwChar *string);
typedef RwChar *(__cdecl *vecStrtokFunc)(RwChar *string, const RwChar *delimit);
typedef int (*vecSscanfFunc)(const char *buffer, const char *format, ...);
typedef void *(__cdecl *RwMemoryAllocFn)(RwFreeList *fl);
typedef RwFreeList *(__cdecl *RwMemoryFreeFn)(RwFreeList *fl, void *pData);
typedef void (__cdecl *RwFreeListCallBack)(void *pMem, void *pData);
typedef RsEventStatus (__cdecl *RsInputEventHandler)(RsEvent event, void *param);
typedef void (__cdecl *RwResEntryDestroyNotify)(RwResEntry *resEntry);
typedef HINSTANCE__ *HINSTANCE;
typedef RwBool (__cdecl *rwCustomStreamFnClose)(void *data);
typedef RwUInt32 (__cdecl *rwCustomStreamFnRead)(void *data, void *buffer, RwUInt32 length);
typedef RwBool (__cdecl *rwCustomStreamFnWrite)(void *data, const void *buffer, RwUInt32 length);
typedef RwBool (__cdecl *rwCustomStreamFnSkip)(void *data, RwUInt32 offset);
typedef _iobuf FILE;
typedef RwStream *(__cdecl *RwPluginDataChunkReadCallBack)(RwStream *stream, RwInt32 binaryLength, void *object, RwInt32 offsetInObject, RwInt32 sizeInObject);
typedef RwStream *(__cdecl *RwPluginDataChunkWriteCallBack)(RwStream *stream, RwInt32 binaryLength, const void *object, RwInt32 offsetInObject, RwInt32 sizeInObject);
typedef RwInt32 (__cdecl *RwPluginDataChunkGetSizeCallBack)(const void *object, RwInt32 offsetInObject, RwInt32 sizeInObject);
typedef RwBool (__cdecl *RwPluginDataChunkAlwaysCallBack)(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject);
typedef RwBool (__cdecl *RwPluginDataChunkRightsCallBack)(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject, RwUInt32 extraData);
typedef void *(__cdecl *RwPluginObjectConstructor)(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject);
typedef void *(__cdecl *RwPluginObjectDestructor)(void *object, RwInt32 offsetInObject, RwInt32 sizeInObject);
typedef void *(__cdecl *RwPluginObjectCopy)(void *dstObject, const void *srcObject, RwInt32 offsetInObject, RwInt32 sizeInObject);
typedef void *(__cdecl *RwPluginErrorStrCallBack)(void *);
typedef RpLight *(__cdecl *RpLightCallBack)(RpLight *light, void *data);
typedef RwCamera *(__cdecl *RwCameraCallBack)(RwCamera *camera, void *data);
typedef RpAtomic *(__cdecl *RpAtomicCallBack)(RpAtomic *atomic, void *data);
typedef RwFrame *(__cdecl *RwFrameCallBack)(RwFrame *frame, void *data);
typedef RwObject *(__cdecl *RwObjectCallBack)(RwObject *object, void *data);
typedef RtQuat RpQuat;
typedef RtAnimInterpolator *(__cdecl *RtAnimCallBack)(RtAnimInterpolator *animInstance, void *data);
typedef RpMaterial *(__cdecl *RpMaterialCallBack)(RpMaterial *material, void *data);
typedef RpMesh *(__cdecl *RpMeshCallBack)(RpMesh *mesh, RpMeshHeader *meshHeader, void *pData);
typedef __int8 RwInt8;
typedef RpWorldSector *(__cdecl *RpWorldSectorCallBack)(RpWorldSector *worldSector, void *data);
typedef RpMeshHeader *(__cdecl *RpTriStripMeshCallBack)(RpBuildMesh *buildMesh, void *data);
typedef RpTriStripMesh *(__cdecl *RpTriStripMeshStripCallBack)(RpTriStripMesh *mesh, void *data);
typedef RwUInt32 (__cdecl *RpTriStripCostCallBack)(RpTriStripPolygon *startPolygon, RwUInt32 testFrame, void *data);
typedef RpGeometry *(__cdecl *RpGeometryCallBack)(RpGeometry *geometry, void *data);
typedef void (__cdecl *RpGeometrySortByMaterialCallBack)(const RpGeometry *oldGeom, RpGeometry *newGeom, RwUInt16 *remapTable, RwUInt16 numberOfEntries);
typedef struct RpClumpChunkInfo _rpClump;
typedef struct RpClumpChunkInfo33000 _rpClump33000;
typedef RwBool (__cdecl *RxD3D8AllInOneInstanceCallBack)(void *object, RxD3D8InstanceData *instancedData, RwBool reinstance);
typedef RwBool (__cdecl *RxD3D8AllInOneReinstanceCallBack)(void *object, RwResEntry *resEntry, const RpMeshHeader *meshHeader, RxD3D8AllInOneInstanceCallBack instanceCallback);
typedef void (__cdecl *RxD3D8AllInOneLightingCallBack)(void *object);
typedef void (__cdecl *RxD3D8AllInOneRenderCallBack)(RwResEntry *repEntry, void *object, RwUInt8 type, RwUInt32 flags);
typedef struct RpWorldChunkInfoSector _rpWorldSector;
typedef struct RpPlaneSectorChunkInfo _rpPlaneSector;
typedef struct RpWorldChunkInfo _rpWorld;
typedef RwBool (__cdecl *RxNodeBodyFn)(RxPipelineNode *self, const RxPipelineNodeParam *params);
typedef RwBool (__cdecl *RxNodeInitFn)(RxNodeDefinition *self);
typedef void (__cdecl *RxNodeTermFn)(RxNodeDefinition *self);
typedef RwBool (__cdecl *RxPipelineNodeInitFn)(RxPipelineNode *self);
typedef void (__cdecl *RxPipelineNodeTermFn)(RxPipelineNode *self);
typedef RwBool (__cdecl *RxPipelineNodeConfigFn)(RxPipelineNode *self, RxPipeline *pipeline);
typedef RwUInt32 (__cdecl *RxConfigMsgHandlerFn)(RxPipelineNode *self, RwUInt32 msg, RwUInt32 intparam, void *ptrparam);
typedef RxPipelineNode *(__cdecl *RxPipelineNodeOutputCallBack)(RxPipelineNode *node, RxPipelineNode *outputnode, void *callbackdata);
typedef RwUInt32 *RxNodeOutput;
typedef RxPipelineNode *RxNodeInput;
typedef RxPipeline RxLockedPipe;
typedef RxObjSpace3DVertex RxObjSpace3DLitVertex;
typedef RxObjSpace3DLitVertex RwIm3DVertex;
typedef RwIm2DVertex RxScrSpace2DVertex;
typedef RwImage *(__cdecl *RwImageCallBackRead)(const RwChar *imageName);
typedef RwImage *(__cdecl *RwImageCallBackWrite)(RwImage *image, const RwChar *imageName);
typedef RwTexture *(__cdecl *RwTextureCallBackRead)(const RwChar *name, const RwChar *maskName);
typedef RwTexture *(__cdecl *RwTextureCallBack)(RwTexture *texture, void *pData);
typedef RwTexDictionary *(__cdecl *RwTexDictionaryCallBack)(RwTexDictionary *dict, void *data);
typedef RwRaster *(__cdecl *RwTextureCallBackMipmapGeneration)(RwRaster *raster, RwImage *image);
typedef RwBool (__cdecl *RwTextureCallBackMipmapName)(RwChar *name, RwChar *maskName, RwUInt8 mipLevel, RwInt32 format);
typedef RxCamSpace3DVertex RwCameraVertex;
typedef RwV3d RxCamNorm;
typedef struct rwStreamCamera RwCameraChunkInfo;
typedef __int64 RwInt64;
typedef unsigned __int64 RwUInt64;
typedef __int32 RwFixed;
typedef void (__cdecl *rwMatrixMultFn)(RwMatrix *dstMat, const RwMatrix *matA, const RwMatrix *matB);
typedef RwV3d *(__cdecl *rwVectorMultFn)(RwV3d *pointsOut, const RwV3d *pointsIn, RwInt32 numPoints, const RwMatrix *matrix);
typedef void (__cdecl *RwDebugHandler)(RwDebugType type, const RwChar *string);
typedef tagWNDCLASSA WNDCLASSA;
typedef LONG_PTR LRESULT;
typedef LRESULT (__stdcall *WNDPROC)(HWND, UINT, WPARAM, LPARAM);
typedef HICON__ *HICON;
typedef HICON HCURSOR;
typedef HBRUSH__ *HBRUSH;
typedef const char *LPCSTR;
typedef RwUInt32 (__cdecl *D3D8PixConvertFn)(RwRGBA *colIn);
typedef void (__cdecl *D3D8PixUnconvertFn)(RwRGBA *pixOut, RwUInt32 pixIn);
typedef struct RxPipelineNode RxPipelineNodeInstance;
typedef RwChar *__cdecl rwPathCallBack(RwChar *pathname, void *data);
typedef _D3DTEXTURESTAGESTATETYPE D3DTEXTURESTAGESTATETYPE;
typedef unsigned __int32 OctantMap;
typedef struct IDirect3D8 *LPDIRECT3D8;
typedef struct IDirect3DDevice8 *LPDIRECT3DDEVICE8;
typedef struct IDirect3DSurface8 *LPDIRECT3DSURFACE8;
typedef struct IDirect3DSurface8 *PDIRECT3DSURFACE8;
typedef struct IDirect3DSwapChain8 *LPDIRECT3DSWAPCHAIN8;
typedef struct IDirect3DSwapChain8 *PDIRECT3DSWAPCHAIN8;
typedef LPDIRECT3DSURFACE8 LPSURFACE;
typedef struct IDirect3DTexture8 *LPDIRECT3DTEXTURE8;
typedef struct IDirect3DTexture8 *PDIRECT3DTEXTURE8;
typedef LPDIRECT3DTEXTURE8 LPTEXTURE;
typedef const IID *REFIID;
typedef const GUID *REFGUID;
typedef struct IDirect3DResource8 *LPDIRECT3DRESOURCE8;
typedef struct IDirect3DResource8 *PDIRECT3DRESOURCE8;
typedef struct IDirect3DVertexBuffer8 *LPDIRECT3DVERTEXBUFFER8;
typedef struct IDirect3DVertexBuffer8 *PDIRECT3DVERTEXBUFFER8;
typedef struct IDirect3DVolume8 *LPDIRECT3DVOLUME8;
typedef struct IDirect3DVolume8 *PDIRECT3DVOLUME8;
typedef struct IDirect3DIndexBuffer8 *LPDIRECT3DINDEXBUFFER8;
typedef struct IDirect3DIndexBuffer8 *PDIRECT3DINDEXBUFFER8;
typedef struct IDirect3DBaseTexture8 *LPDIRECT3DBASETEXTURE8;
typedef struct IDirect3DBaseTexture8 *PDIRECT3DBASETEXTURE8;
typedef struct IDirect3DCubeTexture8 *LPDIRECT3DCUBETEXTURE8;
typedef struct IDirect3DCubeTexture8 *PDIRECT3DCUBETEXTURE8;
typedef struct IDirect3DVolumeTexture8 *LPDIRECT3DVOLUMETEXTURE8;
typedef struct IDirect3DVolumeTexture8 *PDIRECT3DVOLUMETEXTURE8;
typedef GUID *LPIID;
typedef RECT LPRECT;
typedef struct DIPROPHEADER *LPDIPROPHEADER;
typedef struct DIDEVCAPS *LPDIDEVCAPS;
typedef struct DIDEVICEOBJECTDATA *LPDIDEVICEOBJECTDATA;
typedef const DIDATAFORMAT *LPCDIDATAFORMAT;
typedef struct DIDEVICEOBJECTINSTANCEA *LPDIDEVICEOBJECTINSTANCEA;
typedef struct DIDEVICEINSTANCEA *LPDIDEVICEINSTANCEA;
typedef const DIEFFECT *LPCDIEFFECT;
typedef struct DIENVELOPE *LPDIENVELOPE;
typedef struct DIEFFECT *LPDIEFFECT;
typedef struct IDirectInputEffect *LPDIRECTINPUTEFFECT;
typedef const DIDEVICEOBJECTINSTANCEA *LPCDIDEVICEOBJECTINSTANCEA;
typedef BOOL (__cdecl *LPDIENUMDEVICEOBJECTSCALLBACKA)(LPCDIDEVICEOBJECTINSTANCEA, LPVOID);
typedef struct DIEFFECTINFOA *LPDIEFFECTINFOA;
typedef const DIEFFECTINFOA *LPCDIEFFECTINFOA;
typedef BOOL (__cdecl *LPDIENUMEFFECTSCALLBACKA)(LPCDIEFFECTINFOA, LPVOID);
typedef BOOL (__cdecl *LPDIENUMCREATEDEFFECTOBJECTSCALLBACK)(LPDIRECTINPUTEFFECT, LPVOID);
typedef struct DIEFFESCAPE *LPDIEFFESCAPE;
typedef const DIDEVICEOBJECTDATA *LPCDIDEVICEOBJECTDATA;
typedef struct DIFILEEFFECT *LPDIFILEEFFECT;
typedef const DIFILEEFFECT *LPCDIFILEEFFECT;
typedef BOOL (__cdecl *LPDIENUMEFFECTSINFILECALLBACK)(LPCDIFILEEFFECT, LPVOID);
typedef struct _DIACTIONA DIACTIONA;
typedef struct _DIACTIONA *LPDIACTIONA;
typedef struct _DIACTIONFORMATA DIACTIONFORMATA;
typedef struct _DIACTIONFORMATA *LPDIACTIONFORMATA;
typedef struct _DIDEVICEIMAGEINFOA DIDEVICEIMAGEINFOA;
typedef struct _DIDEVICEIMAGEINFOA *LPDIDEVICEIMAGEINFOA;
typedef struct _DIDEVICEIMAGEINFOHEADERA DIDEVICEIMAGEINFOHEADERA;
typedef struct _DIDEVICEIMAGEINFOHEADERA *LPDIDEVICEIMAGEINFOHEADERA;
typedef const DIPROPHEADER *LPCDIPROPHEADER;
