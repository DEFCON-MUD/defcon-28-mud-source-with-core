inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 32, 2 }));
  set_short( "Hallway - x37y32z2" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y32z2.c",
  "south" : DIR+"/rooms/x37y31z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
