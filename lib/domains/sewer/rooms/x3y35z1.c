inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 35, 1 }));
  set_short( "Corridor - x3y35z1" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x3y36z1.c",
  "south" : DIR+"/rooms/x3y34z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crap in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
