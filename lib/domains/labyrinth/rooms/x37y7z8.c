inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 7, 8 }));
  set_short( "Corridor - x37y7z8" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y8z8.c",
  "south" : DIR+"/rooms/x37y6z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
