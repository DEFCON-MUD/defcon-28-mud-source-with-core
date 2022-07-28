inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 40, 2 }));
  set_short( "Hallway - x6y40z2" );
set_objects( DIR+"/npc/norman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y40z2.c",
  "east" : DIR+"/rooms/x7y40z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
