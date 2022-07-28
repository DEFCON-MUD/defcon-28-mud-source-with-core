inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 6, 8 }));
  set_short( "Passage - x51y6z8" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y6z8.c",
  "south" : DIR+"/rooms/x51y5z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
