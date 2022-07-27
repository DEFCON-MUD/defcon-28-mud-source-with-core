inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 34, 9 }));
  set_short( "Hallway - x17y34z9" );
set_objects( DIR+"/monsters/largeheptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x18y34z9.c",
  "north" : DIR+"/rooms/x17y35z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
