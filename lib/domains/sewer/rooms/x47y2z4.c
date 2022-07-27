inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 2, 4 }));
  set_short( "Hallway - x47y2z4" );
set_objects( DIR+"/monsters/monkey.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y2z4.c",
  "north" : DIR+"/rooms/x47y3z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
