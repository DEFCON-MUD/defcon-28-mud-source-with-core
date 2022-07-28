inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 4, 0 }));
  set_short( "Passage - x31y4z0" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y4z0.c",
  "south" : DIR+"/rooms/x31y3z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crappy sales material in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
