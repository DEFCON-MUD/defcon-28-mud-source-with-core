inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 14, 6 }));
  set_short( "Hallway - x33y14z6" );
set_objects( DIR+"/monsters/repairdroid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y14z6.c",
  "north" : DIR+"/rooms/x33y15z6.c",
  "south" : DIR+"/rooms/x33y13z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
