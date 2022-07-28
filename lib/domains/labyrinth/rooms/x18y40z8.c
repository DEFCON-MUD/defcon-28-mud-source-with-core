inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 40, 8 }));
  set_short( "Corridor - x18y40z8" );
set_objects( DIR+"/npc/monkey.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y40z8.c",
  "east" : DIR+"/rooms/x19y40z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
