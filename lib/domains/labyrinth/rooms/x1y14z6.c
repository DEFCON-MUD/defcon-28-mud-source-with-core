inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 1, 14, 6 }));
  set_short( "Corridor - x1y14z6" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "east" : DIR+"/rooms/x2y14z6.c",
  "south" : DIR+"/rooms/x1y13z6.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
