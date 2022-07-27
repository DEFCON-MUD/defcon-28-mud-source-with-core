inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 52, 6 }));
  set_short( "Passage - x41y52z6" );
set_objects( DIR+"/monsters/ken.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y52z6.c",
  "north" : DIR+"/rooms/x41y53z6.c",
  "south" : DIR+"/rooms/x41y51z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this stink-pit. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the east, north, and west.%^RESET%^");
}
