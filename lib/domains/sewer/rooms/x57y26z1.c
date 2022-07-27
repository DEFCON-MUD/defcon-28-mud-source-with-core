inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 26, 1 }));
  set_short( "Passage - x57y26z1" );
set_objects( DIR+"/monsters/goldfish.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y26z1.c",
  "north" : DIR+"/rooms/x57y27z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
