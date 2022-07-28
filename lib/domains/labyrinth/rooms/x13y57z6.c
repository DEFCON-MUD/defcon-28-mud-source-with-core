inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 57, 6 }));
  set_short( "Hallway - x13y57z6" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y58z6.c",
  "south" : DIR+"/rooms/x13y56z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
