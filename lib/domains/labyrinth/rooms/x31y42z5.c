inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 42, 5 }));
  set_short( "Passage - x31y42z5" );
set_objects( DIR+"/npc/fieldmouse.c");
 set_exits( ([
  "west" : DIR+"/rooms/x30y42z5.c",
  "east" : DIR+"/rooms/x32y42z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the glorzo in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
