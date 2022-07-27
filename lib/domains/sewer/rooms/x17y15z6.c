inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 15, 6 }));
  set_short( "Hallway - x17y15z6" );
set_objects( DIR+"/monsters/ursula.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y16z6.c",
  "south" : DIR+"/rooms/x17y14z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
