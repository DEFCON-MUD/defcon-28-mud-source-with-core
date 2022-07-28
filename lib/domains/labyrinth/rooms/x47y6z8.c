inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 6, 8 }));
  set_short( "Hallway - x47y6z8" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y6z8.c",
  "east" : DIR+"/rooms/x48y6z8.c",
  "north" : DIR+"/rooms/x47y7z8.c",
  "south" : DIR+"/rooms/x47y5z8.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the west, east, north, and west.%^RESET%^");
}
