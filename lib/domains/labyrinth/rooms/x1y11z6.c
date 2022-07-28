inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 11, 6 }));
  set_short( "Hallway - x1y11z6" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y12z6.c",
  "south" : DIR+"/rooms/x1y10z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the green glow of the gunk in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
