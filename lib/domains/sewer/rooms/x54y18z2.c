inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 18, 2 }));
  set_short( "Hallway - x54y18z2" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y18z2.c",
  "east" : DIR+"/rooms/x55y18z2.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
