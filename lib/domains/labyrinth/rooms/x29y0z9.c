inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 29, 0, 9 }));
  set_short( "Hallway - x29y0z9" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x28y0z9.c",
  "east" : DIR+"/rooms/x30y0z9.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the red glow of the muck in this joint. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
