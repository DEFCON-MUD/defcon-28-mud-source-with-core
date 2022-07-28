inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 6, 24, 5 }));
  set_short( "Corridor - x6y24z5" );
set_objects( DIR+"/npc/magnus.c");
 set_exits( ([
  "west" : DIR+"/rooms/x5y24z5.c",
  "east" : DIR+"/rooms/x7y24z5.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the crap in this stink-pit. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
