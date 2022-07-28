inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 30, 7 }));
  set_short( "Passage - x32y30z7" );
set_objects( DIR+"/npc/prisonfreddie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y30z7.c",
  "east" : DIR+"/rooms/x33y30z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
