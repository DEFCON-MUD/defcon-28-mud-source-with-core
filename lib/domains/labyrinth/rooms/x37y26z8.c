inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 26, 8 }));
  set_short( "Corridor - x37y26z8" );
set_objects( DIR+"/npc/r1elaine.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y26z8.c",
  "north" : DIR+"/rooms/x37y27z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the gunk in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
