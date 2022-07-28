inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 18, 4 }));
  set_short( "Corridor - x5y18z4" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y18z4.c",
  "south" : DIR+"/rooms/x5y17z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crap in this hellhole. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
