inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 34, 7 }));
  set_short( "Passage - x21y34z7" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x20y34z7.c",
  "east" : DIR+"/rooms/x22y34z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the muck in this hellhole. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
