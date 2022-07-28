inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 33, 3 }));
  set_short( "Hallway - x43y33z3" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y34z3.c",
  "south" : DIR+"/rooms/x43y32z3.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
