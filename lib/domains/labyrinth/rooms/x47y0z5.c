inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 0, 5 }));
  set_short( "Hallway - x47y0z5" );
set_objects( DIR+"/npc/captain.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y0z5.c",
  "east" : DIR+"/rooms/x48y0z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
