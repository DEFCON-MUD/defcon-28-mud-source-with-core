inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 55, 5 }));
  set_short( "Passage - x61y55z5" );
set_objects( DIR+"/npc/neelo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y56z5.c",
  "south" : DIR+"/rooms/x61y54z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
