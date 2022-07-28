inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 52, 9 }));
  set_short( "Passage - x39y52z9" );
set_objects( DIR+"/npc/eric.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y53z9.c",
  "south" : DIR+"/rooms/x39y51z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the red glow of the crap in this area. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
