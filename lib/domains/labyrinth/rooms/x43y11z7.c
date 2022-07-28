inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 11, 7 }));
  set_short( "Passage - x43y11z7" );
set_objects( DIR+"/npc/droid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y12z7.c",
  "south" : DIR+"/rooms/x43y10z7.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the radioactive waste in this sty. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
