inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 7, 3 }));
  set_short( "Corridor - x61y7z3" );
set_objects( DIR+"/npc/r1engineer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y8z3.c",
  "south" : DIR+"/rooms/x61y6z3.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
