inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 34, 4 }));
  set_short( "Passage - x35y34z4" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y34z4.c",
  "north" : DIR+"/rooms/x35y35z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
