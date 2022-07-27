inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 6, 0 }));
  set_short( "Corridor - x33y6z0" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y6z0.c",
  "north" : DIR+"/rooms/x33y7z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the muck in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
