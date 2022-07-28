inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 20, 3 }));
  set_short( "Corridor - x50y20z3" );
set_objects( DIR+"/npc/constrictor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y20z3.c",
  "east" : DIR+"/rooms/x51y20z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
