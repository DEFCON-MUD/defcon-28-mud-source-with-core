inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 4, 8 }));
  set_short( "Hallway - x35y4z8" );
set_objects( DIR+"/monsters/edwardio.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y4z8.c",
  "north" : DIR+"/rooms/x35y5z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the sludge in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
