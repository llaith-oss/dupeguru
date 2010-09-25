/* 
Copyright 2010 Hardcoded Software (http://www.hardcoded.net)

This software is licensed under the "HS" License as described in the "LICENSE" file, 
which should be included with this package. The terms are also available at 
http://www.hardcoded.net/licenses/hs_license
*/

#import <Cocoa/Cocoa.h>
#import "HSTable.h"
#import "PyResultTable.h"

@interface ResultTable : HSTable
{
    NSIndexSet *_deltaColumns;
}
- (id)initWithPyParent:(id)aPyParent view:(NSTableView *)aTableView;
- (PyResultTable *)py;
- (BOOL)powerMarkerMode;
- (void)setPowerMarkerMode:(BOOL)aPowerMarkerMode;
- (BOOL)deltaValuesMode;
- (void)setDeltaValuesMode:(BOOL)aDeltaValuesMode;
- (void)setDeltaColumns:(NSIndexSet *)aDeltaColumns;
- (NSInteger)selectedDupeCount;
- (void)removeSelected;
@end;