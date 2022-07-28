inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 49, 4 }));
  set_short( "Corridor - x53y49z4" );
set_objects( DIR+"/npc/dancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y50z4.c",
  "south" : DIR+"/rooms/x53y48z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crap in this stink-pit. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
