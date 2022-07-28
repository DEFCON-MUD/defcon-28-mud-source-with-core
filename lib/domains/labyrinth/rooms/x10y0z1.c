inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 10, 0, 1 }));
  set_short( "Hallway - x10y0z1" );
set_objects( DIR+"/npc/enforcer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x9y0z1.c",
  "east" : DIR+"/rooms/x11y0z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
