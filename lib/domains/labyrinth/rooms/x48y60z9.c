inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 60, 9 }));
  set_short( "Hallway - x48y60z9" );
set_objects( DIR+"/npc/culprit.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y60z9.c",
  "east" : DIR+"/rooms/x49y60z9.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
