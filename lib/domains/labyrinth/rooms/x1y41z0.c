inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 41, 0 }));
  set_short( "Corridor - x1y41z0" );
set_objects( DIR+"/npc/fern.c");
 set_exits( ([
  "north" : DIR+"/rooms/x1y42z0.c",
  "south" : DIR+"/rooms/x1y40z0.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
