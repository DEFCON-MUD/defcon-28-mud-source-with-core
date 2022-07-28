inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 5, 8 }));
  set_short( "Corridor - x47y5z8" );
set_objects( DIR+"/npc/manny.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y6z8.c",
  "south" : DIR+"/rooms/x47y4z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
