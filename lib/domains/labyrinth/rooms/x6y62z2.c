inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 62, 2 }));
  set_short( "Corridor - x6y62z2" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y62z2.c",
  "east" : DIR+"/rooms/x7y62z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the crap in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
