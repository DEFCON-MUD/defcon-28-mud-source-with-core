inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 54, 9 }));
  set_short( "Passage - x31y54z9" );
set_objects( DIR+"/npc/blob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y54z9.c",
  "east" : DIR+"/rooms/x32y54z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the muck in this hellhole. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
