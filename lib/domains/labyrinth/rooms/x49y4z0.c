inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 4, 0 }));
  set_short( "Corridor - x49y4z0" );
set_objects( DIR+"/npc/tangleweed.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y4z0.c",
  "north" : DIR+"/rooms/x49y5z0.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
