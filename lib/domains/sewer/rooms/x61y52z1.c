inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 52, 1 }));
  set_short( "Passage - x61y52z1" );
set_objects( DIR+"/monsters/coder.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y52z1.c",
  "south" : DIR+"/rooms/x61y51z1.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with oil. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and west.%^RESET%^");
}
