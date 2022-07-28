inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 32, 2 }));
  set_short( "Corridor - x41y32z2" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y32z2.c",
  "north" : DIR+"/rooms/x41y33z2.c",
  "south" : DIR+"/rooms/x41y31z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the muck in this joint. The walls and floors are covered with oil. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
