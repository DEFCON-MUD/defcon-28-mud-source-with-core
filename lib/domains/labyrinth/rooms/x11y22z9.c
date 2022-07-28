inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 22, 9 }));
  set_short( "Passage - x11y22z9" );
set_objects( DIR+"/npc/autodoc.c");
 set_exits( ([
  "west" : DIR+"/rooms/x10y22z9.c",
  "east" : DIR+"/rooms/x12y22z9.c",
  "south" : DIR+"/rooms/x11y21z9.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
