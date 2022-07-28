inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 59, 2 }));
  set_short( "Hallway - x61y59z2" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y60z2.c",
  "south" : DIR+"/rooms/x61y58z2.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
