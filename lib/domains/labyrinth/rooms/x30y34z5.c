inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 34, 5 }));
  set_short( "Corridor - x30y34z5" );
set_objects( DIR+"/npc/loser.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y34z5.c",
  "east" : DIR+"/rooms/x31y34z5.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the blue glow of the pile of put kevin back stickers in this dump. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
