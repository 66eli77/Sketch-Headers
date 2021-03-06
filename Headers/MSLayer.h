//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSLayer.h"

#import "BCOutlineViewNode.h"
#import "MSLayer.h"
#import "MSLayerContainment.h"
#import "MSLayerManipulation.h"
#import "MSRectDelegate.h"
#import "NSCopying.h"

@class MSAbsoluteRect, NSDictionary, NSMenu, NSObject<NSCopying><NSCoding>, NSString;

@interface MSLayer : _MSLayer <BCOutlineViewNode, MSLayerContainment, MSLayerManipulation, MSLayer, NSCopying, MSRectDelegate>
{
    long long skipDrawingSelectionCounter;
    BOOL _isSelected;
    BOOL _isHovering;
    MSAbsoluteRect *_absoluteRect;
    unsigned long long _traits;
    struct CGRect _frameInArtboard;
}

+ (void)makeLayerNamesUnique:(id)arg1 withOptions:(long long)arg2;
+ (id)layersSeparatedByGroups:(id)arg1;
+ (id)defaultName;
+ (unsigned long long)traits;
+ (Class)overrideViewControllerClass;
+ (id)keyPathsForValuesAffectingUserVisibleRotation;
+ (void)alignLayers:(id)arg1 toValue:(double)arg2 forKey:(id)arg3;
+ (struct CGRect)alignmentRectForLayers:(id)arg1;
+ (void)alignLayers:(id)arg1 withMode:(unsigned long long)arg2 toKey:(id)arg3 pixelFit:(BOOL)arg4;
+ (id)keyPathsForValuesAffectingBadgeMap;
+ (id)keyPathsForValuesAffectingPreviewImages;
+ (id)keyPathsForValuesAffectingNodeName;
+ (id)keyPathsForValuesAffectingHasHighlight;
@property(nonatomic) unsigned long long traits; // @synthesize traits=_traits;
@property(retain, nonatomic) MSAbsoluteRect *absoluteRect; // @synthesize absoluteRect=_absoluteRect;
@property(nonatomic) struct CGRect frameInArtboard; // @synthesize frameInArtboard=_frameInArtboard;
@property(nonatomic) BOOL isHovering; // @synthesize isHovering=_isHovering;
- (void).cxx_destruct;
- (id)allSymbolInstancesInChildren;
- (BOOL)canInsertIntoGroup:(id)arg1;
- (BOOL)canResize;
- (BOOL)canScale;
- (BOOL)canRotate;
@property(readonly, nonatomic) BOOL isLayerExportable;
- (void)assignWithOriginalLinkedStyleIfNecessary;
- (id)layerWithID:(id)arg1;
- (void)setHeightRespectingProportions:(double)arg1;
- (void)setWidthRespectingProportions:(double)arg1;
@property(nonatomic) struct CGPoint center;
@property(nonatomic) struct CGPoint origin;
@property(nonatomic) struct CGRect rect;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setNilValueForKey:(id)arg1;
- (BOOL)canBeTransformed;
- (void)multiplyBy:(double)arg1;
- (void)concatAncestorsAndSelfTransforms;
- (id)transform;
@property(readonly, nonatomic) struct CGAffineTransform CGTransformForFrame;
- (id)transformForRect:(struct CGRect)arg1;
@property(nonatomic) struct _CHTransformStruct transformStruct;
- (struct CGRect)convertRectToAbsoluteCoordinates:(struct CGRect)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromLayer:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toLayer:(id)arg2;
- (id)children;
- (id)ancestorsAndSelfTransforms;
- (id)ancestorsAndSelf;
- (id)ancestors;
- (id)parentSymbol;
- (id)parentArtboard;
- (id)parentRoot;
- (id)parentPage;
- (BOOL)isOpen;
- (void)removeFromParent;
- (void)rectDidChange:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)moveInLayerTreeInBlock:(CDUnknownBlockType)arg1;
- (void)calculateProportions;
- (BOOL)isRectIntegral;
- (void)makeRectIntegral;
- (void)makeOriginIntegral;
- (void)setAbsolutePosition:(struct CGPoint)arg1;
- (struct CGPoint)absolutePosition;
- (BOOL)closePath;
- (void)hideSelectionTemporarily;
- (id)bezierPathWithTransforms;
- (id)bezierPath;
- (void)refreshOverlayInAbsoluteRect:(struct CGRect)arg1;
- (struct CGRect)transformRectToParentCoordinates:(struct CGRect)arg1;
@property(readonly, nonatomic) BOOL hasTransforms;
- (void)refreshOverlayWithAbsoluteMargins:(struct CGSize)arg1;
- (void)refreshOverlay;
@property(readonly, nonatomic) struct BCEdgePaddings influenceRectEdgePaddingsThatCascadeToContainedLayers;
- (struct CGRect)absoluteInfluenceRect;
- (struct CGRect)overlayInfluenceRectForBounds;
- (struct CGRect)influenceRectForBounds;
- (struct CGRect)overlayInfluenceRectForFrame;
- (struct CGRect)influenceRectForFrame;
- (void)object:(id)arg1 didChangeProperty:(id)arg2;
- (id)layerSuitableForInsertingIntoGroup:(id)arg1;
- (void)layerDidResizeFromRect:(struct CGRect)arg1 corner:(long long)arg2;
- (void)parentDidResizeLayerToRect:(struct CGRect)arg1;
- (BOOL)hasSelectionHandleAtPoint:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (long long)selectionHandleAtPoint:(struct CGPoint)arg1 zoom:(double)arg2;
- (BOOL)isTooSmallForPreciseHitTestingAtZoomValue:(double)arg1;
- (BOOL)containsPoint:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (BOOL)isLayerAtIndex:(unsigned long long)arg1 maskedAtPoint:(struct CGPoint)arg2 zoomValue:(double)arg3;
- (id)selectionHitTest:(struct CGPoint)arg1 options:(unsigned long long)arg2 zoomValue:(double)arg3 resultIndex:(unsigned long long *)arg4;
- (id)selectableLayersWithOptions:(unsigned long long)arg1;
- (BOOL)isOpenForSelectionWithOptions:(unsigned long long)arg1;
- (BOOL)isSelectableOnCanvasWithOptions:(unsigned long long)arg1;
@property(readonly, nonatomic) BOOL isExpanded;
@property(nonatomic) BOOL isSelected;
- (void)select:(BOOL)arg1 byExpandingSelection:(BOOL)arg2 showSelection:(BOOL)arg3;
- (void)select:(BOOL)arg1 byExpandingSelection:(BOOL)arg2;
- (BOOL)containsSelectedItem;
- (void)moveWithGuideOffset:(struct CGSize)arg1;
- (BOOL)flattenIfNecessary;
- (void)layerFinishedResize;
- (void)layerWillResize;
@property(readonly, nonatomic) struct CGRect bounds;
- (void)setName:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
@property(nonatomic) double proportions;
@property(nonatomic) BOOL constrainProportions;
- (unsigned long long)selectionCornerMaskWithZoomValue:(double)arg1;
- (struct CGRect)frameForTransforms;
- (BOOL)hasActiveBackgroundBlur;
- (id)layersSharingStyle:(id)arg1;
- (id)rootForNameUniquing;
- (id)namesOfAllLayersInContainer:(id)arg1;
- (void)makeNameUniqueInRoot:(id)arg1 withOptions:(long long)arg2;
- (void)makeNameUniqueWithOptions:(long long)arg1;
- (id)objectIDsForSelfAncestorsAndChildren;
- (BOOL)isLine;
- (BOOL)isSharedObject;
- (id)usedStyle;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)objectDidInit;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)performInitEmptyObject;
- (BOOL)canBeHidden;
- (long long)cornerRectType;
- (BOOL)canFlatten;
- (BOOL)shouldDrawSelection;
- (BOOL)canSmartRotate;
- (id)duplicate;
- (BOOL)shouldFlattenAfterRotate;
- (id)handlerName;
- (BOOL)handleDoubleClick;
- (void)toggleClosePath;
- (void)layerDidResizeFromInspector;
@property(nonatomic) double userVisibleRotation;
- (id)inspectorViewControllers;
- (id)inspectorViewControllerNames;
- (BOOL)canBeHovered;
- (id)bezierPathForHover;
- (id)colorForHover;
- (void)drawHoverWithZoom:(double)arg1;
- (void)writeBitmapImageToFile:(id)arg1;
- (id)parentForInsertingLayers;
- (id)displayName;
- (void)changeColor:(id)arg1;
- (BOOL)supportsInnerOuterBorders;
- (BOOL)canSplitPaths;
- (id)contextualMenuPreviewImage;
- (id)cachedOrEmptyImageWithName:(id)arg1;
- (id)unselectedPreviewImage;
- (id)selectedPreviewImage;
- (BOOL)canConvertToOutlines;
- (id)layersByConvertingToOutlines;
- (id)snapItemForDrawing;
- (id)snapLines;
- (Class)layerSnapperObjectClass;
- (BOOL)canSnapSizeToLayer:(id)arg1;
- (BOOL)canSnapToLayer:(id)arg1;
- (BOOL)booleanOperationCanBeReset;
@property(readonly, nonatomic) BOOL isExportableViaDragAndDrop;
- (id)cloneDictionaryReplacingImages:(id)arg1;
- (void)addMastersForInstancesToDocument:(id)arg1;
- (void)copyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (void)moveToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)isMasked;
- (void)handleBadgeClickWithAltState:(BOOL)arg1;
@property(readonly, nonatomic) BOOL hasSliceIcon;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)canMoveToLayer:(id)arg1 beforeLayer:(id)arg2;
@property(readonly, nonatomic) BOOL selectedInLayerList;
@property(readonly, nonatomic) BOOL expandableInLayerList;
- (BOOL)validateNodeName:(id *)arg1 error:(id *)arg2;
@property(retain, nonatomic) NSString *nodeName;
@property(readonly, nonatomic) unsigned long long selectedBadgeMenuItem;
@property(readonly, nonatomic) NSMenu *badgeMenu;
@property(readonly, nonatomic) NSDictionary *previewImages;
@property(readonly, nonatomic) NSDictionary *badgeMap;
@property(readonly, nonatomic) BOOL hasHighlight;
@property(readonly, nonatomic) BOOL isActive;
@property(readonly, nonatomic) unsigned long long filterType;
@property(readonly, nonatomic) unsigned long long displayType;
- (id)lastLayer;
- (id)firstLayer;
- (unsigned long long)indexOfLayer:(id)arg1;
- (id)layerAtIndex:(unsigned long long)arg1;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)enumerateLayersWithOptions:(unsigned long long)arg1 classFilter:(Class)arg2 block:(CDUnknownBlockType)arg3;
- (void)enumerateLayers:(CDUnknownBlockType)arg1;
- (BOOL)containsMultipleLayers;
- (BOOL)containsOneLayer;
- (BOOL)containsLayers;
- (BOOL)containsNoOrOneLayers;
- (BOOL)canBeContainedByDocument;
- (BOOL)canBeContainedByGroup;
- (BOOL)canContainLayer:(id)arg1;
- (unsigned long long)containedLayersCount;
- (id)containedLayers;
- (void)followMaskChainForLayerAtIndex:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)closestClippingLayer;
- (id)candidatesForMasking;
- (BOOL)isPartOfClippingMask;
- (BOOL)hasClippingMask;
- (void)applyOverrides:(id)arg1;
- (id)parentRootForAbsoluteRect;
- (void)removeAllLayers;
- (void)removeLayerAtIndex:(unsigned long long)arg1;
- (void)removeLayer:(id)arg1;
- (void)insertLayers:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertLayers:(id)arg1 afterLayer:(id)arg2;
- (void)insertLayers:(id)arg1 beforeLayer:(id)arg2;
- (void)addLayers:(id)arg1;
- (void)replaceAllLayersWithLayers:(id)arg1;
- (id)CSSStringFromFloat:(double)arg1;
- (id)CSSAttributes;
- (id)CSSRotationString;
- (id)CSSAttributeString;
- (long long)layoutDirection;
- (id)setupWithLayerBuilderDictionary:(id)arg1;
- (void)configureBackgroundOfRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <MSExportOptions> exportOptionsGeneric; // @dynamic exportOptionsGeneric;
@property(readonly, nonatomic) id <MSRect> frameGeneric; // @dynamic frameGeneric;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) BOOL isFlippedHorizontal;
@property(readonly, nonatomic) BOOL isFlippedVertical;
@property(readonly, nonatomic) BOOL isLocked;
@property(readonly, nonatomic) BOOL isVisible;
@property(readonly, nonatomic) long long layerListExpandedType;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, nonatomic) BOOL nameIsFixed;
@property(readonly, copy, nonatomic) NSObject<NSCopying><NSCoding> *objectID;
@property(readonly, nonatomic) NSString *originalObjectID;
@property(readonly, nonatomic) unsigned long long resizingType;
@property(readonly, nonatomic) double rotation;
@property(readonly, nonatomic) BOOL shouldBreakMaskChain;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;

@end

