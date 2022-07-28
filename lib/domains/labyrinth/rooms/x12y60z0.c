inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 60, 0 }));
  set_short( "Passage - x12y60z0" );
set_objects( DIR+"/npc/r1mandrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y60z0.c",
  "east" : DIR+"/rooms/x13y60z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
