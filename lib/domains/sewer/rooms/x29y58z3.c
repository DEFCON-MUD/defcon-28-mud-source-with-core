inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 58, 3 }));
  set_short( "Corridor - x29y58z3" );
set_objects( DIR+"/monsters/mei.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y58z3.c",
  "south" : DIR+"/rooms/x29y57z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the radioactive waste in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
