inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 36, 7 }));
  set_short( "Corridor - x25y36z7" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "east" : DIR+"/rooms/x26y36z7.c",
  "south" : DIR+"/rooms/x25y35z7.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
