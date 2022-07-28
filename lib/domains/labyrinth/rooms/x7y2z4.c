inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 2, 4 }));
  set_short( "Corridor - x7y2z4" );
set_objects( DIR+"/npc/eastclerk.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y2z4.c",
  "east" : DIR+"/rooms/x8y2z4.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the iridium glow of the crud in this dump. The walls and floors are covered with mud. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nTunnels can be found to the west, and east.%^RESET%^");
}
