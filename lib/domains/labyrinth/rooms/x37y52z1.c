inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 52, 1 }));
  set_short( "Hallway - x37y52z1" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y53z1.c",
  "south" : DIR+"/rooms/x37y51z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the sludge in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
