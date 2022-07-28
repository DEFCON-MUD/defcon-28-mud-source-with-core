inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 0, 8 }));
  set_short( "Passage - x18y0z8" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y0z8.c",
  "east" : DIR+"/rooms/x19y0z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
