inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 12, 5 }));
  set_short( "Passage - x45y12z5" );
set_objects( DIR+"/npc/tiffany.c");
 set_exits( ([
  "east" : DIR+"/rooms/x46y12z5.c",
  "north" : DIR+"/rooms/x45y13z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
