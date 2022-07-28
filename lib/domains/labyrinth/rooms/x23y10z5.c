inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 10, 5 }));
  set_short( "Hallway - x23y10z5" );
set_objects( DIR+"/npc/r1marilynn.c");
 set_exits( ([
  "south" : DIR+"/rooms/x23y9z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
