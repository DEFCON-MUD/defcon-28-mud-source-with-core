inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 50, 6 }));
  set_short( "Hallway - x34y50z6" );
set_objects( DIR+"/npc/mei.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y50z6.c",
  "east" : DIR+"/rooms/x35y50z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
