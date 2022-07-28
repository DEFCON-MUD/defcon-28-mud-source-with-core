inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 12, 8 }));
  set_short( "Corridor - x18y12z8" );
set_objects( DIR+"/npc/freddy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y12z8.c",
  "east" : DIR+"/rooms/x19y12z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the orange glow of the muck in this dump. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
