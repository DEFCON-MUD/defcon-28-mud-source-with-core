inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 64, 3 }));
  set_short( "Hallway - x52y64z3" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y64z3.c",
  "east" : DIR+"/rooms/x53y64z3.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crud in this area. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
