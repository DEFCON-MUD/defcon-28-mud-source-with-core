inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 54, 3 }));
  set_short( "Corridor - x9y54z3" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x10y54z3.c",
  "south" : DIR+"/rooms/x9y53z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
