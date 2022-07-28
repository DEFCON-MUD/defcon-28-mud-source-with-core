inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 38, 9 }));
  set_short( "Hallway - x17y38z9" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y39z9.c",
  "south" : DIR+"/rooms/x17y37z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
