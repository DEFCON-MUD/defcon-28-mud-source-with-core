inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 24, 3 }));
  set_short( "Hallway - x50y24z3" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y24z3.c",
  "east" : DIR+"/rooms/x51y24z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
