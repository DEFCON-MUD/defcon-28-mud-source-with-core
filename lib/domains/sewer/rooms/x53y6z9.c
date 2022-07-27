inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 6, 9 }));
  set_short( "Hallway - x53y6z9" );
set_objects( DIR+"/monsters/greenslime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y6z9.c",
  "north" : DIR+"/rooms/x53y7z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crap in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
