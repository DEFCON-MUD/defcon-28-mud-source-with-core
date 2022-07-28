inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 24, 3 }));
  set_short( "Hallway - x7y24z3" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y25z3.c",
  "south" : DIR+"/rooms/x7y23z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
