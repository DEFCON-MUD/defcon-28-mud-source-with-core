inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 35, 6 }));
  set_short( "Passage - x21y35z6" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y36z6.c",
  "south" : DIR+"/rooms/x21y34z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the radioactive waste in this hellhole. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
