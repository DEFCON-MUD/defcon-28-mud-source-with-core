inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 56, 4 }));
  set_short( "Hallway - x35y56z4" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y56z4.c",
  "north" : DIR+"/rooms/x35y57z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this joint. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and north.%^RESET%^");
}
