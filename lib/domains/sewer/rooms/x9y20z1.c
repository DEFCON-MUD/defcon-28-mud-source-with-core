inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 20, 1 }));
  set_short( "Passage - x9y20z1" );
set_objects( DIR+"/monsters/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y21z1.c",
  "south" : DIR+"/rooms/x9y19z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
