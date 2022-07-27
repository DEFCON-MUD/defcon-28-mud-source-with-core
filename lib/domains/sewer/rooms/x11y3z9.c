inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 3, 9 }));
  set_short( "Hallway - x11y3z9" );
set_objects( DIR+"/monsters/eastformatter.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y4z9.c",
  "south" : DIR+"/rooms/x11y2z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the iridium glow of the radioactive waste in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
