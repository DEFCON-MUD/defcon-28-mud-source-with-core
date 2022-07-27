inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 52, 9 }));
  set_short( "Hallway - x37y52z9" );
set_objects( DIR+"/monsters/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x36y52z9.c",
  "north" : DIR+"/rooms/x37y53z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
