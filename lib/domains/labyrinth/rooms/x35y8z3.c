inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 8, 3 }));
  set_short( "Corridor - x35y8z3" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y8z3.c",
  "east" : DIR+"/rooms/x36y8z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
