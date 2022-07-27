inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 54, 8 }));
  set_short( "Hallway - x2y54z8" );
set_objects( DIR+"/monsters/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y54z8.c",
  "east" : DIR+"/rooms/x3y54z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
