inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 56, 2 }));
  set_short( "Corridor - x51y56z2" );
set_objects( DIR+"/npc/pasties.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y56z2.c",
  "east" : DIR+"/rooms/x52y56z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
