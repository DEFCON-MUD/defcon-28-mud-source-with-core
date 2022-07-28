inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 17, 4 }));
  set_short( "Passage - x1y17z4" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y18z4.c",
  "south" : DIR+"/rooms/x1y16z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
