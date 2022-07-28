inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 8, 4 }));
  set_short( "Passage - x43y8z4" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y8z4.c",
  "south" : DIR+"/rooms/x43y7z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the muck in this dump. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
