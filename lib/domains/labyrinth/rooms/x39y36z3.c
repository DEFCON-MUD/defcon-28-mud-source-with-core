inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 36, 3 }));
  set_short( "Corridor - x39y36z3" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y36z3.c",
  "south" : DIR+"/rooms/x39y35z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
