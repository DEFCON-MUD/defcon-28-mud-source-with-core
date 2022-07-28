inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 16, 4 }));
  set_short( "Passage - x43y16z4" );
set_objects( DIR+"/npc/housingofficer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x42y16z4.c",
  "east" : DIR+"/rooms/x44y16z4.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the random junk evilmog thought up in this area. The walls and floors are covered with blood. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
