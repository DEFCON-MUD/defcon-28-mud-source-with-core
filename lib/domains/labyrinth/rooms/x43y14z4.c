inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 14, 4 }));
  set_short( "Passage - x43y14z4" );
set_objects( DIR+"/npc/james.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y14z4.c",
  "south" : DIR+"/rooms/x43y13z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
