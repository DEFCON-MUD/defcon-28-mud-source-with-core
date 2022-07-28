inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 14, 1 }));
  set_short( "Passage - x36y14z1" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y14z1.c",
  "east" : DIR+"/rooms/x37y14z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
