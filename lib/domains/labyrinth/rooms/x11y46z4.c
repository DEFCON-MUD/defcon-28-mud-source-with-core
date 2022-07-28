inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 46, 4 }));
  set_short( "Passage - x11y46z4" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y46z4.c",
  "north" : DIR+"/rooms/x11y47z4.c",
  "south" : DIR+"/rooms/x11y45z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, north, and west.%^RESET%^");
}
