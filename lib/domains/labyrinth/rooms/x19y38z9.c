inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 38, 9 }));
  set_short( "Passage - x19y38z9" );
set_objects( DIR+"/npc/japanesebeetle.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y39z9.c",
  "south" : DIR+"/rooms/x19y37z9.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
