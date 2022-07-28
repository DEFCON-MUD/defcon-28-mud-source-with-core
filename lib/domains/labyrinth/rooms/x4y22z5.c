inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 4, 22, 5 }));
  set_short( "Passage - x4y22z5" );
set_objects( DIR+"/npc/watersnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x3y22z5.c",
  "east" : DIR+"/rooms/x5y22z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the blue glow of the sludge in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
