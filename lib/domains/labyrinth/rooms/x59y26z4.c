inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 26, 4 }));
  set_short( "Passage - x59y26z4" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y26z4.c",
  "south" : DIR+"/rooms/x59y25z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
