inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 62, 1 }));
  set_short( "Passage - x41y62z1" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y62z1.c",
  "east" : DIR+"/rooms/x42y62z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the radioactive waste in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
