inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 8, 5 }));
  set_short( "Passage - x45y8z5" );
set_objects( DIR+"/monsters/vern.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y8z5.c",
  "north" : DIR+"/rooms/x45y9z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
