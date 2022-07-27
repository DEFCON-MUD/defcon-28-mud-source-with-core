inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 26, 3 }));
  set_short( "Hallway - x41y26z3" );
set_objects( DIR+"/monsters/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y26z3.c",
  "north" : DIR+"/rooms/x41y27z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
