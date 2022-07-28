inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 0, 8 }));
  set_short( "Hallway - x29y0z8" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y0z8.c",
  "east" : DIR+"/rooms/x30y0z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crap in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
