inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 24, 6 }));
  set_short( "Corridor - x52y24z6" );
set_objects( DIR+"/npc/steve.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y24z6.c",
  "east" : DIR+"/rooms/x53y24z6.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the blue glow of the crappy sales material in this dump. The walls and floors are covered with dust. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
