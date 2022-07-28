inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 56, 4 }));
  set_short( "Corridor - x47y56z4" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "east" : DIR+"/rooms/x48y56z4.c",
  "north" : DIR+"/rooms/x47y57z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
