inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 64, 4 }));
  set_short( "Hallway - x54y64z4" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y64z4.c",
  "east" : DIR+"/rooms/x55y64z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the muck in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
