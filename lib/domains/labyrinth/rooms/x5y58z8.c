inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 58, 8 }));
  set_short( "Passage - x5y58z8" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y58z8.c",
  "east" : DIR+"/rooms/x6y58z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
