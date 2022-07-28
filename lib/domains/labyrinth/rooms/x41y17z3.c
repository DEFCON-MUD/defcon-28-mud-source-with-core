inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 17, 3 }));
  set_short( "Passage - x41y17z3" );
set_objects( DIR+"/npc/jackie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y18z3.c",
  "south" : DIR+"/rooms/x41y16z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
