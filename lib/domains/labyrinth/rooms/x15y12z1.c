inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 12, 1 }));
  set_short( "Passage - x15y12z1" );
set_objects( DIR+"/npc/bouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y12z1.c",
  "east" : DIR+"/rooms/x16y12z1.c",
  "south" : DIR+"/rooms/x15y11z1.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
