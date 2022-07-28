inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 20, 6 }));
  set_short( "Passage - x6y20z6" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y20z6.c",
  "east" : DIR+"/rooms/x7y20z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
