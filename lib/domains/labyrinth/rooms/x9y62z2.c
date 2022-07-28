inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 62, 2 }));
  set_short( "Passage - x9y62z2" );
set_objects( DIR+"/npc/poledancer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y62z2.c",
  "east" : DIR+"/rooms/x10y62z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the iridium glow of the crappy sales material in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
