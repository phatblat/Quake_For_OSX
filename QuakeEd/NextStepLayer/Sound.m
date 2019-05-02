#import <Sound.h>
#import <Cocoa/Cocoa.h>

@implementation Sound
{
    NSSound* sound;
}

-(instancetype)initFromSoundfile:(const char*)filename
{
    self = [super init];
    if (self != nil)
    {
        sound = [[NSSound alloc] initWithContentsOfFile:[NSString stringWithCString:filename encoding:NSString.defaultCStringEncoding] byReference:YES];
    }
    return self;
}

@end
