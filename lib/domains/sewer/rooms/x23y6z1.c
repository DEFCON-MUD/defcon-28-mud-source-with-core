inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 6, 1 }));
  set_short( "Hallway - x23y6z1" );
set_objects( DIR+"/monsters/jkbk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y6z1.c",
  "north" : DIR+"/rooms/x23y7z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
