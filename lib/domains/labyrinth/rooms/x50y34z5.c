inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 34, 5 }));
  set_short( "Corridor - x50y34z5" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y34z5.c",
  "east" : DIR+"/rooms/x51y34z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
