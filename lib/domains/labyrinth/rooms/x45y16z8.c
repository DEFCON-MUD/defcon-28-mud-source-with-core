inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 45, 16, 8 }));
  set_short( "Hallway - x45y16z8" );
set_objects( DIR+"/npc/wendall.c");
 set_exits( ([
  "north" : DIR+"/rooms/x45y17z8.c",
  "south" : DIR+"/rooms/x45y15z8.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the sludge in this stink-pit. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
