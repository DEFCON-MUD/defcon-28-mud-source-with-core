inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 0, 4 }));
  set_short( "Corridor - x25y0z4" );
set_objects( DIR+"/monsters/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y0z4.c",
  "east" : DIR+"/rooms/x26y0z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
