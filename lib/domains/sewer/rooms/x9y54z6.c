inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 54, 6 }));
  set_short( "Corridor - x9y54z6" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "north" : DIR+"/rooms/x9y55z6.c",
  "south" : DIR+"/rooms/x9y53z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
