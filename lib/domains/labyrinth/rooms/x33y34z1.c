inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 34, 1 }));
  set_short( "Corridor - x33y34z1" );
set_objects( DIR+"/npc/boar.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y34z1.c",
  "east" : DIR+"/rooms/x34y34z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
