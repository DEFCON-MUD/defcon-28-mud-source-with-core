inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 5, 2 }));
  set_short( "Hallway - x41y5z2" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y6z2.c",
  "south" : DIR+"/rooms/x41y4z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this stink-pit. The walls and floors are covered with liquid. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
