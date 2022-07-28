inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 40, 3 }));
  set_short( "Corridor - x11y40z3" );
set_objects( DIR+"/npc/jeff.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y40z3.c",
  "south" : DIR+"/rooms/x11y39z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the glorzo in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
