inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 24, 5 }));
  set_short( "Hallway - x14y24z5" );
set_objects( DIR+"/npc/goldfish.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y24z5.c",
  "east" : DIR+"/rooms/x15y24z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the blue glow of the random junk evilmog thought up in this hellhole. The walls and floors are covered with oil. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
