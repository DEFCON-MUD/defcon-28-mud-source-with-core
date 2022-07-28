inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 60, 34, 9 }));
  set_short( "Passage - x60y34z9" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x59y34z9.c",
  "east" : DIR+"/rooms/x61y34z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
