inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 16, 4 }));
  set_short( "Passage - x59y16z4" );
set_objects( DIR+"/npc/alexis.c");
 set_exits( ([
  "west" : DIR+"/rooms/x58y16z4.c",
  "east" : DIR+"/rooms/x60y16z4.c",
  "south" : DIR+"/rooms/x59y15z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the red glow of the crud in this dump. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, east, and west.%^RESET%^");
}
