inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 50, 7 }));
  set_short( "Corridor - x45y50z7" );
set_objects( DIR+"/monsters/warrior.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y50z7.c",
  "south" : DIR+"/rooms/x45y49z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
