inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 9, 1 }));
  set_short( "Hallway - x61y9z1" );
set_objects( DIR+"/npc/salesdroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y10z1.c",
  "south" : DIR+"/rooms/x61y8z1.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
