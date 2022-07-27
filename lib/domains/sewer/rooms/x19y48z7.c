inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 48, 7 }));
  set_short( "Passage - x19y48z7" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "east" : DIR+"/rooms/x20y48z7.c",
  "north" : DIR+"/rooms/x19y49z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
