#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "BMFMapView.h"
#import "BMFAnnotation.h"
#import "BMFOfflineMap.h"
#import "BMF3DModelOverlay.h"
#import "BMFArcline.h"
#import "BMFCircle.h"
#import "BMFGeodesicLine.h"
#import "BMFGradientLine.h"
#import "BMFGroundOverlay.h"
#import "BMFMultiPointOverlay.h"
#import "BMFOverlay.h"
#import "BMFPolygon.h"
#import "BMFPolyline.h"
#import "BMFPrismOverlay.h"
#import "BMFTraceOverlay.h"
#import "BMFAsyncTileLayer.h"
#import "BMFSyncTileLayer.h"
#import "BMFURLTileLayer.h"
#import "BMFFileManager.h"
#import "FlutterBmfmapPlugin.h"
#import "BMFEdgeInsets.h"
#import "BMFIndoorMapInfoModel.h"
#import "BMFMapPoiModel.h"
#import "BMFMapStatusModel.h"
#import "BMFUserLocationModel.h"
#import "BMFAnnotationModel.h"
#import "BMFOLSearchRecordModel.h"
#import "BMF3DModelOverlayModel.h"
#import "BMFArclineModel.h"
#import "BMFCircleModel.h"
#import "BMFGeodesicLineModel.h"
#import "BMFGradientLineModel.h"
#import "BMFGroundModel.h"
#import "BMFHeatMapModel.h"
#import "BMFHollowShapeModel.h"
#import "BMFMultiPointOverlayModel.h"
#import "BMFPolygonModel.h"
#import "BMFPolylineModel.h"
#import "BMFPrismOverlayModel.h"
#import "BMFTileModel.h"
#import "BMFTraceOverlayModel.h"
#import "BMFAnnotationMethodConst.h"
#import "BMFHeatMapConst.h"
#import "BMFMapCallBackConst.h"
#import "BMFMapMethodConst.h"
#import "BMFOfflineMapMethodConst.h"
#import "BMFOverlayMethodConst.h"
#import "BMFProjectionConst.h"
#import "BMFUserLocationConst.h"
#import "BMFMapViewController.h"
#import "BMFMapViewHandle.h"
#import "BMFMapViewHandles.h"
#import "BMFProjectionHandles.h"
#import "BMFUserLocationHandles.h"
#import "BMFAnnotationHandles.h"
#import "BMFAnnotationViewManager.h"
#import "BMFOfflineMapHandle.h"
#import "BMFOfflineMapHandles.h"
#import "BMFOfflineMapManager.h"
#import "BMFHeatMapHandles.h"
#import "BMFOverlayHandles.h"
#import "BMFOverlayViewManager.h"

FOUNDATION_EXPORT double flutter_baidu_mapapi_mapVersionNumber;
FOUNDATION_EXPORT const unsigned char flutter_baidu_mapapi_mapVersionString[];

