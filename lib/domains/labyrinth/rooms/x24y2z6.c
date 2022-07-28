inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 24, 2, 6 }));
  set_short( "Hallway - x24y2z6" );
set_objects( DIR+"/npc/vonnewman.c");
 set_exits( ([
  "west" : DIR+"/rooms/x23y2z6.c",
  "east" : DIR+"/rooms/x25y2z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the purple glow of the muck in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
