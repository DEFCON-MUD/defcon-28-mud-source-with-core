inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 36, 8 }));
  set_short( "Hallway - x29y36z8" );
set_objects( DIR+"/monsters/baboon.c");
 set_exits( ([
  "east" : DIR+"/rooms/x30y36z8.c",
  "south" : DIR+"/rooms/x29y35z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
