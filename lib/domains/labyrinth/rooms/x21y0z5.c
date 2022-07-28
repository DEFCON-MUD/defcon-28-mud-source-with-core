inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 0, 5 }));
  set_short( "Corridor - x21y0z5" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y0z5.c",
  "east" : DIR+"/rooms/x22y0z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this stink-pit. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
