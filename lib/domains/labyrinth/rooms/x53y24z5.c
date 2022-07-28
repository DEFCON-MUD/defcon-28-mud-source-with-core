inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 24, 5 }));
  set_short( "Passage - x53y24z5" );
set_objects( DIR+"/npc/rachel.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y24z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the gunk in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west.%^RESET%^");
}
