inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 32, 4 }));
  set_short( "Hallway - x55y32z4" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y32z4.c",
  "south" : DIR+"/rooms/x55y31z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
