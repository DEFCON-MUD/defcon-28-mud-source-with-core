inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 32, 3 }));
  set_short( "Passage - x39y32z3" );
set_objects( DIR+"/npc/snapperjaw.c");
 set_exits( ([
  "east" : DIR+"/rooms/x40y32z3.c",
  "south" : DIR+"/rooms/x39y31z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
