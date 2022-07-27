inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 28, 0, 9 }));
  set_short( "Corridor - x28y0z9" );
set_objects( DIR+"/monsters/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x27y0z9.c",
  "east" : DIR+"/rooms/x29y0z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
