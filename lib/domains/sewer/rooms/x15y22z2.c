inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 22, 2 }));
  set_short( "Hallway - x15y22z2" );
set_objects( DIR+"/monsters/roger.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y22z2.c",
  "north" : DIR+"/rooms/x15y23z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with dust. The air is rather stagnant.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
