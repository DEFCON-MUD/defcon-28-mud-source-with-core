inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 35, 7 }));
  set_short( "Passage - x25y35z7" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y36z7.c",
  "south" : DIR+"/rooms/x25y34z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
