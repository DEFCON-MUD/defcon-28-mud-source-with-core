inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 55, 3 }));
  set_short( "Passage - x5y55z3" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y56z3.c",
  "south" : DIR+"/rooms/x5y54z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
