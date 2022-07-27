inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 64, 8 }));
  set_short( "Hallway - x56y64z8" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y64z8.c",
  "east" : DIR+"/rooms/x57y64z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
