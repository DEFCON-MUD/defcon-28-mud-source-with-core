inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 40, 1 }));
  set_short( "Hallway - x39y40z1" );
set_objects( DIR+"/npc/cyclophant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y40z1.c",
  "east" : DIR+"/rooms/x40y40z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
