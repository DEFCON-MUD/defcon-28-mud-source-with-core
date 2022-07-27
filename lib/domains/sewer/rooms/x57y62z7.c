inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 62, 7 }));
  set_short( "Hallway - x57y62z7" );
set_objects( DIR+"/monsters/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y62z7.c",
  "south" : DIR+"/rooms/x57y61z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the red glow of the crud in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
