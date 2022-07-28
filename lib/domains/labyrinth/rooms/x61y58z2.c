inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 58, 2 }));
  set_short( "Passage - x61y58z2" );
set_objects( DIR+"/npc/heckle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y59z2.c",
  "south" : DIR+"/rooms/x61y57z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
