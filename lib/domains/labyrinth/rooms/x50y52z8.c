inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 50, 52, 8 }));
  set_short( "Corridor - x50y52z8" );
set_objects( DIR+"/npc/mila.c");
 set_exits( ([
  "west" : DIR+"/rooms/x49y52z8.c",
  "east" : DIR+"/rooms/x51y52z8.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the blue glow of the crap in this dump. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
