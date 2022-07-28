inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 28, 4 }));
  set_short( "Hallway - x5y28z4" );
set_objects( DIR+"/npc/josef.c");
 set_exits( ([
  "east" : DIR+"/rooms/x6y28z4.c",
  "north" : DIR+"/rooms/x5y29z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crappy sales material in this area. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
