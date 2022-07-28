inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 62, 7 }));
  set_short( "Passage - x56y62z7" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y62z7.c",
  "east" : DIR+"/rooms/x57y62z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
