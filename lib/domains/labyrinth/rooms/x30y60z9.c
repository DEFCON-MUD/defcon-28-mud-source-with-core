inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 60, 9 }));
  set_short( "Hallway - x30y60z9" );
set_objects( DIR+"/npc/repairdroid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y60z9.c",
  "east" : DIR+"/rooms/x31y60z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this sty. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
