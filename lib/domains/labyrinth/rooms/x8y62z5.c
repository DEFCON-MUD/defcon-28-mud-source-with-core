inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 62, 5 }));
  set_short( "Corridor - x8y62z5" );
set_objects( DIR+"/npc/queenslug.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y62z5.c",
  "east" : DIR+"/rooms/x9y62z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the glorzo in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
