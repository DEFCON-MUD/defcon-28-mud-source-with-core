inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 38, 0 }));
  set_short( "Corridor - x23y38z0" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y39z0.c",
  "south" : DIR+"/rooms/x23y37z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the muck in this stink-pit. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
