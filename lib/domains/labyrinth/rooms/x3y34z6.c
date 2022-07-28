inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 34, 6 }));
  set_short( "Passage - x3y34z6" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x2y34z6.c",
  "south" : DIR+"/rooms/x3y33z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
