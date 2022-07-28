inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 54, 0 }));
  set_short( "Corridor - x37y54z0" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "east" : DIR+"/rooms/x38y54z0.c",
  "south" : DIR+"/rooms/x37y53z0.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the gunk in this dump. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nTunnels can be found to the east, and west.%^RESET%^");
}
