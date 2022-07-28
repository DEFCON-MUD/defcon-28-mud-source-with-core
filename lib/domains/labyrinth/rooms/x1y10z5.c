inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 10, 5 }));
  set_short( "Corridor - x1y10z5" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y10z5.c",
  "south" : DIR+"/rooms/x1y9z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
