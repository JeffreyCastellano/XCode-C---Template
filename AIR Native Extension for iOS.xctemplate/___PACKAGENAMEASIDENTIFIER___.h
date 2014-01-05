/*  
 * ___PACKAGENAME___
 *
 * Created by ___FULLUSERNAME___ on ___DATE___.
 * Copyright (c) ___YEAR___ ___ORGANIZATIONNAME___. All rights reserved.
*/

#import "FlashRuntimeExtensions.h"

#define ANE_FUNCTION(f) FREObject (f)(FREContext ctx, void *data, uint32_t argc, FREObject argv[])
#define MAP_FUNCTION(f, data) { (const uint8_t*)(#f), (data), &(f) }
#ifdef __cplusplus
extern "C" {
#endif
/* ___VARIABLE_productName:RFC1034Identifier___ExtInitializer()
 * The extension initializer is called the first time the ActionScript side of the extension
 * calls ExtensionContext.createExtensionContext() for any context.
 *
 * Please note: this should be same as the <initializer> specified in the extension.xml 
*/
void ___VARIABLE_productName:RFC1034Identifier___ExtInitializer(void** extDataToSet, FREContextInitializer* ctxInitializerToSet, FREContextFinalizer* ctxFinalizerToSet);

/* ___VARIABLE_productName:RFC1034Identifier___ExtFinalizer()
 * The extension finalizer is called when the runtime unloads the extension. However, it may not always called.
 *
 * Please note: this should be same as the <finalizer> specified in the extension.xml 
*/
void ___VARIABLE_productName:RFC1034Identifier___ExtFinalizer(void* extData);

/* ContextInitializer()
 * The context initializer is called when the runtime creates the extension context instance.
*/
void ContextInitializer(void* extData, const uint8_t* ctxType, FREContext ctx, uint32_t* numFunctionsToTest, const FRENamedFunction** functionsToSet);

/* ContextFinalizer()
 * The context finalizer is called when the extension's ActionScript code
 * calls the ExtensionContext instance's dispose() method.
 * If the AIR runtime garbage collector disposes of the ExtensionContext instance, the runtime also calls ContextFinalizer().
*/
void ContextFinalizer(FREContext ctx);

/* This is a sample function that is being included as part of this template. 
 *
 * Users of this template are expected to change this and add similar functions 
 * to be able to call the native functions in the ANE from their ActionScript code
*/
ANE_FUNCTION(isSupported);
#ifdef __cplusplus
}
#endif