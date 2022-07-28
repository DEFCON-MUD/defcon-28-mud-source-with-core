inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 2, 0 }));
  set_short( "Passage - x5y2z0" );
set_objects( DIR+"/npc/hans.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y2z0.c",
  "east" : DIR+"/rooms/x6y2z0.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the muck in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
