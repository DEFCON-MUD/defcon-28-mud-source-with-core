inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 43, 2 }));
  set_short( "Passage - x31y43z2" );
set_objects( DIR+"/npc/autobot.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y44z2.c",
  "south" : DIR+"/rooms/x31y42z2.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
