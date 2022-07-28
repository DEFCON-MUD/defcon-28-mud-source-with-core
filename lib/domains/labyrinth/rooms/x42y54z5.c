inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 54, 5 }));
  set_short( "Hallway - x42y54z5" );
set_objects( DIR+"/npc/jacob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y54z5.c",
  "east" : DIR+"/rooms/x43y54z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crap in this sty. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
