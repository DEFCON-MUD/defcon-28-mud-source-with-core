inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 53, 9 }));
  set_short( "Passage - x41y53z9" );
set_objects( DIR+"/npc/colleen.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y54z9.c",
  "south" : DIR+"/rooms/x41y52z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
