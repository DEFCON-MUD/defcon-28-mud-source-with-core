inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 33, 9 }));
  set_short( "Passage - x57y33z9" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y34z9.c",
  "south" : DIR+"/rooms/x57y32z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the glorzo in this sty. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
