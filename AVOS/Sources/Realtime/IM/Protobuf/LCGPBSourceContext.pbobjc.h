// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/source_context.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(LCGPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define LCGPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if LCGPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/LCGPBDescriptor.h>
 #import <Protobuf/LCGPBMessage.h>
 #import <Protobuf/LCGPBRootObject.h>
#else
 #import "LCGPBDescriptor.h"
 #import "LCGPBMessage.h"
 #import "LCGPBRootObject.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30004
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30004 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

NS_ASSUME_NONNULL_BEGIN

#pragma mark - LCGPBSourceContextRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (LCGPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c LCGPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
LCGPB_FINAL @interface LCGPBSourceContextRoot : LCGPBRootObject
@end

#pragma mark - LCGPBSourceContext

typedef LCGPB_ENUM(LCGPBSourceContext_FieldNumber) {
  LCGPBSourceContext_FieldNumber_FileName = 1,
};

/**
 * `SourceContext` represents information about the source of a
 * protobuf element, like the file in which it is defined.
 **/
LCGPB_FINAL @interface LCGPBSourceContext : LCGPBMessage

/**
 * The path-qualified name of the .proto file that contained the associated
 * protobuf element.  For example: `"google/protobuf/source_context.proto"`.
 **/
@property(nonatomic, readwrite, copy, null_resettable) NSString *fileName;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)