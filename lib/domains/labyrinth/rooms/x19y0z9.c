inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 0, 9 }));
  set_short( "Corridor - x19y0z9" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y0z9.c",
  "east" : DIR+"/rooms/x20y0z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this area. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
