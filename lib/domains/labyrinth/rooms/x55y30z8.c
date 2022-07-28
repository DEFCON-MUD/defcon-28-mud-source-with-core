inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 30, 8 }));
  set_short( "Corridor - x55y30z8" );
set_objects( DIR+"/npc/sparrow.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y30z8.c",
  "south" : DIR+"/rooms/x55y29z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the sludge in this stink-pit. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
