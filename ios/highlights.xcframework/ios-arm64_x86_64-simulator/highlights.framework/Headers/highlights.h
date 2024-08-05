#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class HighlightsHighlightsCompanion, HighlightsHighlightsBuilder, HighlightsCodeStructure, HighlightsPhraseLocation, HighlightsCodeHighlight, HighlightsSyntaxLanguage, HighlightsSyntaxTheme, HighlightsKotlinArray<T>, HighlightsCodeSnapshot, HighlightsHighlights, HighlightsBoldHighlight, HighlightsColorHighlight, HighlightsKotlinEnumCompanion, HighlightsKotlinEnum<E>, HighlightsSyntaxLanguageCompanion, HighlightsSyntaxThemeCompanion, HighlightsSyntaxThemes, HighlightsKotlinIntProgressionCompanion, HighlightsKotlinIntIterator, HighlightsKotlinIntProgression, HighlightsKotlinIntRangeCompanion, HighlightsKotlinIntRange;

@protocol HighlightsKotlinComparable, HighlightsKotlinIterator, HighlightsKotlinIterable, HighlightsKotlinClosedRange, HighlightsKotlinOpenEndRange;

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

__attribute__((swift_name("CodeHighlight")))
@interface HighlightsCodeHighlight : HighlightsBase
@property (readonly) HighlightsPhraseLocation *location __attribute__((swift_name("location")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BoldHighlight")))
@interface HighlightsBoldHighlight : HighlightsCodeHighlight
- (instancetype)initWithLocation:(HighlightsPhraseLocation *)location __attribute__((swift_name("init(location:)"))) __attribute__((objc_designated_initializer));
- (HighlightsBoldHighlight *)doCopyLocation:(HighlightsPhraseLocation *)location __attribute__((swift_name("doCopy(location:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HighlightsPhraseLocation *location __attribute__((swift_name("location")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CodeStructure")))
@interface HighlightsCodeStructure : HighlightsBase
- (instancetype)initWithMarks:(NSSet<HighlightsPhraseLocation *> *)marks punctuations:(NSSet<HighlightsPhraseLocation *> *)punctuations keywords:(NSSet<HighlightsPhraseLocation *> *)keywords strings:(NSSet<HighlightsPhraseLocation *> *)strings literals:(NSSet<HighlightsPhraseLocation *> *)literals comments:(NSSet<HighlightsPhraseLocation *> *)comments multilineComments:(NSSet<HighlightsPhraseLocation *> *)multilineComments annotations:(NSSet<HighlightsPhraseLocation *> *)annotations incremental:(BOOL)incremental __attribute__((swift_name("init(marks:punctuations:keywords:strings:literals:comments:multilineComments:annotations:incremental:)"))) __attribute__((objc_designated_initializer));
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
__attribute__((swift_name("ColorHighlight")))
@interface HighlightsColorHighlight : HighlightsCodeHighlight
- (instancetype)initWithLocation:(HighlightsPhraseLocation *)location rgb:(int32_t)rgb __attribute__((swift_name("init(location:rgb:)"))) __attribute__((objc_designated_initializer));
- (HighlightsColorHighlight *)doCopyLocation:(HighlightsPhraseLocation *)location rgb:(int32_t)rgb __attribute__((swift_name("doCopy(location:rgb:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) HighlightsPhraseLocation *location __attribute__((swift_name("location")));
@property (readonly) int32_t rgb __attribute__((swift_name("rgb")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PhraseLocation")))
@interface HighlightsPhraseLocation : HighlightsBase
- (instancetype)initWithStart:(int32_t)start end:(int32_t)end __attribute__((swift_name("init(start:end:)"))) __attribute__((objc_designated_initializer));
- (HighlightsPhraseLocation *)doCopyStart:(int32_t)start end:(int32_t)end __attribute__((swift_name("doCopy(start:end:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t end __attribute__((swift_name("end")));
@property (readonly) int32_t start __attribute__((swift_name("start")));
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
- (NSArray<NSString *> *)getNames __attribute__((swift_name("getNames()")));
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

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
