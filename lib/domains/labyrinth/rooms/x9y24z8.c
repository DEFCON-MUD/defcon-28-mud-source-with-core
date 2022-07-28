inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 24, 8 }));
  set_short( "Corridor - x9y24z8" );
set_objects( DIR+"/npc/carson.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y24z8.c",
  "east" : DIR+"/rooms/x10y24z8.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the purple glow of the crappy sales material in this dump. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
