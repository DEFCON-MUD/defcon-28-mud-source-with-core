inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 24, 1 }));
  set_short( "Passage - x16y24z1" );
set_objects( DIR+"/npc/rat.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y24z1.c",
  "east" : DIR+"/rooms/x17y24z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
