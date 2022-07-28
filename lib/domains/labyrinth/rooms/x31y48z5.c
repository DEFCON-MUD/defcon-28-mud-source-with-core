inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 48, 5 }));
  set_short( "Hallway - x31y48z5" );
set_objects( DIR+"/npc/maxim.c");
 set_exits( ([
  "east" : DIR+"/rooms/x32y48z5.c",
  "south" : DIR+"/rooms/x31y47z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the glorzo in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
