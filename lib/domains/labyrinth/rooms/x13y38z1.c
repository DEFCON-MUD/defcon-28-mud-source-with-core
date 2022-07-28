inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 38, 1 }));
  set_short( "Hallway - x13y38z1" );
set_objects( DIR+"/npc/varysstark.c");
 set_exits( ([
  "east" : DIR+"/rooms/x14y38z1.c",
  "north" : DIR+"/rooms/x13y39z1.c",
  "south" : DIR+"/rooms/x13y37z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the crud in this hellhole. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
