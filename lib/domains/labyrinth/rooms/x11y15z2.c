inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 15, 2 }));
  set_short( "Corridor - x11y15z2" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "north" : DIR+"/rooms/x11y16z2.c",
  "south" : DIR+"/rooms/x11y14z2.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
