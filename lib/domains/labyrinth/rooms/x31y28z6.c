inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 28, 6 }));
  set_short( "Hallway - x31y28z6" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y29z6.c",
  "south" : DIR+"/rooms/x31y27z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this stink-pit. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
