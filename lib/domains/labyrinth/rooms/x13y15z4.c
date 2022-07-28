inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 15, 4 }));
  set_short( "Corridor - x13y15z4" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y16z4.c",
  "south" : DIR+"/rooms/x13y14z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the crud in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
