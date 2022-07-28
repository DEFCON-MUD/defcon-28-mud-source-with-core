inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 62, 1 }));
  set_short( "Corridor - x13y62z1" );
set_objects( DIR+"/npc/prisonguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y62z1.c",
  "east" : DIR+"/rooms/x14y62z1.c",
  "south" : DIR+"/rooms/x13y61z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
