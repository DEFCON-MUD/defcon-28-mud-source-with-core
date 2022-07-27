inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 11, 0 }));
  set_short( "Passage - x53y11z0" );
set_objects( DIR+"/monsters/r1radiologist.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y12z0.c",
  "south" : DIR+"/rooms/x53y10z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
