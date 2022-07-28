inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 30, 2 }));
  set_short( "Corridor - x43y30z2" );
set_objects( DIR+"/npc/r1serviceman.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y30z2.c",
  "south" : DIR+"/rooms/x43y29z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the sludge in this hellhole. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
