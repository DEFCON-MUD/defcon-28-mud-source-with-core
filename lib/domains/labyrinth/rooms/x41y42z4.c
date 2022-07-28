inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 42, 4 }));
  set_short( "Hallway - x41y42z4" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y42z4.c",
  "north" : DIR+"/rooms/x41y43z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
