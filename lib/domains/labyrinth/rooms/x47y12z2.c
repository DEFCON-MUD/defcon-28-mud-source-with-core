inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 12, 2 }));
  set_short( "Passage - x47y12z2" );
set_objects( DIR+"/npc/professor.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y13z2.c",
  "south" : DIR+"/rooms/x47y11z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
