inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 26, 8 }));
  set_short( "Hallway - x55y26z8" );
set_objects( DIR+"/monsters/randy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y26z8.c",
  "north" : DIR+"/rooms/x55y27z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
