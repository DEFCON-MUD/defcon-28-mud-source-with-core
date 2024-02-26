inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 58, 6 }));
  set_short( "Corridor - x26y58z6" );
set_objects( DIR+"/monsters/droid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y58z6.c",
  "east" : DIR+"/rooms/x27y58z6.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
