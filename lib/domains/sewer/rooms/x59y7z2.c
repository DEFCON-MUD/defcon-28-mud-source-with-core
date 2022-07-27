inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 7, 2 }));
  set_short( "Corridor - x59y7z2" );
set_objects( DIR+"/monsters/bob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y8z2.c",
  "south" : DIR+"/rooms/x59y6z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the gunk in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
