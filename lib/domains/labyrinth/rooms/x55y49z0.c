inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 49, 0 }));
  set_short( "Hallway - x55y49z0" );
set_objects( DIR+"/npc/wellin.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y50z0.c",
  "south" : DIR+"/rooms/x55y48z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
