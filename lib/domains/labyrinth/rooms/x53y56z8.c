inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 56, 8 }));
  set_short( "Passage - x53y56z8" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y56z8.c",
  "east" : DIR+"/rooms/x54y56z8.c",
  "north" : DIR+"/rooms/x53y57z8.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this hellhole. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, east, and north.%^RESET%^");
}
