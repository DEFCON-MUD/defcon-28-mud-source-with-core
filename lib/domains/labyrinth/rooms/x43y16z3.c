inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 16, 3 }));
  set_short( "Corridor - x43y16z3" );
set_objects( DIR+"/npc/wardenbrocke.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y16z3.c",
  "east" : DIR+"/rooms/x44y16z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
