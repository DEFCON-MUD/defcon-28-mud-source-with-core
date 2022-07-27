inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 40, 4 }));
  set_short( "Hallway - x1y40z4" );
set_objects( DIR+"/monsters/biddleman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y41z4.c",
  "south" : DIR+"/rooms/x1y39z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
