inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 28, 6 }));
  set_short( "Corridor - x19y28z6" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y29z6.c",
  "south" : DIR+"/rooms/x19y27z6.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
