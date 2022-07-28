inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 6, 1 }));
  set_short( "Passage - x40y6z1" );
set_objects( DIR+"/npc/treelizard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y6z1.c",
  "east" : DIR+"/rooms/x41y6z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
