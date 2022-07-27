inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 31, 3 }));
  set_short( "Hallway - x37y31z3" );
set_objects( DIR+"/monsters/smallweevil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y32z3.c",
  "south" : DIR+"/rooms/x37y30z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
