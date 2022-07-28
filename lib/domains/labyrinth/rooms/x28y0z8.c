inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 0, 8 }));
  set_short( "Corridor - x28y0z8" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y0z8.c",
  "east" : DIR+"/rooms/x29y0z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
