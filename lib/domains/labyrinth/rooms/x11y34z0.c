inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 34, 0 }));
  set_short( "Hallway - x11y34z0" );
set_objects( DIR+"/npc/massiveweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y34z0.c",
  "north" : DIR+"/rooms/x11y35z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
