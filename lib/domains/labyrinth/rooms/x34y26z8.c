inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 26, 8 }));
  set_short( "Hallway - x34y26z8" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y26z8.c",
  "east" : DIR+"/rooms/x35y26z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
