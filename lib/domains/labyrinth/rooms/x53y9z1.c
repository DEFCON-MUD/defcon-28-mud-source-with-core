inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 9, 1 }));
  set_short( "Corridor - x53y9z1" );
set_objects( DIR+"/npc/politician.c");
 set_exits( ([
  "north" : DIR+"/rooms/x53y10z1.c",
  "south" : DIR+"/rooms/x53y8z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the blue glow of the sludge in this stink-pit. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
