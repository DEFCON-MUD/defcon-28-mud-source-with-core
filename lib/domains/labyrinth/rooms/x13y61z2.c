inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 61, 2 }));
  set_short( "Passage - x13y61z2" );
set_objects( DIR+"/npc/arnie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x13y62z2.c",
  "south" : DIR+"/rooms/x13y60z2.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
