inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 14, 3 }));
  set_short( "Corridor - x11y14z3" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y14z3.c",
  "south" : DIR+"/rooms/x11y13z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the muck in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
