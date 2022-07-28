inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 6, 1 }));
  set_short( "Corridor - x57y6z1" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "north" : DIR+"/rooms/x57y7z1.c",
  "south" : DIR+"/rooms/x57y5z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of put kevin back stickers in this area. The walls and floors are covered with liquid. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
