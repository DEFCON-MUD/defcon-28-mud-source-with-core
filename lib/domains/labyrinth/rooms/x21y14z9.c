inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 14, 9 }));
  set_short( "Passage - x21y14z9" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x22y14z9.c",
  "north" : DIR+"/rooms/x21y15z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
