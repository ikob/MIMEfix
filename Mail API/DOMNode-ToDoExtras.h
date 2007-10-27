/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "DOMNode.h"

@interface DOMNode (ToDoExtras)
- (id)previousToDoElement;
- (id)nextToDoElement;
- (id)closestToDoElementDownstream:(char *)fp8;
- (id)_elementsWithIDPrefix:(id)fp8 className:(id)fp12;
- (id)todoIDs;
- (id)todoElements;
- (id)frozenToDoIDs;
- (id)frozenToDoElements;
- (id)enclosingToDoElement;
- (BOOL)isToDoElement;
- (BOOL)isFrozenToDoElement;
- (BOOL)isToDoBodyElement;
- (BOOL)isToDoContentElement;
- (id)frozenToDoContentElement;
- (id)rangeBeforeToDo;
- (id)rangeAfterToDo;
- (id)visualRangeBeforeToDo;
- (id)visualRangeAfterToDo;
- (id)contentRange;
- (id)todoUserContentRange;
- (id)todoUserContent;
- (void)setTodoUserContent:(id)fp8;
- (id)todoBodyElement;
- (id)todoCheckboxElement;
- (id)todoDateElement;
- (id)todoContentElement;
- (id)todoRowElement;
- (id)todoDeleteElement;
- (id)todoDeleteDivElement;
- (void)flattenTodoElements;
- (BOOL)todoDeleteButtonIsVisible;
- (void)setTodoDeleteButtonIsVisible:(BOOL)fp8;
@end

