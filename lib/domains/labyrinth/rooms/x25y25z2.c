inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 25, 2 }));
  set_short( "Corridor - x25y25z2" );
set_objects( DIR+"/npc/cagedancer.c");
 set_exits( ([
  "north" : DIR+"/rooms/x25y26z2.c",
  "south" : DIR+"/rooms/x25y24z2.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the pile of put kevin back stickers in this stink-pit. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
