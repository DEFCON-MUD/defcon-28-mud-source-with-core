inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 2, 2 }));
  set_short( "Corridor - x33y2z2" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y2z2.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east.%^RESET%^");
}
