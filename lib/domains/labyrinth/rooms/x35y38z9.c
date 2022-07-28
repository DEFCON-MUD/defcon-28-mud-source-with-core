inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 38, 9 }));
  set_short( "Passage - x35y38z9" );
set_objects( DIR+"/npc/clubbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y38z9.c",
  "east" : DIR+"/rooms/x36y38z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
