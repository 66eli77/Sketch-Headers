#import "MSModelObject.h"

@class MSArray;

@interface _MSSharedObjectContainer : MSModelObject
{
    MSArray *_objects;
}

@property(retain, nonatomic) MSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (BOOL)isEqualForSync:(id)arg1 asPartOfSymbol:(id)arg2;
- (void)syncPropertiesMatchingReference:(id)arg1 withObject:(id)arg2;
- (void)copyPropertiesToObjectCopy:(id)arg1;
- (void)setAsParentOnChildren;
- (void)decodePropertiesWithCoder:(id)arg1;
- (void)encodePropertiesWithCoder:(id)arg1;
- (void)fillInEmptyObjects;
- (BOOL)hasDefaultValues;
- (void)initEmptyObject;
- (void)setPrimitiveObjects:(id)arg1;
- (id)primitiveObjects;
- (void)enumerateChildProperties:(CDUnknownBlockType)arg1;
- (void)enumerateProperties:(CDUnknownBlockType)arg1;

@end
