inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 54, 1 }));
  set_short( "Corridor - x27y54z1" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x28y54z1.c",
  "south" : DIR+"/rooms/x27y53z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
