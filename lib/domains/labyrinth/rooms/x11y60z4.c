inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 60, 4 }));
  set_short( "Corridor - x11y60z4" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y60z4.c",
  "north" : DIR+"/rooms/x11y61z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
