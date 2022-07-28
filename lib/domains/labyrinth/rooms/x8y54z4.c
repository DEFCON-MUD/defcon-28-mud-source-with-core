inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 54, 4 }));
  set_short( "Corridor - x8y54z4" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y54z4.c",
  "east" : DIR+"/rooms/x9y54z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the sludge in this hellhole. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
