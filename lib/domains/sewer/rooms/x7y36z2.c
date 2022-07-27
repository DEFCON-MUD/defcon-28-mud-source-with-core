inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 36, 2 }));
  set_short( "Corridor - x7y36z2" );
set_objects( DIR+"/monsters/grunt.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y36z2.c",
  "north" : DIR+"/rooms/x7y37z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the random junk evilmog thought up in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
