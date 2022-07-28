inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 4, 7 }));
  set_short( "Hallway - x4y4z7" );
set_objects( DIR+"/npc/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y4z7.c",
  "east" : DIR+"/rooms/x5y4z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
