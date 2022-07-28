inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 58, 10, 1 }));
  set_short( "Corridor - x58y10z1" );
set_objects( DIR+"/npc/greensnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x57y10z1.c",
  "east" : DIR+"/rooms/x59y10z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
