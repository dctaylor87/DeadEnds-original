//
//  interptable.h
//  JustParsing
//
//  Created by Thomas Wetmore on 4/19/23.
//

#ifndef builtintable_h
#define builtintable_h

#include <stdio.h>

extern PValue __add(PNode*, SymbolTable*, bool*);
extern PValue __addnode(PNode*, SymbolTable*, bool*);
extern PValue __addtoset(PNode*, SymbolTable*, bool*);
extern PValue __alpha(PNode*, SymbolTable*, bool*);
extern PValue __ancestorset(PNode*, SymbolTable*, bool*);
extern PValue __and(PNode*, SymbolTable*, bool*);
extern PValue __baptism(PNode*, SymbolTable*, bool*);
extern PValue __birth(PNode*, SymbolTable*, bool*);
extern PValue __burial(PNode*, SymbolTable*, bool*);
extern PValue __capitalize(PNode*, SymbolTable*, bool*);
extern PValue __card(PNode*, SymbolTable*, bool*);
extern PValue __child(PNode*, SymbolTable*, bool*);
extern PValue __children(PNode*, SymbolTable*, bool*);  // NEW TO DEADENDS.
extern PValue __childset(PNode*, SymbolTable*, bool*);
extern PValue __choosechild(PNode*, SymbolTable*, bool*);
extern PValue __choosefam(PNode*, SymbolTable*, bool*);
extern PValue __chooseindi(PNode*, SymbolTable*, bool*);
extern PValue __choosespouse(PNode*, SymbolTable*, bool*);
extern PValue __choosesubset(PNode*, SymbolTable*, bool*);
extern PValue __col(PNode*, SymbolTable*, bool*);
extern PValue __concat(PNode*, SymbolTable*, bool*);
extern PValue __copyfile(PNode*, SymbolTable*, bool*);
extern PValue __createnode(PNode*, SymbolTable*, bool*);
extern PValue __d(PNode*, SymbolTable*, bool*);
extern PValue __database(PNode*, SymbolTable*, bool*);
extern PValue __date(PNode*, SymbolTable*, bool*);
extern PValue __dateformat(PNode*, SymbolTable*, bool*);
extern PValue __dayformat(PNode*, SymbolTable*, bool*);
extern PValue __death(PNode*, SymbolTable*, bool*);
extern PValue __decr(PNode*, SymbolTable*, bool*);
extern PValue __deletefromset(PNode*, SymbolTable*, bool*);
extern PValue __deletenode(PNode*, SymbolTable*, bool*);
extern PValue __dequeue(PNode*, SymbolTable*, bool*);
extern PValue __descendentset(PNode*, SymbolTable*, bool*);
extern PValue __difference(PNode*, SymbolTable*, bool*);
extern PValue __div(PNode*, SymbolTable*, bool*);
extern PValue __empty(PNode*, SymbolTable*, bool*);
extern PValue __eq(PNode*, SymbolTable*, bool*);
extern PValue __eqstr(PNode*, SymbolTable*, bool*);
extern PValue __exp(PNode*, SymbolTable*, bool*);
extern PValue __extractdate(PNode*, SymbolTable*, bool*);
extern PValue __extractnames(PNode*, SymbolTable*, bool*);
extern PValue __extractplaces(PNode*, SymbolTable*, bool*);
extern PValue __extracttokens(PNode*, SymbolTable*, bool*);
extern PValue __f(PNode*, SymbolTable*, bool*);
extern PValue __fam(PNode*, SymbolTable*, bool*);
extern PValue __father(PNode*, SymbolTable*, bool*);
extern PValue __female(PNode*, SymbolTable*, bool*);
extern PValue __firstchild(PNode*, SymbolTable*, bool*);
extern PValue __firstfam(PNode*, SymbolTable*, bool*);
extern PValue __firstindi(PNode*, SymbolTable*, bool*);
extern PValue __fnode(PNode*, SymbolTable*, bool*);
extern PValue __fullname(PNode*, SymbolTable*, bool*);
extern PValue __ge(PNode*, SymbolTable*, bool*);
extern PValue __gengedcom(PNode*, SymbolTable*, bool*);
extern PValue __genindiset(PNode*, SymbolTable*, bool*);
extern PValue __getel(PNode*, SymbolTable*, bool*);
extern PValue __getfam(PNode*, SymbolTable*, bool*);
extern PValue __getindi(PNode*, SymbolTable*, bool*);
extern PValue __getindiset(PNode*, SymbolTable*, bool*);
extern PValue __getint(PNode*, SymbolTable*, bool*);
extern PValue __getrecord(PNode*, SymbolTable*, bool*);
extern PValue __getstr(PNode*, SymbolTable*, bool*);
extern PValue __gettoday(PNode*, SymbolTable*, bool*);
extern PValue __givens(PNode*, SymbolTable*, bool*);
extern PValue __gt(PNode*, SymbolTable*, bool*);
extern PValue __husband(PNode*, SymbolTable*, bool*);
extern PValue __incr(PNode*, SymbolTable*, bool*);
extern PValue __index(PNode*, SymbolTable*, bool*);
extern PValue __indi(PNode*, SymbolTable*, bool*);
extern PValue __indiset(PNode*, SymbolTable*, bool*);
extern PValue __inode(PNode*, SymbolTable*, bool*);
extern PValue __insert(PNode*, SymbolTable*, bool*);
extern PValue __intersect(PNode*, SymbolTable*, bool*);
extern PValue __key(PNode*, SymbolTable*, bool*);
extern PValue __keysort(PNode*, SymbolTable*, bool*);
extern PValue __lastchild(PNode*, SymbolTable*, bool*);
extern PValue __le(PNode*, SymbolTable*, bool*);
extern PValue __length(PNode*, SymbolTable*, bool*);
extern PValue __lengthset(PNode*, SymbolTable*, bool*);
extern PValue __linemode(PNode*, SymbolTable*, bool*);
extern PValue __list(PNode*, SymbolTable*, bool*);
extern PValue __lock(PNode*, SymbolTable*, bool*);
extern PValue __long(PNode*, SymbolTable*, bool*);
extern PValue __lookup(PNode*, SymbolTable*, bool*);
extern PValue __lower(PNode*, SymbolTable*, bool*);
extern PValue __lt(PNode*, SymbolTable*, bool*);
extern PValue __male(PNode*, SymbolTable*, bool*);
extern PValue __marriage(PNode*, SymbolTable*, bool*);
extern PValue __menuchoose(PNode*, SymbolTable*, bool*);
extern PValue __mod(PNode*, SymbolTable*, bool*);
extern PValue __monthformat(PNode*, SymbolTable*, bool*);
extern PValue __mother(PNode*, SymbolTable*, bool*);
extern PValue __mul(PNode*, SymbolTable*, bool*);
extern PValue __name(PNode*, SymbolTable*, bool*);
extern PValue __namesort(PNode*, SymbolTable*, bool*);
extern PValue __nchildren(PNode*, SymbolTable*, bool*);
extern PValue __ne(PNode*, SymbolTable*, bool*);
extern PValue __neg(PNode*, SymbolTable*, bool*);
extern PValue __newfile(PNode*, SymbolTable*, bool*);
extern PValue __nextfam(PNode*, SymbolTable*, bool*);
extern PValue __nextindi(PNode*, SymbolTable*, bool*);
extern PValue __nextsib(PNode*, SymbolTable*, bool*);
extern PValue __nfamilies(PNode*, SymbolTable*, bool*);
extern PValue __nl(PNode*, SymbolTable*, bool*);
extern PValue __not(PNode*, SymbolTable*, bool*);
extern PValue __nspouses(PNode*, SymbolTable*, bool*);
extern PValue __or(PNode*, SymbolTable*, bool*);
extern PValue __ord(PNode*, SymbolTable*, bool*);
extern PValue __outfile(PNode*, SymbolTable*, bool*);
extern PValue __pagemode(PNode*, SymbolTable*, bool*);
extern PValue __pageout(PNode*, SymbolTable*, bool*);
extern PValue __parent(PNode*, SymbolTable*, bool*);
extern PValue __parents(PNode*, SymbolTable*, bool*);
extern PValue __parentset(PNode*, SymbolTable*, bool*);
extern PValue __place(PNode*, SymbolTable*, bool*);
extern PValue __pn(PNode*, SymbolTable*, bool*);
extern PValue __pop(PNode*, SymbolTable*, bool*);
extern PValue __pos(PNode*, SymbolTable*, bool*);
extern PValue __prevfam(PNode*, SymbolTable*, bool*);
extern PValue __previndi(PNode*, SymbolTable*, bool*);
extern PValue __prevsib(PNode*, SymbolTable*, bool*);
extern PValue __print(PNode*, SymbolTable*, bool*);
extern PValue __push(PNode*, SymbolTable*, bool*);
extern PValue __qt(PNode*, SymbolTable*, bool*);
extern PValue __reference(PNode*, SymbolTable*, bool*);
extern PValue __requeue(PNode*, SymbolTable*, bool*);
extern PValue __rjustify(PNode*, SymbolTable*, bool*);
extern PValue __roman(PNode*, SymbolTable*, bool*);
extern PValue __rot(PNode*, SymbolTable*, bool*);
extern PValue __row(PNode*, SymbolTable*, bool*);
extern PValue __save(PNode*, SymbolTable*, bool*);
extern PValue __savenode(PNode*, SymbolTable*, bool*);
extern PValue __set(PNode*, SymbolTable*, bool*);
extern PValue __setel(PNode*, SymbolTable*, bool*);
extern PValue __sex(PNode*, SymbolTable*, bool*);
extern PValue __short(PNode*, SymbolTable*, bool*);
extern PValue __sibling(PNode*, SymbolTable*, bool*);
extern PValue __siblingset(PNode*, SymbolTable*, bool*);
extern PValue __soundex(PNode*, SymbolTable*, bool*);
extern PValue __space(PNode*, SymbolTable*, bool*);
extern PValue __spouseset(PNode*, SymbolTable*, bool*);
extern PValue __stddate(PNode*, SymbolTable*, bool*);
extern PValue __strcmp(PNode*, SymbolTable*, bool*);
extern PValue __strlen(PNode*, SymbolTable*, bool*);
extern PValue __strsoundex(PNode*, SymbolTable*, bool*);
extern PValue __strtoint(PNode*, SymbolTable*, bool*);
extern PValue __sub(PNode*, SymbolTable*, bool*);
extern PValue __substring(PNode*, SymbolTable*, bool*);
extern PValue __surname(PNode*, SymbolTable*, bool*);
extern PValue __system(PNode*, SymbolTable*, bool*);
extern PValue __table(PNode*, SymbolTable*, bool*);
extern PValue __tag(PNode*, SymbolTable*, bool*);
extern PValue __title(PNode*, SymbolTable*, bool*);
extern PValue __trim(PNode*, SymbolTable*, bool*);
extern PValue __trimname(PNode*, SymbolTable*, bool*);
extern PValue __union(PNode*, SymbolTable*, bool*);
extern PValue __uniqueset(PNode*, SymbolTable*, bool*);
extern PValue __unlock(PNode*, SymbolTable*, bool*);
extern PValue __upper(PNode*, SymbolTable*, bool*);
extern PValue __value(PNode*, SymbolTable*, bool*);
extern PValue __valuesort(PNode*, SymbolTable*, bool*);
extern PValue __version(PNode*, SymbolTable*, bool*);
extern PValue __wife(PNode*, SymbolTable*, bool*);
extern PValue __xref(PNode*, SymbolTable*, bool*);
extern PValue __year(PNode*, SymbolTable*, bool*);

extern PValue __noop(PNode*, SymbolTable*, bool*);

#endif /* builtintable_h */
