inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 17, 60, 4 }));
  set_short( "Hallway - x17y60z4" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "west" : DIR+"/rooms/x16y60z4.c",
  "east" : DIR+"/rooms/x18y60z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
