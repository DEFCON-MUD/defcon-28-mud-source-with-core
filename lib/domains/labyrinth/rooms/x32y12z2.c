inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 12, 2 }));
  set_short( "Corridor - x32y12z2" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y12z2.c",
  "east" : DIR+"/rooms/x33y12z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
