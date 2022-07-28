inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 40, 6 }));
  set_short( "Hallway - x7y40z6" );
set_objects( DIR+"/npc/greenslime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y40z6.c",
  "east" : DIR+"/rooms/x8y40z6.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the blue glow of the sludge in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
