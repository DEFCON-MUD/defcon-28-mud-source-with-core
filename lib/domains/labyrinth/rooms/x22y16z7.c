inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 16, 7 }));
  set_short( "Corridor - x22y16z7" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y16z7.c",
  "east" : DIR+"/rooms/x23y16z7.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
