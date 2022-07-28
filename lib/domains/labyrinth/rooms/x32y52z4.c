inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 32, 52, 4 }));
  set_short( "Corridor - x32y52z4" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x31y52z4.c",
  "east" : DIR+"/rooms/x33y52z4.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
