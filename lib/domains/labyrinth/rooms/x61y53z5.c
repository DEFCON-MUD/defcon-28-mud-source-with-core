inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 53, 5 }));
  set_short( "Hallway - x61y53z5" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y54z5.c",
  "south" : DIR+"/rooms/x61y52z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with liquid. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
