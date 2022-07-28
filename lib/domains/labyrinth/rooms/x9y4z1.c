inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 4, 1 }));
  set_short( "Hallway - x9y4z1" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y4z1.c",
  "south" : DIR+"/rooms/x9y3z1.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
