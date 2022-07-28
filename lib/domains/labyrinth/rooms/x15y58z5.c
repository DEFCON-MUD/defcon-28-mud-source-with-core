inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 58, 5 }));
  set_short( "Hallway - x15y58z5" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x14y58z5.c",
  "east" : DIR+"/rooms/x16y58z5.c",
  "south" : DIR+"/rooms/x15y57z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the green glow of the gunk in this joint. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
