inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 42, 8 }));
  set_short( "Corridor - x14y42z8" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y42z8.c",
  "east" : DIR+"/rooms/x15y42z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the orange glow of the crap in this sty. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
