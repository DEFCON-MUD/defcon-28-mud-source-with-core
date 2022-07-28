inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 62, 3 }));
  set_short( "Passage - x47y62z3" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y62z3.c",
  "east" : DIR+"/rooms/x48y62z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crap in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
