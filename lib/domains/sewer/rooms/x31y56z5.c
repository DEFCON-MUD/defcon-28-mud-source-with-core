inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 56, 5 }));
  set_short( "Hallway - x31y56z5" );
set_objects( DIR+"/monsters/stoner.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y56z5.c",
  "north" : DIR+"/rooms/x31y57z5.c",
  "south" : DIR+"/rooms/x31y55z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
