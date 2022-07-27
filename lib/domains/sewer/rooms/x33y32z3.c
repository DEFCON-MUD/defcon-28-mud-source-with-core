inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 32, 3 }));
  set_short( "Hallway - x33y32z3" );
set_objects( DIR+"/monsters/craig.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y33z3.c",
  "south" : DIR+"/rooms/x33y31z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the blue glow of the crud in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
