inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 28, 5 }));
  set_short( "Corridor - x8y28z5" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y28z5.c",
  "east" : DIR+"/rooms/x9y28z5.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the radioactive waste in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
