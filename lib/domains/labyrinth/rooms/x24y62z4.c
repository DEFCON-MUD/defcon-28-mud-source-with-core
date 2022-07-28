inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 62, 4 }));
  set_short( "Corridor - x24y62z4" );
set_objects( DIR+"/npc/johnson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y62z4.c",
  "east" : DIR+"/rooms/x25y62z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with blood. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
