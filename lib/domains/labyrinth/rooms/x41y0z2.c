inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 0, 2 }));
  set_short( "Corridor - x41y0z2" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x40y0z2.c",
  "east" : DIR+"/rooms/x42y0z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
