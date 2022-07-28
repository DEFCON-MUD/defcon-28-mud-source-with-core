inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 64, 8 }));
  set_short( "Corridor - x14y64z8" );
set_objects( DIR+"/npc/jenny.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y64z8.c",
  "east" : DIR+"/rooms/x15y64z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
