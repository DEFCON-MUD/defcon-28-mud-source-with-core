inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 62, 1 }));
  set_short( "Hallway - x9y62z1" );
set_objects( DIR+"/monsters/glorzo.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y62z1.c",
  "south" : DIR+"/rooms/x9y61z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
