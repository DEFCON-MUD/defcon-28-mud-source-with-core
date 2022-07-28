inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 41, 4 }));
  set_short( "Hallway - x1y41z4" );
set_objects( DIR+"/npc/largeheptopsquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y42z4.c",
  "south" : DIR+"/rooms/x1y40z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
