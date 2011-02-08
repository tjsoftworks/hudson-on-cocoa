//
//  HudsonJob.h
//  HudsonGrowl
//
//  Created by Benjamin Broll on 13.11.10.
//
//  This source code is licensed under the terms of the BSD license.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES 
//  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
//  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR 
//  ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF 
//  CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
//  WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#import <Foundation/Foundation.h>

@class HudsonResult;

@interface HudsonJob : NSObject {
@private
    NSString* name;
    
    HudsonResult* lastResult;
}

@property (nonatomic, retain) NSString* name;

@property (nonatomic, retain) HudsonResult* lastResult;


+ (HudsonJob*) jobWithName:(NSString*)name;

- (id) initWithName:(NSString*)name;

@end
