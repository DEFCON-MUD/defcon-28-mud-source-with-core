inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 33, 10, 0 }));
  set_short( "Corridor - x33y10z0" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "east" : DIR+"/rooms/x34y10z0.c",
  "south" : DIR+"/rooms/x33y9z0.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the iridium glow of the crappy sales material in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
