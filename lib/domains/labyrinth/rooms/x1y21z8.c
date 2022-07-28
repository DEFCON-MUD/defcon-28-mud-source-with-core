inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 21, 8 }));
  set_short( "Passage - x1y21z8" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y22z8.c",
  "south" : DIR+"/rooms/x1y20z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crud in this area. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
