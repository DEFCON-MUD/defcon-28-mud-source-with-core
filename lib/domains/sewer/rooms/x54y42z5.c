inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 42, 5 }));
  set_short( "Passage - x54y42z5" );
set_objects( DIR+"/monsters/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y42z5.c",
  "east" : DIR+"/rooms/x55y42z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the muck in this area. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
