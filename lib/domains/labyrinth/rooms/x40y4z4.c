inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 4, 4 }));
  set_short( "Corridor - x40y4z4" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y4z4.c",
  "east" : DIR+"/rooms/x41y4z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crap in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
