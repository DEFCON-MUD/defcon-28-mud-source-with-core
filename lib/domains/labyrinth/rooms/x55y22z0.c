inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 22, 0 }));
  set_short( "Corridor - x55y22z0" );
set_objects( DIR+"/npc/python.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y22z0.c",
  "east" : DIR+"/rooms/x56y22z0.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the radioactive waste in this dump. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
