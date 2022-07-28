inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 36, 5 }));
  set_short( "Corridor - x11y36z5" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y36z5.c",
  "north" : DIR+"/rooms/x11y37z5.c",
  "south" : DIR+"/rooms/x11y35z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the gunk in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nTunnels can be found to the east, north, and west.%^RESET%^");
}
