inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 56, 62, 5 }));
  set_short( "Hallway - x56y62z5" );
set_objects( DIR+"/npc/pottles.c");
 set_exits( ([
  "west" : DIR+"/rooms/x55y62z5.c",
  "east" : DIR+"/rooms/x57y62z5.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the muck in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
