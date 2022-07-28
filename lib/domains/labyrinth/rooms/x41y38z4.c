inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 38, 4 }));
  set_short( "Hallway - x41y38z4" );
set_objects( DIR+"/npc/koretech.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y39z4.c",
  "south" : DIR+"/rooms/x41y37z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the muck in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
