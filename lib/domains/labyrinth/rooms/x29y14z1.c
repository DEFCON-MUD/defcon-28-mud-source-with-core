inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 14, 1 }));
  set_short( "Hallway - x29y14z1" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y14z1.c",
  "east" : DIR+"/rooms/x30y14z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
