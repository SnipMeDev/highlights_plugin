#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class HighlightsHighlightsCompanion, HighlightsHighlightsBuilder, HighlightsCodeStructure, HighlightsPhraseLocation, HighlightsCodeHighlight, HighlightsSyntaxLanguage, HighlightsSyntaxTheme, HighlightsKotlinArray<T>, HighlightsCodeSnapshot, HighlightsHighlights, HighlightsCodeHighlightCompanion, HighlightsBoldHighlightCompanion, HighlightsBoldHighlight, HighlightsCodeStructureCompanion, HighlightsColorHighlightCompanion, HighlightsColorHighlight, HighlightsPhraseLocationCompanion, HighlightsKotlinEnumCompanion, HighlightsKotlinEnum<E>, HighlightsSyntaxLanguageCompanion, HighlightsSyntaxThemeCompanion, HighlightsSyntaxThemes, HighlightsKotlinIntProgressionCompanion, HighlightsKotlinIntIterator, HighlightsKotlinIntProgression, HighlightsKotlinIntRangeCompanion, HighlightsKotlinIntRange, HighlightsKotlinx_serialization_coreSerializersModule, HighlightsKotlinx_serialization_coreSerialKind, HighlightsKotlinNothing;

@protocol HighlightsKotlinx_serialization_coreKSerializer, HighlightsKotlinComparable, HighlightsKotlinIterator, HighlightsKotlinIterable, HighlightsKotlinClosedRange, HighlightsKotlinOpenEndRange, HighlightsKotlinx_serialization_coreEncoder, HighlightsKotlinx_serialization_coreSerialDescriptor, HighlightsKotlinx_serialization_coreSerializationStrategy, HighlightsKotlinx_serialization_coreDecoder, HighlightsKotlinx_serialization_coreDeserializationStrategy, HighlightsKotlinx_serialization_coreCompositeEncoder, HighlightsKotlinAnnotation, HighlightsKotlinx_serialization_coreCompositeDecoder, HighlightsKotlinx_serialization_coreSerializersModuleCollector, HighlightsKotlinKClass, HighlightsKotlinKDeclarationContainer, HighlightsKotlinKAnnotatedElement, HighlightsKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface HighlightsBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface HighlightsBase (HighlightsBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface HighlightsMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface HighlightsMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorHighlightsKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface HighlightsNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end

__attribute__((swift_name("KotlinByte")))
@interface HighlightsByte : HighlightsNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface HighlightsUByte : HighlightsNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface HighlightsShort : HighlightsNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface HighlightsUShort : HighlightsNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface HighlightsInt : HighlightsNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface HighlightsUInt : HighlightsNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface HighlightsLong : HighlightsNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface HighlightsULong : HighlightsNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface HighlightsFloat : HighlightsNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface HighlightsDouble : HighlightsNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface HighlightsBoolean : HighlightsNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Highlights")))
@interface HighlightsHighlights : HighlightsBase
@property (class, readonly, getter=companion) HighlightsHighlightsCompanion *companion __attribute__((swift_name("companion")));
- (HighlightsHighlightsBuilder *)getBuilder __attribute__((swift_name("getBuilder()")));
- (NSString *)getCode __attribute__((swift_name("getCode()")));
- (HighlightsCodeStructure *)getCodeStructure __attribute__((swift_name("getCodeStructure()")));
- (NSArray<HighlightsPhraseLocation *> *)getEmphasis __attribute__((swift_name("getEmphasis()")));
- (NSArray<HighlightsCodeHighlight *> *)getHighlights __attribute__((swift_name("getHighlights()")));
- (HighlightsSyntaxLanguage *)getLanguage __attribute__((swift_name("getLanguage()")));
- (HighlightsSyntaxTheme *)getTheme __attribute__((swift_name("getTheme()")));
- (void)setCodeCode:(NSString *)code __attribute__((swift_name("setCode(code:)")));
- (void)setEmphasisLocations:(HighlightsKotlinArray<HighlightsPhraseLocation *> *)locations __attribute__((swift_name("setEmphasis(locations:)")));
@property (readonly) HighlightsCodeSnapshot * _Nullable snapshot __attribute__((swift_name("snapshot")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Highlights.Builder")))
@interface HighlightsHighlightsBuilder : HighlightsBase
- (instancetype)initWithCode:(NSString *)code language:(HighlightsSyntaxLanguage *)language theme:(HighlightsSyntaxTheme *)theme emphasisLocations:(NSArray<HighlightsPhraseLocation *> *)emphasisLocations __attribute__((swift_name("init(code:language:theme:emphasisLocations:)"))) __attribute__((objc_designated_initializer));
- (HighlightsHighlights *)build __attribute__((swift_name("build()")));
- (HighlightsHighlightsBuilder *)codeCode:(NSString *)code __attribute__((swift_name("code(code:)")));
- (HighlightsHighlightsBuilder *)doCopyCode:(NSString *)code language:(HighlightsSyntaxLanguage *)language theme:(HighlightsSyntaxTheme *)theme emphasisLocations:(NSArray<HighlightsPhraseLocation *> *)emphasisLocations __attribute__((swift_name("doCopy(code:language:theme:emphasisLocations:)")));
- (HighlightsHighlightsBuilder *)emphasisLocations:(HighlightsKotlinArray<HighlightsPhraseLocation *> *)locations __attribute__((swift_name("emphasis(locations:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (HighlightsHighlightsBuilder *)languageLanguage:(HighlightsSyntaxLanguage *)language __attribute__((swift_name("language(language:)")));
- (HighlightsHighlightsBuilder *)themeTheme:(HighlightsSyntaxTheme *)theme __attribute__((swift_name("theme(theme:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *code __attribute__((swift_name("code")));
@property NSArray<HighlightsPhraseLocation *> *emphasisLocations __attribute__((swift_name("emphasisLocations")));
@property HighlightsSyntaxLanguage *language __attribute__((swift_name("language")));
@property HighlightsSyntaxTheme *theme __attribute__((swift_name("theme")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Highlights.Companion")))
@interface HighlightsHighlightsCompanion : HighlightsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HighlightsHighlightsCompanion *shared __attribute__((swift_name("shared")));
- (HighlightsHighlights *)default __attribute__((swift_name("default()")));
- (HighlightsHighlights *)fromBuilderBuilder:(HighlightsHighlightsBuilder *)builder __attribute__((swift_name("fromBuilder(builder:)")));
- (NSArray<HighlightsSyntaxLanguage *> *)languages __attribute__((swift_name("languages()")));
- (NSDictionary<NSString *, HighlightsSyntaxTheme *> *)themesDarkMode:(BOOL)darkMode __attribute__((swift_name("themes(darkMode:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CodeSnapshot")))
@interface HighlightsCodeSnapshot : HighlightsBase
- (instancetype)initWithCode:(NSString *)code structure:(HighlightsCodeStructure *)structure language:(HighlightsSyntaxLanguage *)language __attribute__((swift_name("init(code:structure:language:)"))) __attribute__((objc_designated_initializer));
- (HighlightsCodeSnapshot *)doCopyCode:(NSString *)code structure:(HighlightsCodeStructure *)structure language:(HighlightsSyntaxLanguage *)language __attribute__((swift_name("doCopy(code:structure:language:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *code __attribute__((swift_name("code")));
@property (readonly) HighlightsSyntaxLanguage *language __attribute__((swift_name("language")));
@property (readonly) HighlightsCodeStructure *structure __attribute__((swift_name("structure")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((swift_name("CodeHighlight")))
@interface HighlightsCodeHighlight : HighlightsBase
@property (class, readonly, getter=companion) HighlightsCodeHighlightCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) HighlightsPhraseLocation *location __attribute__((swift_name("location")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoldHighlight")))
@interface HighlightsBoldHighlight : HighlightsCodeHighlight
- (instancetype)initWithLocation:(HighlightsPhraseLocation *)location __attribute__((swift_name("init(location:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HighlightsBoldHighlightCompanion *companion __attribute__((swift_name("companion")));
- (HighlightsBoldHighlight *)doCopyLocation:(HighlightsPhraseLocation *)location __attribute__((swift_name("doCopy(location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HighlightsPhraseLocation *location __attribute__((swift_name("location")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoldHighlight.Companion")))
@interface HighlightsBoldHighlightCompanion : HighlightsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HighlightsBoldHighlightCompanion *shared __attribute__((swift_name("shared")));
- (id<HighlightsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CodeHighlight.Companion")))
@interface HighlightsCodeHighlightCompanion : HighlightsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HighlightsCodeHighlightCompanion *shared __attribute__((swift_name("shared")));
- (id<HighlightsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
- (id<HighlightsKotlinx_serialization_coreKSerializer>)serializerTypeParamsSerializers:(HighlightsKotlinArray<id<HighlightsKotlinx_serialization_coreKSerializer>> *)typeParamsSerializers __attribute__((swift_name("serializer(typeParamsSerializers:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CodeStructure")))
@interface HighlightsCodeStructure : HighlightsBase
- (instancetype)initWithMarks:(NSSet<HighlightsPhraseLocation *> *)marks punctuations:(NSSet<HighlightsPhraseLocation *> *)punctuations keywords:(NSSet<HighlightsPhraseLocation *> *)keywords strings:(NSSet<HighlightsPhraseLocation *> *)strings literals:(NSSet<HighlightsPhraseLocation *> *)literals comments:(NSSet<HighlightsPhraseLocation *> *)comments multilineComments:(NSSet<HighlightsPhraseLocation *> *)multilineComments annotations:(NSSet<HighlightsPhraseLocation *> *)annotations incremental:(BOOL)incremental __attribute__((swift_name("init(marks:punctuations:keywords:strings:literals:comments:multilineComments:annotations:incremental:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HighlightsCodeStructureCompanion *companion __attribute__((swift_name("companion")));
- (HighlightsCodeStructure *)doCopyMarks:(NSSet<HighlightsPhraseLocation *> *)marks punctuations:(NSSet<HighlightsPhraseLocation *> *)punctuations keywords:(NSSet<HighlightsPhraseLocation *> *)keywords strings:(NSSet<HighlightsPhraseLocation *> *)strings literals:(NSSet<HighlightsPhraseLocation *> *)literals comments:(NSSet<HighlightsPhraseLocation *> *)comments multilineComments:(NSSet<HighlightsPhraseLocation *> *)multilineComments annotations:(NSSet<HighlightsPhraseLocation *> *)annotations incremental:(BOOL)incremental __attribute__((swift_name("doCopy(marks:punctuations:keywords:strings:literals:comments:multilineComments:annotations:incremental:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (HighlightsCodeStructure *)minusNew:(HighlightsCodeStructure *)new_ __attribute__((swift_name("minus(new:)")));
- (HighlightsCodeStructure *)movePosition:(int32_t)position __attribute__((swift_name("move(position:)")));
- (HighlightsCodeStructure *)plusNew:(HighlightsCodeStructure *)new_ __attribute__((swift_name("plus(new:)")));
- (void)printStructureCode:(NSString *)code __attribute__((swift_name("printStructure(code:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSSet<HighlightsPhraseLocation *> *annotations __attribute__((swift_name("annotations")));
@property (readonly) NSSet<HighlightsPhraseLocation *> *comments __attribute__((swift_name("comments")));
@property (readonly) BOOL incremental __attribute__((swift_name("incremental")));
@property (readonly) NSSet<HighlightsPhraseLocation *> *keywords __attribute__((swift_name("keywords")));
@property (readonly) NSSet<HighlightsPhraseLocation *> *literals __attribute__((swift_name("literals")));
@property (readonly) NSSet<HighlightsPhraseLocation *> *marks __attribute__((swift_name("marks")));
@property (readonly) NSSet<HighlightsPhraseLocation *> *multilineComments __attribute__((swift_name("multilineComments")));
@property (readonly) NSSet<HighlightsPhraseLocation *> *punctuations __attribute__((swift_name("punctuations")));
@property (readonly) NSSet<HighlightsPhraseLocation *> *strings __attribute__((swift_name("strings")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CodeStructure.Companion")))
@interface HighlightsCodeStructureCompanion : HighlightsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HighlightsCodeStructureCompanion *shared __attribute__((swift_name("shared")));
- (id<HighlightsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorHighlight")))
@interface HighlightsColorHighlight : HighlightsCodeHighlight
- (instancetype)initWithLocation:(HighlightsPhraseLocation *)location rgb:(int32_t)rgb __attribute__((swift_name("init(location:rgb:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HighlightsColorHighlightCompanion *companion __attribute__((swift_name("companion")));
- (HighlightsColorHighlight *)doCopyLocation:(HighlightsPhraseLocation *)location rgb:(int32_t)rgb __attribute__((swift_name("doCopy(location:rgb:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HighlightsPhraseLocation *location __attribute__((swift_name("location")));
@property (readonly) int32_t rgb __attribute__((swift_name("rgb")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ColorHighlight.Companion")))
@interface HighlightsColorHighlightCompanion : HighlightsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HighlightsColorHighlightCompanion *shared __attribute__((swift_name("shared")));
- (id<HighlightsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhraseLocation")))
@interface HighlightsPhraseLocation : HighlightsBase
- (instancetype)initWithStart:(int32_t)start end:(int32_t)end __attribute__((swift_name("init(start:end:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HighlightsPhraseLocationCompanion *companion __attribute__((swift_name("companion")));
- (HighlightsPhraseLocation *)doCopyStart:(int32_t)start end:(int32_t)end __attribute__((swift_name("doCopy(start:end:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t end __attribute__((swift_name("end")));
@property (readonly) int32_t start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhraseLocation.Companion")))
@interface HighlightsPhraseLocationCompanion : HighlightsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HighlightsPhraseLocationCompanion *shared __attribute__((swift_name("shared")));
- (id<HighlightsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol HighlightsKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface HighlightsKotlinEnum<E> : HighlightsBase <HighlightsKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HighlightsKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyntaxLanguage")))
@interface HighlightsSyntaxLanguage : HighlightsKotlinEnum<HighlightsSyntaxLanguage *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) HighlightsSyntaxLanguageCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) HighlightsSyntaxLanguage *default_ __attribute__((swift_name("default_")));
@property (class, readonly) HighlightsSyntaxLanguage *c __attribute__((swift_name("c")));
@property (class, readonly) HighlightsSyntaxLanguage *cpp __attribute__((swift_name("cpp")));
@property (class, readonly) HighlightsSyntaxLanguage *dart __attribute__((swift_name("dart")));
@property (class, readonly) HighlightsSyntaxLanguage *java __attribute__((swift_name("java")));
@property (class, readonly) HighlightsSyntaxLanguage *kotlin __attribute__((swift_name("kotlin")));
@property (class, readonly) HighlightsSyntaxLanguage *rust __attribute__((swift_name("rust")));
@property (class, readonly) HighlightsSyntaxLanguage *csharp __attribute__((swift_name("csharp")));
@property (class, readonly) HighlightsSyntaxLanguage *coffeescript __attribute__((swift_name("coffeescript")));
@property (class, readonly) HighlightsSyntaxLanguage *javascript __attribute__((swift_name("javascript")));
@property (class, readonly) HighlightsSyntaxLanguage *perl __attribute__((swift_name("perl")));
@property (class, readonly) HighlightsSyntaxLanguage *python __attribute__((swift_name("python")));
@property (class, readonly) HighlightsSyntaxLanguage *ruby __attribute__((swift_name("ruby")));
@property (class, readonly) HighlightsSyntaxLanguage *shell __attribute__((swift_name("shell")));
@property (class, readonly) HighlightsSyntaxLanguage *swift __attribute__((swift_name("swift")));
@property (class, readonly) HighlightsSyntaxLanguage *typescript __attribute__((swift_name("typescript")));
@property (class, readonly) HighlightsSyntaxLanguage *go __attribute__((swift_name("go")));
@property (class, readonly) HighlightsSyntaxLanguage *php __attribute__((swift_name("php")));
+ (HighlightsKotlinArray<HighlightsSyntaxLanguage *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<HighlightsSyntaxLanguage *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyntaxLanguage.Companion")))
@interface HighlightsSyntaxLanguageCompanion : HighlightsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HighlightsSyntaxLanguageCompanion *shared __attribute__((swift_name("shared")));
- (HighlightsSyntaxLanguage * _Nullable)getByNameName:(NSString *)name __attribute__((swift_name("getByName(name:)")));
- (NSArray<NSString *> *)getNames __attribute__((swift_name("getNames()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyntaxTheme")))
@interface HighlightsSyntaxTheme : HighlightsBase
- (instancetype)initWithKey:(NSString *)key code:(int32_t)code keyword:(int32_t)keyword string:(int32_t)string literal:(int32_t)literal comment:(int32_t)comment metadata:(int32_t)metadata multilineComment:(int32_t)multilineComment punctuation:(int32_t)punctuation mark:(int32_t)mark __attribute__((swift_name("init(key:code:keyword:string:literal:comment:metadata:multilineComment:punctuation:mark:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HighlightsSyntaxThemeCompanion *companion __attribute__((swift_name("companion")));
- (HighlightsSyntaxTheme *)doCopyKey:(NSString *)key code:(int32_t)code keyword:(int32_t)keyword string:(int32_t)string literal:(int32_t)literal comment:(int32_t)comment metadata:(int32_t)metadata multilineComment:(int32_t)multilineComment punctuation:(int32_t)punctuation mark:(int32_t)mark __attribute__((swift_name("doCopy(key:code:keyword:string:literal:comment:metadata:multilineComment:punctuation:mark:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t code __attribute__((swift_name("code")));
@property (readonly) int32_t comment __attribute__((swift_name("comment")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) int32_t keyword __attribute__((swift_name("keyword")));
@property (readonly) int32_t literal __attribute__((swift_name("literal")));
@property (readonly) int32_t mark __attribute__((swift_name("mark")));
@property (readonly) int32_t metadata __attribute__((swift_name("metadata")));
@property (readonly) int32_t multilineComment __attribute__((swift_name("multilineComment")));
@property (readonly) int32_t punctuation __attribute__((swift_name("punctuation")));
@property (readonly) int32_t string __attribute__((swift_name("string")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyntaxTheme.Companion")))
@interface HighlightsSyntaxThemeCompanion : HighlightsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HighlightsSyntaxThemeCompanion *shared __attribute__((swift_name("shared")));
- (HighlightsSyntaxTheme *)basicKey:(NSString *)key code:(int32_t)code string:(int32_t)string accent:(int32_t)accent value:(int32_t)value comment:(int32_t)comment __attribute__((swift_name("basic(key:code:string:accent:value:comment:)")));
- (HighlightsSyntaxTheme *)simpleKey:(NSString *)key code:(int32_t)code string:(int32_t)string accent:(int32_t)accent value:(int32_t)value __attribute__((swift_name("simple(key:code:string:accent:value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SyntaxThemes")))
@interface HighlightsSyntaxThemes : HighlightsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)syntaxThemes __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HighlightsSyntaxThemes *shared __attribute__((swift_name("shared")));
- (HighlightsSyntaxTheme *)atomDarkMode:(BOOL)darkMode __attribute__((swift_name("atom(darkMode:)")));
- (HighlightsSyntaxTheme *)darculaDarkMode:(BOOL)darkMode __attribute__((swift_name("darcula(darkMode:)")));
- (HighlightsSyntaxTheme *)defaultDarkMode:(BOOL)darkMode __attribute__((swift_name("default(darkMode:)")));
- (HighlightsSyntaxTheme * _Nullable)getByNameName:(NSString *)name darkMode:(BOOL)darkMode __attribute__((swift_name("getByName(name:darkMode:)")));
- (NSArray<NSString *> *)getNamesDarkMode:(BOOL)darkMode __attribute__((swift_name("getNames(darkMode:)")));
- (HighlightsSyntaxTheme *)matrixDarkMode:(BOOL)darkMode __attribute__((swift_name("matrix(darkMode:)")));
- (HighlightsSyntaxTheme *)monokaiDarkMode:(BOOL)darkMode __attribute__((swift_name("monokai(darkMode:)")));
- (HighlightsSyntaxTheme *)notepadDarkMode:(BOOL)darkMode __attribute__((swift_name("notepad(darkMode:)")));
- (HighlightsSyntaxTheme *)pastelDarkMode:(BOOL)darkMode __attribute__((swift_name("pastel(darkMode:)")));
- (NSDictionary<NSString *, HighlightsSyntaxTheme *> *)themesDarkMode:(BOOL)darkMode __attribute__((swift_name("themes(darkMode:)")));
- (HighlightsSyntaxTheme * _Nullable)useDark:(HighlightsSyntaxTheme *)receiver darkMode:(BOOL)darkMode __attribute__((swift_name("useDark(_:darkMode:)")));
@property (readonly) NSDictionary<NSString *, HighlightsSyntaxTheme *> *dark __attribute__((swift_name("dark")));
@property (readonly) NSDictionary<NSString *, HighlightsSyntaxTheme *> *light __attribute__((swift_name("light")));
@end

__attribute__((swift_name("KotlinIterable")))
@protocol HighlightsKotlinIterable
@required
- (id<HighlightsKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("KotlinIntProgression")))
@interface HighlightsKotlinIntProgression : HighlightsBase <HighlightsKotlinIterable>
@property (class, readonly, getter=companion) HighlightsKotlinIntProgressionCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (HighlightsKotlinIntIterator *)iterator __attribute__((swift_name("iterator()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t first __attribute__((swift_name("first")));
@property (readonly) int32_t last __attribute__((swift_name("last")));
@property (readonly) int32_t step __attribute__((swift_name("step")));
@end

__attribute__((swift_name("KotlinClosedRange")))
@protocol HighlightsKotlinClosedRange
@required
- (BOOL)containsValue:(id)value __attribute__((swift_name("contains(value:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
__attribute__((swift_name("KotlinOpenEndRange")))
@protocol HighlightsKotlinOpenEndRange
@required
- (BOOL)containsValue_:(id)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
@property (readonly) id endExclusive __attribute__((swift_name("endExclusive")));
@property (readonly) id start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange")))
@interface HighlightsKotlinIntRange : HighlightsKotlinIntProgression <HighlightsKotlinClosedRange, HighlightsKotlinOpenEndRange>
- (instancetype)initWithStart:(int32_t)start endInclusive:(int32_t)endInclusive __attribute__((swift_name("init(start:endInclusive:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) HighlightsKotlinIntRangeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)containsValue:(HighlightsInt *)value __attribute__((swift_name("contains(value:)")));
- (BOOL)containsValue_:(HighlightsInt *)value __attribute__((swift_name("contains(value_:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.9")
*/
@property (readonly) HighlightsInt *endExclusive __attribute__((swift_name("endExclusive"))) __attribute__((deprecated("Can throw an exception when it's impossible to represent the value with Int type, for example, when the range includes MAX_VALUE. It's recommended to use 'endInclusive' property that doesn't throw.")));
@property (readonly) HighlightsInt *endInclusive __attribute__((swift_name("endInclusive")));
@property (readonly) HighlightsInt *start __attribute__((swift_name("start")));
@end

@interface HighlightsKotlinIntRange (Extensions)
- (BOOL)containsRange:(HighlightsKotlinIntRange *)range __attribute__((swift_name("contains(range:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExtensionsKt")))
@interface HighlightsExtensionsKt : HighlightsBase
+ (id _Nullable)get:(NSSet<id> *)receiver i:(int32_t)i __attribute__((swift_name("get(_:i:)")));
+ (NSSet<HighlightsInt *> *)indicesOf:(NSString *)receiver phrase:(NSString *)phrase __attribute__((swift_name("indicesOf(_:phrase:)")));
+ (BOOL)isIndependentPhrase:(NSString *)receiver code:(NSString *)code index:(int32_t)index __attribute__((swift_name("isIndependentPhrase(_:code:index:)")));
+ (BOOL)isNewLine:(unichar)receiver __attribute__((swift_name("isNewLine(_:)")));
+ (int32_t)lengthToEOF:(NSString *)receiver start:(int32_t)start __attribute__((swift_name("lengthToEOF(_:start:)")));
+ (NSSet<HighlightsPhraseLocation *> *)phraseLocationSetFromJson:(NSString *)receiver __attribute__((swift_name("phraseLocationSetFromJson(_:)")));
+ (NSString *)toJson:(NSArray<HighlightsCodeHighlight *> *)receiver __attribute__((swift_name("toJson(_:)")));
+ (NSSet<HighlightsKotlinIntRange *> *)toRangeSet:(NSSet<HighlightsPhraseLocation *> *)receiver __attribute__((swift_name("toRangeSet(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface HighlightsKotlinArray<T> : HighlightsBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(HighlightsInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<HighlightsKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol HighlightsKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<HighlightsKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<HighlightsKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol HighlightsKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<HighlightsKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<HighlightsKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol HighlightsKotlinx_serialization_coreKSerializer <HighlightsKotlinx_serialization_coreSerializationStrategy, HighlightsKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface HighlightsKotlinEnumCompanion : HighlightsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HighlightsKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol HighlightsKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntProgression.Companion")))
@interface HighlightsKotlinIntProgressionCompanion : HighlightsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HighlightsKotlinIntProgressionCompanion *shared __attribute__((swift_name("shared")));
- (HighlightsKotlinIntProgression *)fromClosedRangeRangeStart:(int32_t)rangeStart rangeEnd:(int32_t)rangeEnd step:(int32_t)step __attribute__((swift_name("fromClosedRange(rangeStart:rangeEnd:step:)")));
@end

__attribute__((swift_name("KotlinIntIterator")))
@interface HighlightsKotlinIntIterator : HighlightsBase <HighlightsKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (HighlightsInt *)next __attribute__((swift_name("next()")));
- (int32_t)nextInt __attribute__((swift_name("nextInt()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinIntRange.Companion")))
@interface HighlightsKotlinIntRangeCompanion : HighlightsBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) HighlightsKotlinIntRangeCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) HighlightsKotlinIntRange *EMPTY __attribute__((swift_name("EMPTY")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol HighlightsKotlinx_serialization_coreEncoder
@required
- (id<HighlightsKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<HighlightsKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<HighlightsKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<HighlightsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<HighlightsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) HighlightsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol HighlightsKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<HighlightsKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<HighlightsKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<HighlightsKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) HighlightsKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol HighlightsKotlinx_serialization_coreDecoder
@required
- (id<HighlightsKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<HighlightsKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (HighlightsKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<HighlightsKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<HighlightsKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) HighlightsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol HighlightsKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<HighlightsKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<HighlightsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<HighlightsKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) HighlightsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface HighlightsKotlinx_serialization_coreSerializersModule : HighlightsBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<HighlightsKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<HighlightsKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<HighlightsKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<HighlightsKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<HighlightsKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<HighlightsKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<HighlightsKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<HighlightsKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol HighlightsKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface HighlightsKotlinx_serialization_coreSerialKind : HighlightsBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol HighlightsKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<HighlightsKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<HighlightsKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<HighlightsKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<HighlightsKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) HighlightsKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface HighlightsKotlinNothing : HighlightsBase
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol HighlightsKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<HighlightsKotlinKClass>)kClass provider:(id<HighlightsKotlinx_serialization_coreKSerializer> (^)(NSArray<id<HighlightsKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<HighlightsKotlinKClass>)kClass serializer:(id<HighlightsKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<HighlightsKotlinKClass>)baseClass actualClass:(id<HighlightsKotlinKClass>)actualClass actualSerializer:(id<HighlightsKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<HighlightsKotlinKClass>)baseClass defaultDeserializerProvider:(id<HighlightsKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)"))) __attribute__((deprecated("Deprecated in favor of function with more precise name: polymorphicDefaultDeserializer")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<HighlightsKotlinKClass>)baseClass defaultDeserializerProvider:(id<HighlightsKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<HighlightsKotlinKClass>)baseClass defaultSerializerProvider:(id<HighlightsKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol HighlightsKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol HighlightsKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol HighlightsKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol HighlightsKotlinKClass <HighlightsKotlinKDeclarationContainer, HighlightsKotlinKAnnotatedElement, HighlightsKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
