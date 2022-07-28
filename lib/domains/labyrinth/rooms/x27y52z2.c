inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 52, 2 }));
  set_short( "Corridor - x27y52z2" );
set_objects( DIR+"/npc/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y52z2.c",
  "north" : DIR+"/rooms/x27y53z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
