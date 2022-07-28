inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 4, 1 }));
  set_short( "Passage - x42y4z1" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y4z1.c",
  "east" : DIR+"/rooms/x43y4z1.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
