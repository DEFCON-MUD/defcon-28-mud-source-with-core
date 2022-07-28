inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 44, 5 }));
  set_short( "Corridor - x23y44z5" );
set_objects( DIR+"/npc/raddyzoon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y44z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west.%^RESET%^");
}
