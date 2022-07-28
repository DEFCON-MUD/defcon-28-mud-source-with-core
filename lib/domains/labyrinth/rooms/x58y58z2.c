inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 58, 2 }));
  set_short( "Hallway - x58y58z2" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y58z2.c",
  "east" : DIR+"/rooms/x59y58z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the green glow of the crud in this stink-pit. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
