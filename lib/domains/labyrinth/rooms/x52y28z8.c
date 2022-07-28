inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 28, 8 }));
  set_short( "Corridor - x52y28z8" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y28z8.c",
  "east" : DIR+"/rooms/x53y28z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
