inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 6, 9 }));
  set_short( "Passage - x17y6z9" );
set_objects( DIR+"/monsters/queenrat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y6z9.c",
  "east" : DIR+"/rooms/x18y6z9.c",
  "north" : DIR+"/rooms/x17y7z9.c",
  "south" : DIR+"/rooms/x17y5z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the glorzo in this joint. The walls and floors are covered with liquid. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, east, north, and west.%^RESET%^");
}
