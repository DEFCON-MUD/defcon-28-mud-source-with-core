inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 51, 7 }));
  set_short( "Passage - x1y51z7" );
set_objects( DIR+"/monsters/goon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y52z7.c",
  "south" : DIR+"/rooms/x1y50z7.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
