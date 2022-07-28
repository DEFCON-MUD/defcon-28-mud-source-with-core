inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 54, 44, 8 }));
  set_short( "Corridor - x54y44z8" );
set_objects( DIR+"/npc/guard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x53y44z8.c",
  "east" : DIR+"/rooms/x55y44z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with slime. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
