inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 40, 2 }));
  set_short( "Hallway - x9y40z2" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y41z2.c",
  "south" : DIR+"/rooms/x9y39z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
