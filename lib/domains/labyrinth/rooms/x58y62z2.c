inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 62, 2 }));
  set_short( "Passage - x58y62z2" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y62z2.c",
  "east" : DIR+"/rooms/x59y62z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the glorzo in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
