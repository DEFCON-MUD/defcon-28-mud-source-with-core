inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 32, 0 }));
  set_short( "Passage - x55y32z0" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y33z0.c",
  "south" : DIR+"/rooms/x55y31z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crappy sales material in this dump. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
