inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 58, 1 }));
  set_short( "Corridor - x41y58z1" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y58z1.c",
  "east" : DIR+"/rooms/x42y58z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
