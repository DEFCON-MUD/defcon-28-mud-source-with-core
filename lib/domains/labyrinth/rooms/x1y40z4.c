inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 40, 4 }));
  set_short( "Hallway - x1y40z4" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y41z4.c",
  "south" : DIR+"/rooms/x1y39z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
