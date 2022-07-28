inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 6, 0 }));
  set_short( "Hallway - x35y6z0" );
set_objects( DIR+"/npc/iguana.c");
 set_exits( ([
  "north" : DIR+"/rooms/x35y7z0.c",
  "south" : DIR+"/rooms/x35y5z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
