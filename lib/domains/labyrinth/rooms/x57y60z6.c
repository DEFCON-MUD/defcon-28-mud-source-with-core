inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 60, 6 }));
  set_short( "Hallway - x57y60z6" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y60z6.c",
  "north" : DIR+"/rooms/x57y61z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the crud in this sty. The walls and floors are covered with mud. It smells like a hacker convention in here.%^RESET%^\n\nYou may be able to find escape to the west, and north.%^RESET%^");
}
