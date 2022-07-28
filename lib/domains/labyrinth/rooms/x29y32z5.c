inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 32, 5 }));
  set_short( "Hallway - x29y32z5" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y32z5.c",
  "south" : DIR+"/rooms/x29y31z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
