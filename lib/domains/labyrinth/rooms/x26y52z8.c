inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 26, 52, 8 }));
  set_short( "Hallway - x26y52z8" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x25y52z8.c",
  "east" : DIR+"/rooms/x27y52z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the gunk in this hellhole. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
