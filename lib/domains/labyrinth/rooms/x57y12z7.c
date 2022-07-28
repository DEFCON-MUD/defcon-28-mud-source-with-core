inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 12, 7 }));
  set_short( "Hallway - x57y12z7" );
set_objects( DIR+"/npc/torga.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y13z7.c",
  "south" : DIR+"/rooms/x57y11z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the north, and west.%^RESET%^");
}
