inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 28, 0 }));
  set_short( "Hallway - x59y28z0" );
set_objects( DIR+"/monsters/northdomeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y29z0.c",
  "south" : DIR+"/rooms/x59y27z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
