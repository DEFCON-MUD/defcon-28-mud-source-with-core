inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 48, 0 }));
  set_short( "Corridor - x39y48z0" );
set_objects( DIR+"/npc/tinyweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y48z0.c",
  "east" : DIR+"/rooms/x40y48z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
