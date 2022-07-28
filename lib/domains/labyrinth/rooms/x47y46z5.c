inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 46, 5 }));
  set_short( "Hallway - x47y46z5" );
set_objects( DIR+"/npc/monzema.c");
 set_exits( ([
  "north" : DIR+"/rooms/x47y47z5.c",
  "south" : DIR+"/rooms/x47y45z5.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
