// Modifications by Codeux Software <support AT codeux DOT com> <https://github.com/codeux/Textual>
// You can redistribute it and/or modify it under the new BSD license.

@class LogController;

typedef enum {
	ASCII_TO_HTML,
	ASCII_TO_ATTRIBUTED_STRING,
} LogRendererType;

extern NSString *logEscape(NSString *s);

extern NSInteger mapColorValue(NSColor *color);
extern NSColor *mapColorCode(NSInteger colorChar);

@interface LogRenderer : NSObject

+ (NSString *)renderBody:(NSString *)body 
			  controller:(LogController *)log
			  renderType:(LogRendererType)drawingType
			  properties:(NSDictionary *)inputDictionary
			  resultInfo:(NSDictionary **)outputDictionary;

@end