inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 44, 0 }));
  set_short( "Corridor - x61y44z0" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y44z0.c",
  "south" : DIR+"/rooms/x61y43z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
