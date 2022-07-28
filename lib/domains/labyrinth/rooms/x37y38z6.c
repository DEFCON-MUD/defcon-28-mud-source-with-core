inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 38, 6 }));
  set_short( "Hallway - x37y38z6" );
set_objects( DIR+"/npc/lulams.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y39z6.c",
  "south" : DIR+"/rooms/x37y37z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the crap in this hellhole. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
