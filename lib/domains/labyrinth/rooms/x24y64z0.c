inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 64, 0 }));
  set_short( "Hallway - x24y64z0" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y64z0.c",
  "east" : DIR+"/rooms/x25y64z0.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
