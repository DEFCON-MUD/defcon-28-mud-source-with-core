inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 56, 0 }));
  set_short( "Passage - x4y56z0" );
set_objects( DIR+"/npc/technician.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y56z0.c",
  "east" : DIR+"/rooms/x5y56z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
