inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 42, 6 }));
  set_short( "Hallway - x23y42z6" );
set_objects( DIR+"/monsters/lulams.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y42z6.c",
  "north" : DIR+"/rooms/x23y43z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crappy sales material in this stink-pit. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
