inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 61, 9 }));
  set_short( "Corridor - x43y61z9" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "north" : DIR+"/rooms/x43y62z9.c",
  "south" : DIR+"/rooms/x43y60z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the glorzo in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
