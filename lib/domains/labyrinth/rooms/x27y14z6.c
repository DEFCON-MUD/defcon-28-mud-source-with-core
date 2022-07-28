inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 14, 6 }));
  set_short( "Hallway - x27y14z6" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y14z6.c",
  "north" : DIR+"/rooms/x27y15z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
