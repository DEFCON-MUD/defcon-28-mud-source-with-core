inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 40, 48, 7 }));
  set_short( "Passage - x40y48z7" );
set_objects( DIR+"/npc/clara.c");
 set_exits( ([
  "west" : DIR+"/rooms/x39y48z7.c",
  "east" : DIR+"/rooms/x41y48z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with mud. It smells like a combination of diesel fuel, dirt and decay.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
