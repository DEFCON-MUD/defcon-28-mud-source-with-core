inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 48, 3 }));
  set_short( "Passage - x34y48z3" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y48z3.c",
  "east" : DIR+"/rooms/x35y48z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the gunk in this sty. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
