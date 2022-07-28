inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 50, 3 }));
  set_short( "Passage - x55y50z3" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y50z3.c",
  "north" : DIR+"/rooms/x55y51z3.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
