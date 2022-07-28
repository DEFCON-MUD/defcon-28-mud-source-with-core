inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 55, 9 }));
  set_short( "Corridor - x61y55z9" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y56z9.c",
  "south" : DIR+"/rooms/x61y54z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with slime. The air is rather stagnant.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
