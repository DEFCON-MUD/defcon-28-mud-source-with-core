inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 56, 3 }));
  set_short( "Corridor - x61y56z3" );
set_objects( DIR+"/monsters/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y57z3.c",
  "south" : DIR+"/rooms/x61y55z3.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
