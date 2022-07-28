inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 6, 3 }));
  set_short( "Corridor - x52y6z3" );
set_objects( DIR+"/npc/horace.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y6z3.c",
  "east" : DIR+"/rooms/x53y6z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
