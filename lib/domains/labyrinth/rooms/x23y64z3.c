inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 64, 3 }));
  set_short( "Corridor - x23y64z3" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y64z3.c",
  "east" : DIR+"/rooms/x24y64z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
