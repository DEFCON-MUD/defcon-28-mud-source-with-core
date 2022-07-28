inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 32, 0 }));
  set_short( "Corridor - x27y32z0" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y32z0.c",
  "north" : DIR+"/rooms/x27y33z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
