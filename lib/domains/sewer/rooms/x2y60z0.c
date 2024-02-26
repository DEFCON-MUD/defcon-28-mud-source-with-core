inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 2, 60, 0 }));
  set_short( "Corridor - x2y60z0" );
set_objects( DIR+"/monsters/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x1y60z0.c",
  "east" : DIR+"/rooms/x3y60z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
