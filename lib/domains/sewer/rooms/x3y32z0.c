inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 32, 0 }));
  set_short( "Hallway - x3y32z0" );
set_objects( DIR+"/monsters/autod.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y32z0.c",
  "south" : DIR+"/rooms/x3y31z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
