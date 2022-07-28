inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 11, 2 }));
  set_short( "Corridor - x15y11z2" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y12z2.c",
  "south" : DIR+"/rooms/x15y10z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this hellhole. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
