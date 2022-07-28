inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 50, 2 }));
  set_short( "Hallway - x32y50z2" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y50z2.c",
  "east" : DIR+"/rooms/x33y50z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
