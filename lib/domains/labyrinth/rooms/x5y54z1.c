inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 54, 1 }));
  set_short( "Corridor - x5y54z1" );
set_objects( DIR+"/npc/buddypetersen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y54z1.c",
  "south" : DIR+"/rooms/x5y53z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the sludge in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
