inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 58, 3 }));
  set_short( "Hallway - x57y58z3" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y58z3.c",
  "north" : DIR+"/rooms/x57y59z3.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the crud in this hellhole. The walls and floors are covered with dust. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
