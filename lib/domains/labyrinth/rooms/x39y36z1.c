inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 36, 1 }));
  set_short( "Passage - x39y36z1" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y36z1.c",
  "east" : DIR+"/rooms/x40y36z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the radioactive waste in this hellhole. The walls and floors are covered with liquid. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
