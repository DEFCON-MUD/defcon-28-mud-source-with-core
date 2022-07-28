inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 12, 6 }));
  set_short( "Hallway - x59y12z6" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y12z6.c",
  "north" : DIR+"/rooms/x59y13z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
