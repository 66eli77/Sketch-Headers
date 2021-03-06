//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSStyledLayer.h"

@class MSImageData;

@interface _MSBitmapLayer : MSStyledLayer
{
    struct CGRect _clippingMask;
    BOOL _fillReplacesImage;
    MSImageData *_image;
    struct CGRect _nineSliceCenterRect;
    struct CGSize _nineSliceScale;
}

+ (BOOL)allowsFaulting;
+ (Class)immutableClass;
- (void).cxx_destruct;
- (void)syncPropertiesFromObject:(id)arg1;
- (BOOL)propertiesAreEqual:(id)arg1;
- (void)copyPropertiesToObject:(id)arg1 options:(unsigned long long)arg2;
- (void)setAsParentOnChildren;
- (void)initializeUnsetObjectPropertiesWithDefaults;
- (BOOL)hasDefaultValues;
- (void)performInitEmptyObject;
- (void)setPrimitiveNineSliceScale:(struct CGSize)arg1;
- (struct CGSize)primitiveNineSliceScale;
- (void)setPrimitiveNineSliceCenterRect:(struct CGRect)arg1;
- (struct CGRect)primitiveNineSliceCenterRect;
- (void)setPrimitiveImage:(id)arg1;
- (id)primitiveImage;
- (void)setPrimitiveFillReplacesImage:(BOOL)arg1;
- (BOOL)primitiveFillReplacesImage;
- (void)setPrimitiveClippingMask:(struct CGRect)arg1;
- (struct CGRect)primitiveClippingMask;
@property(nonatomic) struct CGSize nineSliceScale; // @synthesize nineSliceScale=_nineSliceScale;
@property(nonatomic) struct CGRect nineSliceCenterRect; // @synthesize nineSliceCenterRect=_nineSliceCenterRect;
@property(retain, nonatomic) MSImageData *image; // @synthesize image=_image;
@property(nonatomic) BOOL fillReplacesImage; // @synthesize fillReplacesImage=_fillReplacesImage;
@property(nonatomic) struct CGRect clippingMask; // @synthesize clippingMask=_clippingMask;
- (void)performInitWithImmutableModelObject:(id)arg1;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end

