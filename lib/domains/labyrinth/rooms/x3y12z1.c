inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 12, 1 }));
  set_short( "Corridor - x3y12z1" );
set_objects( DIR+"/npc/salik.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y12z1.c",
  "south" : DIR+"/rooms/x3y11z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the sludge in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
