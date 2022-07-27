inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 32, 7 }));
  set_short( "Passage - x53y32z7" );
set_objects( DIR+"/monsters/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y32z7.c",
  "east" : DIR+"/rooms/x54y32z7.c",
  "north" : DIR+"/rooms/x53y33z7.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
