inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 56, 5 }));
  set_short( "Passage - x13y56z5" );
set_objects( DIR+"/npc/grunt.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y56z5.c",
  "south" : DIR+"/rooms/x13y55z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the random junk evilmog thought up in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
