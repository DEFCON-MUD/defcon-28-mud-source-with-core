inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 12, 5 }));
  set_short( "Passage - x18y12z5" );
set_objects( DIR+"/npc/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y12z5.c",
  "east" : DIR+"/rooms/x19y12z5.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with mud. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
