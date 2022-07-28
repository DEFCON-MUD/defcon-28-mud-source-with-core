inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 32, 8 }));
  set_short( "Corridor - x29y32z8" );
set_objects( DIR+"/npc/slug.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y32z8.c",
  "south" : DIR+"/rooms/x29y31z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
