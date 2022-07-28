inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 38, 30, 4 }));
  set_short( "Hallway - x38y30z4" );
set_objects( DIR+"/npc/vampire.c");
 set_exits( ([
  "west" : DIR+"/rooms/x37y30z4.c",
  "east" : DIR+"/rooms/x39y30z4.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the blue glow of the glorzo in this stink-pit. The walls and floors are covered with oil. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
