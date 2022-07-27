inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 56, 2 }));
  set_short( "Passage - x55y56z2" );
set_objects( DIR+"/monsters/pottles.c");
 set_exits( ([
  "east" : DIR+"/rooms/x56y56z2.c",
  "south" : DIR+"/rooms/x55y55z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, and west.%^RESET%^");
}
