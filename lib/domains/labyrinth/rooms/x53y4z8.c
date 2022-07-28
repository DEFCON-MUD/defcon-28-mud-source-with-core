inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 4, 8 }));
  set_short( "Hallway - x53y4z8" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y5z8.c",
  "south" : DIR+"/rooms/x53y3z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the gunk in this stink-pit. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
