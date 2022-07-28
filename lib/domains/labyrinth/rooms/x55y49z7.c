inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 49, 7 }));
  set_short( "Hallway - x55y49z7" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y50z7.c",
  "south" : DIR+"/rooms/x55y48z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
