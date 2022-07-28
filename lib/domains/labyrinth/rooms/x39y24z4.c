inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 24, 4 }));
  set_short( "Corridor - x39y24z4" );
set_objects( DIR+"/npc/heptosquid.c");
 set_exits( ([
  "west" : DIR+"/rooms/x38y24z4.c",
  "south" : DIR+"/rooms/x39y23z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the crap in this hellhole. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
