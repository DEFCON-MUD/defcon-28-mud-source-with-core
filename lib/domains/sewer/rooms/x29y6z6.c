inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 6, 6 }));
  set_short( "Passage - x29y6z6" );
set_objects( DIR+"/monsters/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x29y7z6.c",
  "south" : DIR+"/rooms/x29y5z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......CypherCon.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
