inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 46, 2 }));
  set_short( "Passage - x47y46z2" );
set_objects( DIR+"/npc/peter.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y46z2.c",
  "south" : DIR+"/rooms/x47y45z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this stink-pit. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and west.%^RESET%^");
}
