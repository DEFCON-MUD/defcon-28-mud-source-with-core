inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 52, 2 }));
  set_short( "Passage - x53y52z2" );
set_objects( DIR+"/monsters/r1serveman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y52z2.c",
  "east" : DIR+"/rooms/x54y52z2.c",
  "south" : DIR+"/rooms/x53y51z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the muck in this sty. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, east, and west.%^RESET%^");
}
