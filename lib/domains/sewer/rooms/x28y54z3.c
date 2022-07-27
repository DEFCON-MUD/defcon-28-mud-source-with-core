inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 54, 3 }));
  set_short( "Passage - x28y54z3" );
set_objects( DIR+"/monsters/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y54z3.c",
  "east" : DIR+"/rooms/x29y54z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
