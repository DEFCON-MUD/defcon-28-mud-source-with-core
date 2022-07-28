inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 28, 2 }));
  set_short( "Hallway - x13y28z2" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y28z2.c",
  "east" : DIR+"/rooms/x14y28z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
