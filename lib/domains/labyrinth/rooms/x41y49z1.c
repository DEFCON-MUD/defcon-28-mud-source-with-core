inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 49, 1 }));
  set_short( "Passage - x41y49z1" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y50z1.c",
  "south" : DIR+"/rooms/x41y48z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this joint. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
