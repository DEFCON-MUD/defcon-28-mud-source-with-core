inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 4, 1 }));
  set_short( "Corridor - x4y4z1" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y4z1.c",
  "east" : DIR+"/rooms/x5y4z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
