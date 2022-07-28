inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 15, 1 }));
  set_short( "Passage - x17y15z1" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y16z1.c",
  "south" : DIR+"/rooms/x17y14z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the radioactive waste in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
