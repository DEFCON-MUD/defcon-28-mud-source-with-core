inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 50, 8 }));
  set_short( "Hallway - x26y50z8" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y50z8.c",
  "east" : DIR+"/rooms/x27y50z8.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crap in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
