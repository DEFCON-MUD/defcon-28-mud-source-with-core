inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 50, 7 }));
  set_short( "Passage - x33y50z7" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y50z7.c",
  "south" : DIR+"/rooms/x33y49z7.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the radioactive waste in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
