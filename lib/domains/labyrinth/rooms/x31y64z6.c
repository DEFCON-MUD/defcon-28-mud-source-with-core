inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 64, 6 }));
  set_short( "Hallway - x31y64z6" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y64z6.c",
  "east" : DIR+"/rooms/x32y64z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
