inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 10, 4 }));
  set_short( "Hallway - x42y10z4" );
set_objects( DIR+"/npc/mike.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y10z4.c",
  "east" : DIR+"/rooms/x43y10z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crap in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
