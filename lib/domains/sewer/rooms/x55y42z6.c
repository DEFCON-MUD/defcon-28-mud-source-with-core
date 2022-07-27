inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 42, 6 }));
  set_short( "Corridor - x55y42z6" );
set_objects( DIR+"/monsters/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x55y43z6.c",
  "south" : DIR+"/rooms/x55y41z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
