inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 57, 0 }));
  set_short( "Hallway - x23y57z0" );
set_objects( DIR+"/npc/largeheptosquid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y58z0.c",
  "south" : DIR+"/rooms/x23y56z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
