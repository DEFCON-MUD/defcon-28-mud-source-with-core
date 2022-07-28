inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 30, 2 }));
  set_short( "Passage - x4y30z2" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y30z2.c",
  "east" : DIR+"/rooms/x5y30z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the crud in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
