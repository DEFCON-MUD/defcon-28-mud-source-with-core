inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 22, 4 }));
  set_short( "Corridor - x53y22z4" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y22z4.c",
  "north" : DIR+"/rooms/x53y23z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and north.%^RESET%^");
}
