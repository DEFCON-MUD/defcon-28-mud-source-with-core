inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 12, 12, 6 }));
  set_short( "Hallway - x12y12z6" );
set_objects( DIR+"/npc/edwardio.c");
 set_exits( ([
  "west" : DIR+"/rooms/x11y12z6.c",
  "east" : DIR+"/rooms/x13y12z6.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the sludge in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
