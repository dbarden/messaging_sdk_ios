#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.5 (swiftlang-1300.0.31.1 clang-1300.0.29.1)
#ifndef MESSAGINGSDK_SWIFT_H
#define MESSAGINGSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import SDKConfigurations;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MessagingSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



@class NSNumber;
@protocol ZDKMessagingDelegate;

/// The Messaging class coordinates Zendesk’s product UI engines,
/// to allow them to work seamlessly in a single unified messaging interface.
/// A <code>UIViewController</code> can be built, once the Messaging singleton is initialized successfully.
/// This will allow an end-user to start their customer support experience.
/// <code>Messaging</code> contains a list of <code>Engines</code> which map to different
/// Zendesk SDKs like AnswerBot, Chat, and Support.
SWIFT_CLASS_NAMED("Messaging")
@interface ZDKMessaging : NSObject
/// The <code>Messaging</code> singleton instance
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZDKMessaging * _Nonnull instance;)
+ (ZDKMessaging * _Nonnull)instance SWIFT_WARN_UNUSED_RESULT;
/// Returns <code>true</code> if Messaging UI is presented
@property (nonatomic, readonly) BOOL isMessagingPresented;
/// Messaging delegate allows you to observe user events that happen in the <code>MessagingSDK</code>.
@property (nonatomic, weak) id <ZDKMessagingDelegate> _Nullable delegate;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@protocol ZDKEngine;
@protocol ZDKConfiguration;
@class UIViewController;

@interface ZDKMessaging (SWIFT_EXTENSION(MessagingSDK))
/// Objective-C method for building the Messaging “ViewController”
/// \param engines The ordered list of engines that will be part of the conversation
///
/// \param configs The Configurations for each of your engines
///
///
/// throws:
/// If no engines were passed
///
/// returns:
/// An instance of <code>UIViewController</code> which starts with the first engine in <code>engines</code>
- (UIViewController * _Nullable)buildUIWithEngines:(NSArray<id <ZDKEngine>> * _Nonnull)engines configs:(NSArray<id <ZDKConfiguration>> * _Nonnull)configs error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
@end






@class NSString;
@class UIImage;

/// Class used to configure the Messaging screen.
/// version:
/// 1.0.0
SWIFT_CLASS_NAMED("MessagingConfiguration")
@interface ZDKMessagingConfiguration : NSObject <ZDKConfiguration>
/// The name of bot shown in the UI. Default is “Answer Bot”.
@property (nonatomic, copy) NSString * _Nonnull name;
/// The avatar image for the bot. Default is the Answer Bot avatar.
@property (nonatomic, strong) UIImage * _Nonnull botAvatar;
/// Flag to enable whether the user response options will span across multiple lines, or just have one line.
/// <ul>
///   <li>
///     <code>false</code>:  <code>ResponseOptions</code> appear in a <code>UICollectionView</code> which scrolls horizontally
///     if the <code>contentSize.width</code> is greater than the collectionView’s<code>frame.width</code>
///   </li>
///   <li>
///     <code>true</code>: <code>ResponseOptions</code> appear in a <code>UICollectionView</code> which expands vertically to fit all the content on screen
///   </li>
/// </ul>
/// eg. AnswerBot response options or Chat’s pre-chat form department selection.
@property (nonatomic) BOOL isMultilineResponseOptionsEnabled;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum ZDKMessagingUIEvent : NSInteger;
@class NSURL;

SWIFT_PROTOCOL_NAMED("MessagingDelegate")
@protocol ZDKMessagingDelegate
/// Allows you to observe UI events that occured in <code>Messaging</code>’s UI.
/// \param messaging <code>Messaging</code> instance
///
/// \param event event of type <code>MessagingUIEvent</code>
///
/// \param context optional additional context that comes along with the <code>event</code>
///
- (void)messaging:(ZDKMessaging * _Nonnull)messaging didPerformEvent:(enum ZDKMessagingUIEvent)event context:(id _Nullable)context;
/// Optional <code>MessagingDelegate</code> method that allows custom URL link handling.
/// note:
/// Return <code>true</code> when there is no way to handle a specific URL and <code>Messaging</code> will handle it.
/// \param messaging <code>Messaging</code> instance
///
/// \param url The <code>URL</code> the user tapped
///
///
/// returns:
/// Return <code>true</code> if Messaging should handle the URL. Return <code>false</code> if there is a specified URL flow.
- (BOOL)messaging:(ZDKMessaging * _Nonnull)messaging shouldOpenURL:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM_NAMED(NSInteger, ZDKMessagingUIEvent, "MessagingUIEvent", open) {
  ZDKMessagingUIEventViewDidLoad = 0,
  ZDKMessagingUIEventViewWillAppear = 1,
  ZDKMessagingUIEventViewDidAppear = 2,
  ZDKMessagingUIEventViewWillDisappear = 3,
  ZDKMessagingUIEventViewDidDisappear = 4,
  ZDKMessagingUIEventViewDidLayoutSubviews = 5,
/// Fired once the Messaging UI is closed and no longer visible to the user
  ZDKMessagingUIEventViewControllerDidClose = 6,
};



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__x86_64__) && __x86_64__
// Generated by Apple Swift version 5.5 (swiftlang-1300.0.31.1 clang-1300.0.29.1)
#ifndef MESSAGINGSDK_SWIFT_H
#define MESSAGINGSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import SDKConfigurations;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MessagingSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



@class NSNumber;
@protocol ZDKMessagingDelegate;

/// The Messaging class coordinates Zendesk’s product UI engines,
/// to allow them to work seamlessly in a single unified messaging interface.
/// A <code>UIViewController</code> can be built, once the Messaging singleton is initialized successfully.
/// This will allow an end-user to start their customer support experience.
/// <code>Messaging</code> contains a list of <code>Engines</code> which map to different
/// Zendesk SDKs like AnswerBot, Chat, and Support.
SWIFT_CLASS_NAMED("Messaging")
@interface ZDKMessaging : NSObject
/// The <code>Messaging</code> singleton instance
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZDKMessaging * _Nonnull instance;)
+ (ZDKMessaging * _Nonnull)instance SWIFT_WARN_UNUSED_RESULT;
/// Returns <code>true</code> if Messaging UI is presented
@property (nonatomic, readonly) BOOL isMessagingPresented;
/// Messaging delegate allows you to observe user events that happen in the <code>MessagingSDK</code>.
@property (nonatomic, weak) id <ZDKMessagingDelegate> _Nullable delegate;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@protocol ZDKEngine;
@protocol ZDKConfiguration;
@class UIViewController;

@interface ZDKMessaging (SWIFT_EXTENSION(MessagingSDK))
/// Objective-C method for building the Messaging “ViewController”
/// \param engines The ordered list of engines that will be part of the conversation
///
/// \param configs The Configurations for each of your engines
///
///
/// throws:
/// If no engines were passed
///
/// returns:
/// An instance of <code>UIViewController</code> which starts with the first engine in <code>engines</code>
- (UIViewController * _Nullable)buildUIWithEngines:(NSArray<id <ZDKEngine>> * _Nonnull)engines configs:(NSArray<id <ZDKConfiguration>> * _Nonnull)configs error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
@end






@class NSString;
@class UIImage;

/// Class used to configure the Messaging screen.
/// version:
/// 1.0.0
SWIFT_CLASS_NAMED("MessagingConfiguration")
@interface ZDKMessagingConfiguration : NSObject <ZDKConfiguration>
/// The name of bot shown in the UI. Default is “Answer Bot”.
@property (nonatomic, copy) NSString * _Nonnull name;
/// The avatar image for the bot. Default is the Answer Bot avatar.
@property (nonatomic, strong) UIImage * _Nonnull botAvatar;
/// Flag to enable whether the user response options will span across multiple lines, or just have one line.
/// <ul>
///   <li>
///     <code>false</code>:  <code>ResponseOptions</code> appear in a <code>UICollectionView</code> which scrolls horizontally
///     if the <code>contentSize.width</code> is greater than the collectionView’s<code>frame.width</code>
///   </li>
///   <li>
///     <code>true</code>: <code>ResponseOptions</code> appear in a <code>UICollectionView</code> which expands vertically to fit all the content on screen
///   </li>
/// </ul>
/// eg. AnswerBot response options or Chat’s pre-chat form department selection.
@property (nonatomic) BOOL isMultilineResponseOptionsEnabled;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum ZDKMessagingUIEvent : NSInteger;
@class NSURL;

SWIFT_PROTOCOL_NAMED("MessagingDelegate")
@protocol ZDKMessagingDelegate
/// Allows you to observe UI events that occured in <code>Messaging</code>’s UI.
/// \param messaging <code>Messaging</code> instance
///
/// \param event event of type <code>MessagingUIEvent</code>
///
/// \param context optional additional context that comes along with the <code>event</code>
///
- (void)messaging:(ZDKMessaging * _Nonnull)messaging didPerformEvent:(enum ZDKMessagingUIEvent)event context:(id _Nullable)context;
/// Optional <code>MessagingDelegate</code> method that allows custom URL link handling.
/// note:
/// Return <code>true</code> when there is no way to handle a specific URL and <code>Messaging</code> will handle it.
/// \param messaging <code>Messaging</code> instance
///
/// \param url The <code>URL</code> the user tapped
///
///
/// returns:
/// Return <code>true</code> if Messaging should handle the URL. Return <code>false</code> if there is a specified URL flow.
- (BOOL)messaging:(ZDKMessaging * _Nonnull)messaging shouldOpenURL:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM_NAMED(NSInteger, ZDKMessagingUIEvent, "MessagingUIEvent", open) {
  ZDKMessagingUIEventViewDidLoad = 0,
  ZDKMessagingUIEventViewWillAppear = 1,
  ZDKMessagingUIEventViewDidAppear = 2,
  ZDKMessagingUIEventViewWillDisappear = 3,
  ZDKMessagingUIEventViewDidDisappear = 4,
  ZDKMessagingUIEventViewDidLayoutSubviews = 5,
/// Fired once the Messaging UI is closed and no longer visible to the user
  ZDKMessagingUIEventViewControllerDidClose = 6,
};



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__i386__) && __i386__
// Generated by Apple Swift version 5.5 (swiftlang-1300.0.31.1 clang-1300.0.29.1)
#ifndef MESSAGINGSDK_SWIFT_H
#define MESSAGINGSDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import Foundation;
@import ObjectiveC;
@import SDKConfigurations;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MessagingSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



@class NSNumber;
@protocol ZDKMessagingDelegate;

/// The Messaging class coordinates Zendesk’s product UI engines,
/// to allow them to work seamlessly in a single unified messaging interface.
/// A <code>UIViewController</code> can be built, once the Messaging singleton is initialized successfully.
/// This will allow an end-user to start their customer support experience.
/// <code>Messaging</code> contains a list of <code>Engines</code> which map to different
/// Zendesk SDKs like AnswerBot, Chat, and Support.
SWIFT_CLASS_NAMED("Messaging")
@interface ZDKMessaging : NSObject
/// The <code>Messaging</code> singleton instance
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) ZDKMessaging * _Nonnull instance;)
+ (ZDKMessaging * _Nonnull)instance SWIFT_WARN_UNUSED_RESULT;
/// Returns <code>true</code> if Messaging UI is presented
@property (nonatomic, readonly) BOOL isMessagingPresented;
/// Messaging delegate allows you to observe user events that happen in the <code>MessagingSDK</code>.
@property (nonatomic, weak) id <ZDKMessagingDelegate> _Nullable delegate;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@protocol ZDKEngine;
@protocol ZDKConfiguration;
@class UIViewController;

@interface ZDKMessaging (SWIFT_EXTENSION(MessagingSDK))
/// Objective-C method for building the Messaging “ViewController”
/// \param engines The ordered list of engines that will be part of the conversation
///
/// \param configs The Configurations for each of your engines
///
///
/// throws:
/// If no engines were passed
///
/// returns:
/// An instance of <code>UIViewController</code> which starts with the first engine in <code>engines</code>
- (UIViewController * _Nullable)buildUIWithEngines:(NSArray<id <ZDKEngine>> * _Nonnull)engines configs:(NSArray<id <ZDKConfiguration>> * _Nonnull)configs error:(NSError * _Nullable * _Nullable)error SWIFT_WARN_UNUSED_RESULT;
@end






@class NSString;
@class UIImage;

/// Class used to configure the Messaging screen.
/// version:
/// 1.0.0
SWIFT_CLASS_NAMED("MessagingConfiguration")
@interface ZDKMessagingConfiguration : NSObject <ZDKConfiguration>
/// The name of bot shown in the UI. Default is “Answer Bot”.
@property (nonatomic, copy) NSString * _Nonnull name;
/// The avatar image for the bot. Default is the Answer Bot avatar.
@property (nonatomic, strong) UIImage * _Nonnull botAvatar;
/// Flag to enable whether the user response options will span across multiple lines, or just have one line.
/// <ul>
///   <li>
///     <code>false</code>:  <code>ResponseOptions</code> appear in a <code>UICollectionView</code> which scrolls horizontally
///     if the <code>contentSize.width</code> is greater than the collectionView’s<code>frame.width</code>
///   </li>
///   <li>
///     <code>true</code>: <code>ResponseOptions</code> appear in a <code>UICollectionView</code> which expands vertically to fit all the content on screen
///   </li>
/// </ul>
/// eg. AnswerBot response options or Chat’s pre-chat form department selection.
@property (nonatomic) BOOL isMultilineResponseOptionsEnabled;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

enum ZDKMessagingUIEvent : NSInteger;
@class NSURL;

SWIFT_PROTOCOL_NAMED("MessagingDelegate")
@protocol ZDKMessagingDelegate
/// Allows you to observe UI events that occured in <code>Messaging</code>’s UI.
/// \param messaging <code>Messaging</code> instance
///
/// \param event event of type <code>MessagingUIEvent</code>
///
/// \param context optional additional context that comes along with the <code>event</code>
///
- (void)messaging:(ZDKMessaging * _Nonnull)messaging didPerformEvent:(enum ZDKMessagingUIEvent)event context:(id _Nullable)context;
/// Optional <code>MessagingDelegate</code> method that allows custom URL link handling.
/// note:
/// Return <code>true</code> when there is no way to handle a specific URL and <code>Messaging</code> will handle it.
/// \param messaging <code>Messaging</code> instance
///
/// \param url The <code>URL</code> the user tapped
///
///
/// returns:
/// Return <code>true</code> if Messaging should handle the URL. Return <code>false</code> if there is a specified URL flow.
- (BOOL)messaging:(ZDKMessaging * _Nonnull)messaging shouldOpenURL:(NSURL * _Nonnull)url SWIFT_WARN_UNUSED_RESULT;
@end

typedef SWIFT_ENUM_NAMED(NSInteger, ZDKMessagingUIEvent, "MessagingUIEvent", open) {
  ZDKMessagingUIEventViewDidLoad = 0,
  ZDKMessagingUIEventViewWillAppear = 1,
  ZDKMessagingUIEventViewDidAppear = 2,
  ZDKMessagingUIEventViewWillDisappear = 3,
  ZDKMessagingUIEventViewDidDisappear = 4,
  ZDKMessagingUIEventViewDidLayoutSubviews = 5,
/// Fired once the Messaging UI is closed and no longer visible to the user
  ZDKMessagingUIEventViewControllerDidClose = 6,
};



#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
