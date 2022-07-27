inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 54, 4 }));
  set_short( "Hallway - x53y54z4" );
set_objects( DIR+"/monsters/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y54z4.c",
  "east" : DIR+"/rooms/x54y54z4.c",
  "north" : DIR+"/rooms/x53y55z4.c",
  "south" : DIR+"/rooms/x53y53z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this stink-pit. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
