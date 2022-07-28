inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 34, 7 }));
  set_short( "Corridor - x55y34z7" );
set_objects( DIR+"/npc/powerdrone.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y34z7.c",
  "east" : DIR+"/rooms/x56y34z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
