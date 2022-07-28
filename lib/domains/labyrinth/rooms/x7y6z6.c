inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 6, 6 }));
  set_short( "Corridor - x7y6z6" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y6z6.c",
  "north" : DIR+"/rooms/x7y7z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
