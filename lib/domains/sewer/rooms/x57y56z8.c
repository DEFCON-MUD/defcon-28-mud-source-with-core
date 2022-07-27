inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 56, 8 }));
  set_short( "Corridor - x57y56z8" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y56z8.c",
  "south" : DIR+"/rooms/x57y55z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
