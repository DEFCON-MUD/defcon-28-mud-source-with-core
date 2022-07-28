inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 47, 62, 8 }));
  set_short( "Hallway - x47y62z8" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x46y62z8.c",
  "east" : DIR+"/rooms/x48y62z8.c",
  "south" : DIR+"/rooms/x47y61z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
