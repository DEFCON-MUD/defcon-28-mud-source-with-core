inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 43, 3 }));
  set_short( "Hallway - x33y43z3" );
set_objects( DIR+"/monsters/housingoffer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x33y44z3.c",
  "south" : DIR+"/rooms/x33y42z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
