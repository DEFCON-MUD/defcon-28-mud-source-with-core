inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 30, 4 }));
  set_short( "Hallway - x57y30z4" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x56y30z4.c",
  "east" : DIR+"/rooms/x58y30z4.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the muck in this area. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
