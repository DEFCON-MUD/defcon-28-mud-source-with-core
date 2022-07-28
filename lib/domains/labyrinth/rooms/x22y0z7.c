inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 22, 0, 7 }));
  set_short( "Hallway - x22y0z7" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x21y0z7.c",
  "east" : DIR+"/rooms/x23y0z7.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
