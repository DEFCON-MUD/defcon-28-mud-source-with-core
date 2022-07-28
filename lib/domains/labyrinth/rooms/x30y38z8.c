inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 38, 8 }));
  set_short( "Hallway - x30y38z8" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y38z8.c",
  "east" : DIR+"/rooms/x31y38z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
