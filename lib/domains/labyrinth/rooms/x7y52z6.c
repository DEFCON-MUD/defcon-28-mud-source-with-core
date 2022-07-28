inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 52, 6 }));
  set_short( "Hallway - x7y52z6" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y52z6.c",
  "south" : DIR+"/rooms/x7y51z6.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the sludge in this area. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
