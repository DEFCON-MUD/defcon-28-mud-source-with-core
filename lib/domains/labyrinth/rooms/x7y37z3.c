inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 37, 3 }));
  set_short( "Corridor - x7y37z3" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x7y38z3.c",
  "south" : DIR+"/rooms/x7y36z3.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crappy sales material in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
