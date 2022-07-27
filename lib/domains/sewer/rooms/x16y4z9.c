inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 4, 9 }));
  set_short( "Hallway - x16y4z9" );
set_objects( DIR+"/monsters/drone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y4z9.c",
  "east" : DIR+"/rooms/x17y4z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
