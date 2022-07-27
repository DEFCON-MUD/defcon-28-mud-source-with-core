inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 54, 4 }));
  set_short( "Hallway - x55y54z4" );
set_objects( DIR+"/monsters/r1alan.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y54z4.c",
  "east" : DIR+"/rooms/x56y54z4.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the purple glow of the radioactive waste in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
