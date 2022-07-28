inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 0, 1 }));
  set_short( "Corridor - x33y0z1" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x32y0z1.c",
  "east" : DIR+"/rooms/x34y0z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
