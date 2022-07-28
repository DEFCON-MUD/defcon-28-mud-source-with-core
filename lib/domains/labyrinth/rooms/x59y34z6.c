inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 34, 6 }));
  set_short( "Hallway - x59y34z6" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "east" : DIR+"/rooms/x60y34z6.c",
  "south" : DIR+"/rooms/x59y33z6.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
