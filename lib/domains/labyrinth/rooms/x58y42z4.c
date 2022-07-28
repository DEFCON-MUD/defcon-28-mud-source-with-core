inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 42, 4 }));
  set_short( "Passage - x58y42z4" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y42z4.c",
  "east" : DIR+"/rooms/x59y42z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crap in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
