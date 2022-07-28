inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 26, 5 }));
  set_short( "Corridor - x52y26z5" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y26z5.c",
  "east" : DIR+"/rooms/x53y26z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the crappy sales material in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
