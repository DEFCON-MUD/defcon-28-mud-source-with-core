inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 4, 8 }));
  set_short( "Corridor - x47y4z8" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y4z8.c",
  "north" : DIR+"/rooms/x47y5z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
