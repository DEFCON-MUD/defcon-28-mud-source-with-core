inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 56, 0 }));
  set_short( "Hallway - x14y56z0" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y56z0.c",
  "east" : DIR+"/rooms/x15y56z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
