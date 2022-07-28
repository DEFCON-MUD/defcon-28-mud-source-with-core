inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 56, 7 }));
  set_short( "Passage - x35y56z7" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "east" : DIR+"/rooms/x36y56z7.c",
  "south" : DIR+"/rooms/x35y55z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the radioactive waste in this hellhole. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
