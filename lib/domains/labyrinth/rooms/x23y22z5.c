inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 22, 5 }));
  set_short( "Corridor - x23y22z5" );
set_objects( DIR+"/npc/tech.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y22z5.c",
  "north" : DIR+"/rooms/x23y23z5.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the sludge in this sty. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
