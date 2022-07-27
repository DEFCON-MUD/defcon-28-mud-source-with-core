inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 42, 2 }));
  set_short( "Corridor - x51y42z2" );
set_objects( DIR+"/monsters/culprit.c");
 set_exits( ([
  "north" : DIR+"/rooms/x51y43z2.c",
  "south" : DIR+"/rooms/x51y41z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
