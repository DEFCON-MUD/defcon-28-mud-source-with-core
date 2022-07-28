inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 42, 7 }));
  set_short( "Hallway - x24y42z7" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y42z7.c",
  "east" : DIR+"/rooms/x25y42z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crap in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
