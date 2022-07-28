inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 54, 9 }));
  set_short( "Hallway - x7y54z9" );
set_objects( DIR+"/npc/roger.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y55z9.c",
  "south" : DIR+"/rooms/x7y53z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this sty. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
