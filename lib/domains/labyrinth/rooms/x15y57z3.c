inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 57, 3 }));
  set_short( "Corridor - x15y57z3" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y58z3.c",
  "south" : DIR+"/rooms/x15y56z3.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with slime. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
