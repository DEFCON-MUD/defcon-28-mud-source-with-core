inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 36, 7 }));
  set_short( "Passage - x47y36z7" );
set_objects( DIR+"/npc/log.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y36z7.c",
  "south" : DIR+"/rooms/x47y35z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
