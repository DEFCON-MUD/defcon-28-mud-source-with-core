inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 42, 5 }));
  set_short( "Passage - x16y42z5" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y42z5.c",
  "east" : DIR+"/rooms/x17y42z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the sludge in this sty. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
