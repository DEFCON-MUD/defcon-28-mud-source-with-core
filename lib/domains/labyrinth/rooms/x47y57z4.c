inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 57, 4 }));
  set_short( "Corridor - x47y57z4" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y58z4.c",
  "south" : DIR+"/rooms/x47y56z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
