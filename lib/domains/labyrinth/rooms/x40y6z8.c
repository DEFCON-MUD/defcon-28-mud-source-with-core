inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 6, 8 }));
  set_short( "Hallway - x40y6z8" );
set_objects( DIR+"/npc/mamba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y6z8.c",
  "east" : DIR+"/rooms/x41y6z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the radioactive waste in this dump. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
