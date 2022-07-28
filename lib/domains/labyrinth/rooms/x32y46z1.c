inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 46, 1 }));
  set_short( "Passage - x32y46z1" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y46z1.c",
  "east" : DIR+"/rooms/x33y46z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with mud. The air is rather stagnant.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
