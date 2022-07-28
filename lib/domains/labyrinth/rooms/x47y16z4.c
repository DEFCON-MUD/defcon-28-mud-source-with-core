inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 16, 4 }));
  set_short( "Corridor - x47y16z4" );
set_objects( DIR+"/npc/valerie.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y16z4.c",
  "north" : DIR+"/rooms/x47y17z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
