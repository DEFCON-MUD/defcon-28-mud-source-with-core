inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 50, 4 }));
  set_short( "Corridor - x27y50z4" );
set_objects( DIR+"/npc/r1radiologist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y50z4.c",
  "east" : DIR+"/rooms/x28y50z4.c",
  "north" : DIR+"/rooms/x27y51z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the crap in this area. The walls and floors are covered with oil. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nYou may be able to find escape to the west, east, and north.%^RESET%^");
}
