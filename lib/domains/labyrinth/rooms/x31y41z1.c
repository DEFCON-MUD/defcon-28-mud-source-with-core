inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 41, 1 }));
  set_short( "Passage - x31y41z1" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y42z1.c",
  "south" : DIR+"/rooms/x31y40z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
