inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 52, 1 }));
  set_short( "Hallway - x31y52z1" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y52z1.c",
  "south" : DIR+"/rooms/x31y51z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the sludge in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
