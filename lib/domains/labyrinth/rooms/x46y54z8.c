inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 54, 8 }));
  set_short( "Hallway - x46y54z8" );
set_objects( DIR+"/npc/radgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y54z8.c",
  "east" : DIR+"/rooms/x47y54z8.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crap in this area. The walls and floors are covered with blood. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
