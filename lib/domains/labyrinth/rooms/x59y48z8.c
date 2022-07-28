inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 48, 8 }));
  set_short( "Passage - x59y48z8" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y48z8.c",
  "north" : DIR+"/rooms/x59y49z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this area. The walls and floors are covered with slime. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
