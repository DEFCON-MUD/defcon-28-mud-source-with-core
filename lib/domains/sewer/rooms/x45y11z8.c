inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 11, 8 }));
  set_short( "Corridor - x45y11z8" );
set_objects( DIR+"/monsters/panther.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y12z8.c",
  "south" : DIR+"/rooms/x45y10z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
