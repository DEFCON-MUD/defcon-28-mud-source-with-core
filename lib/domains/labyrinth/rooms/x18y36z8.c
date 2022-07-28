inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 36, 8 }));
  set_short( "Corridor - x18y36z8" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y36z8.c",
  "east" : DIR+"/rooms/x19y36z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the glorzo in this hellhole. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
