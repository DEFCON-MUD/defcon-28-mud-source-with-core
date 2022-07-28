inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 2, 1 }));
  set_short( "Hallway - x10y2z1" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y2z1.c",
  "east" : DIR+"/rooms/x11y2z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
