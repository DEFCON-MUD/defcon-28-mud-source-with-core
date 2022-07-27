inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 42, 0 }));
  set_short( "Corridor - x23y42z0" );
set_objects( DIR+"/monsters/antoinnete.c");
 set_exits( ([
  "north" : DIR+"/rooms/x23y43z0.c",
  "south" : DIR+"/rooms/x23y41z0.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
