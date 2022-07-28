inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 4, 2 }));
  set_short( "Hallway - x24y4z2" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y4z2.c",
  "east" : DIR+"/rooms/x25y4z2.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the green glow of the crappy sales material in this sty. The walls and floors are covered with slime. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
