inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 37, 5 }));
  set_short( "Passage - x17y37z5" );
set_objects( DIR+"/npc/analyst.c");
 set_exits( ([
  "north" : DIR+"/rooms/x17y38z5.c",
  "south" : DIR+"/rooms/x17y36z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
