inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 42, 9 }));
  set_short( "Hallway - x29y42z9" );
set_objects( DIR+"/npc/smallweevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y42z9.c",
  "north" : DIR+"/rooms/x29y43z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and north.%^RESET%^");
}
