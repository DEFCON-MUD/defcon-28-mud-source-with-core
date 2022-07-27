inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 54, 7 }));
  set_short( "Hallway - x21y54z7" );
set_objects( DIR+"/monsters/daer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y54z7.c",
  "north" : DIR+"/rooms/x21y55z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
