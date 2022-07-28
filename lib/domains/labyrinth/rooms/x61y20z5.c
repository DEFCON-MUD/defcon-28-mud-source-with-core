inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 20, 5 }));
  set_short( "Hallway - x61y20z5" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y21z5.c",
  "south" : DIR+"/rooms/x61y19z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
