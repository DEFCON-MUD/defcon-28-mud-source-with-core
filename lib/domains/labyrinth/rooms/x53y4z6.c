inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 4, 6 }));
  set_short( "Corridor - x53y4z6" );
set_objects( DIR+"/npc/shelledheptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y4z6.c",
  "east" : DIR+"/rooms/x54y4z6.c",
  "north" : DIR+"/rooms/x53y5z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
