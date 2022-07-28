inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 64, 5 }));
  set_short( "Hallway - x40y64z5" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y64z5.c",
  "east" : DIR+"/rooms/x41y64z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the radioactive waste in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
