inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 2, 0 }));
  set_short( "Hallway - x36y2z0" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y2z0.c",
  "east" : DIR+"/rooms/x37y2z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
