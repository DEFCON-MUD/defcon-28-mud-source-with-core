inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 4, 2 }));
  set_short( "Passage - x46y4z2" );
set_objects( DIR+"/monsters/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y4z2.c",
  "east" : DIR+"/rooms/x47y4z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the random junk evilmog thought up in this joint. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
