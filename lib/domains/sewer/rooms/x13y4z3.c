inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 4, 3 }));
  set_short( "Corridor - x13y4z3" );
set_objects( DIR+"/monsters/watersnake.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y4z3.c",
  "north" : DIR+"/rooms/x13y5z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
