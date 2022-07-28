inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 56, 1 }));
  set_short( "Hallway - x38y56z1" );
set_objects( DIR+"/npc/bouncer2.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y56z1.c",
  "east" : DIR+"/rooms/x39y56z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the iridium glow of the pile of put kevin back stickers in this area. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
