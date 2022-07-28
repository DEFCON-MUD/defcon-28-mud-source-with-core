inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 26, 8 }));
  set_short( "Hallway - x29y26z8" );
set_objects( DIR+"/npc/deformedweevil.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y26z8.c",
  "south" : DIR+"/rooms/x29y25z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the muck in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
