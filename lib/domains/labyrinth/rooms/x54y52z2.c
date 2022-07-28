inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 52, 2 }));
  set_short( "Hallway - x54y52z2" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y52z2.c",
  "east" : DIR+"/rooms/x55y52z2.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
