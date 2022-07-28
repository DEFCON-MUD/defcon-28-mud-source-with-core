inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 35, 0 }));
  set_short( "Passage - x31y35z0" );
set_objects( DIR+"/npc/goon.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y36z0.c",
  "south" : DIR+"/rooms/x31y34z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
