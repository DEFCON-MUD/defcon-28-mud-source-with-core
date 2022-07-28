inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 6, 6 }));
  set_short( "Corridor - x15y6z6" );
set_objects( DIR+"/npc/child.c");
 set_exits( ([
  "north" : DIR+"/rooms/x15y7z6.c",
  "south" : DIR+"/rooms/x15y5z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the pile of put kevin back stickers in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
