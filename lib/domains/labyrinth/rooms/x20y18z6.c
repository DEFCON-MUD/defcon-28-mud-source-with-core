inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 20, 18, 6 }));
  set_short( "Hallway - x20y18z6" );
set_objects( DIR+"/npc/auditor.c");
 set_exits( ([
  "west" : DIR+"/rooms/x19y18z6.c",
  "east" : DIR+"/rooms/x21y18z6.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the crap in this joint. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
