inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 60, 4 }));
  set_short( "Passage - x46y60z4" );
set_objects( DIR+"/npc/carrierpigeon.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y60z4.c",
  "east" : DIR+"/rooms/x47y60z4.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
