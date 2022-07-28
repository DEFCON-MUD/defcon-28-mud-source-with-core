inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 24, 6 }));
  set_short( "Hallway - x6y24z6" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y24z6.c",
  "east" : DIR+"/rooms/x7y24z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the blue glow of the sludge in this dump. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
