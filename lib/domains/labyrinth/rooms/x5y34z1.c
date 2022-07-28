inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 34, 1 }));
  set_short( "Hallway - x5y34z1" );
set_objects( DIR+"/npc/vern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y34z1.c",
  "east" : DIR+"/rooms/x6y34z1.c",
  "south" : DIR+"/rooms/x5y33z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, east, and west.%^RESET%^");
}
