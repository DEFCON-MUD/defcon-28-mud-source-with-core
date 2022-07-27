inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 12, 5 }));
  set_short( "Hallway - x51y12z5" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x52y12z5.c",
  "north" : DIR+"/rooms/x51y13z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
