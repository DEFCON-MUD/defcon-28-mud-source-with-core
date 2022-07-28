inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 34, 7 }));
  set_short( "Passage - x18y34z7" );
set_objects( DIR+"/npc/billy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y34z7.c",
  "east" : DIR+"/rooms/x19y34z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crap in this area. The walls and floors are covered with dust. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
