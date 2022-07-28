inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 20, 9 }));
  set_short( "Passage - x55y20z9" );
set_objects( DIR+"/npc/cellguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y20z9.c",
  "south" : DIR+"/rooms/x55y19z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
