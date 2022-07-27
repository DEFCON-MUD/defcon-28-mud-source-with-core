inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 56, 5 }));
  set_short( "Hallway - x27y56z5" );
set_objects( DIR+"/monsters/vlarapp.c");
 set_exits( ([
  "west" : DIR+"/rooms/x26y56z5.c",
  "north" : DIR+"/rooms/x27y57z5.c",
  "south" : DIR+"/rooms/x27y55z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
